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

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.EventChangeCheck
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_EventChangeCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.RefreshCheck
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_RefreshCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.OpenAnim
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_OpenAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.RemovePlayback
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_RemovePlayback_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.SetAllClickableArea
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_SetAllClickableArea_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.CB_MousePlayback
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_CB_MousePlayback_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.CB_MouseCheckEnter
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_CB_MouseCheckEnter_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.CB_MouseBGMNameEnter
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_CB_MouseBGMNameEnter_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.CB_MouseSelect
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_CB_MouseSelect_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.StopBGM
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_StopBGM_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.AllCheck
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_AllCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.PlayBGM
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_PlayBGM_Params
{
	class UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C*      InSoundWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.UpDownCursorMove
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_UpDownCursorMove_Params
{
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.SetDeselectedCursor
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_SetDeselectedCursor_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.SetSelectCursor
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_SetSelectCursor_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.GetWidgetList
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_GetWidgetList_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C*      OutSongWidget;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.PadControl
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_PadControl_Params
{
	class AMenuPadProcess*                             InPadProsess;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsDecide;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.RefreshList
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_RefreshList_Params
{
	int                                                InGameTitleSort;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.CreateSoundWidgetList
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_CreateSoundWidgetList_Params
{
	struct FConfigBgmData                              InConfingBgmData;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.Initialize
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.ChengCheck__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_ChengCheck__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C.ChengPlayBGMName__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_LIST_C_ChengPlayBGMName__DelegateSignature_Params
{
	struct FString                                     InPlayBGMName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
