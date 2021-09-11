#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function VisualFade.VisualFadeStatics.SetFadeOpacity
struct UVisualFadeStatics_SetFadeOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VisualFade.VisualFadeStatics.SetFadeDebugMode
struct UVisualFadeStatics_SetFadeDebugMode_Params
{
	bool                                               bDebug;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VisualFade.VisualFadeStatics.SetFadeColor
struct UVisualFadeStatics_SetFadeColor_Params
{
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VisualFade.VisualFadeStatics.ResetFade
struct UVisualFadeStatics_ResetFade_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VisualFade.VisualFadeStatics.IsFade
struct UVisualFadeStatics_IsFade_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VisualFade.VisualFadeStatics.IsActive
struct UVisualFadeStatics_IsActive_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VisualFade.VisualFadeStatics.GetFadeOpacity
struct UVisualFadeStatics_GetFadeOpacity_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VisualFade.VisualFadeStatics.GetFadeColor
struct UVisualFadeStatics_GetFadeColor_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                oColor;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function VisualFade.VisualFadeStatics.FadeOut
struct UVisualFadeStatics_FadeOut_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisualFadeCompleteBehavior>           CompleteBehavior;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VisualFade.VisualFadeStatics.FadeIn
struct UVisualFadeStatics_FadeIn_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisualFadeCompleteBehavior>           CompleteBehavior;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VisualFade.VisualFadeStatics.DeactivateFadeLayer
struct UVisualFadeStatics_DeactivateFadeLayer_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VisualFade.VisualFadeStatics.ActivateFadeLayer
struct UVisualFadeStatics_ActivateFadeLayer_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
