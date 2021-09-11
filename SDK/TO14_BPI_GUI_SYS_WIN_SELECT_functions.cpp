
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

// Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_SYS_WIN_SELECT_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.OnDeselected");

	UTO14_BPI_GUI_SYS_WIN_SELECT_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_SYS_WIN_SELECT_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.OnSelected");

	UTO14_BPI_GUI_SYS_WIN_SELECT_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_SELECT_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_SELECT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_SELECT_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_SYS_WIN_SELECT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.Activate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_SELECT_C::Activate(bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.Activate");

	UTO14_BPI_GUI_SYS_WIN_SELECT_C_Activate_Params params;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_SELECT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_SELECT_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_SELECT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_SELECT.TO14_BPI_GUI_SYS_WIN_SELECT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_SELECT");

	UTO14_BPI_GUI_SYS_WIN_SELECT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_SELECT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
