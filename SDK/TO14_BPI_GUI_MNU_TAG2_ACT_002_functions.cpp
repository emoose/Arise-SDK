
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

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.CheckAnyLearnArts
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Lean                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EArisePartyID                  CharaID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::CheckAnyLearnArts(const struct FName& ArtsLabel, bool* Lean, EArisePartyID* CharaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.CheckAnyLearnArts");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_CheckAnyLearnArts_Params params;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lean != nullptr)
		*Lean = params.Lean;
	if (CharaID != nullptr)
		*CharaID = params.CharaID;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsHeal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::RefreshIconAsHeal(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsHeal");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_RefreshIconAsHeal_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsOther
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::RefreshIconAsOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsOther");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_RefreshIconAsOther_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsBuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::RefreshIconAsBuff(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsBuff");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_RefreshIconAsBuff_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsUseItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::RefreshIconAsUseItem(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsUseItem");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_RefreshIconAsUseItem_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.SetClickable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::SetClickable(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.SetClickable");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_SetClickable_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BindCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_SYS_CURSOR_C* SYS_CURSOR                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::BindCursor(class UTO14_BPI_GUI_SYS_CURSOR_C* SYS_CURSOR)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BindCursor");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_BindCursor_Params params;
	params.SYS_CURSOR = SYS_CURSOR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.OnDeselected");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.OnSelected");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::Initialize(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.Initialize");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_Initialize_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.ChangeVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::ChangeVisibility(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.ChangeVisibility");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_ChangeVisibility_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_002
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_002_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_002(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_002");

	UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_002_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
