
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

// Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.SetVisualItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuVisualData         VisualData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR2_C::SetVisualItem(const struct FMenuVisualData& VisualData, EArisePartyID PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.SetVisualItem");

	UTO14_BPI_GUI_MNU_EQU_SET_STR2_C_SetVisualItem_Params params;
	params.VisualData = VisualData;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.SetCursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR2_C::SetCursorVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.SetCursorVisible");

	UTO14_BPI_GUI_MNU_EQU_SET_STR2_C_SetCursorVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.SetMouseActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR2_C::SetMouseActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.SetMouseActive");

	UTO14_BPI_GUI_MNU_EQU_SET_STR2_C_SetMouseActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_EQU_SET_STR2_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.OnDeselected");

	UTO14_BPI_GUI_MNU_EQU_SET_STR2_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_EQU_SET_STR2_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.OnSelected");

	UTO14_BPI_GUI_MNU_EQU_SET_STR2_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR2_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.SetActive");

	UTO14_BPI_GUI_MNU_EQU_SET_STR2_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.SetItemID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR2_C::SetItemID(int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.SetItemID");

	UTO14_BPI_GUI_MNU_EQU_SET_STR2_C_SetItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET_STR2_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU_SET_STR2_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET_STR2_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU_SET_STR2_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_STR2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR2_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_STR2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR2.TO14_BPI_GUI_MNU_EQU_SET_STR2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_STR2");

	UTO14_BPI_GUI_MNU_EQU_SET_STR2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_STR2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
