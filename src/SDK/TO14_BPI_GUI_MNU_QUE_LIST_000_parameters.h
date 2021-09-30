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

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.SetSortTextVisibility
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_SetSortTextVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.SetFilterText
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_SetFilterText_Params
{
	struct FDictionaryText                             DicText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.SetSortText
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_SetSortText_Params
{
	struct FDictionaryText                             DicText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.GetSelectPosition
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_GetSelectPosition_Params
{
	int                                                TopIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CursorIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.UpdateQuestMarker
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_UpdateQuestMarker_Params
{
	struct FString                                     MarkQuest;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FQuestData>                          QuestList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.GetResult
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_GetResult_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.CB_MouseMoveRequest
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_CB_MouseMoveRequest_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.CB_MouseSelectRequest
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_CB_MouseSelectRequest_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.PadWork
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.Init
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_Init_Params
{
	TArray<struct FQuestData>                          QuestList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                CursorIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TabNo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListTop;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Text_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Text_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Text_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Text_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Text_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Text_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Left_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Left_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Right_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Right_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Left_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Left_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.BndEvt__Click_Right_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_BndEvt__Click_Right_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000.TO14_BPI_GUI_MNU_QUE_LIST_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
