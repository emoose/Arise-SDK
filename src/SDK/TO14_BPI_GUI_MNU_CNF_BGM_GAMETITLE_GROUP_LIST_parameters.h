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

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.OpenAnim
struct UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_OpenAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.SetAllClickableArea
struct UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_SetAllClickableArea_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.CB_MouseSelect
struct UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_CB_MouseSelect_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_CB_MouseEnter_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.UpDownCursorMove
struct UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_UpDownCursorMove_Params
{
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.GetWidgetList
struct UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_GetWidgetList_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C* OutGameTitleWidget;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.PadControl
struct UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_PadControl_Params
{
	class AMenuPadProcess*                             InPadProsess;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsDecide;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.RefreshList
struct UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_RefreshList_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.CreateGameTitleWidgetList
struct UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_CreateGameTitleWidgetList_Params
{
	struct FConfigBgmData                              InConfingBgmData;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.Initialize
struct UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.ChangGameTitleCursor__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_ChangGameTitleCursor__DelegateSignature_Params
{
	int                                                InGameTitleSort;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
