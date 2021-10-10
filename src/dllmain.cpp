#include "pch.h"

// TODO: move this to IConsoleManager.h/.cpp
typedef float(*FConsoleVariable__GetFloat_Fn)(IConsoleVariable* thisptr);
FConsoleVariable__GetFloat_Fn FConsoleVariable__GetFloat;

typedef void (*FConsoleVariableRef_bool__Set_Fn)(IConsoleVariable* thisptr, const wchar_t* InValue, EConsoleVariableFlags SetBy);
FConsoleVariableRef_bool__Set_Fn FConsoleVariableRef_bool__Set;

HMODULE DllHModule;
HMODULE GameHModule;
uintptr_t mBaseAddress;

#define SDK_VERSION "0.1.27a"

// UE4 stuff
AutoGameAddress Addr_GNames( // patch0: 0x14132000D
  "GNames",
  { 0xC7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0xC8, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0xC3, 0x48, 0x89, 0x1D, 0x00, 0x00, 0x00, 0x00 },
  +0x18
);
AutoGameAddress Addr_GObjects( // patch0: 0x14031627A
  "GObjects",
  { 0x48, 0x8D, 0x05, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8D, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0x05 },
  +3
);
AutoGameAddress Addr_UObject__ProcessEvent( // patch0: 0x1414CBA50
  "UObject::ProcessEvent",
  { 0x4C, 0x8B, 0xF9, 0x45, 0x33, 0xF6, 0x8B, 0x49, 0x0C },
  -0x30
);
AutoGameAddress Addr_StaticConstructObject_Internal( // patch0: 0x1414EA190
  "StaticConstructObject_Internal",
  { 0xF7, 0x81, 0xB4, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x10, 0x45 },
  -0x29
);
AutoGameAddress Addr_FConsoleVariable_float___GetFloat( // patch0: 0x14124A690
  "FConsoleVariable<float>::GetFloat",
  { 0x0F, 0x95, 0xC2, 0xF3, 0x0F, 0x10, 0x44, 0x93, 0x38 },
  -0x20
);
AutoGameAddress Addr_FConsoleVariableRef_bool___Set( // patch0: 0x14124E640
  "FConsoleVariableRef<bool>::Set",
  { 0x8B, 0xD5, 0x88, 0x43, 0x40, 0x48, 0x8B, 0xCB },
  -0x30
);

