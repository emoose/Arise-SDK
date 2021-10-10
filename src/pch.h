#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <algorithm>
#include <sstream>

#include "MinHook/MinHook.h"

extern uintptr_t mBaseAddress;

#include "SDK.h"
using namespace SDK;
#include "SDKPrivate.h"
#include "IConsoleManager.h"

// Creates a hook for function, requires Addr_ AutoGameAddress, _Hook function & _Orig variable
#define MH_GameHook(func) MH_CreateHook((LPVOID)Addr_##func##.Get(), func##_Hook, (LPVOID*)&func##_Orig)

struct SDKOptions
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
};

// dllmain.cpp
extern HMODULE DllHModule;
extern HMODULE GameHModule;
extern uintptr_t mBaseAddress;
extern SDKOptions Options;
extern bool inited;
void InitPlugin();

// Fixes_Distance.cpp
void Fixes_Distance_Init();
void Fixes_Distance_Refresh();

// Fixes_Resolution.cpp
void Fixes_Resolution_Init();

// proxy.cpp
void* ModuleGetSection(void* Module, const char* SectionName, int* OutSectionSize);
void Proxy_InitSteamStub();

// UE4Hook.cpp
typedef UObject* (*StaticConstructObject_InternalFn)(UClass* Class, UObject* InOuter, FName Name, void* SetFlags, void* InternalSetFlags, UObject* Template, bool bCopyTransientsFromClassDefaults, struct FObjectInstancingGraph* InstanceGraph, bool bAssumeTemplateIsArchetype);
extern StaticConstructObject_InternalFn StaticConstructObject_Internal;
void Init_UE4Hook();

// Utility.cpp
#include "Utility.h"
#include "GameAddress.h"

// PostProcOverrides.cpp
void PostProc_AddCVars(IConsoleManager* ConsoleManager);
void PostProc_Init();
void PostProc_DoOverrides(bool CopyValuesToCVars, FPostProcessSettings* FinalPostProcessSettings);

template <typename T>
void SafeWrite(void* address, T value)
{
  DWORD oldProtect = 0;
  VirtualProtect((LPVOID)address, sizeof(T), PAGE_READWRITE, &oldProtect);
  *reinterpret_cast<T*>(address) = value;
  VirtualProtect((LPVOID)address, sizeof(T), oldProtect, &oldProtect);
}

template <typename T>
void SafeWrite(void* address, T value, int count)
{
  DWORD oldProtect = 0;
  VirtualProtect((LPVOID)address, sizeof(T) * count, PAGE_READWRITE, &oldProtect);
  for(int i = 0; i < count; i++)
    *reinterpret_cast<T*>((uint8_t*)address + (sizeof(T) * i)) = value;
  VirtualProtect((LPVOID)address, sizeof(T) * count, oldProtect, &oldProtect);
}

template <typename T>
void SafeWrite(void* address, T* value, int count)
{
  DWORD oldProtect = 0;
  VirtualProtect((LPVOID)address, sizeof(T) * count, PAGE_READWRITE, &oldProtect);
  for (int i = 0; i < count; i++)
    *reinterpret_cast<T*>((uint8_t*)address + (sizeof(T) * i)) = value[i];
  VirtualProtect((LPVOID)address, sizeof(T) * count, oldProtect, &oldProtect);
}

template <typename T>
void SafeWrite(uintptr_t address, T value)
{
	DWORD oldProtect = 0;
	VirtualProtect((LPVOID)address, sizeof(T), PAGE_READWRITE, &oldProtect);
	*reinterpret_cast<T*>(address) = value;
	VirtualProtect((LPVOID)address, sizeof(T), oldProtect, &oldProtect);
}

template <typename T>
void SafeWrite(uintptr_t address, T value, int count)
{
	DWORD oldProtect = 0;
	VirtualProtect((LPVOID)address, sizeof(T) * count, PAGE_READWRITE, &oldProtect);
	for (int i = 0; i < count; i++)
		*reinterpret_cast<T*>(address + (sizeof(T) * i)) = value;
	VirtualProtect((LPVOID)address, sizeof(T) * count, oldProtect, &oldProtect);
}

