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

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetQuestStepData
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_SetQuestStepData_Params
{
	struct FQuestStepData                              StepData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsMainQuest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HighPriority;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetQuestMarker
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_SetQuestMarker_Params
{
	bool                                               marker;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.IsQuestCheck
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_IsQuestCheck_Params
{
	struct FQuestData                                  QuestData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                TabNo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Check;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.GetQuestNameText
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_GetQuestNameText_Params
{
	struct FQuestData                                  Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FDictionaryText                             Text;                                                     // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetQuestTitle
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_SetQuestTitle_Params
{
	struct FDictionaryText                             Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.OnDeselected
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.OnSelected
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetMouseEnable
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_SetMouseEnable_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.SetCursorVisible
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_SetCursorVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.Init
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_Init_Params
{
	struct FQuestData                                  QuestData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                TabNo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.OnWidgetCreated
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_OnWidgetCreated_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_QUE_LIST_000_STR.TO14_BPI_GUI_MNU_QUE_LIST_000_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000_STR
struct UTO14_BPI_GUI_MNU_QUE_LIST_000_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_LIST_000_STR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
