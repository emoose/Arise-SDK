#include "pch.h"

#define SDK_VERSION "0.1.19"

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
  bool CutsceneRenderFix = false;
  bool CutsceneRenderFix_EnableScreenPercentage = false;
  float OverrideTemporalAAJitterScale = -1;
  float OverrideTemporalAASharpness = -1;
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
  Options.CutsceneRenderFix = INI_GetBool(IniPath, L"Graphics", L"CutsceneRenderFix", Options.CutsceneRenderFix);
  Options.CutsceneRenderFix_EnableScreenPercentage = INI_GetBool(IniPath, L"Graphics", L"CutsceneRenderFix_EnableScreenPercentage", Options.CutsceneRenderFix_EnableScreenPercentage);
  Options.OverrideTemporalAAJitterScale = INI_GetFloat(IniPath, L"Graphics", L"OverrideTAAJitterScale", Options.OverrideTemporalAAJitterScale);
  Options.OverrideTemporalAASharpness = INI_GetFloat(IniPath, L"Graphics", L"OverrideTAASharpness", Options.OverrideTemporalAASharpness);

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

FPostProcessSettings PostProcOverrides;
bool PostProc_CopyValuesToCVars;

void PostProcInit()
{
  // Init all post proc overrides to -1...
#pragma region Post-proc override init
  PostProcOverrides.WhiteTemp = -1;
  PostProcOverrides.WhiteTint = -1;
  PostProcOverrides.ColorSaturation.X = -1;
  PostProcOverrides.ColorSaturation.Y = -1;
  PostProcOverrides.ColorSaturation.Z = -1;
  PostProcOverrides.ColorSaturation.W = -1;
  PostProcOverrides.ColorContrast.X = -1;
  PostProcOverrides.ColorContrast.Y = -1;
  PostProcOverrides.ColorContrast.Z = -1;
  PostProcOverrides.ColorContrast.W = -1;
  PostProcOverrides.ColorGamma.X = -1;
  PostProcOverrides.ColorGamma.Y = -1;
  PostProcOverrides.ColorGamma.Z = -1;
  PostProcOverrides.ColorGamma.W = -1;
  PostProcOverrides.ColorGain.X = -1;
  PostProcOverrides.ColorGain.Y = -1;
  PostProcOverrides.ColorGain.Z = -1;
  PostProcOverrides.ColorGain.W = -1;
  PostProcOverrides.ColorOffset.X = -1;
  PostProcOverrides.ColorOffset.Y = -1;
  PostProcOverrides.ColorOffset.Z = -1;
  PostProcOverrides.ColorOffset.W = -1;
  PostProcOverrides.ColorSaturationShadows.X = -1;
  PostProcOverrides.ColorSaturationShadows.Y = -1;
  PostProcOverrides.ColorSaturationShadows.Z = -1;
  PostProcOverrides.ColorSaturationShadows.W = -1;
  PostProcOverrides.ColorContrastShadows.X = -1;
  PostProcOverrides.ColorContrastShadows.Y = -1;
  PostProcOverrides.ColorContrastShadows.Z = -1;
  PostProcOverrides.ColorContrastShadows.W = -1;
  PostProcOverrides.ColorGammaShadows.X = -1;
  PostProcOverrides.ColorGammaShadows.Y = -1;
  PostProcOverrides.ColorGammaShadows.Z = -1;
  PostProcOverrides.ColorGammaShadows.W = -1;
  PostProcOverrides.ColorGainShadows.X = -1;
  PostProcOverrides.ColorGainShadows.Y = -1;
  PostProcOverrides.ColorGainShadows.Z = -1;
  PostProcOverrides.ColorGainShadows.W = -1;
  PostProcOverrides.ColorOffsetShadows.X = -1;
  PostProcOverrides.ColorOffsetShadows.Y = -1;
  PostProcOverrides.ColorOffsetShadows.Z = -1;
  PostProcOverrides.ColorOffsetShadows.W = -1;
  PostProcOverrides.ColorCorrectionShadowsMax = -1;
  PostProcOverrides.ColorSaturationMidtones.X = -1;
  PostProcOverrides.ColorSaturationMidtones.Y = -1;
  PostProcOverrides.ColorSaturationMidtones.Z = -1;
  PostProcOverrides.ColorSaturationMidtones.W = -1;
  PostProcOverrides.ColorContrastMidtones.X = -1;
  PostProcOverrides.ColorContrastMidtones.Y = -1;
  PostProcOverrides.ColorContrastMidtones.Z = -1;
  PostProcOverrides.ColorContrastMidtones.W = -1;
  PostProcOverrides.ColorGammaMidtones.X = -1;
  PostProcOverrides.ColorGammaMidtones.Y = -1;
  PostProcOverrides.ColorGammaMidtones.Z = -1;
  PostProcOverrides.ColorGammaMidtones.W = -1;
  PostProcOverrides.ColorGainMidtones.X = -1;
  PostProcOverrides.ColorGainMidtones.Y = -1;
  PostProcOverrides.ColorGainMidtones.Z = -1;
  PostProcOverrides.ColorGainMidtones.W = -1;
  PostProcOverrides.ColorOffsetMidtones.X = -1;
  PostProcOverrides.ColorOffsetMidtones.Y = -1;
  PostProcOverrides.ColorOffsetMidtones.Z = -1;
  PostProcOverrides.ColorOffsetMidtones.W = -1;
  PostProcOverrides.ColorSaturationHighlights.X = -1;
  PostProcOverrides.ColorSaturationHighlights.Y = -1;
  PostProcOverrides.ColorSaturationHighlights.Z = -1;
  PostProcOverrides.ColorSaturationHighlights.W = -1;
  PostProcOverrides.ColorContrastHighlights.X = -1;
  PostProcOverrides.ColorContrastHighlights.Y = -1;
  PostProcOverrides.ColorContrastHighlights.Z = -1;
  PostProcOverrides.ColorContrastHighlights.W = -1;
  PostProcOverrides.ColorGammaHighlights.X = -1;
  PostProcOverrides.ColorGammaHighlights.Y = -1;
  PostProcOverrides.ColorGammaHighlights.Z = -1;
  PostProcOverrides.ColorGammaHighlights.W = -1;
  PostProcOverrides.ColorGainHighlights.X = -1;
  PostProcOverrides.ColorGainHighlights.Y = -1;
  PostProcOverrides.ColorGainHighlights.Z = -1;
  PostProcOverrides.ColorGainHighlights.W = -1;
  PostProcOverrides.ColorOffsetHighlights.X = -1;
  PostProcOverrides.ColorOffsetHighlights.Y = -1;
  PostProcOverrides.ColorOffsetHighlights.Z = -1;
  PostProcOverrides.ColorOffsetHighlights.W = -1;
  PostProcOverrides.ColorCorrectionHighlightsMin = -1;
  PostProcOverrides.BlueCorrection = -1;
  PostProcOverrides.ExpandGamut = -1;
  PostProcOverrides.FilmSlope = -1;
  PostProcOverrides.FilmToe = -1;
  PostProcOverrides.FilmShoulder = -1;
  PostProcOverrides.FilmBlackClip = -1;
  PostProcOverrides.FilmWhiteClip = -1;
  PostProcOverrides.FilmShadowTintBlend = -1;
  PostProcOverrides.FilmShadowTintAmount = -1;
  PostProcOverrides.FilmSaturation = -1;
  PostProcOverrides.FilmContrast = -1;
  PostProcOverrides.FilmToeAmount = -1;
  PostProcOverrides.FilmHealAmount = -1;
  PostProcOverrides.FilmDynamicRange = -1;
  PostProcOverrides.SceneFringeIntensity = -1;
  PostProcOverrides.ChromaticAberrationStartOffset = -1;
  PostProcOverrides.BloomIntensity = -1;
  PostProcOverrides.BloomThreshold = -1;
  PostProcOverrides.BloomSizeScale = -1;
  PostProcOverrides.Bloom1Size = -1;
  PostProcOverrides.Bloom2Size = -1;
  PostProcOverrides.Bloom3Size = -1;
  PostProcOverrides.Bloom4Size = -1;
  PostProcOverrides.Bloom5Size = -1;
  PostProcOverrides.Bloom6Size = -1;
  PostProcOverrides.BloomConvolutionSize = -1;
  PostProcOverrides.BloomConvolutionPreFilterMin = -1;
  PostProcOverrides.BloomConvolutionPreFilterMax = -1;
  PostProcOverrides.BloomConvolutionPreFilterMult = -1;
  PostProcOverrides.BloomConvolutionBufferScale = -1;
  PostProcOverrides.BloomDirtMaskIntensity = -1;
  PostProcOverrides.AmbientCubemapIntensity = -1;
  PostProcOverrides.CameraShutterSpeed = -1;
  PostProcOverrides.CameraISO = -1;
  PostProcOverrides.DepthOfFieldFstop = -1;
  PostProcOverrides.DepthOfFieldMinFstop = -1;
  PostProcOverrides.DepthOfFieldBladeCount = -1;
  PostProcOverrides.AutoExposureBias = -1;
  PostProcOverrides.AutoExposureLowPercent = -1;
  PostProcOverrides.AutoExposureHighPercent = -1;
  PostProcOverrides.AutoExposureMinBrightness = -1;
  PostProcOverrides.AutoExposureMaxBrightness = -1;
  PostProcOverrides.AutoExposureSpeedUp = -1;
  PostProcOverrides.AutoExposureSpeedDown = -1;
  PostProcOverrides.HistogramLogMin = -1;
  PostProcOverrides.HistogramLogMax = -1;
  PostProcOverrides.AutoExposureCalibrationConstant = -1;
  PostProcOverrides.LensFlareIntensity = -1;
  PostProcOverrides.LensFlareBokehSize = -1;
  PostProcOverrides.LensFlareThreshold = -1;
  PostProcOverrides.VignetteIntensity = -1;
  PostProcOverrides.GrainJitter = -1;
  PostProcOverrides.GrainIntensity = -1;
  PostProcOverrides.AmbientOcclusionIntensity = -1;
  PostProcOverrides.AmbientOcclusionStaticFraction = -1;
  PostProcOverrides.AmbientOcclusionRadius = -1;
  PostProcOverrides.AmbientOcclusionFadeDistance = -1;
  PostProcOverrides.AmbientOcclusionFadeRadius = -1;
  PostProcOverrides.AmbientOcclusionDistance = -1;
  PostProcOverrides.AmbientOcclusionPower = -1;
  PostProcOverrides.AmbientOcclusionBias = -1;
  PostProcOverrides.AmbientOcclusionQuality = -1;
  PostProcOverrides.AmbientOcclusionMipBlend = -1;
  PostProcOverrides.AmbientOcclusionMipScale = -1;
  PostProcOverrides.AmbientOcclusionMipThreshold = -1;
  PostProcOverrides.IndirectLightingIntensity = -1;
  PostProcOverrides.ColorGradingIntensity = -1;
  PostProcOverrides.DepthOfFieldSensorWidth = -1;
  PostProcOverrides.DepthOfFieldFocalDistance = -1;
  PostProcOverrides.DepthOfFieldDepthBlurAmount = -1;
  PostProcOverrides.DepthOfFieldDepthBlurRadius = -1;
  PostProcOverrides.DepthOfFieldFocalRegion = -1;
  PostProcOverrides.DepthOfFieldNearTransitionRegion = -1;
  PostProcOverrides.DepthOfFieldFarTransitionRegion = -1;
  PostProcOverrides.DepthOfFieldScale = -1;
  PostProcOverrides.DepthOfFieldMaxBokehSize = -1;
  PostProcOverrides.DepthOfFieldNearBlurSize = -1;
  PostProcOverrides.DepthOfFieldFarBlurSize = -1;
  PostProcOverrides.DepthOfFieldOcclusion = -1;
  PostProcOverrides.DepthOfFieldColorThreshold = -1;
  PostProcOverrides.DepthOfFieldSizeThreshold = -1;
  PostProcOverrides.DepthOfFieldSkyFocusDistance = -1;
  PostProcOverrides.DepthOfFieldVignetteSize = -1;
  PostProcOverrides.NearDoFWeightDebugDrawWeightTO14 = -1;
  PostProcOverrides.FocalDoFWeightDebugDrawWeightTO14 = -1;
  PostProcOverrides.FarDoFWeightDebugDrawWeightTO14 = -1;
  PostProcOverrides.MotionBlurAmount = -1;
  PostProcOverrides.MotionBlurMax = -1;
  PostProcOverrides.MotionBlurPerObjectSize = -1;
  PostProcOverrides.LPVIntensity = -1;
  PostProcOverrides.LPVVplInjectionBias = -1;
  PostProcOverrides.LPVSize = -1;
  PostProcOverrides.LPVSecondaryOcclusionIntensity = -1;
  PostProcOverrides.LPVSecondaryBounceIntensity = -1;
  PostProcOverrides.LPVGeometryVolumeBias = -1;
  PostProcOverrides.LPVEmissiveInjectionIntensity = -1;
  PostProcOverrides.LPVDirectionalOcclusionIntensity = -1;
  PostProcOverrides.LPVDirectionalOcclusionRadius = -1;
  PostProcOverrides.LPVDiffuseOcclusionExponent = -1;
  PostProcOverrides.LPVSpecularOcclusionExponent = -1;
  PostProcOverrides.LPVDiffuseOcclusionIntensity = -1;
  PostProcOverrides.LPVSpecularOcclusionIntensity = -1;
  PostProcOverrides.SmaaLumaEdgeThresholdTO14 = -1;
  PostProcOverrides.TemporalAASharpnessFactorTO14 = -1;
  PostProcOverrides.TemporalAACameraJitterScaleTO14 = -1;
  PostProcOverrides.ScreenSpaceReflectionIntensity = -1;
  PostProcOverrides.ScreenSpaceReflectionQuality = -1;
  PostProcOverrides.ScreenSpaceReflectionMaxRoughness = -1;
  PostProcOverrides.LPVFadeRange = -1;
  PostProcOverrides.LPVDirectionalOcclusionFadeRange = -1;
  PostProcOverrides.ScreenPercentage = -1;
  PostProcOverrides.RadialBlurStength_TO14 = -1;
  PostProcOverrides.RadialBlurLength_TO14 = -1;
  PostProcOverrides.RadialBlurCenterPosSC_X_TO14 = -1;
  PostProcOverrides.RadialBlurCenterPosSC_Y_TO14 = -1;
  PostProcOverrides.PostEffectExtDistortionParamX = -1;
  PostProcOverrides.PostEffectExtDistortionParamY = -1;
  PostProcOverrides.PostEffectExtDistortionStrength = -1;
  PostProcOverrides.PostEffectExtBlurrStrength = -1;
  PostProcOverrides.PostEffectExt_ProjectionWidth = -1;
  PostProcOverrides.PostEffectExt_ProjectionBlurWeight = -1;
  PostProcOverrides.PostEffectExt_ProjectionParam0 = -1;
  PostProcOverrides.PostEffectExt_ProjectionParam1 = -1;
  PostProcOverrides.SceneIntensityScaleTO14 = -1;
  PostProcOverrides.BattleFogStartDistanceMinTO14 = -1;
  PostProcOverrides.EnableCameraDistanceDitherFadeTO14 = -1;
  PostProcOverrides.SkyLightStrengthTO14 = -1;
  PostProcOverrides.DirectionalLightStrengthTO14 = -1;
  PostProcOverrides.IBLStrengthTO14 = -1;
  PostProcOverrides.SSAOQualityTO14 = -1;
  PostProcOverrides.SSAOStrengthTO14 = -1;
  PostProcOverrides.SSAOPowerTO14 = -1;
  PostProcOverrides.SSAOMinClampTO14 = -1;
  PostProcOverrides.SSDOStrengthTO14 = -1;
  PostProcOverrides.SSDOHeightGradationTO14 = -1;
  PostProcOverrides.SSDOTranslucencyInfuluenceTO14 = -1;
  PostProcOverrides.HorizontalShadowIntensityTO14 = -1;
  PostProcOverrides.StageShadowColorModTO14 = -1;
  PostProcOverrides.StageShadowPenumbraFadeDistanceStartTO14 = -1;
  PostProcOverrides.StageShadowPenumbraFadeDistanceRangeTO14 = -1;
  PostProcOverrides.StageShadowPenumbraNearNormalInfluenceTO14 = -1;
  PostProcOverrides.StageShadowPenumbraFarNormalInfluenceTO14 = -1;
  PostProcOverrides.StageShadowPenumbraWidthTO14 = -1;
  PostProcOverrides.StageDirectionalShadowColorModTO14 = -1;
  PostProcOverrides.StageShadowGIPaintWidthTO14 = -1;
  PostProcOverrides.StageShadowGIPaintIntensityTO14 = -1;
  PostProcOverrides.StageSSAODistanceFadeTO14 = -1;
  PostProcOverrides.StageSSAONearShadowColorStrengthTO14 = -1;
  PostProcOverrides.StageSSAOFarShadowColorStrengthTO14 = -1;
  PostProcOverrides.StageSSAORangeForShadowColorTO14 = -1;
  PostProcOverrides.StageSSAONearBaseColorModStrengthTO14 = -1;
  PostProcOverrides.StageSSAOFarBaseColorModStrengthTO14 = -1;
  PostProcOverrides.StageSSAORangeForBaseColorTO14 = -1;
  PostProcOverrides.StageScreenSpaceGIPowTO14 = -1;
  PostProcOverrides.StageScreenLowerSkyLightSSAOTO14 = -1;
  PostProcOverrides.StageDepthRimLightTO14 = -1;
  PostProcOverrides.StageDepthRimLightFoliageTO14 = -1;
  PostProcOverrides.StageEdgeNormalThresholdTO14 = -1;
  PostProcOverrides.StageEdgeLumThresholdTO14 = -1;
  PostProcOverrides.StageEdgeLumThresholdTO14_3 = -1;
  PostProcOverrides.StageEdgeDepthThresholdTO14 = -1;
  PostProcOverrides.StageEdgeColorOffsetTO14 = -1;
  PostProcOverrides.StageEdgeColorScaleTO14 = -1;
  PostProcOverrides.StageEdgeColorPow0TO14 = -1;
  PostProcOverrides.StageEdgeColorOffsetDark_TO14 = -1;
  PostProcOverrides.StageEdgeColorScaleDark_TO14 = -1;
  PostProcOverrides.StageEdgeColorPowDark_TO14 = -1;
  PostProcOverrides.StageEdgeBaseDistance_TO14 = -1;
  PostProcOverrides.StageEdgeFadeDistance_TO14 = -1;
  PostProcOverrides.StageEdgeDefaultFadeStrength_TO14 = -1;
  PostProcOverrides.StageEdgeFoliageFadeStrength_TO14 = -1;
  PostProcOverrides.StageFilterDistanceFadeTO14 = -1;
  PostProcOverrides.StageFilterDistanceFadeIntervalTO14 = -1;
  PostProcOverrides.StageFilterMinDistanceTO14 = -1;
  PostProcOverrides.StageFilterFarMinDistanceTO14 = -1;
  PostProcOverrides.StageFilterKernelParameterTO14.X = -1;
  PostProcOverrides.StageFilterKernelParameterTO14.Y = -1;
  PostProcOverrides.StageFilterKernelParameterTO14.Z = -1;
  PostProcOverrides.StageFilterKernelParameterTO14.W = -1;
  PostProcOverrides.StageSharpenFilterStrengthTO14 = -1;
  PostProcOverrides.CharaSharpenFilterStrengthTO14 = -1;
  PostProcOverrides.BackgroundInscatteringStrengthTO14 = -1;
  PostProcOverrides.BackgroundInscatteringDensityTO14 = -1;
  PostProcOverrides.FogDensityHeightScaleTO14 = -1;
  PostProcOverrides.FogDensityScaleZRangeTO14 = -1;
  PostProcOverrides.VolumetricLightIntensityTO14 = -1;
  PostProcOverrides.VolumetricLightHeightFadeTO14 = -1;
  PostProcOverrides.VolumetricFogColorRatioTO14 = -1;
  PostProcOverrides.VolumetricShadowScaleTO14 = -1;
  PostProcOverrides.VolumetricShadowFogColorRatioTO14 = -1;
  PostProcOverrides.VolumetricShadowFadeTO14 = -1;
  PostProcOverrides.EnhanceVolumetricShadowTO14 = -1;
  PostProcOverrides.VolumetricShadowDirectionalFadeTO14 = -1;
  PostProcOverrides.LocalVolumetricLightIntensityTO14 = -1;
  PostProcOverrides.LocalVolumetricLightFadeRangeTO14 = -1;
  PostProcOverrides.SpotVolumetricLightIntensityTO14 = -1;
  PostProcOverrides.SpotVolumetricLightFadeRangeTO14 = -1;
  PostProcOverrides.VolumetricFogDensityFreqTO14 = -1;
  PostProcOverrides.VolumetricFogSmoothnessTO14 = -1;
  PostProcOverrides.VolumetricFogDensityScaleTO14 = -1;
  PostProcOverrides.VolumetricFogHeightFadeTO14 = -1;
  PostProcOverrides.VolumetricFogUVAnimStrength_0_TO14 = -1;
  PostProcOverrides.VolumetricFogUVAnimStrength_1_TO14 = -1;
  PostProcOverrides.ExtLightingDirection_0_TO14.X = -1;
  PostProcOverrides.ExtLightingDirection_0_TO14.Y = -1;
  PostProcOverrides.ExtLightingDirection_0_TO14.Z = -1;
  PostProcOverrides.ExtLightingDirection_0_TO14.W = -1;
  PostProcOverrides.ExtLighitngStrength_0_TO14 = -1;
  PostProcOverrides.ExtLighitngFalloff_0_TO14 = -1;
  PostProcOverrides.ExtLightingDirection_1_TO14.X = -1;
  PostProcOverrides.ExtLightingDirection_1_TO14.Y = -1;
  PostProcOverrides.ExtLightingDirection_1_TO14.Z = -1;
  PostProcOverrides.ExtLightingDirection_1_TO14.W = -1;
  PostProcOverrides.ExtLighitngStrength_1_TO14 = -1;
  PostProcOverrides.ExtLighitngFalloff_1_TO14 = -1;
  PostProcOverrides.ExtLightingDirection_2_TO14.X = -1;
  PostProcOverrides.ExtLightingDirection_2_TO14.Y = -1;
  PostProcOverrides.ExtLightingDirection_2_TO14.Z = -1;
  PostProcOverrides.ExtLightingDirection_2_TO14.W = -1;
  PostProcOverrides.ExtLighitngStrength_2_TO14 = -1;
  PostProcOverrides.ExtLighitngFalloff_2_TO14 = -1;
  PostProcOverrides.HeightFogColorModulationWeightTO14 = -1;
  PostProcOverrides.HeightFogColorModulationRangeTO14 = -1;
  PostProcOverrides.HeightFogColorModulationFallOffTO14 = -1;
  PostProcOverrides.MapColorFadeStartHeightTO14 = -1;
  PostProcOverrides.MapColorHeightFadeIntervalTO14 = -1;
  PostProcOverrides.VolumetricCloudMapFreqTO14 = -1;
  PostProcOverrides.VolumetricCloudMapSmoothnessTO14 = -1;
  PostProcOverrides.VolumetricCloudDensityFreqTO14 = -1;
  PostProcOverrides.VolumetricCloudDensitySmoothnessTO14 = -1;
  PostProcOverrides.VolumetricCloudDensityTO14 = -1;
  PostProcOverrides.VolumetricCloudOpacityTO14 = -1;
  PostProcOverrides.VolumetricCloudStartHeightTO14 = -1;
  PostProcOverrides.VolumetricCloudLayerHeightTO14 = -1;
  PostProcOverrides.VolumetricCloudMapUVScaleTO14 = -1;
  PostProcOverrides.VolumetricCloudDenistyUVScaleTO14 = -1;
  PostProcOverrides.VolumetricCloudMapAnimSpeedU_TO14 = -1;
  PostProcOverrides.VolumetricCloudMapAnimSpeedV_TO14 = -1;
  PostProcOverrides.VolumetricCloudDensityAnimSpeedU_TO14 = -1;
  PostProcOverrides.VolumetricCloudDensityAnimSpeedV_TO14 = -1;
  PostProcOverrides.VolumetricCloudGrowAnimSpeed_TO14 = -1;
  PostProcOverrides.VolumetricCloudMapUOffsetTO14 = -1;
  PostProcOverrides.VolumetricCloudMapVOffsetTO14 = -1;
  PostProcOverrides.VolumetricCloudGrowOffsetTO14 = -1;
  PostProcOverrides.VolumetricCloudSelfShadowStrength_TO14 = -1;
  PostProcOverrides.VolumetricCloudOverallIntensity_TO14 = -1;
  PostProcOverrides.VolumetricCloudSilverLiningRange_TO14 = -1;
  PostProcOverrides.VolumetricCloudSilverLiningForward_TO14 = -1;
  PostProcOverrides.VolumetricCloudSilverLiningBackward_TO14 = -1;
  PostProcOverrides.VolumetricCloudFogStrength_TO14 = -1;
  PostProcOverrides.VolumetricCloudFogStrengthHorizon_TO14 = -1;
  PostProcOverrides.VolumetricCloudSceneCompositeHeight_TO14 = -1;
  PostProcOverrides.VolumetricCloudCastShadowStrength_TO14 = -1;
  PostProcOverrides.VolumetricCloudShadowUVScale_TO14 = -1;
  PostProcOverrides.VolumetricCloudShadowUVAnimScale_TO14 = -1;
  PostProcOverrides.VolumetricCloudShadowUVScaleFar_TO14 = -1;
  PostProcOverrides.VolumetricCloudShadowUVAnimScaleFar_TO14 = -1;
  PostProcOverrides.VolumetricCloudShadowFarFadeStart_TO14 = -1;
  PostProcOverrides.VolumetricCloudShadowFadeInterval_TO14 = -1;
  PostProcOverrides.VolumetricCloudShadowGrowAnimScale_TO14 = -1;
  PostProcOverrides.VolumetricCloudHolePositionX_TO14 = -1;
  PostProcOverrides.VolumetricCloudHolePositionY_TO14 = -1;
  PostProcOverrides.VolumetricCloudHoleRadius_TO14 = -1;
  PostProcOverrides.HeightMapCaptureCameraPosition_TO14.X = -1;
  PostProcOverrides.HeightMapCaptureCameraPosition_TO14.Y = -1;
  PostProcOverrides.HeightMapCaptureCameraPosition_TO14.Z = -1;
  PostProcOverrides.HeightMapCaptureCameraPosition_TO14.W = -1;
  PostProcOverrides.HeightMapCaptureRange_TO14 = -1;
  PostProcOverrides.HeightMapBasedShadowStrength_TO14 = -1;
  PostProcOverrides.HeightMapBasedFarShadowStrength_TO14 = -1;
  PostProcOverrides.HeightMapBasedAOStrength_TO14 = -1;
  PostProcOverrides.ShadowMapFadeStartHeight_TO14 = -1;
  PostProcOverrides.ShadowMapFadeHeightInterval_TO14 = -1;
  PostProcOverrides.FoliageLightShaftStrength_TO14 = -1;
  PostProcOverrides.ScreenSpaceLocalLightShadow_TO14 = -1;
  PostProcOverrides.PanoramaParaIntensity_TO14 = -1;
  PostProcOverrides.PanoramaParaHorizontalFalloff_TO14 = -1;
  PostProcOverrides.PanoramaParaVerticalFalloff_TO14 = -1;
  PostProcOverrides.PanoramaParaUpperColorChange_TO14 = -1;
  PostProcOverrides.PanoramaParaCharaStrength_TO14 = -1;
  PostProcOverrides.DenseGroundFogStrength_TO14 = -1;
  PostProcOverrides.DenseGroundFogIntensity_TO14 = -1;
  PostProcOverrides.DenseGroundFogHeight_TO14 = -1;
  PostProcOverrides.DenseGroundFogHeightFalloff_TO14 = -1;
  PostProcOverrides.DenseGroundFogBaseNoiseRepeatSize_TO14 = -1;
  PostProcOverrides.DenseGroundFogWindDirection_TO14.X = -1;
  PostProcOverrides.DenseGroundFogWindDirection_TO14.Y = -1;
  PostProcOverrides.DenseGroundFogWindDirection_TO14.Z = -1;
  PostProcOverrides.DenseGroundFogWindDirection_TO14.W = -1;
  PostProcOverrides.DenseGroundFogWindStrength_TO14 = -1;
  PostProcOverrides.OpaqueSSRStrength_TO14 = -1;
  PostProcOverrides.TranslucentSSRStrength_TO14 = -1;
  PostProcOverrides.SSRColorSaturation_TO14 = -1;
  PostProcOverrides.SSRFadeStartRoughness_TO14 = -1;
  PostProcOverrides.SSRFadeEndRoughness_TO14 = -1;
  PostProcOverrides.CubeMapReflectionStrength_TO14 = -1;
  PostProcOverrides.ReflectionCubemapCameraPosition_TO14.X = -1;
  PostProcOverrides.ReflectionCubemapCameraPosition_TO14.Y = -1;
  PostProcOverrides.ReflectionCubemapCameraPosition_TO14.Z = -1;
  PostProcOverrides.ReflectionCubemapCameraPosition_TO14.W = -1;
  PostProcOverrides.ReflectionCubemapBoxProxySize_TO14.X = -1;
  PostProcOverrides.ReflectionCubemapBoxProxySize_TO14.Y = -1;
  PostProcOverrides.ReflectionCubemapBoxProxySize_TO14.Z = -1;
  PostProcOverrides.ReflectionCubemapBoxProxySize_TO14.W = -1;
  PostProcOverrides.ReflectionCubeMapProxySizeScale_TO14 = -1;
  PostProcOverrides.IntensityScaleTO14 = -1;
  PostProcOverrides.DirectionalLightHeightScale = -1;
  PostProcOverrides.HairTranslucentLightStrength = -1;
  PostProcOverrides.CharaSkyLightIntensityScaleTO14 = -1;
  PostProcOverrides.CharaRimLightIntensityTO14 = -1;
  PostProcOverrides.DirectLightIntensityInShadowTO14 = -1;
  PostProcOverrides.ShadowIntensityColorCorrectionTO14 = -1;
  PostProcOverrides.DirectLightIntensityInShadowTO14_s1 = -1;
  PostProcOverrides.ShadowIntensityColorCorrectionTO14_s1 = -1;
  PostProcOverrides.DirectLightIntensityInShadowTO14_s2 = -1;
  PostProcOverrides.ShadowIntensityColorCorrectionTO14_s2 = -1;
  PostProcOverrides.IBLSpecularStrengthTO14 = -1;
  PostProcOverrides.IBLLightingContrastCharaTO14 = -1;
  PostProcOverrides.IBLRoughnessCharaTO14 = -1;
  PostProcOverrides.EdgeWidthTO14 = -1;
  PostProcOverrides.NormalEdgeThresholdTO14 = -1;
  PostProcOverrides.EdgeStrengthDaytimeTO14 = -1;
  PostProcOverrides.EdgeStrengthNightTO14 = -1;
  PostProcOverrides.EdgeIntensityDaytimeTO14 = -1;
  PostProcOverrides.EdgeIntensityNightTO14 = -1;
  PostProcOverrides.EdgeDistanceFallOffTO14 = -1;
  PostProcOverrides.EdgeDistanceFallBaseDistanceTO14 = -1;
  PostProcOverrides.FaceSelfShadowZBiasTO14 = -1;
  PostProcOverrides.SelfShadowSearchRadiusTO14 = -1;
  PostProcOverrides.SelfShadowSearchBiasTO14 = -1;
  PostProcOverrides.SelfShadowStrengthTO14 = -1;
  PostProcOverrides.EyeReflectionStrengthTO14 = -1;
  PostProcOverrides.MetalReflectionStrengthTO14 = -1;
  PostProcOverrides.MetalLocalReflectionStrengthTO14 = -1;
  PostProcOverrides.PaintingFilterDiffusionWeightTO14 = -1;
  PostProcOverrides.PaintingFilterMinColorDistanceTO14 = -1;
  PostProcOverrides.ParaEffectStrength_0_TO14 = -1;
  PostProcOverrides.ParaContrast_TO14 = -1;
  PostProcOverrides.ParaRotation_TO14 = -1;
  PostProcOverrides.MoyaEffectStrength_0_TO14 = -1;
  PostProcOverrides.MoyaAnimationSpeed_TO14 = -1;
  PostProcOverrides.DirectionalLightIntensityCharaScale = -1;
  PostProcOverrides.DirectionalLightZRotationOffset = -1;
  PostProcOverrides.DirectionalLightHeightRotationOffset = -1;
  PostProcOverrides.CutSceneDistanceFogStartDistanceTO14 = -1;
  PostProcOverrides.CutSceneDistanceFogFadeIntervalTO14 = -1;
  PostProcOverrides.CutSceneDistanceFogOpacityTO14 = -1;
  PostProcOverrides.MaskedBlurStrengthTO14 = -1;
  PostProcOverrides.MaskedBlurTextureContrastTO14 = -1;
  PostProcOverrides.SceneColorSaturationTO14 = -1;
  PostProcOverrides.SceneColorSaturationWeightCharaTO14 = -1;
  PostProcOverrides.SceneColorTintWeightCharaTO14 = -1;
  PostProcOverrides.SceneColorSaturationWeightEffectTO14 = -1;
  PostProcOverrides.SceneColorTintWeightEffectTO14 = -1;
  PostProcOverrides.CharaDirectionalLightSaturationTO14 = -1;
  PostProcOverrides.CharaDirectionalLightMinIntensityTO14 = -1;
  PostProcOverrides.CharaSkyLightSaturationTO14 = -1;
  PostProcOverrides.CharaSkyLightMinIntensityTO14 = -1;
  PostProcOverrides.CharaParticleLightIntensityTO14 = -1;
  PostProcOverrides.CharaFogStrengthScaleTO14 = -1;
  PostProcOverrides.TranslucentFogStrengthScaleTO14 = -1;
  PostProcOverrides.TranslucentFogDepthScaleTO14 = -1;
  PostProcOverrides.TranslucentFogRGBScaleTO14 = -1;
  PostProcOverrides.TranslucentFogAlphaScaleTO14 = -1;
#pragma endregion
}

