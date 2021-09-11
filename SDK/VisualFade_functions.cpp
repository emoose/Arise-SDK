
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function VisualFade.VisualFadeStatics.SetFadeOpacity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Opacity                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVisualFadeLayer>  Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UVisualFadeStatics::STATIC_SetFadeOpacity(float Opacity, TEnumAsByte<EVisualFadeLayer> Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.SetFadeOpacity");

	UVisualFadeStatics_SetFadeOpacity_Params params;
	params.Opacity = Opacity;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VisualFade.VisualFadeStatics.SetFadeDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bDebug                         (Parm, ZeroConstructor, IsPlainOldData)

void UVisualFadeStatics::STATIC_SetFadeDebugMode(bool bDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.SetFadeDebugMode");

	UVisualFadeStatics_SetFadeDebugMode_Params params;
	params.bDebug = bDebug;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VisualFade.VisualFadeStatics.SetFadeColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EVisualFadeLayer>  Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UVisualFadeStatics::STATIC_SetFadeColor(const struct FLinearColor& Color, TEnumAsByte<EVisualFadeLayer> Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.SetFadeColor");

	UVisualFadeStatics_SetFadeColor_Params params;
	params.Color = Color;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VisualFade.VisualFadeStatics.ResetFade
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UVisualFadeStatics::STATIC_ResetFade(TEnumAsByte<EVisualFadeLayer> Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.ResetFade");

	UVisualFadeStatics_ResetFade_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VisualFade.VisualFadeStatics.IsFade
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVisualFadeStatics::STATIC_IsFade(TEnumAsByte<EVisualFadeLayer> Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.IsFade");

	UVisualFadeStatics_IsFade_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VisualFade.VisualFadeStatics.IsActive
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVisualFadeStatics::STATIC_IsActive(TEnumAsByte<EVisualFadeLayer> Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.IsActive");

	UVisualFadeStatics_IsActive_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VisualFade.VisualFadeStatics.GetFadeOpacity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVisualFadeStatics::STATIC_GetFadeOpacity(TEnumAsByte<EVisualFadeLayer> Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.GetFadeOpacity");

	UVisualFadeStatics_GetFadeOpacity_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VisualFade.VisualFadeStatics.GetFadeColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            oColor                         (Parm, OutParm, IsPlainOldData)

void UVisualFadeStatics::STATIC_GetFadeColor(TEnumAsByte<EVisualFadeLayer> Layer, struct FLinearColor* oColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.GetFadeColor");

	UVisualFadeStatics_GetFadeColor_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oColor != nullptr)
		*oColor = params.oColor;
}


// Function VisualFade.VisualFadeStatics.FadeOut
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVisualFadeLayer>  Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVisualFadeCompleteBehavior> CompleteBehavior               (Parm, ZeroConstructor, IsPlainOldData)

void UVisualFadeStatics::STATIC_FadeOut(float Duration, TEnumAsByte<EVisualFadeLayer> Layer, TEnumAsByte<EVisualFadeCompleteBehavior> CompleteBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.FadeOut");

	UVisualFadeStatics_FadeOut_Params params;
	params.Duration = Duration;
	params.Layer = Layer;
	params.CompleteBehavior = CompleteBehavior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VisualFade.VisualFadeStatics.FadeIn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVisualFadeLayer>  Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVisualFadeCompleteBehavior> CompleteBehavior               (Parm, ZeroConstructor, IsPlainOldData)

void UVisualFadeStatics::STATIC_FadeIn(float Duration, TEnumAsByte<EVisualFadeLayer> Layer, TEnumAsByte<EVisualFadeCompleteBehavior> CompleteBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.FadeIn");

	UVisualFadeStatics_FadeIn_Params params;
	params.Duration = Duration;
	params.Layer = Layer;
	params.CompleteBehavior = CompleteBehavior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VisualFade.VisualFadeStatics.DeactivateFadeLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UVisualFadeStatics::STATIC_DeactivateFadeLayer(TEnumAsByte<EVisualFadeLayer> Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.DeactivateFadeLayer");

	UVisualFadeStatics_DeactivateFadeLayer_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VisualFade.VisualFadeStatics.ActivateFadeLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UVisualFadeStatics::STATIC_ActivateFadeLayer(TEnumAsByte<EVisualFadeLayer> Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function VisualFade.VisualFadeStatics.ActivateFadeLayer");

	UVisualFadeStatics_ActivateFadeLayer_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