// ToA patches/hooks
AutoGameAddress Addr_FAchCharacterLODData__ReadsData_Hook( // patch0: 0x1406D46A7
  "FAchCharacterLODData::ReadsData_Hook",
  { 0x4C, 0x8B, 0xC7, 0x49, 0xC1, 0xE0, 0x02, 0x48, 0x8B, 0xD5, 0x48, 0x8B, 0xCE },
  +0xD
);
AutoGameAddress Addr_FAchCharacterLODData__ReadsData_Trampoline( // patch0: 0x1406D4963
  "FAchCharacterLODData::ReadsData_Trampoline",
  { 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC },
  0,
  "FAchCharacterLODData::ReadsData_Hook" // searches for 12 0xCC bytes after wherever we found ::ReadsData_Hook
);
AutoGameAddress Addr_UKismetRenderingLibrary__execCreateRenderTarget2D_Hook( // patch0: 0x142699D98
  "UKismetRenderingLibrary::execCreateRenderTarget2D_Hook",
  { 0xFF, 0x92, 0x48, 0x02, 0x00, 0x00, 0xB2, 0x01 },
  +0
);
AutoGameAddress Addr_UKismetRenderingLibrary__execCreateRenderTarget2D_Trampoline( // patch0: 0x142699E12
  "UKismetRenderingLibrary::execCreateRenderTarget2D_Trampoline",
  { 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC },
  0,
  "UKismetRenderingLibrary::execCreateRenderTarget2D_Hook" // searches for 12 0xCC bytes after wherever we found ::execCreateRenderTarget2D_Hook
);
AutoGameAddress Addr_USceneCaptureComponent2D__USceneCaptureComponent2D_Patch( // patch0: 0x14279200F
  "USceneCaptureComponent2D::USceneCaptureComponent2D_Patch",
  { 0x81, 0xA3, 0xB8, 0x02, 0x00, 0x00, 0xF7, 0xDF, 0xFF, 0xFF, 0x0F },
  +0
);
AutoGameAddress Addr_UGameUserSettings__PreloadResolutionSettings_CallerPatch( // patch0: 0x1405CB303
  "UGameUserSettings::PreloadResolutionSettings_CallerPatch",
  { 0xE8, 0x00, 0x00, 0x00, 0x00, 0x40, 0x38, 0x35, 0x00, 0x00, 0x00, 0x00, 0x75, 0x05, 0xE8, 0x00, 0x00, 0x00, 0x00 },
  +0xC
);
AutoGameAddress Addr_SetRes_720p_CallerPatch( // patch0: 0x141200730
  "SetRes_720p_CallerPatch",
  { 0x25, 0x00, 0x00, 0x00, 0xFF, 0x48, 0x8B, 0xCB, 0x44, 0x8B, 0xC0, 0x41, 0xFF, 0x51, 0x60, 0x48, 0x83, 0x7C, 0x24 },
  +0xB
);
AutoGameAddress Addr_FConsoleManager__ProcessUserConsoleInput_CheatCheck( // patch0: 0x14124D3A2
  "FConsoleManager::ProcessUserConsoleInput_CheatCheck",
  { 0x48, 0x8B, 0x10, 0x48, 0x8B, 0xC8, 0xFF, 0x52, 0x18, 0xA8, 0x01 },
  +0xB
);
AutoGameAddress Addr_FConsoleManager__ProcessUserConsoleInput_ReadOnlyCheck( // patch0: 0x14124D6F9
  "FConsoleManager::ProcessUserConsoleInput_ReadOnlyCheck",
  { 0xFF, 0x50, 0x18, 0xC1, 0xE8, 0x02, 0x24, 0x01 },
  +0x6
);
AutoGameAddress Addr_FDefaultDynamicResolutionState__IsSupported_NearBeginning( // patch0: 0x141FF83DB
  "FDefaultDynamicResolutionState::IsSupported_NearBeginning",
  { 0x48, 0x8B, 0x88, 0x68, 0x0C, 0x00, 0x00, 0x48, 0x85, 0xC9, 0x74, 0x10, 0x48, 0x8B, 0x01 },
  +0
);
AutoGameAddress Addr_FDefaultDynamicResolutionState__IsSupported_GRHISupportsDynamicResolution( // patch0: 0x141FF83FA
  "FDefaultDynamicResolutionState::IsSupported_GRHISupportsDynamicResolution_Addr",
  { 0x0F, 0xB6, 0x05, 0x00, 0x00, 0x00, 0x00 },
  +0x3,
  "FDefaultDynamicResolutionState::IsSupported_NearBeginning"
);
AutoGameAddress Addr_BootSceneController__execStart_NearBeginning( // patch0: 0x140F4B1FB
  "BootSceneController::execStart_NearBeginning",
  { 0x4C, 0x03, 0xC0, 0x80, 0x3D, 0xCF },
  +0
);
AutoGameAddress Addr_BootSceneController__execStart_JmpPatch( // patch0: 0x140F4B213
  "BootSceneController::execStart_JmpPatch",
  { 0x75, 0x00, 0x48, 0x8B, 0x15 },
  +0,
  "BootSceneController::execStart_NearBeginning"
);
AutoGameAddress Addr_GetCSMMaxDistance_Patch( // patch0: 0x142382021
  "GetCSMMaxDistance_Patch",
  { 0xF3, 0x0F, 0x10, 0x40, 0x04, 0x0F, 0x2F, 0xC6, 0x72, 0x0B, 0x0F, 0x28, 0xF0, 0xF3, 0x0F, 0x5D, 0x35 },
  +0xD
);
AutoGameAddress Addr_ScreenPercentage_SetBy_Patch( // patch0: 0x140E52F76
  "ScreenPercentage_SetBy_Patch",
  { 0xBA, 0x00, 0x10, 0x00, 0x00, 0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x41, 0xB8, 0x00, 0x00, 0x00, 0x08 },
  +0xE
);
AutoGameAddress Addr_MaxCSMResolution_SetBy_Patch( // patch0: 0x140E52ED9
  "MaxCSMResolution_SetBy_Patch",
  { 0xBA, 0xC8, 0x00, 0x00, 0x00, 0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x41, 0xB8, 0x00, 0x00, 0x00, 0x08 },
  +0xE
);
AutoGameAddress Addr_CharacterSkipLODs_Patch( // patch0: 0x1406D46C1
  "CharacterSkipLODs_Patch",
  { 0x7E, 0x27, 0x48, 0x8B, 0xC6, 0x66, 0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
  +0
);
AutoGameAddress Addr_FSceneView__SetupAntiAliasingMethod_DefaultMethod_Patch( // patch0: 0x142175D90
  "FSceneView::SetupAntiAliasingMethod_DefaultMethod_Patch",
  { 0xC7, 0x83, 0xE0, 0x1B, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00 },
  +0x6
);
AutoGameAddress Addr_FSceneView__FSceneView_AAMethodCheck_Patch( // patch0: 0x142175824
  "FSceneView::FSceneView_AAMethodCheck_Patch",
  { 0x83, 0xBB, 0xE0, 0x1B, 0x00, 0x00, 0x02, 0x75, 0x00, 0xC7 },
  +0x6
);
AutoGameAddress Addr_FSceneRenderer__PrepareViewRectsForRendering_AAMethodCheck_Patch( // patch0: 0x141A30117
  "FSceneRenderer::PrepareViewRectsForRendering_AAMethodCheck_Patch",
  { 0x83, 0xB8, 0xE0, 0x1B, 0x00, 0x00, 0x02, 0x75, 0x00, 0x48, 0x8B },
  +0x6
);
AutoGameAddress Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_CameraFarFadeInDistance( // patch0: 0x14116BD4D
  "UPFNpcCameraFadeComponent::UPFNpcCameraFadeComponent_CameraFarFadeInDistance",
  { 0xC7, 0x83, 0x18, 0x02, 0x00, 0x00, 0x00, 0x00, 0x2F, 0x45 },
  +0x6
);
AutoGameAddress Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_CameraFarFadeOutDistance( // patch0: 0x14116BD57
  "UPFNpcCameraFadeComponent::UPFNpcCameraFadeComponent_CameraFarFadeOutDistance",
  { 0xC7, 0x83, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x35, 0x45 },
  +0x6
);
AutoGameAddress Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_FarFadeInDistance( // patch0: 0x14116BD89
  "UPFNpcCameraFadeComponent::UPFNpcCameraFadeComponent_FarFadeInDistance",
  { 0xC7, 0x83, 0x38, 0x02, 0x00, 0x00, 0x00, 0x00, 0x61, 0x45 },
  +0x6
);
AutoGameAddress Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_FarFadeOutDistance( // patch0: 0x14116BD93
  "UPFNpcCameraFadeComponent::UPFNpcCameraFadeComponent_FarFadeOutDistance",
  { 0xC7, 0x83, 0x3C, 0x02, 0x00, 0x00, 0x00, 0x00, 0x6D, 0x45 },
  +0x6
);
AutoGameAddress Addr_FPFNpcCameraSettingsData__ICppStructOps__Construct_CameraFarFadeInDistance( // patch0: 0x141180598
  "FPFNpcCameraSettingsData::ICppStructOps::Construct_CameraFarFadeInDistance",
  { 0xC7, 0x42, 0x1C, 0x00, 0x00, 0x2F, 0x45 },
  +0x3
);
AutoGameAddress Addr_FPFNpcCameraSettingsData__ICppStructOps__Construct_CameraFarFadeOutDistance( // patch0: 0x14118059F
  "FPFNpcCameraSettingsData::ICppStructOps::Construct_CameraFarFadeOutDistance",
  { 0xC7, 0x42, 0x24, 0x00, 0x40, 0x35, 0x45 },
  +0x3
);
AutoGameAddress Addr_CVarUROEnable_Offset( // patch0: 0x1408ECD26
  "CVarUROEnable_Offset",
  { 0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x83, 0x38, 0x00, 0x0F },
  +0x3
);

// How much difference between the FadeOut & the FadeIn variables
const int FadeInDelta = 500;

WCHAR IniPath[4096];
struct
{
  float MinNPCDistance = 50000;
  float MonsterDistanceMultiplier = 1;
  bool SkipIntroLogos = true;
  bool DisableCutsceneCA = false;
  bool EnableResolutionFix = true;
  float OverrideCharaSharpenFilterStrength = -1;
  float OverrideStageSharpenFilterStrength = -1;
  float MinStageEdgeBaseDistance = 0;
  int32_t ForcedLODLevel = -1;
  bool CutsceneRenderFix = false;
  float CutsceneScreenPercentage = 100;
  bool CutsceneForceUpscaleFiltering = false;
  float OverrideTemporalAAJitterScale = -1;
  float OverrideTemporalAASharpness = -1;
  bool UseUE4TAA = false;
  float CharaLODMultiplier = 1;
  bool CharaDisableCull = false;
  bool DisableUpdateRateOptimization = false;
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
  Options.MonsterDistanceMultiplier = INI_GetFloat(IniPath, L"Graphics", L"MonsterDistanceMultiplier", Options.MonsterDistanceMultiplier);
  Options.OverrideCharaSharpenFilterStrength = INI_GetFloat(IniPath, L"Graphics", L"OverrideCharaSharpenFilterStrength", Options.OverrideCharaSharpenFilterStrength);
  Options.OverrideStageSharpenFilterStrength = INI_GetFloat(IniPath, L"Graphics", L"OverrideStageSharpenFilterStrength", Options.OverrideStageSharpenFilterStrength);
  Options.MinStageEdgeBaseDistance = INI_GetFloat(IniPath, L"Graphics", L"MinStageEdgeBaseDistance", Options.MinStageEdgeBaseDistance);
  Options.CutsceneRenderFix = INI_GetBool(IniPath, L"Graphics", L"CutsceneRenderFix", Options.CutsceneRenderFix);
  Options.CutsceneScreenPercentage = INI_GetFloat(IniPath, L"Graphics", L"CutsceneScreenPercentage", Options.CutsceneScreenPercentage);
  Options.CutsceneForceUpscaleFiltering = INI_GetBool(IniPath, L"Graphics", L"CutsceneForceUpscaleFiltering", Options.CutsceneForceUpscaleFiltering);
  Options.OverrideTemporalAAJitterScale = INI_GetFloat(IniPath, L"Graphics", L"OverrideTAAJitterScale", Options.OverrideTemporalAAJitterScale);
  Options.OverrideTemporalAASharpness = INI_GetFloat(IniPath, L"Graphics", L"OverrideTAASharpness", Options.OverrideTemporalAASharpness);
  Options.UseUE4TAA = INI_GetBool(IniPath, L"Graphics", L"UseUE4TAA", Options.UseUE4TAA);
  Options.CharaLODMultiplier = INI_GetFloat(IniPath, L"Graphics", L"CharaLODMultiplier", Options.CharaLODMultiplier);
  Options.CharaDisableCull = INI_GetBool(IniPath, L"Graphics", L"CharaDisableCull", Options.CharaDisableCull);
  Options.DisableUpdateRateOptimization = INI_GetBool(IniPath, L"Graphics", L"DisableUpdateRateOptimization", Options.DisableUpdateRateOptimization);

  if (Options.MinNPCDistance >= 0 && FadeInDelta >= Options.MinNPCDistance)
    Options.MinNPCDistance = (FadeInDelta + 1);

  return true;
}

AutoGameAddress Addr_APFNpcManager__InitsDistances( // patch0: 0x140E1C860
  "APFNpcManager::InitsDistances",
  { 0xC7, 0x45, 0x00, 0x00, 0x80, 0x3B, 0x45, 0xC7, 0x45, 0x00, 0x00, 0xC0, 0x41, 0x45, 0xC7, 0x45, 0x00, 0x00, 0x00, 0xF0, 0x41 },
  -0x31
);
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

// APFNpcWalkSystem::CreateSpawnData handles spawn/despawn of walking NPCs
AutoGameAddress Addr_APFNpcWalkSystem__CreateSpawnData( // patch0: 0x140E2B980
  "APFNpcWalkSystem::CreateSpawnData",
  { 0x4C, 0x8D, 0xA9, 0xA0, 0x03, 0x00, 0x00, 0xF2, 0x0F, 0x11, 0x81, 0x80, 0x03, 0x00, 0x00 },
  -0x22
);
typedef void(*APFNpcWalkSystem__CreateSpawnData_Fn)(APFNpcWalkSystem* thisptr, const struct FPFNpcDefineID& DefineID, const struct FPFNpcWalkSpawnParams& Params);
APFNpcWalkSystem__CreateSpawnData_Fn APFNpcWalkSystem__CreateSpawnData_Orig;
void APFNpcWalkSystem__CreateSpawnData_Hook(APFNpcWalkSystem* thisptr, const struct FPFNpcDefineID& DefineID, const struct FPFNpcWalkSpawnParams& Params)
{
  FPFNpcWalkSpawnParams params = Params;
  params.DespawnMaxDistance = Options.MinNPCDistance;
  APFNpcWalkSystem__CreateSpawnData_Orig(thisptr, DefineID, params);
  // ^ updates a1 + 0x388 with the distance
  // which is then checked at 0x140E2AC96 to see if NPC should be deleted or not
}

AutoGameAddress Addr_AEncountGroup__IsSpawnRangePlayer( // patch0: 0x140DE6AE0
  "AEncountGroup::IsSpawnRangePlayer",
  { 0x48, 0x8B, 0x83, 0x58, 0x01, 0x00, 0x00, 0x0F, 0x28, 0xE8 },
  -0x46
);
typedef bool(*AEncountGroup__IsSpawnRangePlayer_Fn)(AEncountGroup* thisptr, struct FEncountAreaInfo* AreaInfo);
AEncountGroup__IsSpawnRangePlayer_Fn AEncountGroup__IsSpawnRangePlayer_Orig;
bool AEncountGroup__IsSpawnRangePlayer_Hook(AEncountGroup* thisptr, struct FEncountAreaInfo* AreaInfo)
{
  // Only mess with SpawnAreaInfo - seems BattleAreaInfo also goes through this func
  if (AreaInfo != &thisptr->SpawnAreaInfo)
    return AEncountGroup__IsSpawnRangePlayer_Orig(thisptr, AreaInfo);

  FEncountAreaInfo NewAreaInfo;
  NewAreaInfo.Range = AreaInfo->Range * Options.MonsterDistanceMultiplier;
  NewAreaInfo.HalfHeight = AreaInfo->HalfHeight * Options.MonsterDistanceMultiplier;

  return AEncountGroup__IsSpawnRangePlayer_Orig(thisptr, &NewAreaInfo);
}

AutoGameAddress Addr_UAchCharacterBuildComponent__SetCulling( // patch0: 0x1406B11B0
  "UAchCharacterBuildComponent::SetCulling",
  { 0x49, 0x8B, 0x9D, 0xE0, 0x00, 0x00, 0x00, 0x44, 0x0F, 0x44, 0xF1 },
  -0x2F
);
typedef void(*UAchCharacterBuildComponent__SetCulling_Fn)(UAchCharacterBuildComponent* thisptr, bool bCulling);
UAchCharacterBuildComponent__SetCulling_Fn UAchCharacterBuildComponent__SetCulling_Orig;
void UAchCharacterBuildComponent__SetCulling_Hook(UAchCharacterBuildComponent* thisptr, bool bCulling)
{
  // TODO: find the code that's actually reading from whatever this is setting & hook that instead, so this could be toggled at runtime
  // seems to call 2 funcs inside thisptr->PFPlayerCharacter->CapsuleComponent's vftable, one for frustum culling & one for occlusion (if PFPlayerCharacter is the correct class that is...)
  // most likely the bApplyFrustumCull / bApplyOcclusionCull fields, but didn't have any luck setting those directly, seems SetCulling might be creating a CapsuleComponent if it doesn't exist

  UAchCharacterBuildComponent__SetCulling_Orig(thisptr, Options.CharaDisableCull ? false : bCulling);
}

// Ran by DllMain, before the games code itself has ran (or any wrappers like SteamStub etc)
// Not recommended to put anything that writes to game EXE here, since it might be writing over still-encrypted data
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

AutoGameAddress Addr_FSceneView__EndFinalPostprocessSettings( // patch0: 0x14217F490
  "FSceneView::EndFinalPostprocessSettings",
  { 0x48, 0x8B, 0xC8, 0x0F, 0x2F, 0x40, 0x20, 0x76 },
  -0x38
);
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

AutoGameAddress Addr_IConsoleManager__Singleton_Offset( // patch0: 0x140143667
  "IConsoleManager::Singleton_Offset",
  { 0x48, 0x83, 0xEC, 0x38, 0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0x85, 0xC9, 0x75 },
  +0x7
);

IConsoleManager* ConsoleManager = nullptr;
IConsoleManager* GetConsoleManager()
{
  if (!ConsoleManager)
  {
    uint8_t* consoleManagerPtr = Addr_IConsoleManager__Singleton_Offset.Get();
    int offset = *(int32_t*)consoleManagerPtr;
    ConsoleManager = *(IConsoleManager**)(consoleManagerPtr + sizeof(int32_t) + offset);
  }
  return ConsoleManager;
}

void CVars_Create()
{
  if (!GetConsoleManager())
    return;

  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.MonsterDistanceMultiplier", Options.MonsterDistanceMultiplier, L"MonsterDistanceMultiplier", 0));

  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.CharaSharpenFilterStrength", Options.OverrideCharaSharpenFilterStrength, L"Adjust sharpen filter applied to characters", 0));
  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.StageSharpenFilterStrength", Options.OverrideStageSharpenFilterStrength, L"Adjust sharpen filter applied to the game world", 0));
  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.MinStageEdgeBaseDistance", Options.MinStageEdgeBaseDistance, L"Allows increasing the distance that cel-shading is applied for", 0));
  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.DisableCutsceneCA", Options.DisableCutsceneCA, L"Whether to prevent chromatic aberration from being applied (this setting affects the whole game, not just cutscenes)", 0));

  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.CutsceneRenderFix", Options.CutsceneRenderFix, L"Enable/disable skit cutscene resolution scaling", 0));
  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.CutsceneScreenPercentage", Options.CutsceneScreenPercentage, L"ScreenPercentage to apply to skit cutscenes", 0));
  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.CutsceneForceUpscaleFiltering", Options.CutsceneForceUpscaleFiltering, L"CutsceneForceUpscaleFiltering", 0));
  
  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.TAAJitterScale", Options.OverrideTemporalAAJitterScale, L"Adjust jittering applied to the games TAA (game default has this set to 0, doesn't really seem to work that well, was probably disabled for a reason...)", 0));
  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.TAASharpness", Options.OverrideTemporalAASharpness, L"Adjust sharpening effect applied to TAA", 0));

  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.UseUE4TAA", Options.UseUE4TAA, L"Use UE4's TAA method instead of TO14 custom one", 0));

  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.CharaLODMultiplier", Options.CharaLODMultiplier, L"Multiplier of Chara LODs", 0));
  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.CharaDisableCull", Options.CharaDisableCull, L"CharaDisableCull", 0));

  // usually created by UE4 inside EXPOSE_FORCE_LOD builds, which shipping builds sadly aren't
  // not too hard to reimpl though
  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"r.ForceLOD", Options.ForcedLODLevel, L"LOD level to force, -1 is off.", ECVF_Scalability | ECVF_Default | ECVF_RenderThreadSafe));

  CVarCopyValuesToCVars = ConsoleManager->RegisterConsoleVariableRef(L"pp.CopyValuesToCVars", PostProc_CopyValuesToCVars, L"If set, will copy values from FPostProcessSettings into cvars for viewing", 0);

  PostProc_AddCVars(ConsoleManager);
}

