
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

// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.GetArtsLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Label                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C::GetArtsLabel(struct FName* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.GetArtsLabel");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C_GetArtsLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.SetArtsLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C::SetArtsLabel(const struct FName& Label, int CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.SetArtsLabel");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C_SetArtsLabel_Params params;
	params.Label = Label;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.Tick");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000_STR
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_000_STR.TO14_BPI_GUI_MNU_MAS_LIST_000_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000_STR");

	UTO14_BPI_GUI_MNU_MAS_LIST_000_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
