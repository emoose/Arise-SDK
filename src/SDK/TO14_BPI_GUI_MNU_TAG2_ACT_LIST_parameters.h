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

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.SortMode
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_SortMode_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CheckWidgetsVisibleChange
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_CheckWidgetsVisibleChange_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.BindToggleCheckEvent
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_BindToggleCheckEvent_Params
{
	struct FScriptDelegate                             OnToggleCheck;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CB_ToggleCheck
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_CB_ToggleCheck_Params
{
	int                                                ListIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ActiveNonSelectActs
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_ActiveNonSelectActs_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.DeactiveNonSelectActs
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_DeactiveNonSelectActs_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.Refresh
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_Refresh_Params
{
	struct FMenuTacticsData                            MenuTacticsData;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.UpdateNumList
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_UpdateNumList_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.GetSelectedActDrawIndex
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_GetSelectedActDrawIndex_Params
{
	int                                                DrawIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.AddCreateNew
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_AddCreateNew_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.GetSelectedAct
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_GetSelectedAct_Params
{
	class UTO14_BPI_GUI_MNU_TAG2_ACT_C*                ActWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ChangeActive
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_ChangeActive_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.RemoveAct
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_RemoveAct_Params
{
	struct FMenuTacticsData                            TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.InsertAct
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_InsertAct_Params
{
	struct FMenuTacticsData                            TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                OriginalIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.EV_ListMove
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_EV_ListMove_Params
{
	int                                                MoveValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTrigger;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CreateAct
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_CreateAct_Params
{
	struct FMenuTacticsLineData                        LineData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.PadWork
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CB_MouseMove
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_CB_MouseMove_Params
{
	int                                                ListIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CategoryIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_CB_MouseEnter_Params
{
	int                                                ListIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CategoryIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.Initialize
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_Initialize_Params
{
	struct FMenuTacticsData                            TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SelectIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TopIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.OnInit
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_OnInit_Params
{
	int                                                TopIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.OnSwapTactics
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_OnSwapTactics_Params
{
	struct FMenuTacticsData                            TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Index0;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_LIST
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_LIST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_LIST_C.ToggleCheckEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C_ToggleCheckEvent__DelegateSignature_Params
{
	int                                                ListIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
