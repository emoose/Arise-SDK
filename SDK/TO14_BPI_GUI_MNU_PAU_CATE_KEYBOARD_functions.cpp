
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

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::PadWork(class AMenuPadProcess* InputPin, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.PadWork");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_PadWork_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.SetShowClickable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::SetShowClickable(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.SetShowClickable");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_SetShowClickable_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.ChangeOperationType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::ChangeOperationType(int InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.ChangeOperationType");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_ChangeOperationType_Params params;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.Initialize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDictionaryText> Types                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TypeCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LeftLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 RightLabel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::Initialize(int TypeCount, const struct FString& LeftLabel, const struct FString& RightLabel, TArray<struct FDictionaryText>* Types)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.Initialize");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_Initialize_Params params;
	params.TypeCount = TypeCount;
	params.LeftLabel = LeftLabel;
	params.RightLabel = RightLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Types != nullptr)
		*Types = params.Types;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_4_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_4_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_4_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_4_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.EventChangeOperation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C::EventChangeOperation__DelegateSignature(int InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.EventChangeOperation__DelegateSignature");

	UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_EventChangeOperation__DelegateSignature_Params params;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
