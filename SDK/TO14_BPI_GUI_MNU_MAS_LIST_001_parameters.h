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

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.UsableFlagChange
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_UsableFlagChange_Params
{
	class UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C*        TargetWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FlagChange;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.GetListTopIndex
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_GetListTopIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.ChangeHelp
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_ChangeHelp_Params
{
	bool                                               Checkmark;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BattleMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.GetListSelectIndex
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_GetListSelectIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_EnterGroupItem
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_CB_EnterGroupItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_SelectGroupItem
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_CB_SelectGroupItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_DeselectLine
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_CB_DeselectLine_Params
{
	int                                                Line;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.CB_SelectLine
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_CB_SelectLine_Params
{
	int                                                Line;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.PadWork
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BattleMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.Init
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_Init_Params
{
	TArray<struct FName>                               ArtsLabelList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListScroll;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BattleMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.Construct
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.Initialize
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_001.TO14_BPI_GUI_MNU_MAS_LIST_001_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001
struct UTO14_BPI_GUI_MNU_MAS_LIST_001_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
