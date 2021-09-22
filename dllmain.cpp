#include "pch.h"
#include <fstream>
#include <sstream>
#include <Shlobj.h>
#include <filesystem>

#define SDK_VERSION "0.1.14"

const uint32_t Addr_Timestamp = 0x1E0;
const uint32_t Value_Timestamp = 1626315361; // 2021/07/15 02:16:01

const uint32_t Addr_ProcessEvent = 0x14CBA50;
const uint32_t Addr_GUObjectArray = 0x44DC350;
const uint32_t Addr_Names = 0x4C6DE10;

const uint32_t Addr_APFNpcManager__HandlesDistanceDespawn = 0xE1C010;
const uint32_t Addr_UPFNpcCameraFadeComponent__FadeUpdate = 0xE0A810;

const uint32_t Addr_BP_PF_NPC_Walk_AIController__InitNPCDistance = 0xE2B980;
const uint32_t Addr_APFNpcManager__InitsDistances = 0xE1C860;

const uint32_t Addr_UAriseGameInstance__IsBootDisplaySkip_Ptr = 0x3D465E8;

// Addresses for UE4Hook.cpp
const uint32_t Addr_StaticConstructObject_Internal = 0x14EA190;
extern const uint32_t Addr_UGameViewportClient__SetupInitialLocalPlayer = 0x2034460; // requires extern for it to be visible outside of dllmain...
extern const uint32_t Addr_FPakPlatformFile__FindFileInPakFiles = 0x27E93C0;
extern const uint32_t Addr_FPakPlatformFile__IsNonPakFilenameAllowed = 0x27F4130;

HMODULE DllHModule;
HMODULE GameHModule;
uintptr_t mBaseAddress;

// How much difference between the FadeOut & the FadeIn variables
const int FadeInDelta = 500;

WCHAR IniPath[4096];
struct
{
  float MinNPCDistance = 50000;
  bool SkipIntroLogos = true;
  bool StopMaxCSMResolutionOverwrite = false;
  bool StopScreenPercentageOverwrite = false;
  bool DisableCutsceneCA = false;
  float OverrideCharaSharpenFilterStrength = -1;
  float OverrideStageSharpenFilterStrength = -1;
  float MinStageEdgeBaseDistance = 0;
  int32_t ForcedLODLevel = -1;
} Options;

bool TryLoadINIOptions(const WCHAR* IniFilePath)
{
  // Read config INI from given folder

  if (!FileExists(IniFilePath))
    return false;

  // Store ini path in case it's ever needed later
  wcscpy_s(IniPath, IniFilePath);

  Options.SkipIntroLogos = INI_GetBool(IniPath, L"Patches", L"SkipIntroLogos", Options.SkipIntroLogos);
  Options.StopMaxCSMResolutionOverwrite = INI_GetBool(IniPath, L"Patches", L"StopMaxCSMResolutionOverwrite", Options.StopMaxCSMResolutionOverwrite);
  Options.StopScreenPercentageOverwrite = INI_GetBool(IniPath, L"Patches", L"StopScreenPercentageOverwrite", Options.StopScreenPercentageOverwrite);
  Options.DisableCutsceneCA = INI_GetBool(IniPath, L"Patches", L"DisableCutsceneCA", Options.DisableCutsceneCA);

  Options.MinNPCDistance = INI_GetFloat(IniPath, L"Graphics", L"MinimumNPCDistance", Options.MinNPCDistance);
  Options.OverrideCharaSharpenFilterStrength = INI_GetFloat(IniPath, L"Graphics", L"OverrideCharaSharpenFilterStrength", Options.OverrideCharaSharpenFilterStrength);
  Options.OverrideStageSharpenFilterStrength = INI_GetFloat(IniPath, L"Graphics", L"OverrideStageSharpenFilterStrength", Options.OverrideStageSharpenFilterStrength);
  Options.MinStageEdgeBaseDistance = INI_GetFloat(IniPath, L"Graphics", L"MinStageEdgeBaseDistance", Options.MinStageEdgeBaseDistance);

  if (FadeInDelta >= Options.MinNPCDistance)
    Options.MinNPCDistance = (FadeInDelta + 1);

  return true;
}

