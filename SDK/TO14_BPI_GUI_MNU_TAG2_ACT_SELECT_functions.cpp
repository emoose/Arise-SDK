
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

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.CheckAnyLearnArts
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLean                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EArisePartyID                  CharaID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::CheckAnyLearnArts(const struct FName& ArtsLabel, bool* bLean, EArisePartyID* CharaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.CheckAnyLearnArts");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_CheckAnyLearnArts_Params params;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLean != nullptr)
		*bLean = params.bLean;
	if (CharaID != nullptr)
		*CharaID = params.CharaID;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsHeal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::RefreshIconAsHeal(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsHeal");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_RefreshIconAsHeal_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsOther
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::RefreshIconAsOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsOther");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_RefreshIconAsOther_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsBuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::RefreshIconAsBuff(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsBuff");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_RefreshIconAsBuff_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsUseItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::RefreshIconAsUseItem(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsUseItem");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_RefreshIconAsUseItem_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.OnDeselected");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.OnSelected");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.SetActive");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::Initialize(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.Initialize");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_Initialize_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_SELECT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_SELECT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_SELECT");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
