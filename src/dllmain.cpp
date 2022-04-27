#include "pch.h"

// TODO: move this to IConsoleManager.h/.cpp
typedef float(*FConsoleVariable__GetFloat_Fn)(IConsoleVariable* thisptr);
FConsoleVariable__GetFloat_Fn FConsoleVariable__GetFloat;

typedef void (*FConsoleVariableRef_bool__Set_Fn)(IConsoleVariable* thisptr, const wchar_t* InValue, EConsoleVariableFlags SetBy);
FConsoleVariableRef_bool__Set_Fn FConsoleVariableRef_bool__Set;

HMODULE DllHModule;
HMODULE GameHModule;
uintptr_t mBaseAddress;

#define SDK_VERSION "0.1.29"

// UE4 stuff
AutoGameAddress<TNameEntryArray*> Addr_GNames( // patch0: 0x14132000D, patch-2022-2: 0x1441303d8
  "GNames",
  { 0xC7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0xC8, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0xC3, 0x48, 0x89, 0x1D, 0x00, 0x00, 0x00, 0x00 },
  +0x18,
  GameAddressType::Offset4
);
GameAddress Addr_GObjects( // patch0: 0x14031627A, patch-2022-2: 0x1441351a8
  "GObjects",
  { 0x48, 0x8D, 0x05, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8D, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0x05 },
  { 0x48, 0x8D, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0x74, 0x24, 0x00, 0xC7, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0x05, 0x00, 0x00, 0x00, 0x00 },
  +3,
  GameAddressType::Offset4
);
AutoGameAddress<ProcessEventFn> Addr_UObject__ProcessEvent( // patch0: 0x1414CBA50, patch-2022-2: 0x140ff2750
  "UObject::ProcessEvent",
  { 0x4C, 0x8B, 0xF9, 0x45, 0x33, 0xF6, 0x8B, 0x49, 0x0C },
  { 0x4D, 0x8B, 0xF8, 0x45, 0x33, 0xF6, 0x44, 0x8B, 0x41, 0x0C},
  -0x30
);
AutoGameAddress<StaticConstructObject_InternalFn> Addr_StaticConstructObject_Internal( // patch0: 0x1414EA190, patch-2022-2: 0x141010280
  "StaticConstructObject_Internal",
  { 0xF7, 0x81, 0xB4, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x10, 0x45 },
  -0x3A
);
AutoGameAddress<FConsoleVariable__GetFloat_Fn> Addr_FConsoleVariable_float___GetFloat( // patch0: 0x14124A690, patch-2022-2: 0x140d97290
  "FConsoleVariable<float>::GetFloat",
  { 0x0F, 0x95, 0xC2, 0xF3, 0x0F, 0x10, 0x44, 0x93, 0x38 },
  -0x20
);
AutoGameAddress<FConsoleVariableRef_bool__Set_Fn> Addr_FConsoleVariableRef_bool___Set( // patch0: 0x14124E640, patch-2022-2: 0x140d99d40
  "FConsoleVariableRef<bool>::Set",
  { 0x8B, 0x00, 0x88, 0x43, 0x40, 0x48, 0x8B, 0xCB, 0xE8 },
  -0x30
);