typedef void(*APFNpcManager__InitsDistances_Fn)(APFNpcManager* a1, bool a2);
APFNpcManager__InitsDistances_Fn APFNpcManager__InitsDistances_Orig;
void APFNpcManager__InitsDistances_Hook(APFNpcManager* a1, bool a2)
{
  // Seems to only be called once during scene load, should be perfect place to hook!
  APFNpcManager__InitsDistances_Orig(a1, a2);
  if (Options.MinNPCDistance > a1->SpawnSettings.DespawnDistance)
  {
    a1->SpawnSettings.DespawnDistance = Options.MinNPCDistance;
    a1->SpawnSettings.SpawnDistance = Options.MinNPCDistance - FadeInDelta;
  }
  if (Options.MinNPCDistance > a1->SpawnSettingsHigh.DespawnDistance)
  {
    a1->SpawnSettingsHigh.DespawnDistance = Options.MinNPCDistance;
    a1->SpawnSettingsHigh.SpawnDistance = Options.MinNPCDistance - FadeInDelta;
  }
  if (Options.MinNPCDistance > a1->CameraSettings.CameraFarFadeOutDistance)
  {
    a1->CameraSettings.CameraFarFadeOutDistance = Options.MinNPCDistance;
    a1->CameraSettings.CameraFarFadeInDistance = Options.MinNPCDistance - FadeInDelta;
  }
  if (Options.MinNPCDistance > a1->CameraSettingsHigh.CameraFarFadeOutDistance)
  {
    a1->CameraSettingsHigh.CameraFarFadeOutDistance = Options.MinNPCDistance;
    a1->CameraSettingsHigh.CameraFarFadeInDistance = Options.MinNPCDistance - FadeInDelta;
  }
}

typedef void(*BP_PF_NPC_Walk_AIController__InitNPCDistance_Fn)(void* a1, void* a2, float* a3);
BP_PF_NPC_Walk_AIController__InitNPCDistance_Fn BP_PF_NPC_Walk_AIController__InitNPCDistance_Orig;
void BP_PF_NPC_Walk_AIController__InitNPCDistance_Hook(void* a1, void* a2, float* a3)
{
  if (a3)
    a3[2] = Options.MinNPCDistance;
  BP_PF_NPC_Walk_AIController__InitNPCDistance_Orig(a1, a2, a3);
  // ^ updates a1 + 0x388 with the distance
  // which is then checked at 0x140E2AC96 to see if NPC should be deleted or not
}

bool InitGame()
{
  printf("\nArise-SDK " SDK_VERSION " - https://github.com/emoose/Arise-SDK\n");

  GameHModule = GetModuleHandleA("Tales of Arise.exe");

  if (!GameHModule)
  {
    MessageBoxA(0, "Failed to get module handle for 'Tales of Arise.exe', aborting Arise-SDK load...", "Arise-SDK", 0);
    return false;
  }
  mBaseAddress = reinterpret_cast<uintptr_t>(GameHModule);

  // Check that this is the EXE we were built against...
  uint32_t timestamp = *reinterpret_cast<uint32_t*>(mBaseAddress + Addr_Timestamp);
  if (timestamp != Value_Timestamp)
  {
    MessageBoxA(0, "Unsupported 'Tales of Arise.exe' version, aborting Arise-SDK load...", "Arise-SDK", 0);
    return false;
  }

  // Get folder path of currently running EXE
  GetModuleFileName(GameHModule, IniPath, 4096);
  int len = wcslen(IniPath);
  int lastPathSep = -1;
  for (int i = len - 2; i >= 0; i--)
  {
    if (IniPath[i] == '\\' || IniPath[i] == '/')
    {
      lastPathSep = i;
      break;
    }
  }

  if (lastPathSep >= 0)
  {
    IniPath[lastPathSep + 1] = 0;
    swprintf_s(IniPath, L"%s/Arise-SDK.ini", IniPath);

    if (!TryLoadINIOptions(IniPath))
    {
      // TODO: Failed to find INI inside EXE dir, try searching inside documents folders
    }
  }

  return true;
}

const uint32_t Offset_FSceneView__FinalPostProcessSettings = 0xD60;

const uint32_t Addr_FSceneView__EndFinalPostprocessSettings = 0x217F490;
typedef void*(*FSceneView__EndFinalPostprocessSettings_Fn)(uint8_t* thisptr, void* a2);
FSceneView__EndFinalPostprocessSettings_Fn FSceneView__EndFinalPostprocessSettings_Orig;
void* FSceneView__EndFinalPostprocessSettings_Hook(uint8_t* thisptr, void* a2)
{
  auto ret = FSceneView__EndFinalPostprocessSettings_Orig(thisptr, a2);

  FPostProcessSettings* FinalPostProcessSettings = (FPostProcessSettings*)(thisptr + Offset_FSceneView__FinalPostProcessSettings);
  if (Options.OverrideCharaSharpenFilterStrength != -1)
    FinalPostProcessSettings->CharaSharpenFilterStrengthTO14 = Options.OverrideCharaSharpenFilterStrength;
  if (Options.OverrideStageSharpenFilterStrength != -1)
    FinalPostProcessSettings->StageSharpenFilterStrengthTO14 = Options.OverrideStageSharpenFilterStrength;
  if (Options.MinStageEdgeBaseDistance > FinalPostProcessSettings->StageEdgeBaseDistance_TO14)
    FinalPostProcessSettings->StageEdgeBaseDistance_TO14 = Options.MinStageEdgeBaseDistance;

  return ret;
}