template <typename T>
void SafeWrite(uintptr_t address, T* value, int count)
{
	DWORD oldProtect = 0;
	VirtualProtect((LPVOID)address, sizeof(T) * count, PAGE_READWRITE, &oldProtect);
	for (int i = 0; i < count; i++)
		*reinterpret_cast<T*>(address + (sizeof(T) * i)) = value[i];
	VirtualProtect((LPVOID)address, sizeof(T) * count, oldProtect, &oldProtect);
}

template <typename T>
void SafeWriteModule(uintptr_t offset, T value)
{
  SafeWrite<T>(mBaseAddress + offset, value);
}

template <typename T>
void SafeWriteModule(uintptr_t offset, T value, int count)
{
  SafeWrite<T>(mBaseAddress + offset, value, count);
}

template <typename T>
void SafeWriteModule(uintptr_t offset, T* value, int count)
{
  SafeWrite<T>(mBaseAddress + offset, value, count);
}

// Same as SafeWrite but doesn't VirtualProtect first, more efficient if you already know the memory is writable!
template <typename T>
inline void UnsafeWriteModule(uintptr_t offset, T value)
{
  *reinterpret_cast<T*>(mBaseAddress + offset) = value;
}

inline void PatchCall(void* CallAddr, void* CallDest)
{
	uint8_t* callAddr = (uint8_t*)CallAddr;
	uint8_t* callDest = (uint8_t*)CallDest;

  uint8_t callBuf[] = { 0xE8, 0x00, 0x00, 0x00, 0x00 };
  uint32_t diff = uint32_t(callDest - (callAddr + 5));
  *(uint32_t*)&callBuf[1] = diff;

  SafeWrite(callAddr, callBuf, 5);
}

