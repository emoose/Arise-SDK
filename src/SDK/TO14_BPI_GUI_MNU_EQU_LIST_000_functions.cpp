
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

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.CheckSortRequest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sort                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::CheckSortRequest(bool* Sort)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.CheckSortRequest");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_CheckSortRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sort != nullptr)
		*Sort = params.Sort;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.SetVisualItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuVisualData         VisualData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::SetVisualItem(int Index, const struct FMenuVisualData& VisualData, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.SetVisualItem");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_SetVisualItem_Params params;
	params.Index = Index;
	params.VisualData = VisualData;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.GetTargetVisualItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMenuVisualData         Data                           (Parm, OutParm)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::GetTargetVisualItem(int Index, struct FMenuVisualData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.GetTargetVisualItem");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_GetTargetVisualItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.InitVisual
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DisableMode                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::InitVisual(int CharacterID, int SlotIndex, bool DisableMode, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.InitVisual");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_InitVisual_Params params;
	params.CharacterID = CharacterID;
	params.SlotIndex = SlotIndex;
	params.DisableMode = DisableMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.ChangeLockMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Lock                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::ChangeLockMark(int Index, bool Lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.ChangeLockMark");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_ChangeLockMark_Params params;
	params.Index = Index;
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.GetCursorIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::GetCursorIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.GetCursorIndex");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_GetCursorIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.GetTargetItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::GetTargetItemID(int Index, int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.GetTargetItemID");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_GetTargetItemID_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.Clear");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.IsSelectCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsCancel                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::IsSelectCancel(bool* IsCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.IsSelectCancel");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_IsSelectCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCancel != nullptr)
		*IsCancel = params.IsCancel;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.IsSelectItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSelect                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::IsSelectItem(bool* IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.IsSelectItem");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_IsSelectItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelect != nullptr)
		*IsSelect = params.IsSelect;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.CB_SetSelectRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::CB_SetSelectRequest(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.CB_SetSelectRequest");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_CB_SetSelectRequest_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.CB_SetMoveRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::CB_SetMoveRequest(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.CB_SetMoveRequest");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_CB_SetMoveRequest_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.PadWork");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           KeepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::Init(int CharacterID, int SlotIndex, int SortType, bool KeepIndex, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.Init");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_Init_Params params;
	params.CharacterID = CharacterID;
	params.SlotIndex = SlotIndex;
	params.SortType = SortType;
	params.KeepIndex = KeepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.Construct");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.OnCursorMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::OnCursorMove(int NewIndex, int OldIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.OnCursorMove");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_OnCursorMove_Params params;
	params.NewIndex = NewIndex;
	params.OldIndex = OldIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_LIST_000_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000");

	UTO14_BPI_GUI_MNU_EQU_LIST_000_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
