
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

// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OpenMulti
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         TutorialLabelList              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BP_MenuTutorialBase_C::OpenMulti(TArray<struct FString>* TutorialLabelList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OpenMulti");

	UTO14_BP_MenuTutorialBase_C_OpenMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TutorialLabelList != nullptr)
		*TutorialLabelList = params.TutorialLabelList;
}


// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OpenFirst
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TutorialLabel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BP_MenuTutorialBase_C::OpenFirst(const struct FString& TutorialLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OpenFirst");

	UTO14_BP_MenuTutorialBase_C_OpenFirst_Params params;
	params.TutorialLabel = TutorialLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.IsClosed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsClosed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuTutorialBase_C::IsClosed(bool* IsClosed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.IsClosed");

	UTO14_BP_MenuTutorialBase_C_IsClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosed != nullptr)
		*IsClosed = params.IsClosed;
}


// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BP_MenuTutorialBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.Construct");

	UTO14_BP_MenuTutorialBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.PlayInAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuTutorialBase_C::PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.PlayInAnimation");

	UTO14_BP_MenuTutorialBase_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.PlayOutAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuTutorialBase_C::PlayOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.PlayOutAnimation");

	UTO14_BP_MenuTutorialBase_C_PlayOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_MenuTutorialBase_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OnAnimationFinished");

	UTO14_BP_MenuTutorialBase_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.EventInitialize
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuTutorialBase_C::EventInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.EventInitialize");

	UTO14_BP_MenuTutorialBase_C_EventInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.ExecuteUbergraph_TO14_BP_MenuTutorialBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuTutorialBase_C::ExecuteUbergraph_TO14_BP_MenuTutorialBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.ExecuteUbergraph_TO14_BP_MenuTutorialBase");

	UTO14_BP_MenuTutorialBase_C_ExecuteUbergraph_TO14_BP_MenuTutorialBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OnAnimationEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuTutorialBase_C::OnAnimationEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C.OnAnimationEnd__DelegateSignature");

	UTO14_BP_MenuTutorialBase_C_OnAnimationEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
