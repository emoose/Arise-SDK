
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

// Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.SetMouseFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C::SetMouseFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.SetMouseFocus");

	UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C_SetMouseFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.SetMouseEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C::SetMouseEnable(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.SetMouseEnable");

	UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C_SetMouseEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.SetModifiedText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           ModifiedText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C::SetModifiedText(const struct FModifiedText& ModifiedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.SetModifiedText");

	UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C_SetModifiedText_Params params;
	params.ModifiedText = ModifiedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C::SetActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.SetActive");

	UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C_SetActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.SetMenuText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuText                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C::SetMenuText(const struct FString& MenuText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.SetMenuText");

	UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C_SetMenuText_Params params;
	params.MenuText = MenuText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_LIST_000_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_LIST_000_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST_000_STR.TO14_BPI_GUI_MNU_PAU_LIST_000_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_LIST_000_STR");

	UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_LIST_000_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
