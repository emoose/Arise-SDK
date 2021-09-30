
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

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           ModText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::SetButtonText(const struct FModifiedText& ModText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetButtonText");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_SetButtonText_Params params;
	params.ModText = ModText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetActive");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetCursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::SetCursorVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetCursorVisible");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_SetCursorVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.GetArtsLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Label                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::GetArtsLabel(struct FName* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.GetArtsLabel");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_GetArtsLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetButtonIconText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   IconText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::SetButtonIconText(const struct FText& IconText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetButtonIconText");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_SetButtonIconText_Params params;
	params.IconText = IconText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetArtsData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDictionaryText         DictionaryText                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::SetArtsData(const struct FName& Label, const struct FDictionaryText& DictionaryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetArtsData");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_SetArtsData_Params params;
	params.Label = Label;
	params.DictionaryText = DictionaryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.GetSelectStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SelectState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::GetSelectStatus(bool* SelectState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.GetSelectStatus");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_GetSelectStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectState != nullptr)
		*SelectState = params.SelectState;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAS_SET_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAS_SET_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.Tick");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.Construct");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET_STR
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_SET_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET_STR");

	UTO14_BPI_GUI_MNU_MAS_SET_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
