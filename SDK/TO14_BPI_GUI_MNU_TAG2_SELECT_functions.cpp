
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

// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.SetActive");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_SELECT_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.OnDeselected");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_SELECT_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.OnSelected");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsTacticsName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CustomFlag                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_C::Initialize(const struct FString& Label, bool IsTacticsName, bool CustomFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.Initialize");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_C_Initialize_Params params;
	params.Label = Label;
	params.IsTacticsName = IsTacticsName;
	params.CustomFlag = CustomFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SELECT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SELECT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SELECT");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SELECT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