// Modified version of Engine.PostProcessSettings
// Removed fields we don't need (bOverride_*), changed bool to int so we can have more than 2 states
struct FPostProcessSettings_Overrides
{
	float                                              WhiteTemp;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhiteTint;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturation;                                          // 0x0050(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorContrast;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGamma;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGain;                                                // 0x0080(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorOffset;                                              // 0x0090(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorSaturationShadows;                                   // 0x00A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorContrastShadows;                                     // 0x00B0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGammaShadows;                                        // 0x00C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGainShadows;                                         // 0x00D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorOffsetShadows;                                       // 0x00E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ColorCorrectionShadowsMax;                                // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturationMidtones;                                  // 0x0100(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorContrastMidtones;                                    // 0x0110(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGammaMidtones;                                       // 0x0120(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGainMidtones;                                        // 0x0130(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorOffsetMidtones;                                      // 0x0140(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorSaturationHighlights;                                // 0x0150(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorContrastHighlights;                                  // 0x0160(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGammaHighlights;                                     // 0x0170(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGainHighlights;                                      // 0x0180(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorOffsetHighlights;                                    // 0x0190(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ColorCorrectionHighlightsMin;                             // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlueCorrection;                                           // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpandGamut;                                              // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSlope;                                                // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToe;                                                  // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShoulder;                                             // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBlackClip;                                            // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmWhiteClip;                                            // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmWhitePoint;                                           // 0x01C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                FilmShadowTint;                                           // 0x01D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FilmShadowTintBlend;                                      // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShadowTintAmount;                                     // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSaturation;                                           // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerRed;                                      // 0x01EC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerGreen;                                    // 0x01FC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerBlue;                                     // 0x020C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FilmContrast;                                             // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToeAmount;                                            // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmHealAmount;                                           // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmDynamicRange;                                         // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SceneColorTint;                                           // 0x022C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SceneFringeIntensity;                                     // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChromaticAberrationStartOffset;                           // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int /*TEnumAsByte<EBloomMethod>*/                  BloomMethod;                                              // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomIntensity;                                           // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomThreshold;                                           // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomSizeScale;                                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom1Size;                                               // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom2Size;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom3Size;                                               // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom4Size;                                               // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom5Size;                                               // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom6Size;                                               // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom1Tint;                                               // 0x026C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Bloom2Tint;                                               // 0x027C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Bloom3Tint;                                               // 0x028C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Bloom4Tint;                                               // 0x029C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Bloom5Tint;                                               // 0x02AC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Bloom6Tint;                                               // 0x02BC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UTexture2D*                                  BloomConvolutionTexture;                                  // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionSize;                                     // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BloomConvolutionCenterUV;                                 // 0x02DC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BloomConvolutionPreFilter;                                // 0x02E4(0x000C) (Deprecated, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMin;                             // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMax;                             // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMult;                            // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionBufferScale;                              // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BloomDirtMask;                                            // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomDirtMaskIntensity;                                   // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BloomDirtMaskTint;                                        // 0x030C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                AmbientCubemapTint;                                       // 0x031C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AmbientCubemapIntensity;                                  // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureCube*                                AmbientCubemap;                                           // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShutterSpeed;                                       // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraISO;                                                // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFstop;                                        // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldMinFstop;                                     // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DepthOfFieldBladeCount;                                   // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureBias;                                         // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int /*TEnumAsByte<EAutoExposureMethod>*/           AutoExposureMethod;                                       // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureLowPercent;                                   // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureHighPercent;                                  // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMinBrightness;                                // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMaxBrightness;                                // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedUp;                                      // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedDown;                                    // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureCalibrationConstant;                          // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareIntensity;                                       // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTint;                                            // 0x037C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LensFlareBokehSize;                                       // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareThreshold;                                       // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    LensFlareBokehShape;                                      // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTints[0x8];                                      // 0x03A0(0x0010) (Edit, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainJitter;                                              // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainIntensity;                                           // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionIntensity;                                // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AmbientOcclusionStaticFraction;                           // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AmbientOcclusionRadius;                                   // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int /*unsigned char*/                              AmbientOcclusionRadiusInWS;                           // 0x0438(0x0001) (Edit, BlueprintVisible, EditConst)
	float                                              AmbientOcclusionFadeDistance;                             // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AmbientOcclusionFadeRadius;                               // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AmbientOcclusionDistance;                                 // 0x0444(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AmbientOcclusionPower;                                    // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AmbientOcclusionBias;                                     // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AmbientOcclusionQuality;                                  // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AmbientOcclusionMipBlend;                                 // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AmbientOcclusionMipScale;                                 // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AmbientOcclusionMipThreshold;                             // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FLinearColor                                IndirectLightingColor;                                    // 0x0460(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              IndirectLightingIntensity;                                // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorGradingIntensity;                                    // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ColorGradingLUT;                                          // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int /*TEnumAsByte<EDepthOfFieldMethod>*/           DepthOfFieldMethod;                                       // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int /*unsigned char*/                              bMobileHQGaussian;                                    // 0x0484(0x0001) (Edit, BlueprintVisible)
	float                                              DepthOfFieldSensorWidth;                                  // 0x0488(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalDistance;                                // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurAmount;                              // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurRadius;                              // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalRegion;                                  // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearTransitionRegion;                         // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarTransitionRegion;                          // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldScale;                                        // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldMaxBokehSize;                                 // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearBlurSize;                                 // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarBlurSize;                                  // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bApplyDoFOpaqueOnlyTO14;                                  // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    DepthOfFieldBokehShape;                                   // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldOcclusion;                                    // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldColorThreshold;                               // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSizeThreshold;                                // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSkyFocusDistance;                             // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldVignetteSize;                                 // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableDoFDebugTO14;                                       // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearDoFWeightDebugDrawWeightTO14;                         // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocalDoFWeightDebugDrawWeightTO14;                        // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FarDoFWeightDebugDrawWeightTO14;                          // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurAmount;                                         // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurMax;                                            // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurPerObjectSize;                                  // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVIntensity;                                             // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSize;                                                  // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmaaLumaEdgeThresholdTO14;                                // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableSmaaEdgeStencilMaskTO14;                            // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableSmaaEdgeLumaCorrectionTO14;                         // 0x0529(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShowSmaaEdgeDetectionTO14;                                // 0x052A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TemporalAASharpnessFactorTO14;                            // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TemporalAACameraJitterScaleTO14;                          // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionIntensity;                           // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionQuality;                             // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionMaxRoughness;                        // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVFadeRange;                                             // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionFadeRange;                         // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenPercentage;                                         // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadialBlurStength_TO14;                                   // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadialBlurLength_TO14;                                    // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadialBlurCenterPosSC_X_TO14;                             // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadialBlurCenterPosSC_Y_TO14;                             // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnablePostEffectExtDistortion;                            // 0x055C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostEffectExtDistortionParamX;                            // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostEffectExtDistortionParamY;                            // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostEffectExtDistortionStrength;                          // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostEffectExtBlurrStrength;                               // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnablePostEffectExt_Projection;                           // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostEffectExt_ProjectionWidth;                            // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostEffectExt_ProjectionBlurWeight;                       // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostEffectExt_ProjectionParam0;                           // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostEffectExt_ProjectionParam1;                           // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneIntensityScaleTO14;                                  // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BattleFogStartDistanceMinTO14;                            // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnableCameraDistanceDitherFadeTO14;                       // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableMiniMapRenderingModeTO14;                           // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MiniMapClearColorTO14;                                    // 0x0594(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SkyLightStrengthTO14;                                     // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalLightStrengthTO14;                             // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IBLStrengthTO14;                                          // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureCube*                                DiffuseIBLCubeMap_TO14;                                   // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SSAOQualityTO14;                                          // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SSAOStrengthTO14;                                         // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SSAOPowerTO14;                                            // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SSAOMinClampTO14;                                         // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SSDOStrengthTO14;                                         // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SSDOHeightGradationTO14;                                  // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SSDOTranslucencyInfuluenceTO14;                           // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableBattleModeSettingTO14;                              // 0x05D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DisableSSAOInBattleTO14;                                  // 0x05D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DisableReflectionInBattleTO14;                            // 0x05D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ReducePostProcessInBattleTO14;                            // 0x05D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ReduceCastShadowProcessTO14;                              // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalShadowIntensityTO14;                            // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableStagePostFilterTO14;                                // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                StageShadowColorCorrectionTO14;                           // 0x05E4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                StageFoliageShadowColorCorrectionTO14;                    // 0x05F4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StageShadowColorModTO14;                                  // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageShadowPenumbraFadeDistanceStartTO14;                 // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageShadowPenumbraFadeDistanceRangeTO14;                 // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageShadowPenumbraNearNormalInfluenceTO14;               // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageShadowPenumbraFarNormalInfluenceTO14;                // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                StageShadowPenumbraColorTO14;                             // 0x0618(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                StageFoliagePenumbraColorTO14;                            // 0x0628(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StageShadowPenumbraWidthTO14;                             // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                StageDirectionalShadowColorCorrectionTO14;                // 0x063C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StageDirectionalShadowColorModTO14;                       // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                StageShadowGIPaintColorTO14;                              // 0x0650(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StageShadowGIPaintWidthTO14;                              // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageShadowGIPaintIntensityTO14;                          // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageSSAODistanceFadeTO14;                                // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageSSAONearShadowColorStrengthTO14;                     // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageSSAOFarShadowColorStrengthTO14;                      // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageSSAORangeForShadowColorTO14;                         // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageSSAONearBaseColorModStrengthTO14;                    // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageSSAOFarBaseColorModStrengthTO14;                     // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageSSAORangeForBaseColorTO14;                           // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    StageScreenNoiseTextureTO14;                              // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                StageNoiseShadowColorTO14;                                // 0x0690(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                StageGILightingColorTO14;                                 // 0x06A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StageScreenSpaceGIPowTO14;                                // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                StageScreenLowerSkyLightColorTO14;                        // 0x06B4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StageScreenLowerSkyLightSSAOTO14;                         // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageDepthRimLightTO14;                                   // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageDepthRimLightFoliageTO14;                            // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    StageScreenStrokeTextureTO14;                             // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeNormalThresholdTO14;                             // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeLumThresholdTO14;                                // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeLumThresholdTO14_3;                              // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeDepthThresholdTO14;                              // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeColorOffsetTO14;                                 // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeColorScaleTO14;                                  // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeColorPow0TO14;                                   // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeColorOffsetDark_TO14;                            // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeColorScaleDark_TO14;                             // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeColorPowDark_TO14;                               // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeBaseDistance_TO14;                               // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeFadeDistance_TO14;                               // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeDefaultFadeStrength_TO14;                        // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageEdgeFoliageFadeStrength_TO14;                        // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageFilterDistanceFadeTO14;                              // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageFilterDistanceFadeIntervalTO14;                      // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageFilterMinDistanceTO14;                               // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageFilterFarMinDistanceTO14;                            // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    StageFilterKernelParameterTO14;                           // 0x0720(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StageSharpenFilterStrengthTO14;                           // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharaSharpenFilterStrengthTO14;                           // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BackgroundInscatteringStrengthTO14;                       // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BackgroundInscatteringDensityTO14;                        // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogDensityHeightScaleTO14;                                // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogDensityScaleZRangeTO14;                                // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricLightIntensityTO14;                             // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricLightHeightFadeTO14;                            // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricFogColorRatioTO14;                              // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VolumetricFogColorTO14;                                   // 0x0754(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              VolumetricShadowScaleTO14;                                // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricShadowFogColorRatioTO14;                        // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VolumetricShadowColorTO14;                                // 0x076C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              VolumetricShadowFadeTO14;                                 // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnhanceVolumetricShadowTO14;                              // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricShadowDirectionalFadeTO14;                      // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bDisableVolumetricShadowTO14;                             // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocalVolumetricLightIntensityTO14;                        // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocalVolumetricLightFadeRangeTO14;                        // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotVolumetricLightIntensityTO14;                         // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotVolumetricLightFadeRangeTO14;                         // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricFogDensityFreqTO14;                             // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricFogSmoothnessTO14;                              // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricFogDensityScaleTO14;                            // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricFogHeightFadeTO14;                              // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricFogUVAnimStrength_0_TO14;                       // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VolumetricFogUVAnimDirection_0_TO14;                      // 0x07B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              VolumetricFogUVAnimStrength_1_TO14;                       // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VolumetricFogUVAnimDirection_1_TO14;                      // 0x07C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                EnableStageLightingExtensionTO14;                         // 0x07CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ExtLightingDirection_0_TO14;                              // 0x07D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ExtLightingColor_0_TO14;                                  // 0x07E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ExtLighitngStrength_0_TO14;                               // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtLighitngFalloff_0_TO14;                                // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ExtLightingDirection_1_TO14;                              // 0x0800(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ExtLightingColor_1_TO14;                                  // 0x0810(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ExtLighitngStrength_1_TO14;                               // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtLighitngFalloff_1_TO14;                                // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ExtLightingDirection_2_TO14;                              // 0x0830(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ExtLightingColor_2_TO14;                                  // 0x0840(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ExtLighitngStrength_2_TO14;                               // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtLighitngFalloff_2_TO14;                                // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightFogColorModulationWeightTO14;                       // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightFogColorModulationRangeTO14;                        // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightFogColorModulationFallOffTO14;                      // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HeightFogModulationColorTO14;                             // 0x0864(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MapColorFadeStartHeightTO14;                              // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MapColorHeightFadeIntervalTO14;                           // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MapColorHeightFadeColorTO14;                              // 0x087C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                MapColorHeightFadeColor_2_TO14;                           // 0x088C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              VolumetricCloudMapFreqTO14;                               // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              VolumetricCloudMapSmoothnessTO14;                         // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              VolumetricCloudDensityFreqTO14;                           // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              VolumetricCloudDensitySmoothnessTO14;                     // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                EnableVolumetricCloudRenderingTO14;                       // 0x08AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableVolumetricCloudUnderDrawModeTO14;                   // 0x08AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudDensityTO14;                               // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudOpacityTO14;                               // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudStartHeightTO14;                           // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudLayerHeightTO14;                           // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudMapUVScaleTO14;                            // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudDenistyUVScaleTO14;                        // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudMapAnimSpeedU_TO14;                        // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudMapAnimSpeedV_TO14;                        // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudDensityAnimSpeedU_TO14;                    // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudDensityAnimSpeedV_TO14;                    // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudGrowAnimSpeed_TO14;                        // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudMapUOffsetTO14;                            // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudMapVOffsetTO14;                            // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudGrowOffsetTO14;                            // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudSelfShadowStrength_TO14;                   // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudOverallIntensity_TO14;                     // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VolumetricCloudBaseColorTO14;                             // 0x08F0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                VolumetricCloudShadowColor0_TO14;                         // 0x0900(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                VolumetricCloudShadowColor1_TO14;                         // 0x0910(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              VolumetricCloudSilverLiningRange_TO14;                    // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudSilverLiningForward_TO14;                  // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudSilverLiningBackward_TO14;                 // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudFogStrength_TO14;                          // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudFogStrengthHorizon_TO14;                   // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudSceneCompositeHeight_TO14;                 // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableCloudFogDepthOverride_TO14;                         // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudCastShadowStrength_TO14;                   // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudShadowUVScale_TO14;                        // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudShadowUVAnimScale_TO14;                    // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudShadowUVScaleFar_TO14;                     // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudShadowUVAnimScaleFar_TO14;                 // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudShadowFarFadeStart_TO14;                   // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudShadowFadeInterval_TO14;                   // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudShadowGrowAnimScale_TO14;                  // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudHolePositionX_TO14;                        // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudHolePositionY_TO14;                        // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricCloudHoleRadius_TO14;                           // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CaptureHeightMapMode_TO14;                                // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    PreBakedHeightMap_TO14;                                   // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    HeightMapCaptureCameraPosition_TO14;                      // 0x0980(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HeightMapCaptureRange_TO14;                               // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightMapBasedShadowStrength_TO14;                        // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightMapBasedFarShadowStrength_TO14;                     // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightMapBasedAOStrength_TO14;                            // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableIndoorHeightMapAOMode_TO14;                         // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ForceShadowCastMode_TO14;                                 // 0x09A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableShadowMapHeightFade_TO14;                           // 0x09A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShadowMapFadeStartHeight_TO14;                            // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShadowMapFadeHeightInterval_TO14;                         // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageLightShaftStrength_TO14;                           // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceLocalLightShadow_TO14;                         // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PanoramaParaColorUpper_TO14;                              // 0x09B4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                PanoramaParaColorLower_TO14;                              // 0x09C4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PanoramaParaIntensity_TO14;                               // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PanoramaParaHorizontalFalloff_TO14;                       // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PanoramaParaVerticalFalloff_TO14;                         // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PanoramaParaUpperColorChange_TO14;                        // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PanoramaParaCharaStrength_TO14;                           // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DenseGroundFogStrength_TO14;                              // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DenseGroundFogIntensity_TO14;                             // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DenseGroundFogHeight_TO14;                                // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DenseGroundFogHeightFalloff_TO14;                         // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DenseGroundFogBaseNoiseRepeatSize_TO14;                   // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    DenseGroundFogWindDirection_TO14;                         // 0x0A00(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DenseGroundFogWindStrength_TO14;                          // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpaqueSSRStrength_TO14;                                   // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TranslucentSSRStrength_TO14;                              // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SSRColorSaturation_TO14;                                  // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SSRFadeStartRoughness_TO14;                               // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SSRFadeEndRoughness_TO14;                                 // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CubeMapReflectionStrength_TO14;                           // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ApplySSRAfterFogTO14;                                     // 0x0A2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableParallaxCorrenctedCubemap_TO14;                     // 0x0A2D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ReflectionCubemapCameraPosition_TO14;                     // 0x0A30(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ReflectionCubemapBoxProxySize_TO14;                       // 0x0A40(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ReflectionCubeMapProxySizeScale_TO14;                     // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    DirectionalIBLTextureCharaTO14;                           // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    DirectionalIBLTextureCharaTO14_3;                         // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IntensityScaleTO14;                                       // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalLightHeightScale;                              // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HairTranslucentLightStrength;                             // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableDiffuseOffsetTextureTO14;                           // 0x0A74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableShadowColorTextureTO14;                             // 0x0A75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableCharaShaderSkyLightTO14;                            // 0x0A76(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharaSkyLightIntensityScaleTO14;                          // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableCharaSpecularLighitngTO14;                          // 0x0A7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharaRimLightIntensityTO14;                               // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableCharaLightingCorrectionTO14;                        // 0x0A84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IBLColorModulateTO14;                                     // 0x0A88(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DirectLightIntensityInShadowTO14;                         // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShadowIntensityColorCorrectionTO14;                       // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ShadingCurveLUTCharaTO14;                                 // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ColorCorrectionLUTCharaTO14;                              // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IBLColorModulateTO14_s1;                                  // 0x0AB0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DirectLightIntensityInShadowTO14_s1;                      // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShadowIntensityColorCorrectionTO14_s1;                    // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ShadingCurveLUTCharaTO14_s1;                              // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ColorCorrectionLUTCharaTO14_s1;                           // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IBLColorModulateTO14_s2;                                  // 0x0AD8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DirectLightIntensityInShadowTO14_s2;                      // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShadowIntensityColorCorrectionTO14_s2;                    // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ShadingCurveLUTCharaTO14_s2;                              // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ColorCorrectionLUTCharaTO14_s2;                           // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IBLUpperColorTO14;                                        // 0x0B00(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                IBLMiddleColorTO14;                                       // 0x0B10(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                IBLLowerColorTO14;                                        // 0x0B20(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              IBLSpecularStrengthTO14;                                  // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IBLLightingContrastCharaTO14;                             // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IBLRoughnessCharaTO14;                                    // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeWidthTO14;                                            // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalEdgeThresholdTO14;                                  // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeStrengthDaytimeTO14;                                  // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeStrengthNightTO14;                                    // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeIntensityDaytimeTO14;                                 // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeIntensityNightTO14;                                   // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeDistanceFallOffTO14;                                  // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeDistanceFallBaseDistanceTO14;                         // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableSkinSelfShadowTO14;                                 // 0x0B5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SelfShadowDirectionTO14;                                  // 0x0B60(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FaceSelfShadowZBiasTO14;                                  // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SelfShadowSearchRadiusTO14;                               // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SelfShadowSearchBiasTO14;                                 // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SelfShadowStrengthTO14;                                   // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                DisableScreenSpaceCharaShadowTO14;                        // 0x0B7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DisableScreenSpaceShadowNormalFadeTO14;                   // 0x0B7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    EyeReflectionMapTO14;                                     // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeReflectionStrengthTO14;                                // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureCube*                                CharaMetalSpecularCubemap_TO14;                           // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureCube*                                CharaMetalSpecularCubemapExt_TO14;                        // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MetalReflectionStrengthTO14;                              // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MetalLocalReflectionStrengthTO14;                         // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableDebugDrawStageMetalReflectionTO14;                  // 0x0BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnablePaintingFilterTO14;                                 // 0x0BA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaintingFilterDiffusionWeightTO14;                        // 0x0BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaintingFilterMinColorDistanceTO14;                       // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ParaScreenTexture_0_TO14;                                 // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParaEffectStrength_0_TO14;                                // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParaModulateColorTO14;                                    // 0x0BC4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ParaContrast_TO14;                                        // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableParaInvertU_TO14;                                   // 0x0BD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnableParaInvertV_TO14;                                   // 0x0BD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParaRotation_TO14;                                        // 0x0BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ParaAdditiveMode_TO14;                                    // 0x0BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ParaMultiplyMode_TO14;                                    // 0x0BE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bEnableScreenMoyaEffect_TO14;                             // 0x0BE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    MoyaScreenTexture_0_TO14;                                 // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoyaEffectStrength_0_TO14;                                // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MoyaModulateColorTO14;                                    // 0x0BF4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MoyaAnimationSpeed_TO14;                                  // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalLightIntensityCharaScale;                      // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalLightZRotationOffset;                          // 0x0C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalLightHeightRotationOffset;                     // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RelativeToCameraDirection;                                // 0x0C14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CutSceneDistanceFogStartDistanceTO14;                     // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CutSceneDistanceFogFadeIntervalTO14;                      // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CutSceneDistanceFogColorTO14;                             // 0x0C20(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CutSceneDistanceFogOpacityTO14;                           // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaskedBlurStrengthTO14;                                   // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BlurMaskTexture_TO14;                                     // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaskedBlurTextureContrastTO14;                            // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneColorSaturationTO14;                                 // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SceneColorTintTO14;                                       // 0x0C48(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SceneColorSaturationWeightCharaTO14;                      // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneColorTintWeightCharaTO14;                            // 0x0C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneColorSaturationWeightEffectTO14;                     // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneColorTintWeightEffectTO14;                           // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharaDirectionalLightSaturationTO14;                      // 0x0C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharaDirectionalLightMinIntensityTO14;                    // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharaSkyLightSaturationTO14;                              // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharaSkyLightMinIntensityTO14;                            // 0x0C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharaParticleLightIntensityTO14;                          // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharaFogStrengthScaleTO14;                                // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TranslucentFogStrengthScaleTO14;                          // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TranslucentFogDepthScaleTO14;                             // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TranslucentFogRGBScaleTO14;                               // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TranslucentFogAlphaScaleTO14;                             // 0x0C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ScreenClearTextureTO14;                                   // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenClearTextureUVStartTO14;                            // 0x0C98(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ScreenClearTextureUVEndTO14;                              // 0x0CA0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};
