
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

// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.Darken
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuBGBase_C::Darken(bool bSw, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.Darken");

	UTO14_BP_MenuBGBase_C_Darken_Params params;
	params.bSw = bSw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.Terminate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuBGBase_C::Terminate(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.Terminate");

	UTO14_BP_MenuBGBase_C_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BP_MenuBGBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.Construct");

	UTO14_BP_MenuBGBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.PlayInAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuBGBase_C::PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.PlayInAnimation");

	UTO14_BP_MenuBGBase_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.PlayOutAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuBGBase_C::PlayOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.PlayOutAnimation");

	UTO14_BP_MenuBGBase_C_PlayOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_MenuBGBase_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.OnAnimationFinished");

	UTO14_BP_MenuBGBase_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuBGBase_C::EventInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.EventInitialize");

	UTO14_BP_MenuBGBase_C_EventInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.ShowImmediate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuBGBase_C::ShowImmediate(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.ShowImmediate");

	UTO14_BP_MenuBGBase_C_ShowImmediate_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.PlayFinishAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuBGBase_C::PlayFinishAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.PlayFinishAnimation");

	UTO14_BP_MenuBGBase_C_PlayFinishAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.ExecuteUbergraph_TO14_BP_MenuBGBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuBGBase_C::ExecuteUbergraph_TO14_BP_MenuBGBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.ExecuteUbergraph_TO14_BP_MenuBGBase");

	UTO14_BP_MenuBGBase_C_ExecuteUbergraph_TO14_BP_MenuBGBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.OnAnimationEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuBGBase_C::OnAnimationEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuBGBase.TO14_BP_MenuBGBase_C.OnAnimationEnd__DelegateSignature");

	UTO14_BP_MenuBGBase_C_OnAnimationEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