IConsoleVariable* CVarCharaSharpenFilterStrength;
IConsoleVariable* CVarStageSharpenFilterStrength;
IConsoleVariable* CVarMinStageEdgeBaseDistance;
IConsoleVariable* CVarDisableCutsceneCA;
IConsoleVariable* CVarForceLOD;

const uint32_t Addr_IConsoleManager__Singleton = 0x4A97AC8;

const uint32_t Addr_CVarSystemResolution_ctor = 0x4F46C0;
typedef void(*CVarSystemResolution_ctor_Fn)();
CVarSystemResolution_ctor_Fn CVarSystemResolution_ctor_Orig;
void CVarSystemResolution_ctor_Hook()
{
  CVarSystemResolution_ctor_Orig();
  auto consoleManager = *(IConsoleManager**)(mBaseAddress + Addr_IConsoleManager__Singleton);

  CVarCharaSharpenFilterStrength = consoleManager->RegisterConsoleVariableRef(L"sdk.CharaSharpenFilterStrength", Options.OverrideCharaSharpenFilterStrength, L"OverrideCharaSharpenFilterStrength", 0);
  CVarStageSharpenFilterStrength = consoleManager->RegisterConsoleVariableRef(L"sdk.StageSharpenFilterStrength", Options.OverrideStageSharpenFilterStrength, L"OverrideStageSharpenFilterStrength", 0);
  CVarMinStageEdgeBaseDistance = consoleManager->RegisterConsoleVariableRef(L"sdk.MinStageEdgeBaseDistance", Options.MinStageEdgeBaseDistance, L"MinStageEdgeBaseDistance", 0);
  CVarDisableCutsceneCA = consoleManager->RegisterConsoleVariableRef(L"sdk.DisableCutsceneCA", Options.DisableCutsceneCA, L"DisableCutsceneCA", 0);
  
  // usually created by UE4 inside EXPOSE_FORCE_LOD builds, which shipping builds sadly aren't
  // not too hard to reimpl though
  CVarForceLOD = consoleManager->RegisterConsoleVariableRef(L"r.ForceLOD", Options.ForcedLODLevel, L"LOD level to force, -1 is off.", ECVF_Scalability | ECVF_Default | ECVF_RenderThreadSafe);
}

const uint32_t Addr_CVarSystemResolution_dtor = 0x3023470;
typedef void(*CVarSystemResolution_dtor_Fn)();
CVarSystemResolution_dtor_Fn CVarSystemResolution_dtor_Orig;
void CVarSystemResolution_dtor_Hook()
{
  CVarSystemResolution_dtor_Orig();
  auto consoleManager = *(IConsoleManager**)(mBaseAddress + Addr_IConsoleManager__Singleton);
  consoleManager->UnregisterConsoleObject(CVarDisableCutsceneCA);
  consoleManager->UnregisterConsoleObject(CVarMinStageEdgeBaseDistance);
  consoleManager->UnregisterConsoleObject(CVarStageSharpenFilterStrength);
  consoleManager->UnregisterConsoleObject(CVarCharaSharpenFilterStrength);
  consoleManager->UnregisterConsoleObject(CVarForceLOD);
}

struct __declspec(align(4)) FMarkRelevantStaticMeshesForViewData
{
  FVector ViewOrigin;
  int ForcedLODLevel;
  float LODScale;
  float InvLODScale;
  float MinScreenRadiusForCSMDepthSquared;
  float MinScreenRadiusForDepthPrepassSquared;
  bool bFullEarlyZPass;
};

const uint32_t Addr_FRelevancePacket__FRelevancePacket = 0x1A3F7F0;
typedef void (*FRelevancePacket__FRelevancePacket_Fn)(
  void* thisptr, 
  void* InRHICmdList,
  void* InScene,
  void* InView,
  uint8_t InViewBit,
  FMarkRelevantStaticMeshesForViewData& InViewData, 
  void* InOutHasDynamicMeshElementsMasks, void* InOutHasDynamicEditorMeshElementsMasks, 
  uint8_t* InMarkMasks, void* InPrimitiveCustomDataMemStack, void* InOutHasViewCustomDataMasks);