// ToA patches/hooks
GameAddress Addr_FConsoleManager__ProcessUserConsoleInput_CheatCheck( // patch0: 0x14124D3A2, patch-2022-2: 0x140d98278
  "FConsoleManager::ProcessUserConsoleInput_CheatCheck",
  { 0x48, 0x8B, 0x10, 0x48, 0x8B, 0xC8, 0xFF, 0x52, 0x18, 0xA8, 0x01 },
  +0xB
);
GameAddress Addr_FConsoleManager__ProcessUserConsoleInput_ReadOnlyCheck( // patch0: 0x14124D6F9, patch-2022-2: 0x140d9851b
  "FConsoleManager::ProcessUserConsoleInput_ReadOnlyCheck",
  { 0xFF, 0x50, 0x18, 0xC1, 0xE8, 0x02, 0x24, 0x01 },
  { 0x8B, 0x75, 0x00, 0xC1, 0xE8, 0x02, 0x24, 0x01 },
  +0x6
);
GameAddress Addr_BootSceneController__execStart_NearBeginning( // patch0: 0x140F4B1FB, patch-2022-2: 0x140b44d08
  "BootSceneController::execStart_NearBeginning",
  { 0x4C, 0x03, 0xC0, 0x80, 0x3D },
  { 0x74, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xB6, 0x48, 0x02, 0x83, 0xE9, 0x01, 0x74 },
  +0
);
GameAddress Addr_BootSceneController__execStart_JmpPatch( // patch0: 0x140F4B213, patch-2022-2: 0x140b44d67
  "BootSceneController::execStart_JmpPatch",
  //{ 0x75, 0x00, 0x48, 0x8B, 0x15 },
  { 0x0F, 0x85, 0x00, 0x00, 0x00, 0x00, 0xE9, 0x00, 0x00, 0x00, 0x00, 0xCC },
  +0,
  GameAddressType::Pointer,
  &Addr_BootSceneController__execStart_NearBeginning
);
GameAddress Addr_ScreenPercentage_SetBy_Patch( // patch0: 0x140E52F76, patch-2022-2: 0x140aed643
  "ScreenPercentage_SetBy_Patch",
  { 0xBA, 0x00, 0x10, 0x00, 0x00, 0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x41, 0xB8, 0x00, 0x00, 0x00, 0x08 },
  +0xE
);
GameAddress Addr_MaxCSMResolution_SetBy_Patch( // patch0: 0x140E52ED9, patch-2022-2: 0x140aed51e
  "MaxCSMResolution_SetBy_Patch",
  { 0xBA, 0xC8, 0x00, 0x00, 0x00, 0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x41, 0xB8, 0x00, 0x00, 0x00, 0x08 },
  +0xE
);
GameAddress Addr_MaxFPS_Setter_Patch( // patch0: 0x14228A246, patch-2022-2: 0x141d096a2
  "MaxFPS_Setter_Patch",
  { 0x25, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0x44, 0xC1 },
  { 0xE3, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0x44, 0xD8, 0x66},
  +0x5
);
GameAddress Addr_FSceneView__SetupAntiAliasingMethod_DefaultMethod_Patch( // patch0: 0x142175D90, patch-2022-2: 0x141bf8661
  "FSceneView::SetupAntiAliasingMethod_DefaultMethod_Patch",
  { 0xC7, 0x83, 0xE0, 0x1B, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00 },
  +0x6
);
GameAddress Addr_FSceneView__FSceneView_AAMethodCheck_Patch( // patch0: 0x142175824, patch-2022-2: 0x141bed35e
  "FSceneView::FSceneView_AAMethodCheck_Patch",
  { 0x83, 0xBB, 0xE0, 0x1B, 0x00, 0x00, 0x02, 0x75, 0x00, 0xC7 },
  +0x6
);
GameAddress Addr_FSceneRenderer__PrepareViewRectsForRendering_AAMethodCheck_Patch( // patch0: 0x141A30117, patch-2022-2: 0x14152ae17
  "FSceneRenderer::PrepareViewRectsForRendering_AAMethodCheck_Patch",
  { 0x83, 0xB8, 0xE0, 0x1B, 0x00, 0x00, 0x02, 0x75, 0x00, 0x48, 0x8B },
  +0x6
);

extern const int FadeInDelta;

WCHAR IniPath[4096];

