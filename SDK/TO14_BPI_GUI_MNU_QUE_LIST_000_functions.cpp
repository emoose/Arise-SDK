
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

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.SetSortTextVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::SetSortTextVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.SetSortTextVisibility");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_SetSortTextVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.SetFilterText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         DicText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::SetFilterText(const struct FDictionaryText& DicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.SetFilterText");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_SetFilterText_Params params;
	params.DicText = DicText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.SetSortText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         DicText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::SetSortText(const struct FDictionaryText& DicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.SetSortText");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_SetSortText_Params params;
	params.DicText = DicText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.GetSelectPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TopIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CursorIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::GetSelectPosition(int* TopIndex, int* CursorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.GetSelectPosition");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_GetSelectPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TopIndex != nullptr)
		*TopIndex = params.TopIndex;
	if (CursorIndex != nullptr)
		*CursorIndex = params.CursorIndex;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.UpdateQuestMarker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MarkQuest                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FQuestData>      QuestList                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::UpdateQuestMarker(const struct FString& MarkQuest, TArray<struct FQuestData>* QuestList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.UpdateQuestMarker");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_UpdateQuestMarker_Params params;
	params.MarkQuest = MarkQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestList != nullptr)
		*QuestList = params.QuestList;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.GetResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::GetResult(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.GetResult");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_GetResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.CB_MouseMoveRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::CB_MouseMoveRequest(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.CB_MouseMoveRequest");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_CB_MouseMoveRequest_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.CB_MouseSelectRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::CB_MouseSelectRequest(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.CB_MouseSelectRequest");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_CB_MouseSelectRequest_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.PadWork");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQuestData>      QuestList                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            CursorIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TabNo                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ListTop                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::Init(int CursorIndex, int TabNo, int ListTop, TArray<struct FQuestData>* QuestList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.Init");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_Init_Params params;
	params.CursorIndex = CursorIndex;
	params.TabNo = TabNo;
	params.ListTop = ListTop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestList != nullptr)
		*QuestList = params.QuestList;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Text_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::BndEvt__Click_Text_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Text_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Text_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Text_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::BndEvt__Click_Text_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Text_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Text_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Text_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::BndEvt__Click_Text_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Text_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Text_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Left_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::BndEvt__Click_Left_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Left_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Left_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Right_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::BndEvt__Click_Right_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Right_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Right_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Left_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::BndEvt__Click_Left_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Left_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Left_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Right_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::BndEvt__Click_Right_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Right_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Right_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_LIST_000_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000");

	UTO14_BPI_GUI_MNU_QUE_LIST_000_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
