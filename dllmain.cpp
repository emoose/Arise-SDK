#include "pch.h"

#define SDK_VERSION "0.1.24"

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

// TODO: move this to IConsoleManager.h/.cpp
const uint32_t Addr_FConsoleVariable__GetFloat = 0x124A690;
typedef float(*FConsoleVariable__GetFloat_Fn)(IConsoleVariable* thisptr);
FConsoleVariable__GetFloat_Fn FConsoleVariable__GetFloat;

const uint32_t Addr_FConsoleVariableRef_bool__Set = 0x124E640;
typedef void (*FConsoleVariableRef_bool__Set_Fn)(IConsoleVariable* thisptr, const wchar_t* InValue, EConsoleVariableFlags SetBy);
FConsoleVariableRef_bool__Set_Fn FConsoleVariableRef_bool__Set;

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
  bool DisableCutsceneCA = false;
  bool EnableResolutionFix = true;
  float OverrideCharaSharpenFilterStrength = -1;
  float OverrideStageSharpenFilterStrength = -1;
  float MinStageEdgeBaseDistance = 0;
  int32_t ForcedLODLevel = -1;
  bool CutsceneRenderFix = false;
  float CutsceneScreenPercentage = 100;
  float OverrideTemporalAAJitterScale = -1;
  float OverrideTemporalAASharpness = -1;
  bool UseUE4TAA = false;
  float CharaLODMultiplier = 1;
} Options;

