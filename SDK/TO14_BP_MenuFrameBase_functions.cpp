
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

// Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BP_MenuFrameBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.Construct");

	UTO14_BP_MenuFrameBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.PlayInAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuFrameBase_C::PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.PlayInAnimation");

	UTO14_BP_MenuFrameBase_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.PlayOutAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuFrameBase_C::PlayOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.PlayOutAnimation");

	UTO14_BP_MenuFrameBase_C_PlayOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_MenuFrameBase_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.OnAnimationFinished");

	UTO14_BP_MenuFrameBase_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuFrameBase_C::EventInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.EventInitialize");

	UTO14_BP_MenuFrameBase_C_EventInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.ExecuteUbergraph_TO14_BP_MenuFrameBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuFrameBase_C::ExecuteUbergraph_TO14_BP_MenuFrameBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.ExecuteUbergraph_TO14_BP_MenuFrameBase");

	UTO14_BP_MenuFrameBase_C_ExecuteUbergraph_TO14_BP_MenuFrameBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.OnAnimationEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuFrameBase_C::OnAnimationEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuFrameBase.TO14_BP_MenuFrameBase_C.OnAnimationEnd__DelegateSignature");

	UTO14_BP_MenuFrameBase_C_OnAnimationEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
