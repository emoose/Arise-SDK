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

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.UpdateMenuTextureQuarityDialog
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_UpdateMenuTextureQuarityDialog_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.ChangeScreenModeWindow
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_ChangeScreenModeWindow_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.ApplySaveData
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_ApplySaveData_Params
{
	TMap<EConfigKey, int>                              SaveData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsSaveSetting;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.GetCustomResolution
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_GetCustomResolution_Params
{
	struct FIntPoint                                   Resolution;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.UpdateScreen
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_UpdateScreen_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.EventChangeCheck
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_EventChangeCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.StopChangeAnima
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_StopChangeAnima_Params
{
	bool                                               InIsAll;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.ScreenCheck
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_ScreenCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.SetDialog
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_SetDialog_Params
{
	struct FString                                     InDialogType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     InMessage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     InSelection0;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     InSelection1;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.UpdateSaveConfigDialog
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_UpdateSaveConfigDialog_Params
{
	bool                                               OutIsEnd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.UpdateGameSaveData
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_UpdateGameSaveData_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.SetCursorTop
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_SetCursorTop_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.ScenChangeCheck
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_ScenChangeCheck_Params
{
	struct FName                                       InTitleLavel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConfigState>                          OutState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.IsListShowe
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_IsListShowe_Params
{
	int                                                InListIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsListShowe;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.SetDefaultValue
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_SetDefaultValue_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.GetText
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_GetText_Params
{
	struct FString                                     InStringID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FModifiedText                               OutText;                                                  // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.CB_MouseChangeCliked
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_CB_MouseChangeCliked_Params
{
	ESetting                                           InSetting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.OnInfomation
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_OnInfomation_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.CB_MouseCursorEnter_R
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_CB_MouseCursorEnter_R_Params
{
	ESetting                                           InSetting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.CB_MouseCursorEnter_L
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_CB_MouseCursorEnter_L_Params
{
	ESetting                                           InSetting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.UpDownCursorMove
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_UpDownCursorMove_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.GetWidgetList
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_GetWidgetList_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_CNF_GROUP_C*               OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.PadControl
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_PadControl_Params
{
	class AMenuPadProcess*                             InPadProsess;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsEnd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.CreateListWidget
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_CreateListWidget_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.DataConstruct
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_DataConstruct_Params
{
	TArray<struct FConfigData>                         InConfigDatas;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.CB_MouseSelect
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_CB_MouseSelect_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_CB_MouseEnter_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.Initialize
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.DialogOpen__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_DialogOpen__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.ChangeItem__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_ChangeItem__DelegateSignature_Params
{
	bool                                               InIsChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C.UpdateInformation__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C_UpdateInformation__DelegateSignature_Params
{
	struct FConfigData                                 InConfigDatat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                InCursorIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