const uint32_t Offset_FSceneView__FinalPostProcessSettings = 0xD60;

const uint32_t Addr_FSceneView__EndFinalPostprocessSettings = 0x217F490;
typedef void*(*FSceneView__EndFinalPostprocessSettings_Fn)(uint8_t* thisptr, void* a2);
FSceneView__EndFinalPostprocessSettings_Fn FSceneView__EndFinalPostprocessSettings_Orig;
void* FSceneView__EndFinalPostprocessSettings_Hook(uint8_t* thisptr, void* a2)
{
  auto ret = FSceneView__EndFinalPostprocessSettings_Orig(thisptr, a2);

  FPostProcessSettings* FinalPostProcessSettings = (FPostProcessSettings*)(thisptr + Offset_FSceneView__FinalPostProcessSettings);

  // OVERRIDE_POSTPROC will either:
  // - copy current value from FinalPostProcessSettings into the CVar for user to view, if pp.CopyValuesToCVars is set
  // or
  // - if CVar isn't set to -1, will override the FinalPostProcessSettings value with the CVar value

#pragma region OVERRIDE_POSTPROC - post-proc value overrides
#define OVERRIDE_POSTPROC(x) \
if (PostProc_CopyValuesToCVars) \
  PostProcOverrides.x = FinalPostProcessSettings->x; \
else if(PostProcOverrides.x != -1) \
  FinalPostProcessSettings->x = PostProcOverrides.x;

  OVERRIDE_POSTPROC(WhiteTemp);
  OVERRIDE_POSTPROC(WhiteTint);
  OVERRIDE_POSTPROC(ColorSaturation.X);
  OVERRIDE_POSTPROC(ColorSaturation.Y);
  OVERRIDE_POSTPROC(ColorSaturation.Z);
  OVERRIDE_POSTPROC(ColorSaturation.W);
  OVERRIDE_POSTPROC(ColorContrast.X);
  OVERRIDE_POSTPROC(ColorContrast.Y);
  OVERRIDE_POSTPROC(ColorContrast.Z);
  OVERRIDE_POSTPROC(ColorContrast.W);
  OVERRIDE_POSTPROC(ColorGamma.X);
  OVERRIDE_POSTPROC(ColorGamma.Y);
  OVERRIDE_POSTPROC(ColorGamma.Z);
  OVERRIDE_POSTPROC(ColorGamma.W);
  OVERRIDE_POSTPROC(ColorGain.X);
  OVERRIDE_POSTPROC(ColorGain.Y);
  OVERRIDE_POSTPROC(ColorGain.Z);
  OVERRIDE_POSTPROC(ColorGain.W);
  OVERRIDE_POSTPROC(ColorOffset.X);
  OVERRIDE_POSTPROC(ColorOffset.Y);
  OVERRIDE_POSTPROC(ColorOffset.Z);
  OVERRIDE_POSTPROC(ColorOffset.W);
  OVERRIDE_POSTPROC(ColorSaturationShadows.X);
  OVERRIDE_POSTPROC(ColorSaturationShadows.Y);
  OVERRIDE_POSTPROC(ColorSaturationShadows.Z);
  OVERRIDE_POSTPROC(ColorSaturationShadows.W);
  OVERRIDE_POSTPROC(ColorContrastShadows.X);
  OVERRIDE_POSTPROC(ColorContrastShadows.Y);
  OVERRIDE_POSTPROC(ColorContrastShadows.Z);
  OVERRIDE_POSTPROC(ColorContrastShadows.W);
  OVERRIDE_POSTPROC(ColorGammaShadows.X);
  OVERRIDE_POSTPROC(ColorGammaShadows.Y);
  OVERRIDE_POSTPROC(ColorGammaShadows.Z);
  OVERRIDE_POSTPROC(ColorGammaShadows.W);
  OVERRIDE_POSTPROC(ColorGainShadows.X);
  OVERRIDE_POSTPROC(ColorGainShadows.Y);
  OVERRIDE_POSTPROC(ColorGainShadows.Z);
  OVERRIDE_POSTPROC(ColorGainShadows.W);
  OVERRIDE_POSTPROC(ColorOffsetShadows.X);
  OVERRIDE_POSTPROC(ColorOffsetShadows.Y);
  OVERRIDE_POSTPROC(ColorOffsetShadows.Z);
  OVERRIDE_POSTPROC(ColorOffsetShadows.W);
  OVERRIDE_POSTPROC(ColorCorrectionShadowsMax);
  OVERRIDE_POSTPROC(ColorSaturationMidtones.X);
  OVERRIDE_POSTPROC(ColorSaturationMidtones.Y);
  OVERRIDE_POSTPROC(ColorSaturationMidtones.Z);
  OVERRIDE_POSTPROC(ColorSaturationMidtones.W);
  OVERRIDE_POSTPROC(ColorContrastMidtones.X);
  OVERRIDE_POSTPROC(ColorContrastMidtones.Y);
  OVERRIDE_POSTPROC(ColorContrastMidtones.Z);
  OVERRIDE_POSTPROC(ColorContrastMidtones.W);
  OVERRIDE_POSTPROC(ColorGammaMidtones.X);
  OVERRIDE_POSTPROC(ColorGammaMidtones.Y);
  OVERRIDE_POSTPROC(ColorGammaMidtones.Z);
  OVERRIDE_POSTPROC(ColorGammaMidtones.W);
  OVERRIDE_POSTPROC(ColorGainMidtones.X);
  OVERRIDE_POSTPROC(ColorGainMidtones.Y);
  OVERRIDE_POSTPROC(ColorGainMidtones.Z);
  OVERRIDE_POSTPROC(ColorGainMidtones.W);
  OVERRIDE_POSTPROC(ColorOffsetMidtones.X);
  OVERRIDE_POSTPROC(ColorOffsetMidtones.Y);
  OVERRIDE_POSTPROC(ColorOffsetMidtones.Z);
  OVERRIDE_POSTPROC(ColorOffsetMidtones.W);
  OVERRIDE_POSTPROC(ColorSaturationHighlights.X);
  OVERRIDE_POSTPROC(ColorSaturationHighlights.Y);
  OVERRIDE_POSTPROC(ColorSaturationHighlights.Z);
  OVERRIDE_POSTPROC(ColorSaturationHighlights.W);
  OVERRIDE_POSTPROC(ColorContrastHighlights.X);
  OVERRIDE_POSTPROC(ColorContrastHighlights.Y);
  OVERRIDE_POSTPROC(ColorContrastHighlights.Z);
  OVERRIDE_POSTPROC(ColorContrastHighlights.W);
  OVERRIDE_POSTPROC(ColorGammaHighlights.X);
  OVERRIDE_POSTPROC(ColorGammaHighlights.Y);
  OVERRIDE_POSTPROC(ColorGammaHighlights.Z);
  OVERRIDE_POSTPROC(ColorGammaHighlights.W);
  OVERRIDE_POSTPROC(ColorGainHighlights.X);
  OVERRIDE_POSTPROC(ColorGainHighlights.Y);
  OVERRIDE_POSTPROC(ColorGainHighlights.Z);
  OVERRIDE_POSTPROC(ColorGainHighlights.W);
  OVERRIDE_POSTPROC(ColorOffsetHighlights.X);
  OVERRIDE_POSTPROC(ColorOffsetHighlights.Y);
  OVERRIDE_POSTPROC(ColorOffsetHighlights.Z);
  OVERRIDE_POSTPROC(ColorOffsetHighlights.W);
  OVERRIDE_POSTPROC(ColorCorrectionHighlightsMin);
  OVERRIDE_POSTPROC(BlueCorrection);
  OVERRIDE_POSTPROC(ExpandGamut);
  OVERRIDE_POSTPROC(FilmSlope);
  OVERRIDE_POSTPROC(FilmToe);
  OVERRIDE_POSTPROC(FilmShoulder);
  OVERRIDE_POSTPROC(FilmBlackClip);
  OVERRIDE_POSTPROC(FilmWhiteClip);
  OVERRIDE_POSTPROC(FilmShadowTintBlend);
  OVERRIDE_POSTPROC(FilmShadowTintAmount);
  OVERRIDE_POSTPROC(FilmSaturation);
  OVERRIDE_POSTPROC(FilmContrast);
  OVERRIDE_POSTPROC(FilmToeAmount);
  OVERRIDE_POSTPROC(FilmHealAmount);
  OVERRIDE_POSTPROC(FilmDynamicRange);
  OVERRIDE_POSTPROC(SceneFringeIntensity);
  OVERRIDE_POSTPROC(ChromaticAberrationStartOffset);
  OVERRIDE_POSTPROC(BloomIntensity);
  OVERRIDE_POSTPROC(BloomThreshold);
  OVERRIDE_POSTPROC(BloomSizeScale);
  OVERRIDE_POSTPROC(Bloom1Size);
  OVERRIDE_POSTPROC(Bloom2Size);
  OVERRIDE_POSTPROC(Bloom3Size);
  OVERRIDE_POSTPROC(Bloom4Size);
  OVERRIDE_POSTPROC(Bloom5Size);
  OVERRIDE_POSTPROC(Bloom6Size);
  OVERRIDE_POSTPROC(BloomConvolutionSize);
  OVERRIDE_POSTPROC(BloomConvolutionPreFilterMin);
  OVERRIDE_POSTPROC(BloomConvolutionPreFilterMax);
  OVERRIDE_POSTPROC(BloomConvolutionPreFilterMult);
  OVERRIDE_POSTPROC(BloomConvolutionBufferScale);
  OVERRIDE_POSTPROC(BloomDirtMaskIntensity);
  OVERRIDE_POSTPROC(AmbientCubemapIntensity);
  OVERRIDE_POSTPROC(CameraShutterSpeed);
  OVERRIDE_POSTPROC(CameraISO);
  OVERRIDE_POSTPROC(DepthOfFieldFstop);
  OVERRIDE_POSTPROC(DepthOfFieldMinFstop);
  OVERRIDE_POSTPROC(DepthOfFieldBladeCount);
  OVERRIDE_POSTPROC(AutoExposureBias);
  OVERRIDE_POSTPROC(AutoExposureLowPercent);
  OVERRIDE_POSTPROC(AutoExposureHighPercent);
  OVERRIDE_POSTPROC(AutoExposureMinBrightness);
  OVERRIDE_POSTPROC(AutoExposureMaxBrightness);
  OVERRIDE_POSTPROC(AutoExposureSpeedUp);
  OVERRIDE_POSTPROC(AutoExposureSpeedDown);
  OVERRIDE_POSTPROC(HistogramLogMin);
  OVERRIDE_POSTPROC(HistogramLogMax);
  OVERRIDE_POSTPROC(AutoExposureCalibrationConstant);
  OVERRIDE_POSTPROC(LensFlareIntensity);
  OVERRIDE_POSTPROC(LensFlareBokehSize);
  OVERRIDE_POSTPROC(LensFlareThreshold);
  OVERRIDE_POSTPROC(VignetteIntensity);
  OVERRIDE_POSTPROC(GrainJitter);
  OVERRIDE_POSTPROC(GrainIntensity);
  OVERRIDE_POSTPROC(AmbientOcclusionIntensity);
  OVERRIDE_POSTPROC(AmbientOcclusionStaticFraction);
  OVERRIDE_POSTPROC(AmbientOcclusionRadius);
  OVERRIDE_POSTPROC(AmbientOcclusionFadeDistance);
  OVERRIDE_POSTPROC(AmbientOcclusionFadeRadius);
  OVERRIDE_POSTPROC(AmbientOcclusionDistance);
  OVERRIDE_POSTPROC(AmbientOcclusionPower);
  OVERRIDE_POSTPROC(AmbientOcclusionBias);
  OVERRIDE_POSTPROC(AmbientOcclusionQuality);
  OVERRIDE_POSTPROC(AmbientOcclusionMipBlend);
  OVERRIDE_POSTPROC(AmbientOcclusionMipScale);
  OVERRIDE_POSTPROC(AmbientOcclusionMipThreshold);
  OVERRIDE_POSTPROC(IndirectLightingIntensity);
  OVERRIDE_POSTPROC(ColorGradingIntensity);
  OVERRIDE_POSTPROC(DepthOfFieldSensorWidth);
  OVERRIDE_POSTPROC(DepthOfFieldFocalDistance);
  OVERRIDE_POSTPROC(DepthOfFieldDepthBlurAmount);
  OVERRIDE_POSTPROC(DepthOfFieldDepthBlurRadius);
  OVERRIDE_POSTPROC(DepthOfFieldFocalRegion);
  OVERRIDE_POSTPROC(DepthOfFieldNearTransitionRegion);
  OVERRIDE_POSTPROC(DepthOfFieldFarTransitionRegion);
  OVERRIDE_POSTPROC(DepthOfFieldScale);
  OVERRIDE_POSTPROC(DepthOfFieldMaxBokehSize);
  OVERRIDE_POSTPROC(DepthOfFieldNearBlurSize);
  OVERRIDE_POSTPROC(DepthOfFieldFarBlurSize);
  OVERRIDE_POSTPROC(DepthOfFieldOcclusion);
  OVERRIDE_POSTPROC(DepthOfFieldColorThreshold);
  OVERRIDE_POSTPROC(DepthOfFieldSizeThreshold);
  OVERRIDE_POSTPROC(DepthOfFieldSkyFocusDistance);
  OVERRIDE_POSTPROC(DepthOfFieldVignetteSize);
  OVERRIDE_POSTPROC(NearDoFWeightDebugDrawWeightTO14);
  OVERRIDE_POSTPROC(FocalDoFWeightDebugDrawWeightTO14);
  OVERRIDE_POSTPROC(FarDoFWeightDebugDrawWeightTO14);
  OVERRIDE_POSTPROC(MotionBlurAmount);
  OVERRIDE_POSTPROC(MotionBlurMax);
  OVERRIDE_POSTPROC(MotionBlurPerObjectSize);
  OVERRIDE_POSTPROC(LPVIntensity);
  OVERRIDE_POSTPROC(LPVVplInjectionBias);
  OVERRIDE_POSTPROC(LPVSize);
  OVERRIDE_POSTPROC(LPVSecondaryOcclusionIntensity);
  OVERRIDE_POSTPROC(LPVSecondaryBounceIntensity);
  OVERRIDE_POSTPROC(LPVGeometryVolumeBias);
  OVERRIDE_POSTPROC(LPVEmissiveInjectionIntensity);
  OVERRIDE_POSTPROC(LPVDirectionalOcclusionIntensity);
  OVERRIDE_POSTPROC(LPVDirectionalOcclusionRadius);
  OVERRIDE_POSTPROC(LPVDiffuseOcclusionExponent);
  OVERRIDE_POSTPROC(LPVSpecularOcclusionExponent);
  OVERRIDE_POSTPROC(LPVDiffuseOcclusionIntensity);
  OVERRIDE_POSTPROC(LPVSpecularOcclusionIntensity);
  OVERRIDE_POSTPROC(SmaaLumaEdgeThresholdTO14);
  OVERRIDE_POSTPROC(TemporalAASharpnessFactorTO14);
  OVERRIDE_POSTPROC(TemporalAACameraJitterScaleTO14);
  OVERRIDE_POSTPROC(ScreenSpaceReflectionIntensity);
  OVERRIDE_POSTPROC(ScreenSpaceReflectionQuality);
  OVERRIDE_POSTPROC(ScreenSpaceReflectionMaxRoughness);
  OVERRIDE_POSTPROC(LPVFadeRange);
  OVERRIDE_POSTPROC(LPVDirectionalOcclusionFadeRange);
  OVERRIDE_POSTPROC(ScreenPercentage);
  OVERRIDE_POSTPROC(RadialBlurStength_TO14);
  OVERRIDE_POSTPROC(RadialBlurLength_TO14);
  OVERRIDE_POSTPROC(RadialBlurCenterPosSC_X_TO14);
  OVERRIDE_POSTPROC(RadialBlurCenterPosSC_Y_TO14);
  OVERRIDE_POSTPROC(PostEffectExtDistortionParamX);
  OVERRIDE_POSTPROC(PostEffectExtDistortionParamY);
  OVERRIDE_POSTPROC(PostEffectExtDistortionStrength);
  OVERRIDE_POSTPROC(PostEffectExtBlurrStrength);
  OVERRIDE_POSTPROC(PostEffectExt_ProjectionWidth);
  OVERRIDE_POSTPROC(PostEffectExt_ProjectionBlurWeight);
  OVERRIDE_POSTPROC(PostEffectExt_ProjectionParam0);
  OVERRIDE_POSTPROC(PostEffectExt_ProjectionParam1);
  OVERRIDE_POSTPROC(SceneIntensityScaleTO14);
  OVERRIDE_POSTPROC(BattleFogStartDistanceMinTO14);
  OVERRIDE_POSTPROC(EnableCameraDistanceDitherFadeTO14);
  OVERRIDE_POSTPROC(SkyLightStrengthTO14);
  OVERRIDE_POSTPROC(DirectionalLightStrengthTO14);
  OVERRIDE_POSTPROC(IBLStrengthTO14);
  OVERRIDE_POSTPROC(SSAOQualityTO14);
  OVERRIDE_POSTPROC(SSAOStrengthTO14);
  OVERRIDE_POSTPROC(SSAOPowerTO14);
  OVERRIDE_POSTPROC(SSAOMinClampTO14);
  OVERRIDE_POSTPROC(SSDOStrengthTO14);
  OVERRIDE_POSTPROC(SSDOHeightGradationTO14);
  OVERRIDE_POSTPROC(SSDOTranslucencyInfuluenceTO14);
  OVERRIDE_POSTPROC(HorizontalShadowIntensityTO14);
  OVERRIDE_POSTPROC(StageShadowColorModTO14);
  OVERRIDE_POSTPROC(StageShadowPenumbraFadeDistanceStartTO14);
  OVERRIDE_POSTPROC(StageShadowPenumbraFadeDistanceRangeTO14);
  OVERRIDE_POSTPROC(StageShadowPenumbraNearNormalInfluenceTO14);
  OVERRIDE_POSTPROC(StageShadowPenumbraFarNormalInfluenceTO14);
  OVERRIDE_POSTPROC(StageShadowPenumbraWidthTO14);
  OVERRIDE_POSTPROC(StageDirectionalShadowColorModTO14);
  OVERRIDE_POSTPROC(StageShadowGIPaintWidthTO14);
  OVERRIDE_POSTPROC(StageShadowGIPaintIntensityTO14);
  OVERRIDE_POSTPROC(StageSSAODistanceFadeTO14);
  OVERRIDE_POSTPROC(StageSSAONearShadowColorStrengthTO14);
  OVERRIDE_POSTPROC(StageSSAOFarShadowColorStrengthTO14);
  OVERRIDE_POSTPROC(StageSSAORangeForShadowColorTO14);
  OVERRIDE_POSTPROC(StageSSAONearBaseColorModStrengthTO14);
  OVERRIDE_POSTPROC(StageSSAOFarBaseColorModStrengthTO14);
  OVERRIDE_POSTPROC(StageSSAORangeForBaseColorTO14);
  OVERRIDE_POSTPROC(StageScreenSpaceGIPowTO14);
  OVERRIDE_POSTPROC(StageScreenLowerSkyLightSSAOTO14);
  OVERRIDE_POSTPROC(StageDepthRimLightTO14);
  OVERRIDE_POSTPROC(StageDepthRimLightFoliageTO14);
  OVERRIDE_POSTPROC(StageEdgeNormalThresholdTO14);
  OVERRIDE_POSTPROC(StageEdgeLumThresholdTO14);
  OVERRIDE_POSTPROC(StageEdgeLumThresholdTO14_3);
  OVERRIDE_POSTPROC(StageEdgeDepthThresholdTO14);
  OVERRIDE_POSTPROC(StageEdgeColorOffsetTO14);
  OVERRIDE_POSTPROC(StageEdgeColorScaleTO14);
  OVERRIDE_POSTPROC(StageEdgeColorPow0TO14);
  OVERRIDE_POSTPROC(StageEdgeColorOffsetDark_TO14);
  OVERRIDE_POSTPROC(StageEdgeColorScaleDark_TO14);
  OVERRIDE_POSTPROC(StageEdgeColorPowDark_TO14);
  OVERRIDE_POSTPROC(StageEdgeBaseDistance_TO14);
  OVERRIDE_POSTPROC(StageEdgeFadeDistance_TO14);
  OVERRIDE_POSTPROC(StageEdgeDefaultFadeStrength_TO14);
  OVERRIDE_POSTPROC(StageEdgeFoliageFadeStrength_TO14);
  OVERRIDE_POSTPROC(StageFilterDistanceFadeTO14);
  OVERRIDE_POSTPROC(StageFilterDistanceFadeIntervalTO14);
  OVERRIDE_POSTPROC(StageFilterMinDistanceTO14);
  OVERRIDE_POSTPROC(StageFilterFarMinDistanceTO14);
  OVERRIDE_POSTPROC(StageFilterKernelParameterTO14.X);
  OVERRIDE_POSTPROC(StageFilterKernelParameterTO14.Y);
  OVERRIDE_POSTPROC(StageFilterKernelParameterTO14.Z);
  OVERRIDE_POSTPROC(StageFilterKernelParameterTO14.W);
  OVERRIDE_POSTPROC(StageSharpenFilterStrengthTO14);
  OVERRIDE_POSTPROC(CharaSharpenFilterStrengthTO14);
  OVERRIDE_POSTPROC(BackgroundInscatteringStrengthTO14);
  OVERRIDE_POSTPROC(BackgroundInscatteringDensityTO14);
  OVERRIDE_POSTPROC(FogDensityHeightScaleTO14);
  OVERRIDE_POSTPROC(FogDensityScaleZRangeTO14);
  OVERRIDE_POSTPROC(VolumetricLightIntensityTO14);
  OVERRIDE_POSTPROC(VolumetricLightHeightFadeTO14);
  OVERRIDE_POSTPROC(VolumetricFogColorRatioTO14);
  OVERRIDE_POSTPROC(VolumetricShadowScaleTO14);
  OVERRIDE_POSTPROC(VolumetricShadowFogColorRatioTO14);
  OVERRIDE_POSTPROC(VolumetricShadowFadeTO14);
  OVERRIDE_POSTPROC(EnhanceVolumetricShadowTO14);
  OVERRIDE_POSTPROC(VolumetricShadowDirectionalFadeTO14);
  OVERRIDE_POSTPROC(LocalVolumetricLightIntensityTO14);
  OVERRIDE_POSTPROC(LocalVolumetricLightFadeRangeTO14);
  OVERRIDE_POSTPROC(SpotVolumetricLightIntensityTO14);
  OVERRIDE_POSTPROC(SpotVolumetricLightFadeRangeTO14);
  OVERRIDE_POSTPROC(VolumetricFogDensityFreqTO14);
  OVERRIDE_POSTPROC(VolumetricFogSmoothnessTO14);
  OVERRIDE_POSTPROC(VolumetricFogDensityScaleTO14);
  OVERRIDE_POSTPROC(VolumetricFogHeightFadeTO14);
  OVERRIDE_POSTPROC(VolumetricFogUVAnimStrength_0_TO14);
  OVERRIDE_POSTPROC(VolumetricFogUVAnimStrength_1_TO14);
  OVERRIDE_POSTPROC(ExtLightingDirection_0_TO14.X);
  OVERRIDE_POSTPROC(ExtLightingDirection_0_TO14.Y);
  OVERRIDE_POSTPROC(ExtLightingDirection_0_TO14.Z);
  OVERRIDE_POSTPROC(ExtLightingDirection_0_TO14.W);
  OVERRIDE_POSTPROC(ExtLighitngStrength_0_TO14);
  OVERRIDE_POSTPROC(ExtLighitngFalloff_0_TO14);
  OVERRIDE_POSTPROC(ExtLightingDirection_1_TO14.X);
  OVERRIDE_POSTPROC(ExtLightingDirection_1_TO14.Y);
  OVERRIDE_POSTPROC(ExtLightingDirection_1_TO14.Z);
  OVERRIDE_POSTPROC(ExtLightingDirection_1_TO14.W);
  OVERRIDE_POSTPROC(ExtLighitngStrength_1_TO14);
  OVERRIDE_POSTPROC(ExtLighitngFalloff_1_TO14);
  OVERRIDE_POSTPROC(ExtLightingDirection_2_TO14.X);
  OVERRIDE_POSTPROC(ExtLightingDirection_2_TO14.Y);
  OVERRIDE_POSTPROC(ExtLightingDirection_2_TO14.Z);
  OVERRIDE_POSTPROC(ExtLightingDirection_2_TO14.W);
  OVERRIDE_POSTPROC(ExtLighitngStrength_2_TO14);
  OVERRIDE_POSTPROC(ExtLighitngFalloff_2_TO14);
  OVERRIDE_POSTPROC(HeightFogColorModulationWeightTO14);
  OVERRIDE_POSTPROC(HeightFogColorModulationRangeTO14);
  OVERRIDE_POSTPROC(HeightFogColorModulationFallOffTO14);
  OVERRIDE_POSTPROC(MapColorFadeStartHeightTO14);
  OVERRIDE_POSTPROC(MapColorHeightFadeIntervalTO14);
  OVERRIDE_POSTPROC(VolumetricCloudMapFreqTO14);
  OVERRIDE_POSTPROC(VolumetricCloudMapSmoothnessTO14);
  OVERRIDE_POSTPROC(VolumetricCloudDensityFreqTO14);
  OVERRIDE_POSTPROC(VolumetricCloudDensitySmoothnessTO14);
  OVERRIDE_POSTPROC(VolumetricCloudDensityTO14);
  OVERRIDE_POSTPROC(VolumetricCloudOpacityTO14);
  OVERRIDE_POSTPROC(VolumetricCloudStartHeightTO14);
  OVERRIDE_POSTPROC(VolumetricCloudLayerHeightTO14);
  OVERRIDE_POSTPROC(VolumetricCloudMapUVScaleTO14);
  OVERRIDE_POSTPROC(VolumetricCloudDenistyUVScaleTO14);
  OVERRIDE_POSTPROC(VolumetricCloudMapAnimSpeedU_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudMapAnimSpeedV_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudDensityAnimSpeedU_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudDensityAnimSpeedV_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudGrowAnimSpeed_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudMapUOffsetTO14);
  OVERRIDE_POSTPROC(VolumetricCloudMapVOffsetTO14);
  OVERRIDE_POSTPROC(VolumetricCloudGrowOffsetTO14);
  OVERRIDE_POSTPROC(VolumetricCloudSelfShadowStrength_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudOverallIntensity_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudSilverLiningRange_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudSilverLiningForward_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudSilverLiningBackward_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudFogStrength_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudFogStrengthHorizon_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudSceneCompositeHeight_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudCastShadowStrength_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudShadowUVScale_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudShadowUVAnimScale_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudShadowUVScaleFar_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudShadowUVAnimScaleFar_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudShadowFarFadeStart_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudShadowFadeInterval_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudShadowGrowAnimScale_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudHolePositionX_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudHolePositionY_TO14);
  OVERRIDE_POSTPROC(VolumetricCloudHoleRadius_TO14);
  OVERRIDE_POSTPROC(HeightMapCaptureCameraPosition_TO14.X);
  OVERRIDE_POSTPROC(HeightMapCaptureCameraPosition_TO14.Y);
  OVERRIDE_POSTPROC(HeightMapCaptureCameraPosition_TO14.Z);
  OVERRIDE_POSTPROC(HeightMapCaptureCameraPosition_TO14.W);
  OVERRIDE_POSTPROC(HeightMapCaptureRange_TO14);
  OVERRIDE_POSTPROC(HeightMapBasedShadowStrength_TO14);
  OVERRIDE_POSTPROC(HeightMapBasedFarShadowStrength_TO14);
  OVERRIDE_POSTPROC(HeightMapBasedAOStrength_TO14);
  OVERRIDE_POSTPROC(ShadowMapFadeStartHeight_TO14);
  OVERRIDE_POSTPROC(ShadowMapFadeHeightInterval_TO14);
  OVERRIDE_POSTPROC(FoliageLightShaftStrength_TO14);
  OVERRIDE_POSTPROC(ScreenSpaceLocalLightShadow_TO14);
  OVERRIDE_POSTPROC(PanoramaParaIntensity_TO14);
  OVERRIDE_POSTPROC(PanoramaParaHorizontalFalloff_TO14);
  OVERRIDE_POSTPROC(PanoramaParaVerticalFalloff_TO14);
  OVERRIDE_POSTPROC(PanoramaParaUpperColorChange_TO14);
  OVERRIDE_POSTPROC(PanoramaParaCharaStrength_TO14);
  OVERRIDE_POSTPROC(DenseGroundFogStrength_TO14);
  OVERRIDE_POSTPROC(DenseGroundFogIntensity_TO14);
  OVERRIDE_POSTPROC(DenseGroundFogHeight_TO14);
  OVERRIDE_POSTPROC(DenseGroundFogHeightFalloff_TO14);
  OVERRIDE_POSTPROC(DenseGroundFogBaseNoiseRepeatSize_TO14);
  OVERRIDE_POSTPROC(DenseGroundFogWindDirection_TO14.X);
  OVERRIDE_POSTPROC(DenseGroundFogWindDirection_TO14.Y);
  OVERRIDE_POSTPROC(DenseGroundFogWindDirection_TO14.Z);
  OVERRIDE_POSTPROC(DenseGroundFogWindDirection_TO14.W);
  OVERRIDE_POSTPROC(DenseGroundFogWindStrength_TO14);
  OVERRIDE_POSTPROC(OpaqueSSRStrength_TO14);
  OVERRIDE_POSTPROC(TranslucentSSRStrength_TO14);
  OVERRIDE_POSTPROC(SSRColorSaturation_TO14);
  OVERRIDE_POSTPROC(SSRFadeStartRoughness_TO14);
  OVERRIDE_POSTPROC(SSRFadeEndRoughness_TO14);
  OVERRIDE_POSTPROC(CubeMapReflectionStrength_TO14);
  OVERRIDE_POSTPROC(ReflectionCubemapCameraPosition_TO14.X);
  OVERRIDE_POSTPROC(ReflectionCubemapCameraPosition_TO14.Y);
  OVERRIDE_POSTPROC(ReflectionCubemapCameraPosition_TO14.Z);
  OVERRIDE_POSTPROC(ReflectionCubemapCameraPosition_TO14.W);
  OVERRIDE_POSTPROC(ReflectionCubemapBoxProxySize_TO14.X);
  OVERRIDE_POSTPROC(ReflectionCubemapBoxProxySize_TO14.Y);
  OVERRIDE_POSTPROC(ReflectionCubemapBoxProxySize_TO14.Z);
  OVERRIDE_POSTPROC(ReflectionCubemapBoxProxySize_TO14.W);
  OVERRIDE_POSTPROC(ReflectionCubeMapProxySizeScale_TO14);
  OVERRIDE_POSTPROC(IntensityScaleTO14);
  OVERRIDE_POSTPROC(DirectionalLightHeightScale);
  OVERRIDE_POSTPROC(HairTranslucentLightStrength);
  OVERRIDE_POSTPROC(CharaSkyLightIntensityScaleTO14);
  OVERRIDE_POSTPROC(CharaRimLightIntensityTO14);
  OVERRIDE_POSTPROC(DirectLightIntensityInShadowTO14);
  OVERRIDE_POSTPROC(ShadowIntensityColorCorrectionTO14);
  OVERRIDE_POSTPROC(DirectLightIntensityInShadowTO14_s1);
  OVERRIDE_POSTPROC(ShadowIntensityColorCorrectionTO14_s1);
  OVERRIDE_POSTPROC(DirectLightIntensityInShadowTO14_s2);
  OVERRIDE_POSTPROC(ShadowIntensityColorCorrectionTO14_s2);
  OVERRIDE_POSTPROC(IBLSpecularStrengthTO14);
  OVERRIDE_POSTPROC(IBLLightingContrastCharaTO14);
  OVERRIDE_POSTPROC(IBLRoughnessCharaTO14);
  OVERRIDE_POSTPROC(EdgeWidthTO14);
  OVERRIDE_POSTPROC(NormalEdgeThresholdTO14);
  OVERRIDE_POSTPROC(EdgeStrengthDaytimeTO14);
  OVERRIDE_POSTPROC(EdgeStrengthNightTO14);
  OVERRIDE_POSTPROC(EdgeIntensityDaytimeTO14);
  OVERRIDE_POSTPROC(EdgeIntensityNightTO14);
  OVERRIDE_POSTPROC(EdgeDistanceFallOffTO14);
  OVERRIDE_POSTPROC(EdgeDistanceFallBaseDistanceTO14);
  OVERRIDE_POSTPROC(FaceSelfShadowZBiasTO14);
  OVERRIDE_POSTPROC(SelfShadowSearchRadiusTO14);
  OVERRIDE_POSTPROC(SelfShadowSearchBiasTO14);
  OVERRIDE_POSTPROC(SelfShadowStrengthTO14);
  OVERRIDE_POSTPROC(EyeReflectionStrengthTO14);
  OVERRIDE_POSTPROC(MetalReflectionStrengthTO14);
  OVERRIDE_POSTPROC(MetalLocalReflectionStrengthTO14);
  OVERRIDE_POSTPROC(PaintingFilterDiffusionWeightTO14);
  OVERRIDE_POSTPROC(PaintingFilterMinColorDistanceTO14);
  OVERRIDE_POSTPROC(ParaEffectStrength_0_TO14);
  OVERRIDE_POSTPROC(ParaContrast_TO14);
  OVERRIDE_POSTPROC(ParaRotation_TO14);
  OVERRIDE_POSTPROC(MoyaEffectStrength_0_TO14);
  OVERRIDE_POSTPROC(MoyaAnimationSpeed_TO14);
  OVERRIDE_POSTPROC(DirectionalLightIntensityCharaScale);
  OVERRIDE_POSTPROC(DirectionalLightZRotationOffset);
  OVERRIDE_POSTPROC(DirectionalLightHeightRotationOffset);
  OVERRIDE_POSTPROC(CutSceneDistanceFogStartDistanceTO14);
  OVERRIDE_POSTPROC(CutSceneDistanceFogFadeIntervalTO14);
  OVERRIDE_POSTPROC(CutSceneDistanceFogOpacityTO14);
  OVERRIDE_POSTPROC(MaskedBlurStrengthTO14);
  OVERRIDE_POSTPROC(MaskedBlurTextureContrastTO14);
  OVERRIDE_POSTPROC(SceneColorSaturationTO14);
  OVERRIDE_POSTPROC(SceneColorSaturationWeightCharaTO14);
  OVERRIDE_POSTPROC(SceneColorTintWeightCharaTO14);
  OVERRIDE_POSTPROC(SceneColorSaturationWeightEffectTO14);
  OVERRIDE_POSTPROC(SceneColorTintWeightEffectTO14);
  OVERRIDE_POSTPROC(CharaDirectionalLightSaturationTO14);
  OVERRIDE_POSTPROC(CharaDirectionalLightMinIntensityTO14);
  OVERRIDE_POSTPROC(CharaSkyLightSaturationTO14);
  OVERRIDE_POSTPROC(CharaSkyLightMinIntensityTO14);
  OVERRIDE_POSTPROC(CharaParticleLightIntensityTO14);
  OVERRIDE_POSTPROC(CharaFogStrengthScaleTO14);
  OVERRIDE_POSTPROC(TranslucentFogStrengthScaleTO14);
  OVERRIDE_POSTPROC(TranslucentFogDepthScaleTO14);
  OVERRIDE_POSTPROC(TranslucentFogRGBScaleTO14);
  OVERRIDE_POSTPROC(TranslucentFogAlphaScaleTO14);
#undef OVERRIDE_POSTPROC
#pragma endregion

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

IConsoleVariable* CVarCharaSharpenFilterStrength;
IConsoleVariable* CVarStageSharpenFilterStrength;
IConsoleVariable* CVarMinStageEdgeBaseDistance;
IConsoleVariable* CVarDisableCutsceneCA;
IConsoleVariable* CVarCutsceneRenderFix;
IConsoleVariable* CVarCutsceneRenderFixScreenPercentage;
IConsoleVariable* CVarForceLOD;
IConsoleVariable* CVarTAAJitterScale;
IConsoleVariable* CVarTAASharpness;
std::vector<IConsoleVariable*> CVarsPostProc;

const uint32_t Addr_IConsoleManager__Singleton = 0x4A97AC8;

const uint32_t Addr_CVarSystemResolution_ctor = 0x4F46C0;
typedef void(*CVarSystemResolution_ctor_Fn)();
CVarSystemResolution_ctor_Fn CVarSystemResolution_ctor_Orig;
void CVarSystemResolution_ctor_Hook()
{
  CVarSystemResolution_ctor_Orig();
  auto consoleManager = *(IConsoleManager**)(mBaseAddress + Addr_IConsoleManager__Singleton);

  CVarCharaSharpenFilterStrength = consoleManager->RegisterConsoleVariableRef(L"sdk.CharaSharpenFilterStrength", Options.OverrideCharaSharpenFilterStrength, L"Adjust sharpen filter applied to characters", 0);
  CVarStageSharpenFilterStrength = consoleManager->RegisterConsoleVariableRef(L"sdk.StageSharpenFilterStrength", Options.OverrideStageSharpenFilterStrength, L"Adjust sharpen filter applied to the game world", 0);
  CVarMinStageEdgeBaseDistance = consoleManager->RegisterConsoleVariableRef(L"sdk.MinStageEdgeBaseDistance", Options.MinStageEdgeBaseDistance, L"Allows increasing the distance that cel-shading is applied for", 0);
  CVarDisableCutsceneCA = consoleManager->RegisterConsoleVariableRef(L"sdk.DisableCutsceneCA", Options.DisableCutsceneCA, L"Whether to prevent chromatic aberration from being applied (this setting affects the whole game, not just cutscenes)", 0);

  CVarCutsceneRenderFix = consoleManager->RegisterConsoleVariableRef(L"sdk.CutsceneRenderFix", Options.CutsceneRenderFix, L"Enable/disable skit cutscene resolution scaling", 0);
  CVarCutsceneRenderFixScreenPercentage = consoleManager->RegisterConsoleVariableRef(L"sdk.CutsceneRenderFixScreenPercentage", Options.CutsceneRenderFix_EnableScreenPercentage, L"Whether or not r.ScreenPercentage should affect skit cutscene resolution", 0);

  CVarTAAJitterScale = consoleManager->RegisterConsoleVariableRef(L"sdk.TAAJitterScale", Options.OverrideTemporalAAJitterScale, L"Adjust jittering applied to the games TAA (game default has this set to 0, doesn't really seem to work that well, was probably disabled for a reason...)", 0);
  CVarTAASharpness = consoleManager->RegisterConsoleVariableRef(L"sdk.TAASharpness", Options.OverrideTemporalAASharpness, L"Adjust sharpening effect applied to TAA", 0);

  // usually created by UE4 inside EXPOSE_FORCE_LOD builds, which shipping builds sadly aren't
  // not too hard to reimpl though
  CVarForceLOD = consoleManager->RegisterConsoleVariableRef(L"r.ForceLOD", Options.ForcedLODLevel, L"LOD level to force, -1 is off.", ECVF_Scalability | ECVF_Default | ECVF_RenderThreadSafe);

  CVarsPostProc.push_back(consoleManager->RegisterConsoleVariableRef(L"pp.CopyValuesToCVars", PostProc_CopyValuesToCVars, L"If set, will copy values from FPostProcessSettings into cvars for viewing", 0));

  // Add CVars for each supported FPostProcessSetting value

#pragma region FPostProcessSetting CVars

#define OVERRIDE_CVAR(x) \
  CVarsPostProc.push_back(consoleManager->RegisterConsoleVariableRef(L"" #x, PostProcOverrides.x, L"", 0));

  OVERRIDE_CVAR(WhiteTemp);
  OVERRIDE_CVAR(WhiteTint);
  OVERRIDE_CVAR(ColorSaturation.X);
  OVERRIDE_CVAR(ColorSaturation.Y);
  OVERRIDE_CVAR(ColorSaturation.Z);
  OVERRIDE_CVAR(ColorSaturation.W);
  OVERRIDE_CVAR(ColorContrast.X);
  OVERRIDE_CVAR(ColorContrast.Y);
  OVERRIDE_CVAR(ColorContrast.Z);
  OVERRIDE_CVAR(ColorContrast.W);
  OVERRIDE_CVAR(ColorGamma.X);
  OVERRIDE_CVAR(ColorGamma.Y);
  OVERRIDE_CVAR(ColorGamma.Z);
  OVERRIDE_CVAR(ColorGamma.W);
  OVERRIDE_CVAR(ColorGain.X);
  OVERRIDE_CVAR(ColorGain.Y);
  OVERRIDE_CVAR(ColorGain.Z);
  OVERRIDE_CVAR(ColorGain.W);
  OVERRIDE_CVAR(ColorOffset.X);
  OVERRIDE_CVAR(ColorOffset.Y);
  OVERRIDE_CVAR(ColorOffset.Z);
  OVERRIDE_CVAR(ColorOffset.W);
  OVERRIDE_CVAR(ColorSaturationShadows.X);
  OVERRIDE_CVAR(ColorSaturationShadows.Y);
  OVERRIDE_CVAR(ColorSaturationShadows.Z);
  OVERRIDE_CVAR(ColorSaturationShadows.W);
  OVERRIDE_CVAR(ColorContrastShadows.X);
  OVERRIDE_CVAR(ColorContrastShadows.Y);
  OVERRIDE_CVAR(ColorContrastShadows.Z);
  OVERRIDE_CVAR(ColorContrastShadows.W);
  OVERRIDE_CVAR(ColorGammaShadows.X);
  OVERRIDE_CVAR(ColorGammaShadows.Y);
  OVERRIDE_CVAR(ColorGammaShadows.Z);
  OVERRIDE_CVAR(ColorGammaShadows.W);
  OVERRIDE_CVAR(ColorGainShadows.X);
  OVERRIDE_CVAR(ColorGainShadows.Y);
  OVERRIDE_CVAR(ColorGainShadows.Z);
  OVERRIDE_CVAR(ColorGainShadows.W);
  OVERRIDE_CVAR(ColorOffsetShadows.X);
  OVERRIDE_CVAR(ColorOffsetShadows.Y);
  OVERRIDE_CVAR(ColorOffsetShadows.Z);
  OVERRIDE_CVAR(ColorOffsetShadows.W);
  OVERRIDE_CVAR(ColorCorrectionShadowsMax);
  OVERRIDE_CVAR(ColorSaturationMidtones.X);
  OVERRIDE_CVAR(ColorSaturationMidtones.Y);
  OVERRIDE_CVAR(ColorSaturationMidtones.Z);
  OVERRIDE_CVAR(ColorSaturationMidtones.W);
  OVERRIDE_CVAR(ColorContrastMidtones.X);
  OVERRIDE_CVAR(ColorContrastMidtones.Y);
  OVERRIDE_CVAR(ColorContrastMidtones.Z);
  OVERRIDE_CVAR(ColorContrastMidtones.W);
  OVERRIDE_CVAR(ColorGammaMidtones.X);
  OVERRIDE_CVAR(ColorGammaMidtones.Y);
  OVERRIDE_CVAR(ColorGammaMidtones.Z);
  OVERRIDE_CVAR(ColorGammaMidtones.W);
  OVERRIDE_CVAR(ColorGainMidtones.X);
  OVERRIDE_CVAR(ColorGainMidtones.Y);
  OVERRIDE_CVAR(ColorGainMidtones.Z);
  OVERRIDE_CVAR(ColorGainMidtones.W);
  OVERRIDE_CVAR(ColorOffsetMidtones.X);
  OVERRIDE_CVAR(ColorOffsetMidtones.Y);
  OVERRIDE_CVAR(ColorOffsetMidtones.Z);
  OVERRIDE_CVAR(ColorOffsetMidtones.W);
  OVERRIDE_CVAR(ColorSaturationHighlights.X);
  OVERRIDE_CVAR(ColorSaturationHighlights.Y);
  OVERRIDE_CVAR(ColorSaturationHighlights.Z);
  OVERRIDE_CVAR(ColorSaturationHighlights.W);
  OVERRIDE_CVAR(ColorContrastHighlights.X);
  OVERRIDE_CVAR(ColorContrastHighlights.Y);
  OVERRIDE_CVAR(ColorContrastHighlights.Z);
  OVERRIDE_CVAR(ColorContrastHighlights.W);
  OVERRIDE_CVAR(ColorGammaHighlights.X);
  OVERRIDE_CVAR(ColorGammaHighlights.Y);
  OVERRIDE_CVAR(ColorGammaHighlights.Z);
  OVERRIDE_CVAR(ColorGammaHighlights.W);
  OVERRIDE_CVAR(ColorGainHighlights.X);
  OVERRIDE_CVAR(ColorGainHighlights.Y);
  OVERRIDE_CVAR(ColorGainHighlights.Z);
  OVERRIDE_CVAR(ColorGainHighlights.W);
  OVERRIDE_CVAR(ColorOffsetHighlights.X);
  OVERRIDE_CVAR(ColorOffsetHighlights.Y);
  OVERRIDE_CVAR(ColorOffsetHighlights.Z);
  OVERRIDE_CVAR(ColorOffsetHighlights.W);
  OVERRIDE_CVAR(ColorCorrectionHighlightsMin);
  OVERRIDE_CVAR(BlueCorrection);
  OVERRIDE_CVAR(ExpandGamut);
  OVERRIDE_CVAR(FilmSlope);
  OVERRIDE_CVAR(FilmToe);
  OVERRIDE_CVAR(FilmShoulder);
  OVERRIDE_CVAR(FilmBlackClip);
  OVERRIDE_CVAR(FilmWhiteClip);
  OVERRIDE_CVAR(FilmShadowTintBlend);
  OVERRIDE_CVAR(FilmShadowTintAmount);
  OVERRIDE_CVAR(FilmSaturation);
  OVERRIDE_CVAR(FilmContrast);
  OVERRIDE_CVAR(FilmToeAmount);
  OVERRIDE_CVAR(FilmHealAmount);
  OVERRIDE_CVAR(FilmDynamicRange);
  OVERRIDE_CVAR(SceneFringeIntensity);
  OVERRIDE_CVAR(ChromaticAberrationStartOffset);
  OVERRIDE_CVAR(BloomIntensity);
  OVERRIDE_CVAR(BloomThreshold);
  OVERRIDE_CVAR(BloomSizeScale);
  OVERRIDE_CVAR(Bloom1Size);
  OVERRIDE_CVAR(Bloom2Size);
  OVERRIDE_CVAR(Bloom3Size);
  OVERRIDE_CVAR(Bloom4Size);
  OVERRIDE_CVAR(Bloom5Size);
  OVERRIDE_CVAR(Bloom6Size);
  OVERRIDE_CVAR(BloomConvolutionSize);
  OVERRIDE_CVAR(BloomConvolutionPreFilterMin);
  OVERRIDE_CVAR(BloomConvolutionPreFilterMax);
  OVERRIDE_CVAR(BloomConvolutionPreFilterMult);
  OVERRIDE_CVAR(BloomConvolutionBufferScale);
  OVERRIDE_CVAR(BloomDirtMaskIntensity);
  OVERRIDE_CVAR(AmbientCubemapIntensity);
  OVERRIDE_CVAR(CameraShutterSpeed);
  OVERRIDE_CVAR(CameraISO);
  OVERRIDE_CVAR(DepthOfFieldFstop);
  OVERRIDE_CVAR(DepthOfFieldMinFstop);
  OVERRIDE_CVAR(DepthOfFieldBladeCount);
  OVERRIDE_CVAR(AutoExposureBias);
  OVERRIDE_CVAR(AutoExposureLowPercent);
  OVERRIDE_CVAR(AutoExposureHighPercent);
  OVERRIDE_CVAR(AutoExposureMinBrightness);
  OVERRIDE_CVAR(AutoExposureMaxBrightness);
  OVERRIDE_CVAR(AutoExposureSpeedUp);
  OVERRIDE_CVAR(AutoExposureSpeedDown);
  OVERRIDE_CVAR(HistogramLogMin);
  OVERRIDE_CVAR(HistogramLogMax);
  OVERRIDE_CVAR(AutoExposureCalibrationConstant);
  OVERRIDE_CVAR(LensFlareIntensity);
  OVERRIDE_CVAR(LensFlareBokehSize);
  OVERRIDE_CVAR(LensFlareThreshold);
  OVERRIDE_CVAR(VignetteIntensity);
  OVERRIDE_CVAR(GrainJitter);
  OVERRIDE_CVAR(GrainIntensity);
  OVERRIDE_CVAR(AmbientOcclusionIntensity);
  OVERRIDE_CVAR(AmbientOcclusionStaticFraction);
  OVERRIDE_CVAR(AmbientOcclusionRadius);
  OVERRIDE_CVAR(AmbientOcclusionFadeDistance);
  OVERRIDE_CVAR(AmbientOcclusionFadeRadius);
  OVERRIDE_CVAR(AmbientOcclusionDistance);
  OVERRIDE_CVAR(AmbientOcclusionPower);
  OVERRIDE_CVAR(AmbientOcclusionBias);
  OVERRIDE_CVAR(AmbientOcclusionQuality);
  OVERRIDE_CVAR(AmbientOcclusionMipBlend);
  OVERRIDE_CVAR(AmbientOcclusionMipScale);
  OVERRIDE_CVAR(AmbientOcclusionMipThreshold);
  OVERRIDE_CVAR(IndirectLightingIntensity);
  OVERRIDE_CVAR(ColorGradingIntensity);
  OVERRIDE_CVAR(DepthOfFieldSensorWidth);
  OVERRIDE_CVAR(DepthOfFieldFocalDistance);
  OVERRIDE_CVAR(DepthOfFieldDepthBlurAmount);
  OVERRIDE_CVAR(DepthOfFieldDepthBlurRadius);
  OVERRIDE_CVAR(DepthOfFieldFocalRegion);
  OVERRIDE_CVAR(DepthOfFieldNearTransitionRegion);
  OVERRIDE_CVAR(DepthOfFieldFarTransitionRegion);
  OVERRIDE_CVAR(DepthOfFieldScale);
  OVERRIDE_CVAR(DepthOfFieldMaxBokehSize);
  OVERRIDE_CVAR(DepthOfFieldNearBlurSize);
  OVERRIDE_CVAR(DepthOfFieldFarBlurSize);
  OVERRIDE_CVAR(DepthOfFieldOcclusion);
  OVERRIDE_CVAR(DepthOfFieldColorThreshold);
  OVERRIDE_CVAR(DepthOfFieldSizeThreshold);
  OVERRIDE_CVAR(DepthOfFieldSkyFocusDistance);
  OVERRIDE_CVAR(DepthOfFieldVignetteSize);
  OVERRIDE_CVAR(NearDoFWeightDebugDrawWeightTO14);
  OVERRIDE_CVAR(FocalDoFWeightDebugDrawWeightTO14);
  OVERRIDE_CVAR(FarDoFWeightDebugDrawWeightTO14);
  OVERRIDE_CVAR(MotionBlurAmount);
  OVERRIDE_CVAR(MotionBlurMax);
  OVERRIDE_CVAR(MotionBlurPerObjectSize);
  OVERRIDE_CVAR(LPVIntensity);
  OVERRIDE_CVAR(LPVVplInjectionBias);
  OVERRIDE_CVAR(LPVSize);
  OVERRIDE_CVAR(LPVSecondaryOcclusionIntensity);
  OVERRIDE_CVAR(LPVSecondaryBounceIntensity);
  OVERRIDE_CVAR(LPVGeometryVolumeBias);
  OVERRIDE_CVAR(LPVEmissiveInjectionIntensity);
  OVERRIDE_CVAR(LPVDirectionalOcclusionIntensity);
  OVERRIDE_CVAR(LPVDirectionalOcclusionRadius);
  OVERRIDE_CVAR(LPVDiffuseOcclusionExponent);
  OVERRIDE_CVAR(LPVSpecularOcclusionExponent);
  OVERRIDE_CVAR(LPVDiffuseOcclusionIntensity);
  OVERRIDE_CVAR(LPVSpecularOcclusionIntensity);
  OVERRIDE_CVAR(SmaaLumaEdgeThresholdTO14);
  OVERRIDE_CVAR(TemporalAASharpnessFactorTO14);
  OVERRIDE_CVAR(TemporalAACameraJitterScaleTO14);
  OVERRIDE_CVAR(ScreenSpaceReflectionIntensity);
  OVERRIDE_CVAR(ScreenSpaceReflectionQuality);
  OVERRIDE_CVAR(ScreenSpaceReflectionMaxRoughness);
  OVERRIDE_CVAR(LPVFadeRange);
  OVERRIDE_CVAR(LPVDirectionalOcclusionFadeRange);
  OVERRIDE_CVAR(ScreenPercentage);
  OVERRIDE_CVAR(RadialBlurStength_TO14);
  OVERRIDE_CVAR(RadialBlurLength_TO14);
  OVERRIDE_CVAR(RadialBlurCenterPosSC_X_TO14);
  OVERRIDE_CVAR(RadialBlurCenterPosSC_Y_TO14);
  OVERRIDE_CVAR(PostEffectExtDistortionParamX);
  OVERRIDE_CVAR(PostEffectExtDistortionParamY);
  OVERRIDE_CVAR(PostEffectExtDistortionStrength);
  OVERRIDE_CVAR(PostEffectExtBlurrStrength);
  OVERRIDE_CVAR(PostEffectExt_ProjectionWidth);
  OVERRIDE_CVAR(PostEffectExt_ProjectionBlurWeight);
  OVERRIDE_CVAR(PostEffectExt_ProjectionParam0);
  OVERRIDE_CVAR(PostEffectExt_ProjectionParam1);
  OVERRIDE_CVAR(SceneIntensityScaleTO14);
  OVERRIDE_CVAR(BattleFogStartDistanceMinTO14);
  OVERRIDE_CVAR(EnableCameraDistanceDitherFadeTO14);
  OVERRIDE_CVAR(SkyLightStrengthTO14);
  OVERRIDE_CVAR(DirectionalLightStrengthTO14);
  OVERRIDE_CVAR(IBLStrengthTO14);
  OVERRIDE_CVAR(SSAOQualityTO14);
  OVERRIDE_CVAR(SSAOStrengthTO14);
  OVERRIDE_CVAR(SSAOPowerTO14);
  OVERRIDE_CVAR(SSAOMinClampTO14);
  OVERRIDE_CVAR(SSDOStrengthTO14);
  OVERRIDE_CVAR(SSDOHeightGradationTO14);
  OVERRIDE_CVAR(SSDOTranslucencyInfuluenceTO14);
  OVERRIDE_CVAR(HorizontalShadowIntensityTO14);
  OVERRIDE_CVAR(StageShadowColorModTO14);
  OVERRIDE_CVAR(StageShadowPenumbraFadeDistanceStartTO14);
  OVERRIDE_CVAR(StageShadowPenumbraFadeDistanceRangeTO14);
  OVERRIDE_CVAR(StageShadowPenumbraNearNormalInfluenceTO14);
  OVERRIDE_CVAR(StageShadowPenumbraFarNormalInfluenceTO14);
  OVERRIDE_CVAR(StageShadowPenumbraWidthTO14);
  OVERRIDE_CVAR(StageDirectionalShadowColorModTO14);
  OVERRIDE_CVAR(StageShadowGIPaintWidthTO14);
  OVERRIDE_CVAR(StageShadowGIPaintIntensityTO14);
  OVERRIDE_CVAR(StageSSAODistanceFadeTO14);
  OVERRIDE_CVAR(StageSSAONearShadowColorStrengthTO14);
  OVERRIDE_CVAR(StageSSAOFarShadowColorStrengthTO14);
  OVERRIDE_CVAR(StageSSAORangeForShadowColorTO14);
  OVERRIDE_CVAR(StageSSAONearBaseColorModStrengthTO14);
  OVERRIDE_CVAR(StageSSAOFarBaseColorModStrengthTO14);
  OVERRIDE_CVAR(StageSSAORangeForBaseColorTO14);
  OVERRIDE_CVAR(StageScreenSpaceGIPowTO14);
  OVERRIDE_CVAR(StageScreenLowerSkyLightSSAOTO14);
  OVERRIDE_CVAR(StageDepthRimLightTO14);
  OVERRIDE_CVAR(StageDepthRimLightFoliageTO14);
  OVERRIDE_CVAR(StageEdgeNormalThresholdTO14);
  OVERRIDE_CVAR(StageEdgeLumThresholdTO14);
  OVERRIDE_CVAR(StageEdgeLumThresholdTO14_3);
  OVERRIDE_CVAR(StageEdgeDepthThresholdTO14);
  OVERRIDE_CVAR(StageEdgeColorOffsetTO14);
  OVERRIDE_CVAR(StageEdgeColorScaleTO14);
  OVERRIDE_CVAR(StageEdgeColorPow0TO14);
  OVERRIDE_CVAR(StageEdgeColorOffsetDark_TO14);
  OVERRIDE_CVAR(StageEdgeColorScaleDark_TO14);
  OVERRIDE_CVAR(StageEdgeColorPowDark_TO14);
  OVERRIDE_CVAR(StageEdgeBaseDistance_TO14);
  OVERRIDE_CVAR(StageEdgeFadeDistance_TO14);
  OVERRIDE_CVAR(StageEdgeDefaultFadeStrength_TO14);
  OVERRIDE_CVAR(StageEdgeFoliageFadeStrength_TO14);
  OVERRIDE_CVAR(StageFilterDistanceFadeTO14);
  OVERRIDE_CVAR(StageFilterDistanceFadeIntervalTO14);
  OVERRIDE_CVAR(StageFilterMinDistanceTO14);
  OVERRIDE_CVAR(StageFilterFarMinDistanceTO14);
  OVERRIDE_CVAR(StageFilterKernelParameterTO14.X);
  OVERRIDE_CVAR(StageFilterKernelParameterTO14.Y);
  OVERRIDE_CVAR(StageFilterKernelParameterTO14.Z);
  OVERRIDE_CVAR(StageFilterKernelParameterTO14.W);
  OVERRIDE_CVAR(StageSharpenFilterStrengthTO14);
  OVERRIDE_CVAR(CharaSharpenFilterStrengthTO14);
  OVERRIDE_CVAR(BackgroundInscatteringStrengthTO14);
  OVERRIDE_CVAR(BackgroundInscatteringDensityTO14);
  OVERRIDE_CVAR(FogDensityHeightScaleTO14);
  OVERRIDE_CVAR(FogDensityScaleZRangeTO14);
  OVERRIDE_CVAR(VolumetricLightIntensityTO14);
  OVERRIDE_CVAR(VolumetricLightHeightFadeTO14);
  OVERRIDE_CVAR(VolumetricFogColorRatioTO14);
  OVERRIDE_CVAR(VolumetricShadowScaleTO14);
  OVERRIDE_CVAR(VolumetricShadowFogColorRatioTO14);
  OVERRIDE_CVAR(VolumetricShadowFadeTO14);
  OVERRIDE_CVAR(EnhanceVolumetricShadowTO14);
  OVERRIDE_CVAR(VolumetricShadowDirectionalFadeTO14);
  OVERRIDE_CVAR(LocalVolumetricLightIntensityTO14);
  OVERRIDE_CVAR(LocalVolumetricLightFadeRangeTO14);
  OVERRIDE_CVAR(SpotVolumetricLightIntensityTO14);
  OVERRIDE_CVAR(SpotVolumetricLightFadeRangeTO14);
  OVERRIDE_CVAR(VolumetricFogDensityFreqTO14);
  OVERRIDE_CVAR(VolumetricFogSmoothnessTO14);
  OVERRIDE_CVAR(VolumetricFogDensityScaleTO14);
  OVERRIDE_CVAR(VolumetricFogHeightFadeTO14);
  OVERRIDE_CVAR(VolumetricFogUVAnimStrength_0_TO14);
  OVERRIDE_CVAR(VolumetricFogUVAnimStrength_1_TO14);
  OVERRIDE_CVAR(ExtLightingDirection_0_TO14.X);
  OVERRIDE_CVAR(ExtLightingDirection_0_TO14.Y);
  OVERRIDE_CVAR(ExtLightingDirection_0_TO14.Z);
  OVERRIDE_CVAR(ExtLightingDirection_0_TO14.W);
  OVERRIDE_CVAR(ExtLighitngStrength_0_TO14);
  OVERRIDE_CVAR(ExtLighitngFalloff_0_TO14);
  OVERRIDE_CVAR(ExtLightingDirection_1_TO14.X);
  OVERRIDE_CVAR(ExtLightingDirection_1_TO14.Y);
  OVERRIDE_CVAR(ExtLightingDirection_1_TO14.Z);
  OVERRIDE_CVAR(ExtLightingDirection_1_TO14.W);
  OVERRIDE_CVAR(ExtLighitngStrength_1_TO14);
  OVERRIDE_CVAR(ExtLighitngFalloff_1_TO14);
  OVERRIDE_CVAR(ExtLightingDirection_2_TO14.X);
  OVERRIDE_CVAR(ExtLightingDirection_2_TO14.Y);
  OVERRIDE_CVAR(ExtLightingDirection_2_TO14.Z);
  OVERRIDE_CVAR(ExtLightingDirection_2_TO14.W);
  OVERRIDE_CVAR(ExtLighitngStrength_2_TO14);
  OVERRIDE_CVAR(ExtLighitngFalloff_2_TO14);
  OVERRIDE_CVAR(HeightFogColorModulationWeightTO14);
  OVERRIDE_CVAR(HeightFogColorModulationRangeTO14);
  OVERRIDE_CVAR(HeightFogColorModulationFallOffTO14);
  OVERRIDE_CVAR(MapColorFadeStartHeightTO14);
  OVERRIDE_CVAR(MapColorHeightFadeIntervalTO14);
  OVERRIDE_CVAR(VolumetricCloudMapFreqTO14);
  OVERRIDE_CVAR(VolumetricCloudMapSmoothnessTO14);
  OVERRIDE_CVAR(VolumetricCloudDensityFreqTO14);
  OVERRIDE_CVAR(VolumetricCloudDensitySmoothnessTO14);
  OVERRIDE_CVAR(VolumetricCloudDensityTO14);
  OVERRIDE_CVAR(VolumetricCloudOpacityTO14);
  OVERRIDE_CVAR(VolumetricCloudStartHeightTO14);
  OVERRIDE_CVAR(VolumetricCloudLayerHeightTO14);
  OVERRIDE_CVAR(VolumetricCloudMapUVScaleTO14);
  OVERRIDE_CVAR(VolumetricCloudDenistyUVScaleTO14);
  OVERRIDE_CVAR(VolumetricCloudMapAnimSpeedU_TO14);
  OVERRIDE_CVAR(VolumetricCloudMapAnimSpeedV_TO14);
  OVERRIDE_CVAR(VolumetricCloudDensityAnimSpeedU_TO14);
  OVERRIDE_CVAR(VolumetricCloudDensityAnimSpeedV_TO14);
  OVERRIDE_CVAR(VolumetricCloudGrowAnimSpeed_TO14);
  OVERRIDE_CVAR(VolumetricCloudMapUOffsetTO14);
  OVERRIDE_CVAR(VolumetricCloudMapVOffsetTO14);
  OVERRIDE_CVAR(VolumetricCloudGrowOffsetTO14);
  OVERRIDE_CVAR(VolumetricCloudSelfShadowStrength_TO14);
  OVERRIDE_CVAR(VolumetricCloudOverallIntensity_TO14);
  OVERRIDE_CVAR(VolumetricCloudSilverLiningRange_TO14);
  OVERRIDE_CVAR(VolumetricCloudSilverLiningForward_TO14);
  OVERRIDE_CVAR(VolumetricCloudSilverLiningBackward_TO14);
  OVERRIDE_CVAR(VolumetricCloudFogStrength_TO14);
  OVERRIDE_CVAR(VolumetricCloudFogStrengthHorizon_TO14);
  OVERRIDE_CVAR(VolumetricCloudSceneCompositeHeight_TO14);
  OVERRIDE_CVAR(VolumetricCloudCastShadowStrength_TO14);
  OVERRIDE_CVAR(VolumetricCloudShadowUVScale_TO14);
  OVERRIDE_CVAR(VolumetricCloudShadowUVAnimScale_TO14);
  OVERRIDE_CVAR(VolumetricCloudShadowUVScaleFar_TO14);
  OVERRIDE_CVAR(VolumetricCloudShadowUVAnimScaleFar_TO14);
  OVERRIDE_CVAR(VolumetricCloudShadowFarFadeStart_TO14);
  OVERRIDE_CVAR(VolumetricCloudShadowFadeInterval_TO14);
  OVERRIDE_CVAR(VolumetricCloudShadowGrowAnimScale_TO14);
  OVERRIDE_CVAR(VolumetricCloudHolePositionX_TO14);
  OVERRIDE_CVAR(VolumetricCloudHolePositionY_TO14);
  OVERRIDE_CVAR(VolumetricCloudHoleRadius_TO14);
  OVERRIDE_CVAR(HeightMapCaptureCameraPosition_TO14.X);
  OVERRIDE_CVAR(HeightMapCaptureCameraPosition_TO14.Y);
  OVERRIDE_CVAR(HeightMapCaptureCameraPosition_TO14.Z);
  OVERRIDE_CVAR(HeightMapCaptureCameraPosition_TO14.W);
  OVERRIDE_CVAR(HeightMapCaptureRange_TO14);
  OVERRIDE_CVAR(HeightMapBasedShadowStrength_TO14);
  OVERRIDE_CVAR(HeightMapBasedFarShadowStrength_TO14);
  OVERRIDE_CVAR(HeightMapBasedAOStrength_TO14);
  OVERRIDE_CVAR(ShadowMapFadeStartHeight_TO14);
  OVERRIDE_CVAR(ShadowMapFadeHeightInterval_TO14);
  OVERRIDE_CVAR(FoliageLightShaftStrength_TO14);
  OVERRIDE_CVAR(ScreenSpaceLocalLightShadow_TO14);
  OVERRIDE_CVAR(PanoramaParaIntensity_TO14);
  OVERRIDE_CVAR(PanoramaParaHorizontalFalloff_TO14);
  OVERRIDE_CVAR(PanoramaParaVerticalFalloff_TO14);
  OVERRIDE_CVAR(PanoramaParaUpperColorChange_TO14);
  OVERRIDE_CVAR(PanoramaParaCharaStrength_TO14);
  OVERRIDE_CVAR(DenseGroundFogStrength_TO14);
  OVERRIDE_CVAR(DenseGroundFogIntensity_TO14);
  OVERRIDE_CVAR(DenseGroundFogHeight_TO14);
  OVERRIDE_CVAR(DenseGroundFogHeightFalloff_TO14);
  OVERRIDE_CVAR(DenseGroundFogBaseNoiseRepeatSize_TO14);
  OVERRIDE_CVAR(DenseGroundFogWindDirection_TO14.X);
  OVERRIDE_CVAR(DenseGroundFogWindDirection_TO14.Y);
  OVERRIDE_CVAR(DenseGroundFogWindDirection_TO14.Z);
  OVERRIDE_CVAR(DenseGroundFogWindDirection_TO14.W);
  OVERRIDE_CVAR(DenseGroundFogWindStrength_TO14);
  OVERRIDE_CVAR(OpaqueSSRStrength_TO14);
  OVERRIDE_CVAR(TranslucentSSRStrength_TO14);
  OVERRIDE_CVAR(SSRColorSaturation_TO14);
  OVERRIDE_CVAR(SSRFadeStartRoughness_TO14);
  OVERRIDE_CVAR(SSRFadeEndRoughness_TO14);
  OVERRIDE_CVAR(CubeMapReflectionStrength_TO14);
  OVERRIDE_CVAR(ReflectionCubemapCameraPosition_TO14.X);
  OVERRIDE_CVAR(ReflectionCubemapCameraPosition_TO14.Y);
  OVERRIDE_CVAR(ReflectionCubemapCameraPosition_TO14.Z);
  OVERRIDE_CVAR(ReflectionCubemapCameraPosition_TO14.W);
  OVERRIDE_CVAR(ReflectionCubemapBoxProxySize_TO14.X);
  OVERRIDE_CVAR(ReflectionCubemapBoxProxySize_TO14.Y);
  OVERRIDE_CVAR(ReflectionCubemapBoxProxySize_TO14.Z);
  OVERRIDE_CVAR(ReflectionCubemapBoxProxySize_TO14.W);
  OVERRIDE_CVAR(ReflectionCubeMapProxySizeScale_TO14);
  OVERRIDE_CVAR(IntensityScaleTO14);
  OVERRIDE_CVAR(DirectionalLightHeightScale);
  OVERRIDE_CVAR(HairTranslucentLightStrength);
  OVERRIDE_CVAR(CharaSkyLightIntensityScaleTO14);
  OVERRIDE_CVAR(CharaRimLightIntensityTO14);
  OVERRIDE_CVAR(DirectLightIntensityInShadowTO14);
  OVERRIDE_CVAR(ShadowIntensityColorCorrectionTO14);
  OVERRIDE_CVAR(DirectLightIntensityInShadowTO14_s1);
  OVERRIDE_CVAR(ShadowIntensityColorCorrectionTO14_s1);
  OVERRIDE_CVAR(DirectLightIntensityInShadowTO14_s2);
  OVERRIDE_CVAR(ShadowIntensityColorCorrectionTO14_s2);
  OVERRIDE_CVAR(IBLSpecularStrengthTO14);
  OVERRIDE_CVAR(IBLLightingContrastCharaTO14);
  OVERRIDE_CVAR(IBLRoughnessCharaTO14);
  OVERRIDE_CVAR(EdgeWidthTO14);
  OVERRIDE_CVAR(NormalEdgeThresholdTO14);
  OVERRIDE_CVAR(EdgeStrengthDaytimeTO14);
  OVERRIDE_CVAR(EdgeStrengthNightTO14);
  OVERRIDE_CVAR(EdgeIntensityDaytimeTO14);
  OVERRIDE_CVAR(EdgeIntensityNightTO14);
  OVERRIDE_CVAR(EdgeDistanceFallOffTO14);
  OVERRIDE_CVAR(EdgeDistanceFallBaseDistanceTO14);
  OVERRIDE_CVAR(FaceSelfShadowZBiasTO14);
  OVERRIDE_CVAR(SelfShadowSearchRadiusTO14);
  OVERRIDE_CVAR(SelfShadowSearchBiasTO14);
  OVERRIDE_CVAR(SelfShadowStrengthTO14);
  OVERRIDE_CVAR(EyeReflectionStrengthTO14);
  OVERRIDE_CVAR(MetalReflectionStrengthTO14);
  OVERRIDE_CVAR(MetalLocalReflectionStrengthTO14);
  OVERRIDE_CVAR(PaintingFilterDiffusionWeightTO14);
  OVERRIDE_CVAR(PaintingFilterMinColorDistanceTO14);
  OVERRIDE_CVAR(ParaEffectStrength_0_TO14);
  OVERRIDE_CVAR(ParaContrast_TO14);
  OVERRIDE_CVAR(ParaRotation_TO14);
  OVERRIDE_CVAR(MoyaEffectStrength_0_TO14);
  OVERRIDE_CVAR(MoyaAnimationSpeed_TO14);
  OVERRIDE_CVAR(DirectionalLightIntensityCharaScale);
  OVERRIDE_CVAR(DirectionalLightZRotationOffset);
  OVERRIDE_CVAR(DirectionalLightHeightRotationOffset);
  OVERRIDE_CVAR(CutSceneDistanceFogStartDistanceTO14);
  OVERRIDE_CVAR(CutSceneDistanceFogFadeIntervalTO14);
  OVERRIDE_CVAR(CutSceneDistanceFogOpacityTO14);
  OVERRIDE_CVAR(MaskedBlurStrengthTO14);
  OVERRIDE_CVAR(MaskedBlurTextureContrastTO14);
  OVERRIDE_CVAR(SceneColorSaturationTO14);
  OVERRIDE_CVAR(SceneColorSaturationWeightCharaTO14);
  OVERRIDE_CVAR(SceneColorTintWeightCharaTO14);
  OVERRIDE_CVAR(SceneColorSaturationWeightEffectTO14);
  OVERRIDE_CVAR(SceneColorTintWeightEffectTO14);
  OVERRIDE_CVAR(CharaDirectionalLightSaturationTO14);
  OVERRIDE_CVAR(CharaDirectionalLightMinIntensityTO14);
  OVERRIDE_CVAR(CharaSkyLightSaturationTO14);
  OVERRIDE_CVAR(CharaSkyLightMinIntensityTO14);
  OVERRIDE_CVAR(CharaParticleLightIntensityTO14);
  OVERRIDE_CVAR(CharaFogStrengthScaleTO14);
  OVERRIDE_CVAR(TranslucentFogStrengthScaleTO14);
  OVERRIDE_CVAR(TranslucentFogDepthScaleTO14);
  OVERRIDE_CVAR(TranslucentFogRGBScaleTO14);
  OVERRIDE_CVAR(TranslucentFogAlphaScaleTO14);
#undef OVERRIDE_CVAR
#pragma endregion
}

const uint32_t Addr_CVarSystemResolution_dtor = 0x3023470;
typedef void(*CVarSystemResolution_dtor_Fn)();
CVarSystemResolution_dtor_Fn CVarSystemResolution_dtor_Orig;
void CVarSystemResolution_dtor_Hook()
{
  CVarSystemResolution_dtor_Orig();
  auto consoleManager = *(IConsoleManager**)(mBaseAddress + Addr_IConsoleManager__Singleton);

  for (auto& CVarPostProc : CVarsPostProc)
    consoleManager->UnregisterConsoleObject(CVarPostProc);

  consoleManager->UnregisterConsoleObject(CVarTAASharpness);
  consoleManager->UnregisterConsoleObject(CVarTAAJitterScale);
  consoleManager->UnregisterConsoleObject(CVarForceLOD);
  consoleManager->UnregisterConsoleObject(CVarCutsceneRenderFixScreenPercentage);
  consoleManager->UnregisterConsoleObject(CVarCutsceneRenderFix);
  consoleManager->UnregisterConsoleObject(CVarDisableCutsceneCA);
  consoleManager->UnregisterConsoleObject(CVarMinStageEdgeBaseDistance);
  consoleManager->UnregisterConsoleObject(CVarStageSharpenFilterStrength);
  consoleManager->UnregisterConsoleObject(CVarCharaSharpenFilterStrength);
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

    if (Options.CutsceneRenderFix_EnableScreenPercentage)
    {
      // Apply screen-percentage to the RT, because UE4 disables percentage being applied to them...
      IConsoleVariable* CVarScreenPercentage = *(IConsoleVariable**)(mBaseAddress + 0x4C08900);
      double ScreenPercentageMult = FConsoleVariable__GetFloat(CVarScreenPercentage);
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
  }
}

#endif

void InitPlugin()
{
  PostProcInit();

  UObject::ProcessEventPtr = reinterpret_cast<ProcessEventFn>(mBaseAddress + Addr_ProcessEvent);
  UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + Addr_GUObjectArray);
  FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + Addr_Names);
  StaticConstructObject_Internal = reinterpret_cast<StaticConstructObject_InternalFn>(mBaseAddress + Addr_StaticConstructObject_Internal);
  FConsoleVariable__GetFloat = reinterpret_cast<FConsoleVariable__GetFloat_Fn>(mBaseAddress + Addr_FConsoleVariable__GetFloat);

  MH_Initialize();

#ifdef _DEBUG
  MH_GameHook(FEngineLoop__Tick);
#endif

  // Hook EndFinalPostprocessSettings so we can adjust the FPostProcessSettings struct
  MH_GameHook(FSceneView__EndFinalPostprocessSettings);

  // Add our custom cvars, need to handle constructor & destructor for them
  MH_GameHook(CVarSystemResolution_ctor);
  MH_GameHook(CVarSystemResolution_dtor);

  // Add support for r.ForceLOD
  MH_GameHook(FRelevancePacket__FRelevancePacket);

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

  // Remove ECVF_ReadOnly flag check
  const uint32_t PatchAddr_FConsoleManager__ProcessUserConsoleInput_ReadOnlyCheck = 0x124D6F9;
  SafeWriteModule(PatchAddr_FConsoleManager__ProcessUserConsoleInput_ReadOnlyCheck, uint16_t(0xC031)); // xor eax, eax

  // Patch UBootSceneController::Start to call StartLogin instead of StartLogo
  if (Options.SkipIntroLogos)
  {
    const uint32_t PatchAddr_UBootSceneController__Start = 0xF4B213;
    SafeWriteModule(PatchAddr_UBootSceneController__Start, uint16_t(0x9090)); // jne -> nop
  }

  // Remove limit from r.Shadow.DistanceScale
  const uint32_t PatchAddr_GetCSMMaxDistance = 0x2382021;
  SafeWriteModule(PatchAddr_GetCSMMaxDistance, uint8_t(0x90), 8);

  // patch out the code that overwrites r.ScreenPercentage/r.Shadow.MaxCSMResolution, so it can be changed inside Engine.ini freely
  // without patching it the game will always overwrite any INI value set for this, limiting it to 4096 and below
  // using console you can set this to 8192+, but there's no way to make it stick, since game will overwrite your INI changes
  // using this patch will prevent that, but will also break the in-game setting...
  if (Options.StopScreenPercentageOverwrite)
    SafeWriteModule(0xE52EDD, uint8_t(0x90), 5);
  if (Options.StopMaxCSMResolutionOverwrite)
    SafeWriteModule(0xE52F7A, uint8_t(0x90), 5);

  // Unlock dev-console & allow loading loose files
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
