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

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_CNF_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Exit
struct UTO14_BPI_GUI_MNU_CNF_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Init
struct UTO14_BPI_GUI_MNU_CNF_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ReadWait
struct UTO14_BPI_GUI_MNU_CNF_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Exec
struct UTO14_BPI_GUI_MNU_CNF_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GetNextScene
struct UTO14_BPI_GUI_MNU_CNF_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Finish
struct UTO14_BPI_GUI_MNU_CNF_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.BtlBgmListLoad
struct UTO14_BPI_GUI_MNU_CNF_C_BtlBgmListLoad_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetNewGameResult
struct UTO14_BPI_GUI_MNU_CNF_C_SetNewGameResult_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.AddGameListCheck
struct UTO14_BPI_GUI_MNU_CNF_C_AddGameListCheck_Params
{
	struct FConfigData                                 InConfigData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               OutIsAdd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetLightHelp
struct UTO14_BPI_GUI_MNU_CNF_C_SetLightHelp_Params
{
	bool                                               InIsChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.EventGroupChangeCheck
struct UTO14_BPI_GUI_MNU_CNF_C_EventGroupChangeCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetListHelpLabel
struct UTO14_BPI_GUI_MNU_CNF_C_SetListHelpLabel_Params
{
	ESetting                                           InSetting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsGraphic;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetGraphicHelp
struct UTO14_BPI_GUI_MNU_CNF_C_SetGraphicHelp_Params
{
	bool                                               InIsChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetGameHelp
struct UTO14_BPI_GUI_MNU_CNF_C_SetGameHelp_Params
{
	bool                                               InIsChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicCloseWait
struct UTO14_BPI_GUI_MNU_CNF_C_GraphicCloseWait_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicSelect
struct UTO14_BPI_GUI_MNU_CNF_C_GraphicSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicOpenWait
struct UTO14_BPI_GUI_MNU_CNF_C_GraphicOpenWait_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicOpen
struct UTO14_BPI_GUI_MNU_CNF_C_GraphicOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.CheckConfigData_GRAPHICS
struct UTO14_BPI_GUI_MNU_CNF_C_CheckConfigData_GRAPHICS_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GetText
struct UTO14_BPI_GUI_MNU_CNF_C_GetText_Params
{
	struct FString                                     InStringID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FModifiedText                               OutText;                                                  // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.NewGameDialog
struct UTO14_BPI_GUI_MNU_CNF_C_NewGameDialog_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigCloseWait
struct UTO14_BPI_GUI_MNU_CNF_C_KeyConfigCloseWait_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigSelect
struct UTO14_BPI_GUI_MNU_CNF_C_KeyConfigSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigOpenWait
struct UTO14_BPI_GUI_MNU_CNF_C_KeyConfigOpenWait_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigOpen
struct UTO14_BPI_GUI_MNU_CNF_C_KeyConfigOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GetConfigData
struct UTO14_BPI_GUI_MNU_CNF_C_GetConfigData_Params
{
	struct FName                                       InTitleLabel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FConfigData                                 OutConfigData;                                            // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustCloseWait
struct UTO14_BPI_GUI_MNU_CNF_C_LightAdjustCloseWait_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustSelect
struct UTO14_BPI_GUI_MNU_CNF_C_LightAdjustSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustOpenWait
struct UTO14_BPI_GUI_MNU_CNF_C_LightAdjustOpenWait_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustOpen
struct UTO14_BPI_GUI_MNU_CNF_C_LightAdjustOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.UpdateGameSaveData
struct UTO14_BPI_GUI_MNU_CNF_C_UpdateGameSaveData_Params
{
	bool                                               InIsOverwrite;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetHelpLabel
struct UTO14_BPI_GUI_MNU_CNF_C_SetHelpLabel_Params
{
	struct FString                                     InHelpLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpenCloseWait
struct UTO14_BPI_GUI_MNU_CNF_C_DlcBgmOpenCloseWait_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpenSelect
struct UTO14_BPI_GUI_MNU_CNF_C_DlcBgmOpenSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpenWait
struct UTO14_BPI_GUI_MNU_CNF_C_DlcBgmOpenWait_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpen
struct UTO14_BPI_GUI_MNU_CNF_C_DlcBgmOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.AnalysisDialogCheck
struct UTO14_BPI_GUI_MNU_CNF_C_AnalysisDialogCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.InitialSettingDialogCheck
struct UTO14_BPI_GUI_MNU_CNF_C_InitialSettingDialogCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ConfigEnd
struct UTO14_BPI_GUI_MNU_CNF_C_ConfigEnd_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ConfigEndDialogCheck
struct UTO14_BPI_GUI_MNU_CNF_C_ConfigEndDialogCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.UpdateInfomationText
struct UTO14_BPI_GUI_MNU_CNF_C_UpdateInfomationText_Params
{
	struct FConfigData                                 InConfigDatat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                InCursorIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.CheckConfigData_GAME
struct UTO14_BPI_GUI_MNU_CNF_C_CheckConfigData_GAME_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ListLoad
struct UTO14_BPI_GUI_MNU_CNF_C_ListLoad_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.TopCommandSelect
struct UTO14_BPI_GUI_MNU_CNF_C_TopCommandSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OpenMenuWait
struct UTO14_BPI_GUI_MNU_CNF_C_OpenMenuWait_Params
{
	bool                                               OutIsFinish;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OpenAnimationWait
struct UTO14_BPI_GUI_MNU_CNF_C_OpenAnimationWait_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.CloseAnimation
struct UTO14_BPI_GUI_MNU_CNF_C_CloseAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Construct
struct UTO14_BPI_GUI_MNU_CNF_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Tick
struct UTO14_BPI_GUI_MNU_CNF_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_CNF_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OnViewClose
struct UTO14_BPI_GUI_MNU_CNF_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OnDialigOpen
struct UTO14_BPI_GUI_MNU_CNF_C_OnDialigOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF
struct UTO14_BPI_GUI_MNU_CNF_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
