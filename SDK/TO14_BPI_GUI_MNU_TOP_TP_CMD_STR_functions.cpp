
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

// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.IsEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C::IsEnable(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.IsEnable");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C_IsEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.SetEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C::SetEnable(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.SetEnable");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C_SetEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.SetMouseActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C::SetMouseActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.SetMouseActive");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C_SetMouseActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.SetActive");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         DicText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C::SetText(const struct FDictionaryText& DicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.SetText");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C_SetText_Params params;
	params.DicText = DicText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.BndEvt__MouseArea_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C::BndEvt__MouseArea_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.BndEvt__MouseArea_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C_BndEvt__MouseArea_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.BndEvt__MouseArea_K2Node_ComponentBoundEvent_29_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C::BndEvt__MouseArea_K2Node_ComponentBoundEvent_29_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.BndEvt__MouseArea_K2Node_ComponentBoundEvent_29_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C_BndEvt__MouseArea_K2Node_ComponentBoundEvent_29_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_TP_CMD_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_TP_CMD_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_STR.TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_TP_CMD_STR");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
