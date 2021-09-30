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

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.IsNewGame
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_IsNewGame_Params
{
	bool                                               OutIsNewGame;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.EventChangeCheck
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_EventChangeCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.StopChangeAnima
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_StopChangeAnima_Params
{
	bool                                               InIsAll;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.ScenChangeCheck
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_ScenChangeCheck_Params
{
	struct FName                                       InTitleLavel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConfigState>                          OutState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.UpdateGameSaveData
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_UpdateGameSaveData_Params
{
	bool                                               InIsOverwrite;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.IsListShowe
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_IsListShowe_Params
{
	int                                                InListIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsListShowe;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.SetDefaultValue
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_SetDefaultValue_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.GetText
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_GetText_Params
{
	struct FString                                     InStringID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FModifiedText                               OutText;                                                  // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseChangeCliked
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CB_MouseChangeCliked_Params
{
	ESetting                                           InSetting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.OnInfomation
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_OnInfomation_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseCursorEnter_R
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CB_MouseCursorEnter_R_Params
{
	ESetting                                           InSetting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseCursorEnter_L
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CB_MouseCursorEnter_L_Params
{
	ESetting                                           InSetting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.UpDownCursorMove
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_UpDownCursorMove_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.GetWidgetList
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_GetWidgetList_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_CNF_GROUP_C*               OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.PadControl
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_PadControl_Params
{
	class AMenuPadProcess*                             InPadProsess;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConfigState>                          OutState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CreateListWidget
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CreateListWidget_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.DataConstruct
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_DataConstruct_Params
{
	TArray<struct FConfigData>                         InConfigDatas;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseSelect
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CB_MouseSelect_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CB_MouseEnter_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.Initialize
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.ChangeCheck__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_ChangeCheck__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.DialogOpen__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_DialogOpen__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.ChangeItem__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_ChangeItem__DelegateSignature_Params
{
	bool                                               InIsChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.UpdateInformation__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_UpdateInformation__DelegateSignature_Params
{
	struct FConfigData                                 InConfigDatat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                InCursorIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