AutoGameAddress Addr_IConsoleManager__Singleton_User_Dtor_Offset( // patch0: 0x1401436A9
  "IConsoleManager::Singleton_User_Dtor_Offset",
  { 0x48, 0x8D, 0x0D },
  +0x3,
  "IConsoleManager::Singleton_Offset"
);
typedef void(*CVar_dtor_Fn)();
CVar_dtor_Fn CVar_dtor_Orig;
void CVar_dtor_Hook()
{
  CVar_dtor_Orig();

  if (!GetConsoleManager())
    return;

  ConsoleManager->UnregisterConsoleObject(CVarCopyValuesToCVars);

  for (auto& cvar : CVarPointers)
    ConsoleManager->UnregisterConsoleObject(cvar);
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

AutoGameAddress Addr_FRelevancePacket__FRelevancePacket( // patch0: 0x141A3F7F0
  "FRelevancePacket::FRelevancePacket",
  { 0x44, 0x89, 0x81, 0x48, 0x04, 0x00, 0x00, 0x44, 0x89, 0x81, 0x48, 0x06, 0x00, 0x00 },
  -0x67
);
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

struct FSystemResolution
{
  int ResX;
  int ResY;
  int WindowMode;
  bool bForceRefresh;
};

AutoGameAddress Addr_GSystemResolution_Offset(
  "GSystemResolution_Offset",
  { 0x83, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x02, 0x75, 0x00, 0x8B, 0x15, 0x00, 0x00, 0x00, 0x00, 0x44, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00 },
  +0xB
);
FSystemResolution* GSystemResolution = nullptr;

// Called during UKismetRenderingLibrary::execCreateRenderTarget2D, so we can overwrite the target size etc.
void CreateRenderTarget2D_Hook(UTextureRenderTarget2D* thisptr)
{
  if (Options.CutsceneRenderFix)
  {
    if (!GSystemResolution)
    {
      uint8_t* GSystemResolution_ptr = Addr_GSystemResolution_Offset.Get();
      GSystemResolution_ptr = GSystemResolution_ptr + sizeof(int32_t) + *(int32_t*)GSystemResolution_ptr;
      GSystemResolution = (FSystemResolution*)GSystemResolution_ptr;
    }

    double ScreenSizeX = double(GSystemResolution->ResX);
    double ScreenSizeY = double(GSystemResolution->ResY);

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

      // Ensure that the size is divisable by 4, else UE4 will create an FViewInfo with a slightly different size
      // Causing the Upscale filter to be applied to the RT
      {
        // Mostly the same as QuantizeSceneBufferSize, as used by FSceneRenderer::PrepareViewRectsForRendering()

        const uint32_t DividableBy = 4;
        const uint32_t Mask = ~(DividableBy - 1);
        thisptr->SizeX = (thisptr->SizeX + DividableBy - 1) & Mask;
        thisptr->SizeY = (thisptr->SizeY + DividableBy - 1) & Mask;
      }

      if (Options.CutsceneForceUpscaleFiltering)
      {
        // Hack to force the view to have Upscale pass applied
        thisptr->SizeX++;
      }
    }
  }

  uint8_t* vftable = *(uint8_t**)thisptr;

  typedef void(*UTexture__UpdateResource_Fn)(UTexture* thisptr);
  UTexture__UpdateResource_Fn UTexture__UpdateResource = (UTexture__UpdateResource_Fn)(*(uintptr_t*)(vftable + 0x248));

  UTexture__UpdateResource(thisptr);
}

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