bool TryLoadINIOptions(const WCHAR* IniFilePath)
{
  // Read config INI from given folder

  if (!FileExists(IniFilePath))
    return false;

  // Store ini path in case it's ever needed later
  wcscpy_s(IniPath, IniFilePath);

  Options.SkipIntroLogos = INI_GetBool(IniPath, L"Patches", L"SkipIntroLogos", Options.SkipIntroLogos);
  Options.DisableCutsceneCA = INI_GetBool(IniPath, L"Patches", L"DisableCutsceneCA", Options.DisableCutsceneCA);
  Options.EnableResolutionFix = INI_GetBool(IniPath, L"Patches", L"EnableResolutionFix", Options.EnableResolutionFix);

  Options.MinNPCDistance = INI_GetFloat(IniPath, L"Graphics", L"MinimumNPCDistance", Options.MinNPCDistance);
  Options.OverrideCharaSharpenFilterStrength = INI_GetFloat(IniPath, L"Graphics", L"OverrideCharaSharpenFilterStrength", Options.OverrideCharaSharpenFilterStrength);
  Options.OverrideStageSharpenFilterStrength = INI_GetFloat(IniPath, L"Graphics", L"OverrideStageSharpenFilterStrength", Options.OverrideStageSharpenFilterStrength);
  Options.MinStageEdgeBaseDistance = INI_GetFloat(IniPath, L"Graphics", L"MinStageEdgeBaseDistance", Options.MinStageEdgeBaseDistance);
  Options.CutsceneRenderFix = INI_GetBool(IniPath, L"Graphics", L"CutsceneRenderFix", Options.CutsceneRenderFix);
  Options.CutsceneScreenPercentage = INI_GetFloat(IniPath, L"Graphics", L"CutsceneScreenPercentage", Options.CutsceneScreenPercentage);
  Options.OverrideTemporalAAJitterScale = INI_GetFloat(IniPath, L"Graphics", L"OverrideTAAJitterScale", Options.OverrideTemporalAAJitterScale);
  Options.OverrideTemporalAASharpness = INI_GetFloat(IniPath, L"Graphics", L"OverrideTAASharpness", Options.OverrideTemporalAASharpness);
  Options.UseUE4TAA = INI_GetBool(IniPath, L"Graphics", L"UseUE4TAA", Options.UseUE4TAA);
  Options.CharaLODMultiplier = INI_GetFloat(IniPath, L"Graphics", L"CharaLODMultiplier", Options.CharaLODMultiplier);

  if (Options.MinNPCDistance >= 0 && FadeInDelta >= Options.MinNPCDistance)
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

bool PostProc_CopyValuesToCVars;
FConsoleVariableRef<bool>* CVarCopyValuesToCVars;

const uint32_t Offset_FSceneView__FinalPostProcessSettings = 0xD60;

const uint32_t Addr_FSceneView__EndFinalPostprocessSettings = 0x217F490;
typedef void*(*FSceneView__EndFinalPostprocessSettings_Fn)(uint8_t* thisptr, void* a2);
FSceneView__EndFinalPostprocessSettings_Fn FSceneView__EndFinalPostprocessSettings_Orig;
void* FSceneView__EndFinalPostprocessSettings_Hook(uint8_t* thisptr, void* a2)
{
  auto ret = FSceneView__EndFinalPostprocessSettings_Orig(thisptr, a2);

  FPostProcessSettings* FinalPostProcessSettings = (FPostProcessSettings*)(thisptr + Offset_FSceneView__FinalPostProcessSettings);

  bool CurPostProc_CopyValuesToCVars = PostProc_CopyValuesToCVars; // make copy so it can't change during this func
  PostProc_DoOverrides(CurPostProc_CopyValuesToCVars, FinalPostProcessSettings);

  // Unset CopyValuesToCVars once we've finished copying them all
  if (CurPostProc_CopyValuesToCVars)
    FConsoleVariableRef_bool__Set(CVarCopyValuesToCVars, L"False", EConsoleVariableFlags::ECVF_SetByConsole);

  if (Options.DisableCutsceneCA)
    FinalPostProcessSettings->SceneFringeIntensity = 0;
  if (Options.OverrideCharaSharpenFilterStrength != -1)
    FinalPostProcessSettings->CharaSharpenFilterStrengthTO14 = Options.OverrideCharaSharpenFilterStrength;
  if (Options.OverrideStageSharpenFilterStrength != -1)
    FinalPostProcessSettings->StageSharpenFilterStrengthTO14 = Options.OverrideStageSharpenFilterStrength;
  if (Options.OverrideTemporalAAJitterScale != -1)
    FinalPostProcessSettings->TemporalAACameraJitterScaleTO14 = Options.OverrideTemporalAAJitterScale;
  if (Options.OverrideTemporalAASharpness != -1)
    FinalPostProcessSettings->TemporalAASharpnessFactorTO14 = Options.OverrideTemporalAASharpness;

  if (Options.MinStageEdgeBaseDistance > FinalPostProcessSettings->StageEdgeBaseDistance_TO14)
    FinalPostProcessSettings->StageEdgeBaseDistance_TO14 = Options.MinStageEdgeBaseDistance;

  return ret;
}

std::vector<IConsoleVariable*> CVarPointers;

const uint32_t Addr_IConsoleManager__Singleton = 0x4A97AC8;

const uint32_t Addr_CVarSystemResolution_ctor = 0x4F46C0;
typedef void(*CVarSystemResolution_ctor_Fn)();
CVarSystemResolution_ctor_Fn CVarSystemResolution_ctor_Orig;
void CVarSystemResolution_ctor_Hook()
{
  CVarSystemResolution_ctor_Orig();
  auto consoleManager = *(IConsoleManager**)(mBaseAddress + Addr_IConsoleManager__Singleton);

  CVarPointers.push_back(consoleManager->RegisterConsoleVariableRef(L"sdk.CharaSharpenFilterStrength", Options.OverrideCharaSharpenFilterStrength, L"Adjust sharpen filter applied to characters", 0));
  CVarPointers.push_back(consoleManager->RegisterConsoleVariableRef(L"sdk.StageSharpenFilterStrength", Options.OverrideStageSharpenFilterStrength, L"Adjust sharpen filter applied to the game world", 0));
  CVarPointers.push_back(consoleManager->RegisterConsoleVariableRef(L"sdk.MinStageEdgeBaseDistance", Options.MinStageEdgeBaseDistance, L"Allows increasing the distance that cel-shading is applied for", 0));
  CVarPointers.push_back(consoleManager->RegisterConsoleVariableRef(L"sdk.DisableCutsceneCA", Options.DisableCutsceneCA, L"Whether to prevent chromatic aberration from being applied (this setting affects the whole game, not just cutscenes)", 0));

  CVarPointers.push_back(consoleManager->RegisterConsoleVariableRef(L"sdk.CutsceneRenderFix", Options.CutsceneRenderFix, L"Enable/disable skit cutscene resolution scaling", 0));
  CVarPointers.push_back(consoleManager->RegisterConsoleVariableRef(L"sdk.CutsceneScreenPercentage", Options.CutsceneScreenPercentage, L"ScreenPercentage to apply to skit cutscenes", 0));
  
  CVarPointers.push_back(consoleManager->RegisterConsoleVariableRef(L"sdk.TAAJitterScale", Options.OverrideTemporalAAJitterScale, L"Adjust jittering applied to the games TAA (game default has this set to 0, doesn't really seem to work that well, was probably disabled for a reason...)", 0));
  CVarPointers.push_back(consoleManager->RegisterConsoleVariableRef(L"sdk.TAASharpness", Options.OverrideTemporalAASharpness, L"Adjust sharpening effect applied to TAA", 0));

  CVarPointers.push_back(consoleManager->RegisterConsoleVariableRef(L"sdk.UseUE4TAA", Options.UseUE4TAA, L"Use UE4's TAA method instead of TO14 custom one", 0));
  CVarPointers.push_back(consoleManager->RegisterConsoleVariableRef(L"sdk.CharaLODMultiplier", Options.CharaLODMultiplier, L"Multiplier of Chara LODs", 0));

  // usually created by UE4 inside EXPOSE_FORCE_LOD builds, which shipping builds sadly aren't
  // not too hard to reimpl though
  CVarPointers.push_back(consoleManager->RegisterConsoleVariableRef(L"r.ForceLOD", Options.ForcedLODLevel, L"LOD level to force, -1 is off.", ECVF_Scalability | ECVF_Default | ECVF_RenderThreadSafe));

  CVarCopyValuesToCVars = consoleManager->RegisterConsoleVariableRef(L"pp.CopyValuesToCVars", PostProc_CopyValuesToCVars, L"If set, will copy values from FPostProcessSettings into cvars for viewing", 0);

  PostProc_AddCVars(consoleManager);
}

const uint32_t Addr_CVarSystemResolution_dtor = 0x3023470;
typedef void(*CVarSystemResolution_dtor_Fn)();
CVarSystemResolution_dtor_Fn CVarSystemResolution_dtor_Orig;
void CVarSystemResolution_dtor_Hook()
{
  CVarSystemResolution_dtor_Orig();
  auto consoleManager = *(IConsoleManager**)(mBaseAddress + Addr_IConsoleManager__Singleton);

  consoleManager->UnregisterConsoleObject(CVarCopyValuesToCVars);

  for (auto& cvar : CVarPointers)
    consoleManager->UnregisterConsoleObject(cvar);
  CVarPointers.clear();
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

// Called during UKismetRenderingLibrary::execCreateRenderTarget2D, so we can overwrite the target size etc.
void CreateRenderTarget2D_Hook(UTextureRenderTarget2D* thisptr)
{
  if (Options.CutsceneRenderFix)
  {
    double ScreenSizeX = double(*(uint32_t*)(mBaseAddress + 0x455A4F0));
    double ScreenSizeY = double(*(uint32_t*)(mBaseAddress + 0x455A4F4));

    // Apply Options.CutsceneScreenPercentage to the screen size
    {
      // Apply screen-percentage to the RT, because UE4 disables percentage being applied to them...
      double ScreenPercentageMult = Options.CutsceneScreenPercentage;
      ScreenPercentageMult = max(ScreenPercentageMult, 1) / double(100.f);
      ScreenPercentageMult = min(ScreenPercentageMult, 4); // 400% seems to be max allowed by UE4, so we'll limit to that too

      ScreenSizeX *= ScreenPercentageMult;
      ScreenSizeY *= ScreenPercentageMult;
    }

    double ScreenArea = ScreenSizeX * ScreenSizeY;

    double CurSizeX = double(thisptr->SizeX);
    double CurSizeY = double(thisptr->SizeY);
    double CurArea = CurSizeX * CurSizeY;

    // Only resize RT if it's using less pixels than our screen
    if (ScreenArea > CurArea)
    {
      // Figure out a width/height with the same ratio as the original RT resolution & near enough the same area as our screen resolution
      // (in effect, this will make the panels super-sampled in a way, since they'll be rendering with the same number of pixels as the full screen, but only get displayed in a small box)
      // (since only 1 or 2 boxes are actually rendering at once this shouldn't give a big performance impact though)

      double CurRatio = CurSizeX / CurSizeY;

      double NewWidth = sqrt(CurRatio * ScreenArea);
      double NewHeight = NewWidth / CurRatio;

      thisptr->SizeX = int(ceil(NewWidth));
      thisptr->SizeY = int(ceil(NewHeight));
    }
  }

  uint8_t* vftable = *(uint8_t**)thisptr;

  typedef void(*UTexture__UpdateResource_Fn)(UTexture* thisptr);
  UTexture__UpdateResource_Fn UTexture__UpdateResource = (UTexture__UpdateResource_Fn)(*(uintptr_t*)(vftable + 0x248));

  UTexture__UpdateResource(thisptr);
}

const uint32_t Addr_FAchCharacterLODData_Reader_Hook = 0x6D46A7;
const uint32_t Addr_FAchCharacterLODData_Reader_Trampoline = 0x6D3CB1;

void FAchCharacterLODData_Reader_Hook(void* Dst, void* Src, size_t Size)
{
  // this func copies some floats from FAchCharacterLODData.LODDistances into some stack var
  // we just hook the memcpy call it uses and modify the floats after :)
  // TODO: would be better if we could hook the code that actually reads this data into FAchCharacterLODData in the first place, and modify FAchCharacterLODData directly instead...

  memcpy(Dst, Src, Size);

  if (Options.CharaLODMultiplier >= 0 && Options.CharaLODMultiplier != 1 && Size >= 4)
  {
    uint32_t NumLods = Size / sizeof(float);
    float* DstFloats = reinterpret_cast<float*>(Dst);

    // multiply the first LOD level by multiplier, then add the difference to the other LODs
    // should make the LOD change work better this way, using multiplier on all the LOD levels could result in some crazy high distances that aren't good for perf
    float OrigLOD0 = DstFloats[0];
    float NewLOD0 = OrigLOD0 * Options.CharaLODMultiplier;
    for (uint32_t i = 0; i < NumLods; i++)
    {
      float cur = DstFloats[i];
      DstFloats[i] = (DstFloats[i] + NewLOD0) - OrigLOD0;
    }
  }

  // the copied floats seem to get read by
  // 1406D46D0 - F3 0F10 00  - movss xmm0,[rax] <<
  // 141253C47 - 48 89 03  - mov [rbx],rax <<
  // 141253B2E - 48 8B 06  - mov rax,[rsi] <<
}

#ifdef _DEBUG
// hook for testing stuff
// previously was a seperate thread, but that wasn't in sync with the game engine that well
// hooking engine loop should solve that though :)

const uint32_t Addr_FEngineLoop__Tick = 0x5CF1F0;
typedef void(*FEngineLoop__Tick_Fn)(void* thisptr);
FEngineLoop__Tick_Fn FEngineLoop__Tick_Orig;
void FEngineLoop__Tick_Hook(void* thisptr)
{
  FEngineLoop__Tick_Orig(thisptr);

  bool performAction = (GetKeyState(VK_HOME) & 0x8000);
  if (!performAction)
    return;

  auto ttt = UObject::FindObjects<ALandscapeProxy>();
  auto ttt2 = UObject::FindObjects<UAchProjectSettings>();

  for (auto& bleh : ttt)
  {
    bleh->MaxLODLevel = 0;
    bleh->LODDistanceFactor = 10;
    bleh->LODFalloff = ELandscapeLODFalloff::ELandscapeLODFalloff__SquareRoot;
    bleh->LOD0DistributionSetting = bleh->LODDistributionSetting = 3;
    bleh->StreamingDistanceMultiplier = 10;
  }

  for (auto& bleh : ttt2)
  {
    for (int i = 0; i < bleh->DefaultCharacterLODs.Num(); i++)
    {
      auto* record = &bleh->DefaultCharacterLODs[i];
      record = record;
    }
  }

  /*
  static float newDist = 1.0f;
  static float newFactor = 10.0f;
  static bool whoa = false;

  auto test1 = UObject::FindObjects<UEngine>();
  for (auto& eng : test1)
  {
    eng->StreamingDistanceFactor = newFactor;
  }

  auto test = UObject::FindObjects<ALandscapeProxy>();
  for (auto& obj : test)
  {
    for (int i = 0; i < obj->LandscapeComponents.Num(); i++)
    {
      auto& comp = obj->LandscapeComponents[i];
      // comp->LODBias = -1;
      comp->ForcedLOD = 0;
    }
    float prevDist = obj->StreamingDistanceMultiplier;
    if (whoa)
      obj->StreamingDistanceMultiplier = newDist;
  }*/
}
#endif

bool inited = false;

const uint32_t Addr_RefreshEngineSettings = 0x2280550;
typedef void(*RefreshEngineSettings_Fn)();
RefreshEngineSettings_Fn RefreshEngineSettings_Orig;
void RefreshEngineSettings_Hook()
{
  // Check if any CVars updated

  // Disable CharaLODs if CharaLODMultiplier == -1, else make sure they're enabled
  static float PrevCharaLODMultiplier = -2;
  if (!inited || PrevCharaLODMultiplier != Options.CharaLODMultiplier)
  {
    const uint32_t PatchAddr_CharacterSkipLODs = 0x6D46C1;
    // change JLE to JMP if we're skipping them
    SafeWriteModule(PatchAddr_CharacterSkipLODs, Options.CharaLODMultiplier == -1 ? uint8_t(0xEB) : uint8_t(0x7E));

    PrevCharaLODMultiplier = Options.CharaLODMultiplier;
  }

  // use AAM_TemporalAA if UseUE4TAA is set, otherwise use AAM_HybirdAA
  static bool PrevUseUE4TAA = false;
  if (!inited || PrevUseUE4TAA != Options.UseUE4TAA)
  {
    PrevUseUE4TAA = Options.UseUE4TAA;
    // Options.UseUE4TAA was changed, modify our patch...
    SafeWriteModule(0x2175D8A + 6, PrevUseUE4TAA ? uint32_t(EAntiAliasingMethod::AAM_TemporalAA) : uint32_t(EAntiAliasingMethod::AAM_HybirdAA));

    // Fix EPrimaryScreenPercentageMethod::TemporalUpscale checks (when using r.TemporalAA.Upsampling = 1)
    // code is making sure AntiAliasingMethod == AAM_TemporalAA
    // but Arise added custom AAM_SMAA & AAM_HybridAA methods, and seems they forgot to fix the TemporalUpscale checks :/
    // seems AAM_TemporalAA is never actually used (even when the non-hybrid AA option is selected), so we'll apply these automatically
    const uint32_t PatchAddr_FSceneView__FSceneView_AAMethodCheck = 0x217581E + 6;
    const uint32_t PatchAddr_FSceneRenderer__PrepareViewRectsForRendering_AAMethodCheck = 0x1A30111 + 6;
    SafeWriteModule(PatchAddr_FSceneView__FSceneView_AAMethodCheck, PrevUseUE4TAA ? uint8_t(EAntiAliasingMethod::AAM_TemporalAA) : uint8_t(EAntiAliasingMethod::AAM_HybirdAA));
    SafeWriteModule(PatchAddr_FSceneRenderer__PrepareViewRectsForRendering_AAMethodCheck, PrevUseUE4TAA ? uint8_t(EAntiAliasingMethod::AAM_TemporalAA) : uint8_t(EAntiAliasingMethod::AAM_HybirdAA));
  }

  if(inited)
    RefreshEngineSettings_Orig();
}


void InitPlugin()
{
  inited = false;
  PostProc_Init();

  UObject::ProcessEventPtr = reinterpret_cast<ProcessEventFn>(mBaseAddress + Addr_ProcessEvent);
  UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + Addr_GUObjectArray);
  FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + Addr_Names);
  StaticConstructObject_Internal = reinterpret_cast<StaticConstructObject_InternalFn>(mBaseAddress + Addr_StaticConstructObject_Internal);
  FConsoleVariable__GetFloat = reinterpret_cast<FConsoleVariable__GetFloat_Fn>(mBaseAddress + Addr_FConsoleVariable__GetFloat);
  FConsoleVariableRef_bool__Set = reinterpret_cast<FConsoleVariableRef_bool__Set_Fn>(mBaseAddress + Addr_FConsoleVariableRef_bool__Set);

  MH_Initialize();

#ifdef _DEBUG
  MH_GameHook(FEngineLoop__Tick);
#endif

  // Hook EndFinalPostprocessSettings so we can adjust the FPostProcessSettings struct
  MH_GameHook(FSceneView__EndFinalPostprocessSettings);

  // Add our custom cvars, need to handle constructor & destructor for them
  MH_GameHook(CVarSystemResolution_ctor);
  MH_GameHook(CVarSystemResolution_dtor);
  MH_GameHook(RefreshEngineSettings);

  // Add support for r.ForceLOD
  MH_GameHook(FRelevancePacket__FRelevancePacket);

  // Apply any patches requested by cvars
  // (inited must be false before calling this!)
  RefreshEngineSettings_Hook();

  if (true)
  {
    // Have to write a trampoline somewhere near the hooked addr, needs 12 bytes...
    uint8_t trampoline[] = { 0x48, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xE0 };

    *(uintptr_t*)&trampoline[2] = (uintptr_t)&FAchCharacterLODData_Reader_Hook;

    SafeWrite(mBaseAddress + Addr_FAchCharacterLODData_Reader_Trampoline, trampoline, 12);

    PatchCall(mBaseAddress + Addr_FAchCharacterLODData_Reader_Hook, mBaseAddress + Addr_FAchCharacterLODData_Reader_Trampoline);
  }

  // Render target resizing (fixing cutscene/skit resolution)
  if (Options.CutsceneRenderFix)
  {
    // Have to write a trampoline somewhere near the hooked addr, needs 12 bytes...
    uint8_t trampoline[] = { 0x48, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xE0 };

    *(uintptr_t*)&trampoline[2] = (uintptr_t)&CreateRenderTarget2D_Hook;

    SafeWrite(mBaseAddress + 0x2699E12, trampoline, 12);

    // Hook UKismetRenderingLibrary::execCreateRenderTarget2D
    SafeWrite(mBaseAddress + 0x2699D98, uint8_t(0x90));
    PatchCall(mBaseAddress + 0x2699D98 + 1, mBaseAddress + 0x2699E12);

    // USceneCaptureComponent2D ctor: change "ShowFlags.TemporalAA = false; ShowFlags.MotionBlur = false;" to " = true" 
    // Not certain if ToA's custom TAA impl. works on this or not though (may need more AAM_TemporalAA checks to be fixed...)
    const uint32_t PatchAddr_USceneCaptureComponent2D_ctor = 0x279200F;
    // Change "and dword ptr [rbx+2B8h], 0FFFFDFF7h" to "or dword ptr [rbx+2B8h], 2008h", so it sets the bits instead of removing them
    uint8_t Patch_USceneCaptureComponent2D_ctor[] = { 0x81, 0x8B, 0xB8, 0x02, 0x00, 0x00, 0x08, 0x20, 0x00, 0x00 };
    SafeWriteModule(PatchAddr_USceneCaptureComponent2D_ctor, Patch_USceneCaptureComponent2D_ctor, 0xA);
  }

  if (Options.MinNPCDistance >= 0)
  {
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
  }

  // Prevent resolution change on game launch
  // (requires r.SetRes = 2560x1440f line inside Engine.ini to work properly, change with your desired resolution)
  // TODO: find a way so setres isn't required
  if(Options.EnableResolutionFix)
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

  // Remove ECVF_ReadOnly flag check
  const uint32_t PatchAddr_FConsoleManager__ProcessUserConsoleInput_ReadOnlyCheck = 0x124D6F9;
  SafeWriteModule(PatchAddr_FConsoleManager__ProcessUserConsoleInput_ReadOnlyCheck, uint16_t(0xC031)); // xor eax, eax

  // Flip GRHISupportsDynamicResolution to true, so r.DynamicRes.* can work
  const uint32_t Addr_GRHISupportsDynamicResolution = 0x4BC9A0B;
  SafeWriteModule(Addr_GRHISupportsDynamicResolution, uint8_t(1));

  // Set GSupportsTimestampRenderQueries to true
  const uint32_t Addr_GSupportsTimestampRenderQueries = 0x4BC99C9;
  SafeWriteModule(Addr_GSupportsTimestampRenderQueries, uint8_t(1));

  // Patch UBootSceneController::Start to call StartLogin instead of StartLogo
  if (Options.SkipIntroLogos)
  {
    const uint32_t PatchAddr_UBootSceneController__Start = 0xF4B213;
    SafeWriteModule(PatchAddr_UBootSceneController__Start, uint16_t(0x9090)); // jne -> nop
  }

  // Remove limit from r.Shadow.DistanceScale
  const uint32_t PatchAddr_GetCSMMaxDistance = 0x2382021;
  SafeWriteModule(PatchAddr_GetCSMMaxDistance, uint8_t(0x90), 8);

  // Patch the games ScreenPercentage & MaxCSMResolution overwriting code to use a lower priority
  // This'll make the users Engine.ini settings preferred over the games choice - without us needing to break the games in-game setting for people that don't use Engine.ini!)
  // without patching it the game will always overwrite any INI value set for this, limiting it to 4096 and below
  // using console you can set this to 8192+, but without this there's no way to make it stick, since game will overwrite your INI changes
  SafeWriteModule(0xE52F74 + 2, uint32_t(EConsoleVariableFlags::ECVF_SetByScalability));
  SafeWriteModule(0xE52ED7 + 2, uint32_t(EConsoleVariableFlags::ECVF_SetByScalability));

  // Unlock dev-console & allow loading loose files
  Init_UE4Hook();

  MH_EnableHook(MH_ALL_HOOKS);
  inited = true;
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
