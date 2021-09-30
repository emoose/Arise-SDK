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

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_TAG2_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exit
struct UTO14_BPI_GUI_MNU_TAG2_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Init
struct UTO14_BPI_GUI_MNU_TAG2_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ReadWait
struct UTO14_BPI_GUI_MNU_TAG2_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.GetNextScene
struct UTO14_BPI_GUI_MNU_TAG2_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Finish
struct UTO14_BPI_GUI_MNU_TAG2_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.MakeWorkTacktics
struct UTO14_BPI_GUI_MNU_TAG2_C_MakeWorkTacktics_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.UpdateIsChangePresetWork
struct UTO14_BPI_GUI_MNU_TAG2_C_UpdateIsChangePresetWork_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_InsertTargetSelectCancel
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_InsertTargetSelectCancel_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.GetActCondLayoutDataTable
struct UTO14_BPI_GUI_MNU_TAG2_C_GetActCondLayoutDataTable_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_TAG2_ACT_COND_LAYOUT                    Layout;                                                   // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.IsExistImpossibleAct
struct UTO14_BPI_GUI_MNU_TAG2_C_IsExistImpossibleAct_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.InitPresetCommand
struct UTO14_BPI_GUI_MNU_TAG2_C_InitPresetCommand_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.DebugTacticsDataPrint
struct UTO14_BPI_GUI_MNU_TAG2_C_DebugTacticsDataPrint_Params
{
	struct FMenuTacticsData                            TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.UpdateIsChangePreset
struct UTO14_BPI_GUI_MNU_TAG2_C_UpdateIsChangePreset_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.SetTacticsName
struct UTO14_BPI_GUI_MNU_TAG2_C_SetTacticsName_Params
{
	int                                                TargetTacticsIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TacticsName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_WarningCollisionWindowWait
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_WarningCollisionWindowWait_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_SaveImpossibleWindowWait
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_SaveImpossibleWindowWait_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_NameChangeWindowWait
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_NameChangeWindowWait_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exce_CommandDetailSelect
struct UTO14_BPI_GUI_MNU_TAG2_C_Exce_CommandDetailSelect_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_EditCommandWindowWait
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_EditCommandWindowWait_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_InsertTargetSelect
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_InsertTargetSelect_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ChangeVisilityCommandList
struct UTO14_BPI_GUI_MNU_TAG2_C_ChangeVisilityCommandList_Params
{
	bool                                               Visility;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.CopyPresetTactics
struct UTO14_BPI_GUI_MNU_TAG2_C_CopyPresetTactics_Params
{
	int                                                TargetTacticsIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PresetTacticsLabel;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.SetDefaultTactics
struct UTO14_BPI_GUI_MNU_TAG2_C_SetDefaultTactics_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CommandNameSelect
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_CommandNameSelect_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_SaveCommandWindowWait
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_SaveCommandWindowWait_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CancelChangeWndowWait
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_CancelChangeWndowWait_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CommandDetailCustomSelect
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_CommandDetailCustomSelect_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_ActSelect
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_ActSelect_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CopyPresetWindowWait
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_CopyPresetWindowWait_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_PresetCommandSelect
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_PresetCommandSelect_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CommandSelect
struct UTO14_BPI_GUI_MNU_TAG2_C_Exec_CommandSelect_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.InitTacticsData
struct UTO14_BPI_GUI_MNU_TAG2_C_InitTacticsData_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.OnToggleCheckEvent
struct UTO14_BPI_GUI_MNU_TAG2_C_OnToggleCheckEvent_Params
{
	int                                                ListIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_TAG2_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.OnViewClose
struct UTO14_BPI_GUI_MNU_TAG2_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Construct
struct UTO14_BPI_GUI_MNU_TAG2_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2
struct UTO14_BPI_GUI_MNU_TAG2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
