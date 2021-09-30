
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

// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.SetArtsUsableFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewFlag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::SetArtsUsableFlag(bool NewFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.SetArtsUsableFlag");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_SetArtsUsableFlag_Params params;
	params.NewFlag = NewFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.SetArtsLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BattleMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::SetArtsLabel(const struct FName& Label, int CharacterID, bool BattleMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.SetArtsLabel");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_SetArtsLabel_Params params;
	params.Label = Label;
	params.CharacterID = CharacterID;
	params.BattleMode = BattleMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.SetActive");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.Construct");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.Tick");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_6_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_6_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_6_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_6_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.BndEvt__AriseClickableArea_Check_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::BndEvt__AriseClickableArea_Check_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.BndEvt__AriseClickableArea_Check_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_BndEvt__AriseClickableArea_Check_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.BndEvt__AriseClickableArea_Check_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::BndEvt__AriseClickableArea_Check_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.BndEvt__AriseClickableArea_Check_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_BndEvt__AriseClickableArea_Check_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_STR
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_LIST_001_STR.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_STR");

	UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
