#include "pch.h"
#include <fstream>
#include <sstream>
#include <Shlobj.h>
#include <filesystem>

#define SDK_VERSION "0.1.11"

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
  float MinNPCDistance = 100000;
  bool SkipIntroLogos = true;
  bool StopMaxCSMResolutionOverwrite = false;
  bool StopScreenPercentageOverwrite = false;
  bool DisableCutsceneEffects = false;
  bool DisableCutsceneCA = false;
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
  Options.MinNPCDistance = INI_GetFloat(IniPath, L"Graphics", L"MinimumNPCDistance", Options.MinNPCDistance);

  Options.DisableCutsceneEffects = INI_GetBool(IniPath, L"Patches", L"DisableCutsceneEffects", Options.DisableCutsceneEffects);
  Options.DisableCutsceneCA = INI_GetBool(IniPath, L"Patches", L"DisableCutsceneCA", Options.DisableCutsceneCA);

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

void InitPlugin()
{
  UObject::ProcessEventPtr = reinterpret_cast<ProcessEventFn>(mBaseAddress + Addr_ProcessEvent);
  UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + Addr_GUObjectArray);
  FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + Addr_Names);

  StaticConstructObject_Internal = reinterpret_cast<StaticConstructObject_InternalFn>(mBaseAddress + Addr_StaticConstructObject_Internal);

  MH_Initialize();

  MH_GameHook(APFNpcManager__InitsDistances);
  MH_GameHook(BP_PF_NPC_Walk_AIController__InitNPCDistance);

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

  // patches out check for r.OverridePostProcessSettingsTO14, which seems to be used in cutscenes, adding effexts like CA/vignette/etc
  const uint32_t PatchAddr_FSceneView__EndFinalPostprocessSettings_PostProcOverride = 0x217F833;
  if (Options.DisableCutsceneEffects)
    SafeWriteModule(PatchAddr_FSceneView__EndFinalPostprocessSettings_PostProcOverride, uint16_t(0xE990));

  const uint32_t PatchAddr_FSceneView__EndFinalPostprocessSettings_CAFloat = 0x217F84D + 6;
  // just patches out the CA part of the postproc override, for people that want to keep the rest of the effects
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
