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

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventChangeCheck
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_EventChangeCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetInputKeyHelp
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetInputKeyHelp_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.RefreshKeyID
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_RefreshKeyID_Params
{
	class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C*     InObject;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetInputDialog
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetInputDialog_Params
{
	class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C*     InObject;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetSelectInputID
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetSelectInputID_Params
{
	class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C*     InObject;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      OutInputSelectID;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetAssingMouseID
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetAssingMouseID_Params
{
	TMap<struct FName, int>                            InAssingMouseList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       InName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutMouseID;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnHoveredKeyEvent
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_OnHoveredKeyEvent_Params
{
	int                                                InUniqueID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnClickedKeyEvent
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_OnClickedKeyEvent_Params
{
	int                                                InUniqueID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnHoveredMouseEvent
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_OnHoveredMouseEvent_Params
{
	int                                                InUniqueID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnClickedMouseEvent
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_OnClickedMouseEvent_Params
{
	int                                                InUniqueID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Update_ChengeTypeState
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_Update_ChengeTypeState_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.RefreshTempSavedKeyID
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_RefreshTempSavedKeyID_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetTempSavedKeyID
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetTempSavedKeyID_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetInputExtPlayerControll
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetInputExtPlayerControll_Params
{
	class AInputExtPlayerController*                   OutControll;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetDefoltKeyID
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetDefoltKeyID_Params
{
	struct FName                                       InButtonName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OutKeyID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengeSelectKeyID
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ChengeSelectKeyID_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetText
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetText_Params
{
	struct FString                                     InStringID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FModifiedText                               OutText;                                                  // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengSelectKeyCheck
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ChengSelectKeyCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Update_ChangeState
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_Update_ChangeState_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.KeyboardChange
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_KeyboardChange_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetPadInputList
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetPadInputList_Params
{
	EInputCategory                                     InCategory;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               OutName;                                                  // (Parm, OutParm, ZeroConstructor)
	TMap<struct FName, int>                            OutAssingList;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.StopChangeAnima
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_StopChangeAnima_Params
{
	bool                                               InIsAll;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.IsListShowe
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_IsListShowe_Params
{
	int                                                InListIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsListShowe;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ResetIcon
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ResetIcon_Params
{
	TArray<class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C*> InWidgetLists;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               InIsAnima;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.KeyReset
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_KeyReset_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ShowClickable
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ShowClickable_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_MouseCursorEnter
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_MouseCursorEnter_Params
{
	int                                                InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_MouseSelect
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_MouseSelect_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_MouseEnter_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetFieldButtonList
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetFieldButtonList_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.RefreshButton
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_RefreshButton_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengkeyID
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ChengkeyID_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengSelectKeyImage
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ChengSelectKeyImage_Params
{
	unsigned char                                      InPadKeyID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSelectIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SelectChengKeyPad
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SelectChengKeyPad_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.PadChange
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_PadChange_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.UpDownCursorMove
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_UpDownCursorMove_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetWidgetList
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetWidgetList_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C*     OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetBtlButtonList
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetBtlButtonList_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetList
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetList_Params
{
	EInputCategory                                     InInputCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Initialize
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_Initialize_Params
{
	bool                                               InIsKeyboard;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CreateList
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CreateList_Params
{
	EInputCategory                                     InInPutCategore;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.PadControl
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_PadControl_Params
{
	class AMenuPadProcess*                             InPadProsess;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Construct
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventInputDialogClose__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_EventInputDialogClose__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventInputDialogOpen__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_EventInputDialogOpen__DelegateSignature_Params
{
	struct FModifiedText                               InChengeTitle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               InButtunIMessage_Text;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               InButtunID_Text;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               InChengeMessage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventChangeKey__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_EventChangeKey__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
