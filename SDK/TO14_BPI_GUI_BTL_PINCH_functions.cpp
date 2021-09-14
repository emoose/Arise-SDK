
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

// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.GetStartAtTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StartAtTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_PINCH_C::GetStartAtTime(class UWidgetAnimation* Animation, float* StartAtTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.GetStartAtTime");

	UTO14_BPI_GUI_BTL_PINCH_C_GetStartAtTime_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartAtTime != nullptr)
		*StartAtTime = params.StartAtTime;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.GetCaptureImage
// (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UImage*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UImage* UTO14_BPI_GUI_BTL_PINCH_C::GetCaptureImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.GetCaptureImage");

	UTO14_BPI_GUI_BTL_PINCH_C_GetCaptureImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.GetEndAnimation
// (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UTO14_BPI_GUI_BTL_PINCH_C::GetEndAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.GetEndAnimation");

	UTO14_BPI_GUI_BTL_PINCH_C_GetEndAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.GetLoopAnimation
// (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UTO14_BPI_GUI_BTL_PINCH_C::GetLoopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.GetLoopAnimation");

	UTO14_BPI_GUI_BTL_PINCH_C_GetLoopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.GetStartAnimation
// (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UTO14_BPI_GUI_BTL_PINCH_C::GetStartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.GetStartAnimation");

	UTO14_BPI_GUI_BTL_PINCH_C_GetStartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_PINCH_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.BindEvent");

	UTO14_BPI_GUI_BTL_PINCH_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.BeginCrisis
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_PINCH_C::BeginCrisis()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.BeginCrisis");

	UTO14_BPI_GUI_BTL_PINCH_C_BeginCrisis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.BndEvt__StartAnimation_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_PINCH_C::BndEvt__StartAnimation_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.BndEvt__StartAnimation_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_PINCH_C_BndEvt__StartAnimation_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_PINCH_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.UnBindEvent");

	UTO14_BPI_GUI_BTL_PINCH_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_PINCH_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.Construct");

	UTO14_BPI_GUI_BTL_PINCH_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.EndCrisis
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_PINCH_C::EndCrisis()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.EndCrisis");

	UTO14_BPI_GUI_BTL_PINCH_C_EndCrisis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.BndEvt__EndAnimation_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_PINCH_C::BndEvt__EndAnimation_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.BndEvt__EndAnimation_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_PINCH_C_BndEvt__EndAnimation_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_PINCH
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_PINCH_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_PINCH(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_PINCH.TO14_BPI_GUI_BTL_PINCH_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_PINCH");

	UTO14_BPI_GUI_BTL_PINCH_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_PINCH_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
