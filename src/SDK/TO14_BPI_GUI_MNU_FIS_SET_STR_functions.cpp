
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

// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.SetMouseEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_SET_STR_C::SetMouseEnable(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.SetMouseEnable");

	UTO14_BPI_GUI_MNU_FIS_SET_STR_C_SetMouseEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TitleLabel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_FIS_SET_STR_C::SetData(const struct FString& TitleLabel, const struct FString& ItemLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.SetData");

	UTO14_BPI_GUI_MNU_FIS_SET_STR_C_SetData_Params params;
	params.TitleLabel = TitleLabel;
	params.ItemLabel = ItemLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_FIS_SET_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_FIS_SET_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_FIS_SET_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_FIS_SET_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_SET_STR_C::SetActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.SetActive");

	UTO14_BPI_GUI_MNU_FIS_SET_STR_C_SetActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_SET_STR_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_FIS_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_FIS_SET_STR_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_FIS_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_SET_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_FIS_SET_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_SET_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_SET_STR");

	UTO14_BPI_GUI_MNU_FIS_SET_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_SET_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
