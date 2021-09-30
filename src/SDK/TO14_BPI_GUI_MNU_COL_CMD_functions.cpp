
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

// Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COL_CMD_C::SetActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.SetActive");

	UTO14_BPI_GUI_MNU_COL_CMD_C_SetActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_COL_CMD_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.OnDeselected");

	UTO14_BPI_GUI_MNU_COL_CMD_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_COL_CMD_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.OnSelected");

	UTO14_BPI_GUI_MNU_COL_CMD_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_COL_CMD_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_COL_CMD_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_COL_CMD_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_COL_CMD_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_COL_CMD_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_COL_CMD_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COL_CMD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COL_CMD_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_COL_CMD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_CMD.TO14_BPI_GUI_MNU_COL_CMD_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COL_CMD");

	UTO14_BPI_GUI_MNU_COL_CMD_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_COL_CMD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