FRelevancePacket__FRelevancePacket_Fn FRelevancePacket__FRelevancePacket_Orig;
void FRelevancePacket__FRelevancePacket_Hook(
  void* thisptr,
  void* InRHICmdList,
  void* InScene,
  void* InView,
  uint8_t InViewBit,
  FMarkRelevantStaticMeshesForViewData& InViewData,
  void* InOutHasDynamicMeshElementsMasks, void* InOutHasDynamicEditorMeshElementsMasks,
  uint8_t* InMarkMasks, void* InPrimitiveCustomDataMemStack, void* InOutHasViewCustomDataMasks)
{
  if (Options.ForcedLODLevel >= 0)
    InViewData.ForcedLODLevel = Options.ForcedLODLevel;

  FRelevancePacket__FRelevancePacket_Orig(thisptr, InRHICmdList, InScene, InView, InViewBit, InViewData, InOutHasDynamicMeshElementsMasks, InOutHasDynamicEditorMeshElementsMasks,
    InMarkMasks, InPrimitiveCustomDataMemStack, InOutHasViewCustomDataMasks);
}

const uint32_t Addr_UTextureRenderTarget2D__UpdateResourceImmediate = 0x225F9D0;
typedef void(*UTextureRenderTarget2D__UpdateResourceImmediate_Fn)(UTextureRenderTarget2D* thisptr, bool bClearRenderTarget);
UTextureRenderTarget2D__UpdateResourceImmediate_Fn UTextureRenderTarget2D__UpdateResourceImmediate_Orig;
void UTextureRenderTarget2D__UpdateResourceImmediate_Hook(UTextureRenderTarget2D* thisptr, bool bClearRenderTarget)
{
  // UTextureRenderTarget2D::UpdateResourceImmediate gets called immediately after game sets up render targets resolution
  // So it's a good spot for us to resize it

  float ScreenSizeX = *(uint32_t*)(mBaseAddress + 0x455A4F0);
  float ScreenSizeY = *(uint32_t*)(mBaseAddress + 0x455A4F4);
  // todo: scale size by r.ScreenPercentage?

  float CurSizeX = thisptr->SizeX;
  float CurSizeY = thisptr->SizeY;

  float widthRatio = ScreenSizeX / CurSizeX;
  float heightRatio = ScreenSizeY / CurSizeY;
  auto bestRatio = min(widthRatio, heightRatio);

  thisptr->SizeX = (CurSizeX * bestRatio);
  thisptr->SizeY = (CurSizeY * bestRatio);

  UTextureRenderTarget2D__UpdateResourceImmediate_Orig(thisptr, bClearRenderTarget);
}