AutoGameAddress Addr_FEngineLoop__Tick( // patch0: 0x1405CF1F0
  "FEngineLoop::Tick",
  { 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0xC8, 0xB2, 0x01, 0xE8, 0x00, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3D, 0x00 },
  -0x2C
);
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
    bleh->LODFalloff = ELandscapeLODFalloff::SquareRoot;
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

AutoGameAddress Addr_RefreshEngineSettings( // patch0: 0x142280550
  "RefreshEngineSettings",
  { 0x48, 0x83, 0xEC, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x83, 0xC4, 0x00, 0xE9, 0x00, 0x00, 0x00, 0x00 },
  +0
);
typedef void(*RefreshEngineSettings_Fn)();
RefreshEngineSettings_Fn RefreshEngineSettings_Orig;
void RefreshEngineSettings_Hook()
{
  // Add our cvars if we haven't added already
  // (and we've been inited)
  static bool CVarsAdded = false;
  if (inited && !CVarsAdded)
  {
    CVars_Create();
    CVarsAdded = true;
  }

  // Disable CharaLODs if CharaLODMultiplier == -1, else make sure they're enabled
  static float PrevCharaLODMultiplier = -2;
  if (!inited || PrevCharaLODMultiplier != Options.CharaLODMultiplier)
  {
    // change JLE to JMP if we're skipping them
    SafeWrite(Addr_CharacterSkipLODs_Patch.Get(), Options.CharaLODMultiplier == -1 ? uint8_t(0xEB) : uint8_t(0x7E));

    PrevCharaLODMultiplier = Options.CharaLODMultiplier;
  }

  // use AAM_TemporalAA if UseUE4TAA is set, otherwise use AAM_HybirdAA
  static bool PrevUseUE4TAA = false;
  if (!inited || PrevUseUE4TAA != Options.UseUE4TAA)
  {
    PrevUseUE4TAA = Options.UseUE4TAA;
    // Options.UseUE4TAA was changed, modify our patch...
    SafeWrite(Addr_FSceneView__SetupAntiAliasingMethod_DefaultMethod_Patch.Get(), PrevUseUE4TAA ? uint32_t(EAntiAliasingMethod::AAM_TemporalAA) : uint32_t(EAntiAliasingMethod::AAM_HybirdAA));

    // Fix EPrimaryScreenPercentageMethod::TemporalUpscale checks (when using r.TemporalAA.Upsampling = 1)
    // code is making sure AntiAliasingMethod == AAM_TemporalAA
    // but Arise added custom AAM_SMAA & AAM_HybridAA methods, and seems they forgot to fix the TemporalUpscale checks :/
    // seems AAM_TemporalAA is never actually used (even when the non-hybrid AA option is selected), so we'll apply these automatically
    SafeWrite(Addr_FSceneView__FSceneView_AAMethodCheck_Patch.Get(), PrevUseUE4TAA ? uint8_t(EAntiAliasingMethod::AAM_TemporalAA) : uint8_t(EAntiAliasingMethod::AAM_HybirdAA));
    SafeWrite(Addr_FSceneRenderer__PrepareViewRectsForRendering_AAMethodCheck_Patch.Get(), PrevUseUE4TAA ? uint8_t(EAntiAliasingMethod::AAM_TemporalAA) : uint8_t(EAntiAliasingMethod::AAM_HybirdAA));
  }

  // Keep trying to update URO cvar if we haven't already - cvar itself might not have been inited yet
  static bool UpdatedUROEnable = false;
  if (Options.DisableUpdateRateOptimization && (!inited || !UpdatedUROEnable))
  {
    // TODO:
    // Change a.URO.Enable default to 0, instead of needing to run this code more than once...
    // const uint32_t PatchAddr_UROEnable_Default = 0x4FA446 + 2;
    // SafeWriteModule(PatchAddr_UROEnable_Default, uint32_t(0));

    // TODO: change this to use IConsoleManager, instead of finding a.URO.Enable pointer directly?

    // Update a.URO.Enable value if CVar has already been created
    uint8_t* CVarUROEnable_ptr = Addr_CVarUROEnable_Offset.Get();
    int offset = *(int32_t*)CVarUROEnable_ptr;
    CVarUROEnable_ptr = CVarUROEnable_ptr + sizeof(int32_t) + offset;

    uint32_t* CVarUROEnable = *(uint32_t**)CVarUROEnable_ptr;
    if (CVarUROEnable)
    {
      CVarUROEnable[0] = CVarUROEnable[1] = 0;
      UpdatedUROEnable = true;
    }
  }

  if (inited)
    RefreshEngineSettings_Orig();
}

