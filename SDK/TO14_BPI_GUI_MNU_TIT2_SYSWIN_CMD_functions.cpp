
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

// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.Get_NAME_AutoScroll_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::Get_NAME_AutoScroll_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.Get_NAME_AutoScroll_1");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_Get_NAME_AutoScroll_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.UpdateInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::UpdateInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.UpdateInfo");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_UpdateInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.BindInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SYSWIN_INFO_C* Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::BindInfo(class UTO14_BPI_GUI_MNU_TIT2_SYSWIN_INFO_C** Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.BindInfo");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_BindInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.MakeData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FListWidgetInitData     Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::MakeData(const struct FListWidgetInitData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.MakeData");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_MakeData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.PauseAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::PauseAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.PauseAnime");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_PauseAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.AnimationWork
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::AnimationWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.AnimationWork");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_AnimationWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.SetCursorFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFocusable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::SetCursorFocus(bool IsFocusable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.SetCursorFocus");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_SetCursorFocus_Params params;
	params.IsFocusable = IsFocusable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.SetItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkllID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::SetItemData(int SkllID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.SetItemData");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_SetItemData_Params params;
	params.SkllID = SkllID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.CursorSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::CursorSelect(bool IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.CursorSelect");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_CursorSelect_Params params;
	params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.OnDeselected");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.OnSelected");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.CursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::CursorVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.CursorVisible");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_CursorVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.Activate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::Activate(bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.Activate");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_Activate_Params params;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.ItemDataChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FListWidgetInitData     WidgetInitData                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::ItemDataChange(const struct FListWidgetInitData& WidgetInitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.ItemDataChange");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_ItemDataChange_Params params;
	params.WidgetInitData = WidgetInitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD.TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD");

	UTO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SYSWIN_CMD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
