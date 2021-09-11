
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

// Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.Darken
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_FADE_C::Darken(bool bSw, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.Darken");

	UTO14_BPI_GUI_MNU_TOP_FADE_C_Darken_Params params;
	params.bSw = bSw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.Terminate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_FADE_C::Terminate(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.Terminate");

	UTO14_BPI_GUI_MNU_TOP_FADE_C_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_FADE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.Construct");

	UTO14_BPI_GUI_MNU_TOP_FADE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.PlayInAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_FADE_C::PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.PlayInAnimation");

	UTO14_BPI_GUI_MNU_TOP_FADE_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.PlayOutAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_FADE_C::PlayOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.PlayOutAnimation");

	UTO14_BPI_GUI_MNU_TOP_FADE_C_PlayOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_FADE_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_TOP_FADE_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_FADE_C::EventInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.EventInitialize");

	UTO14_BPI_GUI_MNU_TOP_FADE_C_EventInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.PlayFinishAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_FADE_C::PlayFinishAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.PlayFinishAnimation");

	UTO14_BPI_GUI_MNU_TOP_FADE_C_PlayFinishAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_FADE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_FADE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_FADE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_FADE");

	UTO14_BPI_GUI_MNU_TOP_FADE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_FADE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.OnAnimationEnd_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_FADE_C::OnAnimationEnd_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_FADE.TO14_BPI_GUI_MNU_TOP_FADE_C.OnAnimationEnd_0__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP_FADE_C_OnAnimationEnd_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
