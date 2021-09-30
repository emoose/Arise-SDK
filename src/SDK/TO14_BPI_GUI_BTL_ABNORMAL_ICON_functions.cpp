
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

// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.GetOpenAnimStartTime
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::GetOpenAnimStartTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.GetOpenAnimStartTime");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_GetOpenAnimStartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.ShowAbnormalIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ArrowStartTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::ShowAbnormalIcon(EBattleHudAbnormalType Type, float Value, float ArrowStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.ShowAbnormalIcon");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_ShowAbnormalIcon_Params params;
	params.Type = Type;
	params.Value = Value;
	params.ArrowStartTime = ArrowStartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.StopAnimations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidgetAnimation*> WidgetAnimations               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::StopAnimations(TArray<class UWidgetAnimation*>* WidgetAnimations)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.StopAnimations");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_StopAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetAnimations != nullptr)
		*WidgetAnimations = params.WidgetAnimations;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.StopFadingAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::StopFadingAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.StopFadingAnim");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_StopFadingAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.PlayArrowAnimation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::PlayArrowAnimation(EBattleHudAbnormalType Type, float Value, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.PlayArrowAnimation");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_PlayArrowAnimation_Params params;
	params.Type = Type;
	params.Value = Value;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.GetPlayginArrowAnimationTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimationCurrentTime           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::GetPlayginArrowAnimationTime(float* AnimationCurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.GetPlayginArrowAnimationTime");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_GetPlayginArrowAnimationTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationCurrentTime != nullptr)
		*AnimationCurrentTime = params.AnimationCurrentTime;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.Clear");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.GetTargetImage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UImage*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UImage* UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::GetTargetImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.GetTargetImage");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_GetTargetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.SetAbnormalType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ArrowStartTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::SetAbnormalType(EBattleHudAbnormalType Type, float Value, float ArrowStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.SetAbnormalType");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_SetAbnormalType_Params params;
	params.Type = Type;
	params.Value = Value;
	params.ArrowStartTime = ArrowStartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnStartAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::OnStartAnim(EBattleHudAbnormalType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnStartAnim");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_OnStartAnim_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnEndAnim
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::OnEndAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnEndAnim");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_OnEndAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnChangeAbnormalTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::OnChangeAbnormalTime(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnChangeAbnormalTime");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_OnChangeAbnormalTime_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnStartBuffAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudAbnormalType         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ArrowStartTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::OnStartBuffAnim(EBattleHudAbnormalType Type, float Value, float ArrowStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnStartBuffAnim");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_OnStartBuffAnim_Params params;
	params.Type = Type;
	params.Value = Value;
	params.ArrowStartTime = ArrowStartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.BndEvt__Up_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::BndEvt__Up_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.BndEvt__Up_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_BndEvt__Up_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.BndEvt__Down_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::BndEvt__Down_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.BndEvt__Down_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_BndEvt__Down_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_ICON
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_ICON(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_ICON");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_ICON_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnEndIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C::OnEndIcon__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ABNORMAL_ICON.TO14_BPI_GUI_BTL_ABNORMAL_ICON_C.OnEndIcon__DelegateSignature");

	UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C_OnEndIcon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
