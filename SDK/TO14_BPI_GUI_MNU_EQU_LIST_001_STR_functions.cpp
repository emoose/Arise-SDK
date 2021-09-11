
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

// Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.ChangeColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ColorType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C::ChangeColor(int ColorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.ChangeColor");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C_ChangeColor_Params params;
	params.ColorType = ColorType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.CursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C::CursorVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.CursorVisible");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C_CursorVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           ModText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C::SetText(const struct FModifiedText& ModText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.SetText");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C_SetText_Params params;
	params.ModText = ModText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.SetActive");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_10_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_10_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_10_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_10_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_001_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_001_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_001_STR.TO14_BPI_GUI_MNU_EQU_LIST_001_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_001_STR");

	UTO14_BPI_GUI_MNU_EQU_LIST_001_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_001_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