// InitPlugin is ran sometime after steamstub decrypted the exe - usually within the first frame or so of the game
// Some parts of the game might already be inited by this time though, requiring a different method of handling them
void InitPlugin()
{
  inited = false;

  int textSize = 0;
  void* textSection = ModuleGetSection((void*)mBaseAddress, ".text", &textSize);
  auto checksum = rc_crc32(0, (char*)textSection, textSize);

  bool foundAllAddrs = AddressManager::Instance().SearchAddresses(textSection, textSize);
  if (!foundAllAddrs)
  {
    auto failedAddrs = AddressManager::Instance().GetInvalid();
    std::stringstream msgText;
    msgText << "Failed to locate all game-addresses for patching, aborting Arise-SDK load!\r\n\r\n";
    msgText << "Failed to locate " << failedAddrs.size() << " addresses: (code checksum: 0x" << std::hex << checksum << std::dec << ", CTRL+C to copy this text)";
    for (AutoGameAddress* addr : failedAddrs)
      msgText << "\r\n" + addr->Name;

    MessageBoxA(0, msgText.str().c_str(), "Arise-SDK", 0);
    return;
  }

  PostProc_Init();

  auto GNames = Addr_GNames.Get();
  int offset = *(int32_t*)GNames;
  FName::GNames = reinterpret_cast<TNameEntryArray*>(GNames + sizeof(int32_t) + offset);

  auto GObjects = Addr_GObjects.Get();
  offset = *(int32_t*)GObjects - 0x10; // value is +0x10 into FUObjectArray struct
  UObject::GObjects = reinterpret_cast<FUObjectArray*>(GObjects + sizeof(int32_t) + offset);

  UObject::ProcessEventPtr = reinterpret_cast<ProcessEventFn>(Addr_UObject__ProcessEvent.Get());
  StaticConstructObject_Internal = reinterpret_cast<StaticConstructObject_InternalFn>(Addr_StaticConstructObject_Internal.Get());
  
  FConsoleVariable__GetFloat = reinterpret_cast<FConsoleVariable__GetFloat_Fn>(Addr_FConsoleVariable_float___GetFloat.Get());
  FConsoleVariableRef_bool__Set = reinterpret_cast<FConsoleVariableRef_bool__Set_Fn>(Addr_FConsoleVariableRef_bool___Set.Get());

  MH_Initialize();

#ifdef _DEBUG
  MH_GameHook(FEngineLoop__Tick);
#endif

  // Hook EndFinalPostprocessSettings so we can adjust the FPostProcessSettings struct
  MH_GameHook(FSceneView__EndFinalPostprocessSettings);

  // Add hook so we can destruct our added Cvars (added by RefreshEngineSettings_Hook)
  uint8_t* cvar_dtor = Addr_IConsoleManager__Singleton_User_Dtor_Offset.Get();
  cvar_dtor = cvar_dtor + sizeof(int32_t) + *(int32_t*)cvar_dtor;
  MH_CreateHook(cvar_dtor, CVar_dtor_Hook, (LPVOID*)&CVar_dtor_Orig);

  MH_GameHook(RefreshEngineSettings);

  // Add support for r.ForceLOD
  MH_GameHook(FRelevancePacket__FRelevancePacket);

  // Apply any patches requested by cvars
  // (inited must be false before calling this!)
  RefreshEngineSettings_Hook();

  if (true)
  {
    uint8_t* trampolineAddr = Addr_FAchCharacterLODData__ReadsData_Trampoline.Get();

    // Have to write a trampoline somewhere near the hooked addr, needs 12 bytes...
    uint8_t trampoline[] = { 0x48, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xE0 };
    *(uintptr_t*)&trampoline[2] = (uintptr_t)&FAchCharacterLODData_Reader_Hook;

    SafeWrite(trampolineAddr, trampoline, 12);
    PatchCall(Addr_FAchCharacterLODData__ReadsData_Hook.Get(), trampolineAddr);
  }

  // Render target resizing (fixing cutscene/skit resolution)
  if (Options.CutsceneRenderFix)
  {
    uint8_t* trampolineAddr = Addr_UKismetRenderingLibrary__execCreateRenderTarget2D_Trampoline.Get();
    uint8_t* hookAddr = Addr_UKismetRenderingLibrary__execCreateRenderTarget2D_Hook.Get();

    // Have to write a trampoline somewhere near the hooked addr, needs 12 bytes...
    uint8_t trampoline[] = { 0x48, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xE0 };
    *(uintptr_t*)&trampoline[2] = (uintptr_t)&CreateRenderTarget2D_Hook;

    SafeWrite(trampolineAddr, trampoline, 12);

    // Hook UKismetRenderingLibrary::execCreateRenderTarget2D
    SafeWrite(hookAddr, uint8_t(0x90));
    PatchCall(hookAddr + 1, trampolineAddr);

    // USceneCaptureComponent2D ctor: change "ShowFlags.TemporalAA = false; ShowFlags.MotionBlur = false;" to " = true" 
    // Not certain if ToA's custom TAA impl. works on this or not though (may need more AAM_TemporalAA checks to be fixed...)
    uint8_t* patchAddr = Addr_USceneCaptureComponent2D__USceneCaptureComponent2D_Patch.Get();
    // Change "and dword ptr [rbx+2B8h], 0FFFFDFF7h" to "or dword ptr [rbx+2B8h], 2008h", so it sets the bits instead of removing them
    uint8_t Patch_USceneCaptureComponent2D_ctor[] = { 0x81, 0x8B, 0xB8, 0x02, 0x00, 0x00, 0x08, 0x20, 0x00, 0x00 };
    SafeWrite(patchAddr, Patch_USceneCaptureComponent2D_ctor, 0xA);
  }

  if (Options.MinNPCDistance >= 0)
  {
    MH_GameHook(APFNpcManager__InitsDistances);
    MH_GameHook(APFNpcWalkSystem__CreateSpawnData);

    // UPFNpcCameraFadeComponent fade distances
    // (used by BP_PF_NPC_Walk_System / BP_PF_NPC_Walk_AIController)
    SafeWrite(Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_CameraFarFadeInDistance.Get(), Options.MinNPCDistance - FadeInDelta);
    SafeWrite(Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_CameraFarFadeOutDistance.Get(), Options.MinNPCDistance);
    SafeWrite(Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_FarFadeInDistance.Get(), Options.MinNPCDistance - FadeInDelta);
    SafeWrite(Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_FarFadeOutDistance.Get(), Options.MinNPCDistance);

    // FPFNpcCameraSettingsData ICppStructOps::Construct
    SafeWrite(Addr_FPFNpcCameraSettingsData__ICppStructOps__Construct_CameraFarFadeInDistance.Get(), Options.MinNPCDistance - FadeInDelta);
    SafeWrite(Addr_FPFNpcCameraSettingsData__ICppStructOps__Construct_CameraFarFadeOutDistance.Get(), Options.MinNPCDistance);
  }

  MH_GameHook(UAchCharacterBuildComponent__SetCulling);
  MH_GameHook(AEncountGroup__IsSpawnRangePlayer);

  // Prevent resolution change on game launch
  // (requires r.SetRes = 2560x1440f line inside Engine.ini to work properly, change with your desired resolution)
  // TODO: find a way so setres isn't required
  if (Options.EnableResolutionFix)
  {
    // Disable UGameUserSettings::PreloadResolutionSettings
    // (seems to read from an unused settings file, making game switch to 1280x720 briefly)
    SafeWrite(Addr_UGameUserSettings__PreloadResolutionSettings_CallerPatch.Get(), uint8_t(0xEB));

    // Disable r.setres being changed by game code to 1280x720
    auto addr = Addr_SetRes_720p_CallerPatch.Get();
    SafeWrite(addr, uint8_t(0x90), 4);
  }

  // Remove ECVF_Cheat flag check from FConsoleManager::ProcessUserConsoleInput
  // (allows even more cvars to be changed from dev-console)
  SafeWrite(Addr_FConsoleManager__ProcessUserConsoleInput_CheatCheck.Get(), uint8_t(0x90), 6);

  // Remove ECVF_ReadOnly flag check
  SafeWrite(Addr_FConsoleManager__ProcessUserConsoleInput_ReadOnlyCheck.Get(), uint16_t(0xC031)); // xor eax, eax

  // Flip GRHISupportsDynamicResolution to true, so r.DynamicRes.* can work
  auto* addrPtr = Addr_FDefaultDynamicResolutionState__IsSupported_GRHISupportsDynamicResolution.Get();
  offset = *(int32_t*)addrPtr;
  uint8_t* GRHISupportsDynamicResolution = reinterpret_cast<uint8_t*>(addrPtr + sizeof(int32_t) + offset);
  SafeWrite(GRHISupportsDynamicResolution, uint8_t(1));

#if 0
  // Set GSupportsTimestampRenderQueries to true
  // TODO: need to check if the addr is even correct for this (and then signature-ize it)
  const uint32_t Addr_GSupportsTimestampRenderQueries = 0x4BC99C9;
  SafeWriteModule(Addr_GSupportsTimestampRenderQueries, uint8_t(1));
#endif

  // Patch UBootSceneController::Start to call StartLogin instead of StartLogo
  if (Options.SkipIntroLogos)
    SafeWrite(Addr_BootSceneController__execStart_JmpPatch.Get(), uint16_t(0x9090)); // jne -> nop

  // Remove limit from r.Shadow.DistanceScale
  SafeWrite(Addr_GetCSMMaxDistance_Patch.Get(), uint8_t(0x90), 8);

  // Patch the games ScreenPercentage & MaxCSMResolution overwriting code to use a lower priority
  // This'll make the users Engine.ini settings preferred over the games choice - without us needing to break the games in-game setting for people that don't use Engine.ini!)
  // without patching it the game will always overwrite any INI value set for this, limiting it to 4096 and below
  // using console you can set this to 8192+, but without this there's no way to make it stick, since game will overwrite your INI changes
  SafeWrite(Addr_ScreenPercentage_SetBy_Patch.Get(), uint32_t(EConsoleVariableFlags::ECVF_SetByScalability));
  SafeWrite(Addr_MaxCSMResolution_SetBy_Patch.Get(), uint32_t(EConsoleVariableFlags::ECVF_SetByScalability));

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
