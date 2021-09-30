#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.CheckSortRequest
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_CheckSortRequest_Params
{
	bool                                               Sort;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.SetVisualItem
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_SetVisualItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuVisualData                             VisualData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.GetTargetVisualItem
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_GetTargetVisualItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuVisualData                             Data;                                                     // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.InitVisual
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_InitVisual_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DisableMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.ChangeLockMark
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_ChangeLockMark_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Lock;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.GetCursorIndex
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_GetCursorIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.GetTargetItemID
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_GetTargetItemID_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.Clear
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_Clear_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.IsSelectCancel
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_IsSelectCancel_Params
{
	bool                                               IsCancel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.IsSelectItem
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_IsSelectItem_Params
{
	bool                                               IsSelect;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.CB_SetSelectRequest
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_CB_SetSelectRequest_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.CB_SetMoveRequest
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_CB_SetMoveRequest_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.PadWork
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.Init
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_Init_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SortType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KeepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.Construct
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.OnCursorMove
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_OnCursorMove_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000.TO14_BPI_GUI_MNU_EQU_LIST_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
