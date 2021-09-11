
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

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetQuestStepData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestStepData          StepData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsMainQuest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HighPriority                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::SetQuestStepData(const struct FQuestStepData& StepData, bool IsMainQuest, bool HighPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetQuestStepData");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_SetQuestStepData_Params params;
	params.StepData = StepData;
	params.IsMainQuest = IsMainQuest;
	params.HighPriority = HighPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetQuestMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::SetQuestMarker(bool marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetQuestMarker");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_SetQuestMarker_Params params;
	params.marker = marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.IsQuestCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FQuestData              QuestData                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            TabNo                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Check                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::IsQuestCheck(int TabNo, struct FQuestData* QuestData, bool* Check)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.IsQuestCheck");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_IsQuestCheck_Params params;
	params.TabNo = TabNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestData != nullptr)
		*QuestData = params.QuestData;
	if (Check != nullptr)
		*Check = params.Check;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.GetQuestNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData              Data                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FDictionaryText         Text                           (Parm, OutParm)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::GetQuestNameText(struct FQuestData* Data, struct FDictionaryText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.GetQuestNameText");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_GetQuestNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (Text != nullptr)
		*Text = params.Text;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetQuestTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::SetQuestTitle(const struct FDictionaryText& Title, int IconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetQuestTitle");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_SetQuestTitle_Params params;
	params.Title = Title;
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetMouseEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::SetMouseEnable(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetMouseEnable");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_SetMouseEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetCursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::SetCursorVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetCursorVisible");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_SetCursorVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestData              QuestData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            TabNo                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::Init(const struct FQuestData& QuestData, int TabNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.Init");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_Init_Params params;
	params.QuestData = QuestData;
	params.TabNo = TabNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000_STR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000_STR");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