void InitPlugin()
{
  UObject::ProcessEventPtr = reinterpret_cast<ProcessEventFn>(mBaseAddress + Addr_ProcessEvent);
  UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + Addr_GUObjectArray);
  FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + Addr_Names);

  StaticConstructObject_Internal = reinterpret_cast<StaticConstructObject_InternalFn>(mBaseAddress + Addr_StaticConstructObject_Internal);

  MH_Initialize();

  MH_GameHook(APFNpcManager__InitsDistances);
  MH_GameHook(BP_PF_NPC_Walk_AIController__InitNPCDistance);

  MH_GameHook(FSceneView__EndFinalPostprocessSettings);

  // Add our custom cvars, need to handle constructor & destructor for them
  MH_GameHook(CVarSystemResolution_ctor);
  MH_GameHook(CVarSystemResolution_dtor);

  // for r.ForceLOD
  MH_GameHook(FRelevancePacket__FRelevancePacket);

  // for render target resizing (fixing cutscene/skit resolution)
  MH_GameHook(UTextureRenderTarget2D__UpdateResourceImmediate);

  // Patch fade distances used by BP_PF_NPC_Walk_System / BP_PF_NPC_Walk_AIController
  SafeWriteModule(0x116BD47 + 6, Options.MinNPCDistance - FadeInDelta);
  SafeWriteModule(0x116BD51 + 6, Options.MinNPCDistance);
  SafeWriteModule(0x116BD83 + 6, Options.MinNPCDistance - FadeInDelta);
  SafeWriteModule(0x116BD8D + 6, Options.MinNPCDistance);

  // These have same value as the ones patched above, but don't seem to be used by walking NPCs, unsure what uses them
 // SafeWriteModule(0x1180595 + 3, Options.MinNPCDistance - FadeInDelta);
 // SafeWriteModule(0x118059C + 3, Options.MinNPCDistance);

  // Fix EPrimaryScreenPercentageMethod::TemporalUpscale checks (when using r.TemporalAA.Upsampling = 1)
  // code is making sure AntiAliasingMethod == AAM_TemporalAA
  // but Arise added custom AAM_SMAA & AAM_HybridAA methods, and seems they forgot to fix the TemporalUpscale checks :/
  // seems AAM_TemporalAA is never actually used (even when the non-hybrid AA option is selected), so we'll apply these automatically
  const uint32_t PatchAddr_FSceneView__FSceneView_AAMethodCheck = 0x217581E + 6;
  const uint32_t PatchAddr_FSceneRenderer__PrepareViewRectsForRendering_AAMethodCheck = 0x1A30111 + 6;
  SafeWriteModule(PatchAddr_FSceneView__FSceneView_AAMethodCheck, uint8_t(EAntiAliasingMethod::AAM_HybirdAA));
  SafeWriteModule(PatchAddr_FSceneRenderer__PrepareViewRectsForRendering_AAMethodCheck, uint8_t(EAntiAliasingMethod::AAM_HybirdAA));

  // Prevent resolution change on game launch
  // (requires r.SetRes = 2560x1440f line inside Engine.ini to work properly, change with your desired resolution)
  // TODO: find a way so setres isn't required
  {
    // Disable UGameUserSettings::PreloadResolutionSettings
    // (seems to read from an unused settings file, making game switch to 1280x720 briefly)
    const uint32_t Addr_UGameUserSettings__PreloadResolutionSettings = 0x202D940;
    SafeWriteModule(Addr_UGameUserSettings__PreloadResolutionSettings, uint8_t(0xC3));

    // Disable r.setres being changed by game code to 1280x720
    const uint32_t PatchAddr_SetRes_720p = 0x1200730;
    SafeWriteModule(PatchAddr_SetRes_720p, uint8_t(0x90), 4);
  }

  // Remove ECVF_Cheat flag check from FConsoleManager::ProcessUserConsoleInput
  // (allows even more cvars to be changed from dev-console)
  const uint32_t PatchAddr_FConsoleManager__ProcessUserConsoleInput_CheatCheck = 0x124D3A2;
  SafeWriteModule(PatchAddr_FConsoleManager__ProcessUserConsoleInput_CheatCheck, uint8_t(0x90), 6);

  // Patch UBootSceneController::Start to call StartLogin instead of StartLogo
  if (Options.SkipIntroLogos)
  {
    const uint32_t PatchAddr_UBootSceneController__Start = 0xF4B213;
    SafeWriteModule(PatchAddr_UBootSceneController__Start, uint16_t(0x9090)); // jne -> nop
  }

  // patch out the code that overwrites r.ScreenPercentage/r.Shadow.MaxCSMResolution, so it can be changed inside Engine.ini freely
  // without patching it the game will always overwrite any INI value set for this, limiting it to 4096 and below
  // using console you can set this to 8192+, but there's no way to make it stick, since game will overwrite your INI changes
  // using this patch will prevent that, but will also break the in-game setting...
  if (Options.StopScreenPercentageOverwrite)
    SafeWriteModule(0xE52EDD, uint8_t(0x90), 5);
  if (Options.StopMaxCSMResolutionOverwrite)
    SafeWriteModule(0xE52F7A, uint8_t(0x90), 5);

  // patches out the CA part of the code that handles r.OverridePostProcessSettingsTO14
  // (we used to include a patch to skip that code entirely, but turned out some cutscenes relied on the settings it would change...)
  const uint32_t PatchAddr_FSceneView__EndFinalPostprocessSettings_CAFloat = 0x217F84D + 6;
  if (Options.DisableCutsceneCA)
    SafeWriteModule(PatchAddr_FSceneView__EndFinalPostprocessSettings_CAFloat, float(0));

  Init_UE4Hook();

  MH_EnableHook(MH_ALL_HOOKS);
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
      DllHModule = hModule;

      bool Proxy_Attach(); // proxy.cpp
      Proxy_Attach();

      if (InitGame())
        Proxy_InitSteamStub();

      break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
      break;
    case DLL_PROCESS_DETACH:
      void Proxy_Detach();
      Proxy_Detach();
      break;
    }
    return TRUE;
}