SDKOptions Options;

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
  Options.CutsceneAllowSubframes = INI_GetBool(IniPath, L"Graphics", L"CutsceneAllowSubframes", Options.CutsceneAllowSubframes);
  Options.OverrideTemporalAAJitterScale = INI_GetFloat(IniPath, L"Graphics", L"OverrideTAAJitterScale", Options.OverrideTemporalAAJitterScale);
  Options.OverrideTemporalAASharpness = INI_GetFloat(IniPath, L"Graphics", L"OverrideTAASharpness", Options.OverrideTemporalAASharpness);
  Options.UseUE4TAA = INI_GetBool(IniPath, L"Graphics", L"UseUE4TAA", Options.UseUE4TAA);
  Options.CharaLODMultiplier = INI_GetFloat(IniPath, L"Graphics", L"CharaLODMultiplier", Options.CharaLODMultiplier);
  Options.CharaDisableCull = INI_GetBool(IniPath, L"Graphics", L"CharaDisableCull", Options.CharaDisableCull);
  Options.DisableUpdateRateOptimization = INI_GetBool(IniPath, L"Graphics", L"DisableUpdateRateOptimization", Options.DisableUpdateRateOptimization);

  if (Options.MinNPCDistance >= 0 && FadeInDelta >= Options.MinNPCDistance)
    Options.MinNPCDistance = float(FadeInDelta + 1);

  return true;
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

