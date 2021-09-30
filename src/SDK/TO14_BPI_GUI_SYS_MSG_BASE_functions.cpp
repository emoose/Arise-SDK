
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

// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.NextPage
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_BASE_C::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.NextPage");

	UTO14_BPI_GUI_SYS_MSG_BASE_C_NextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.SetMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 StringData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_MSG_BASE_C::SetMessage(const struct FString& StringData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.SetMessage");

	UTO14_BPI_GUI_SYS_MSG_BASE_C_SetMessage_Params params;
	params.StringData = StringData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.NextMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 StringData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_MSG_BASE_C::NextMessage(const struct FString& StringData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.NextMessage");

	UTO14_BPI_GUI_SYS_MSG_BASE_C_NextMessage_Params params;
	params.StringData = StringData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_BASE_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.OnAnimationFinished");

	UTO14_BPI_GUI_SYS_MSG_BASE_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.BndEvt__AriseClickableArea_42_K2Node_ComponentBoundEvent_36_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_MSG_BASE_C::BndEvt__AriseClickableArea_42_K2Node_ComponentBoundEvent_36_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.BndEvt__AriseClickableArea_42_K2Node_ComponentBoundEvent_36_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_MSG_BASE_C_BndEvt__AriseClickableArea_42_K2Node_ComponentBoundEvent_36_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG_BASE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_MSG_BASE_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG_BASE");

	UTO14_BPI_GUI_SYS_MSG_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
