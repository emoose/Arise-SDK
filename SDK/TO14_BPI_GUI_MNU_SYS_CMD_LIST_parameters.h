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

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.GetDLPListDisplayNewIcon
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_GetDLPListDisplayNewIcon_Params
{
	bool                                               IsDisplayNewIcon;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.CheckDisable
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_CheckDisable_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsDisabled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.IsMoveScene
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_IsMoveScene_Params
{
	bool                                               bIsMoveScene;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.GetNextName
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_GetNextName_Params
{
	struct FString                                     Index;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.GetSelectedIndex
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_GetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.RestructCmds
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_RestructCmds_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.CreateListBoxHelper
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_CreateListBoxHelper_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Up
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_Up_Params
{
	struct FName                                       NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Down
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_Down_Params
{
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.SetupCMD
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_SetupCMD_Params
{
	class UTO14_BPI_GUI_MNU_COL_CMD_C*                 TargetCMD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDictionaryText                             InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Init
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_Init_Params
{
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Decide
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_Decide_Params
{
	int                                                SelectNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.InputPad
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_InputPad_Params
{
	class AMenuPadProcess*                             PadProces;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Select
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_Select_Params
{
	int                                                NewSelectNum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.PreConstruct
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SYS_CMD_LIST
struct UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SYS_CMD_LIST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
