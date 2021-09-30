
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

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.EquipVisualCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::EquipVisualCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.EquipVisualCheck");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_EquipVisualCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.EquipCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::EquipCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.EquipCheck");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_EquipCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.GetVisualItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuVisualData         VisualData                     (Parm, OutParm)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::GetVisualItem(struct FMenuVisualData* VisualData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.GetVisualItem");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_GetVisualItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VisualData != nullptr)
		*VisualData = params.VisualData;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.ResetVisual
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MouseEnable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::ResetVisual(bool MouseEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.ResetVisual");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_ResetVisual_Params params;
	params.MouseEnable = MouseEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetVisualItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuVisualData         Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DisableColor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::SetVisualItem(const struct FMenuVisualData& Data, int CharacterID, bool DisableColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetVisualItem");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetVisualItem_Params params;
	params.Data = Data;
	params.CharacterID = CharacterID;
	params.DisableColor = DisableColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetLockMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Lock                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::SetLockMark(bool Lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetLockMark");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetLockMark_Params params;
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetNewIconVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::SetNewIconVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetNewIconVisible");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetNewIconVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.GetItemId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::GetItemId(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.GetItemId");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_GetItemId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MouseEnable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DisableColor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::Reset(bool MouseEnable, bool DisableColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.Reset");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_Reset_Params params;
	params.MouseEnable = MouseEnable;
	params.DisableColor = DisableColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetItemID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::SetItemID(int ID, int CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetItemID");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetItemID_Params params;
	params.ID = ID;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetMouseActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::SetMouseActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetMouseActive");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetMouseActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetActive");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.Activate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::Activate(bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.Activate");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_Activate_Params params;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.Tick");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000_STR
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000_STR");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