GameAddress Addr_FSceneView__EndFinalPostprocessSettings( // patch0: 0x14217F490, patch-2022-2: 0x141befbf0
  "FSceneView::EndFinalPostprocessSettings",
  { 0x48, 0x8B, 0xC8, 0x0F, 0x2F, 0x40, 0x20, 0x76 },
  -0x37
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

AutoGameAddress<IConsoleManager**> Addr_IConsoleManager__Singleton( // patch0: 0x140143667, patch-2022-2: 0x143ffdb20 (value)
  "IConsoleManager::Singleton",
  { 0x48, 0x83, 0xEC, 0x38, 0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0x85, 0xC9, 0x75 },
  +0x7,
  GameAddressType::Offset4
);

IConsoleManager* ConsoleManager = nullptr;
IConsoleManager* GetConsoleManager()
{
  if (!ConsoleManager)
    ConsoleManager = *Addr_IConsoleManager__Singleton.Get();

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
  CVarPointers.push_back(ConsoleManager->RegisterConsoleVariableRef(L"sdk.CutsceneAllowSubframes", Options.CutsceneAllowSubframes, L"Allow cutscenes to have subframes added for your display rate", 0));
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

GameAddress Addr_IConsoleManager__Singleton_Offset( // patch0: 0x140143667, patch-2022-2: 0x14015e4d7
  "IConsoleManager::Singleton_Offset",
  { 0x48, 0x83, 0xEC, 0x38, 0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0x85, 0xC9, 0x75 },
  +0x7,
  GameAddressType::Pointer
);
GameAddress Addr_CVar_dtor( // patch0: 0x1401436A9
  "CVar_dtor",
  { 0x48, 0x8B, 0x10, 0xFF, 0x52, 0x38, 0x48, 0x8D, 0x0D },
  +0x9,
  GameAddressType::Offset4,
  &Addr_IConsoleManager__Singleton_Offset // find first lea rcx, XXX after where we found IConsoleManager::Singleton
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

AutoGameAddress<uintptr_t*> Addr_ULevelSequence_vftable( // patch0: 0x143E6E9E0, patch-2022-2: 0x1431b4138
  "ULevelSequence_vftable",
  { 0x48, 0xC7, 0x43, 0x48, 0x02, 0x00, 0x00, 0x00, 0x48, 0x89, 0x03, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0xBB, 0x48, 0x03, 0x00, 0x00, 0x48, 0x8D, 0x05 },
  { 0xC3, 0x8A, 0x02, 0x48, 0x83, 0xC4, 0x28, 0xC3, 0xCC, 0x40, 0x53, 0x48, 0x83, 0xEC, 0x20, 0x48, 0x8B, 0xD9, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8D, 0x05 }, // hacky sig so we can match patch0 +0x1A offset.. likely to break in an update
  +0x1A,
  GameAddressType::Offset4
);

AutoGameAddress<uintptr_t*> Addr_UActorSequence_vftable( // patch0: 0x143CBBD48, patch-2022-2: 0x142b596f8
  "UActorSequence_vftable",
  { 0x48, 0xC7, 0x43, 0x48, 0x02, 0x00, 0x00, 0x00, 0x48, 0x89, 0x03, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0xAB, 0x48, 0x03, 0x00, 0x00, 0x48, 0x8D, 0x05 },
  { 0x00, 0x10, 0x48, 0x89, 0x74, 0x24, 0x18, 0x57, 0x48, 0x83, 0xEC, 0x00, 0x48, 0x8B, 0xFA, 0x48, 0x8B, 0xF1, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8D, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0x06, 0x48, 0x8D, 0x15, 0x00, 0x00, 0x00, 0x00, 0x33, 0xC0, 0x48, 0x8D, 0x4C, 0x24, 0x50, 0x48, 0x89, 0x86, 0x48, 0x03, 0x00, 0x00, 0x48, 0x89, 0x86, 0x50, 0x03, 0x00, 0x00, 0x48, 0x89, 0x86, 0x58, 0x03, 0x00, 0x00, 0x48, 0x89, 0x86, 0x60, 0x03, 0x00, 0x00 }, // hacky sig so we can match patch0 +0x1A offset.. likely to break in an update
  +0x1A,
  GameAddressType::Offset4
);

typedef void(*ULevelSequence__PostLoad_Fn)(ULevelSequence* thisptr);
ULevelSequence__PostLoad_Fn ULevelSequence__PostLoad_Orig = (ULevelSequence__PostLoad_Fn)0x140620CF0;
void ULevelSequence__PostLoad_Hook(ULevelSequence* thisptr)
{
  ULevelSequence__PostLoad_Orig(thisptr);
  if (Options.CutsceneAllowSubframes)
    thisptr->MovieScene->EvaluationType = EMovieSceneEvaluationType::WithSubFrames;
}

typedef void(*UActorSequence__PostInitProperties_Fn)(UActorSequence* thisptr);
UActorSequence__PostInitProperties_Fn UActorSequence__PostInitProperties_Orig = (UActorSequence__PostInitProperties_Fn)0x140ABF3B0;
void UActorSequence__PostInitProperties_Hook(UActorSequence* thisptr)
{
  UActorSequence__PostInitProperties_Orig(thisptr);
  if (Options.CutsceneAllowSubframes && thisptr->MovieScene)
    thisptr->MovieScene->EvaluationType = EMovieSceneEvaluationType::WithSubFrames;
}

#ifdef _DEBUG
// hook for testing stuff
// previously was a seperate thread, but that wasn't in sync with the game engine that well
// hooking engine loop should solve that though :)

GameAddress Addr_FEngineLoop__Tick( // patch0: 0x1405CF1F0, patch-2022-2: 0x1403a60b0
  "FEngineLoop::Tick",
  { 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0xC8, 0xB2, 0x01, 0xE8, 0x00, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3D, 0x00 },
  { 0x00, 0x48, 0x8B, 0xC8, 0xB2, 0x01, 0xE8, 0x00, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0xC8 },
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

GameAddress Addr_RefreshEngineSettings( // patch0: 0x142280550, patch-2022-2: 0x141d06450
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

  // Apply distance fixes
  Fixes_Distance_Refresh();

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
    msgText << "Failed to locate " << failedAddrs.size() << " game-addresses for patching, aborting Arise-SDK load!\r\n\r\n";
    msgText << "Failed addresses: (code checksum: 0x" << std::hex << checksum << std::dec << ", CTRL+C to copy this text)";
    for (GameAddress* addr : failedAddrs)
      msgText << "\r\n" + addr->Name;

    MessageBoxA(0, msgText.str().c_str(), "Arise-SDK", 0);
    return;
  }

  PostProc_Init();

  FName::GNames = Addr_GNames.Get();
  UObject::GObjects = reinterpret_cast<FUObjectArray*>(Addr_GObjects.Get() - 0x10); // Addr_GObjects is +0x10 into FUObjectArray struct

  UObject::ProcessEventPtr = Addr_UObject__ProcessEvent.Get();
  StaticConstructObject_Internal = Addr_StaticConstructObject_Internal.Get();
  
  FConsoleVariable__GetFloat = Addr_FConsoleVariable_float___GetFloat.Get();
  FConsoleVariableRef_bool__Set = Addr_FConsoleVariableRef_bool___Set.Get();

  MH_Initialize();

#ifdef _DEBUG
  MH_GameHook(FEngineLoop__Tick);
#endif

  MH_GameHook(CVar_dtor); // for destructing our added CVars 
  MH_GameHook(FSceneView__EndFinalPostprocessSettings); // Lets us adjust the FPostProcessSettings struct

  // Apply any patches requested by cvars
  MH_GameHook(RefreshEngineSettings);
  RefreshEngineSettings_Hook(); // (inited must be false before calling this!)

  // Remove ECVF_Cheat flag check from FConsoleManager::ProcessUserConsoleInput
  // (allows even more cvars to be changed from dev-console)
  SafeWrite(Addr_FConsoleManager__ProcessUserConsoleInput_CheatCheck.Get(), uint8_t(0x90), 6);

  // Remove ECVF_ReadOnly flag check
  SafeWrite(Addr_FConsoleManager__ProcessUserConsoleInput_ReadOnlyCheck.Get(), uint16_t(0xC031)); // xor eax, eax

  // Patch UBootSceneController::Start to call StartLogin instead of StartLogo
  if (Options.SkipIntroLogos)
  {
    uint8_t nop6[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };
    SafeWrite<uint8_t>(Addr_BootSceneController__execStart_JmpPatch.Get(), nop6, 6); // jnz -> nop
  }

  // Hook ULevelSequence::PostLoad by overwriting vftable pointer to it
  // This lets us modify the ULevelSequence vars after game has loaded cutscene in
  uintptr_t* ULevelSequence_vftable = Addr_ULevelSequence_vftable.Get();
  ULevelSequence__PostLoad_Orig = (ULevelSequence__PostLoad_Fn)ULevelSequence_vftable[0x10];
  SafeWrite((uintptr_t)&ULevelSequence_vftable[0x10], (uintptr_t)&ULevelSequence__PostLoad_Hook);

  // UActorSequence seems to use the same kind of system as ULevelSequence
  // MovieScene field is even at same offset, so we can reuse ULevelSequence__PostLoad_Hook :)
  uintptr_t* UActorSequence_vftable = Addr_UActorSequence_vftable.Get();
  UActorSequence__PostInitProperties_Orig = (UActorSequence__PostInitProperties_Fn)ULevelSequence_vftable[9];
  SafeWrite((uintptr_t)&UActorSequence_vftable[9], (uintptr_t)&UActorSequence__PostInitProperties_Hook);
  SafeWrite((uintptr_t)&UActorSequence_vftable[0x10], (uintptr_t)&ULevelSequence__PostLoad_Hook);

  // Patch the games ScreenPercentage & MaxCSMResolution overwriting code to use a lower priority
  // This'll make the users Engine.ini settings preferred over the games choice - without us needing to break the games in-game setting for people that don't use Engine.ini!)
  // without patching it the game will always overwrite any INI value set for this, limiting it to 4096 and below
  // using console you can set this to 8192+, but without this there's no way to make it stick, since game will overwrite your INI changes
  SafeWrite(Addr_ScreenPercentage_SetBy_Patch.Get(), uint32_t(EConsoleVariableFlags::ECVF_SetByScalability));
  SafeWrite(Addr_MaxCSMResolution_SetBy_Patch.Get(), uint32_t(EConsoleVariableFlags::ECVF_SetByScalability));
  // MaxFPS overwriter includes code to copy existing SetBy of t.MaxFPS for some reason?
  // Probably some attempt to make sure it always overwrites regardless of older SetBy
  // Patch that to always use value from ecx instead (ECVF_SetByScalability)
  uint8_t MaxFPSPatch[] = { 0x89, 0xc8, 0x90 };
  SafeWrite(Addr_MaxFPS_Setter_Patch.Get(), MaxFPSPatch, 3);

  // Unlock dev-console & allow loading loose files
  Init_UE4Hook();

  // Apply other fixes
  Fixes_Distance_Init();
  Fixes_Resolution_Init();

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

      Proxy_Attach();
      if (InitGame())
        Proxy_InitSteamStub();

      break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
      break;
    case DLL_PROCESS_DETACH:
      Proxy_Detach();
      break;
    }
    return TRUE;
}
