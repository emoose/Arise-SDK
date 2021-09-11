
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

// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.SetSelectImagVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C::SetSelectImagVisiblity(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.SetSelectImagVisiblity");

	UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_SetSelectImagVisiblity_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.SetButtonData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EULA_Language                  Lang                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ButtonLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C::SetButtonData(EULA_Language Lang, const struct FString& ButtonLabel, const struct FString& Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.SetButtonData");

	UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_SetButtonData_Params params;
	params.Lang = Lang;
	params.ButtonLabel = ButtonLabel;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.OnDeselected");

	UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.OnSelected");

	UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C::SetActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.SetActive");

	UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_SetActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_BTN_LANG
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_BTN_LANG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_BTN_LANG");

	UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_BTN_LANG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
