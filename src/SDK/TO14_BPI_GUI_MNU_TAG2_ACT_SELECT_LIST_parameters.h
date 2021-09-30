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

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.CheckAddListable
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_CheckAddListable_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.GetLabelData
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_GetLabelData_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.PadWork
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.InitList
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_InitList_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CursorLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     BaseLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.Initialize
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_CB_MouseEnter_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.CB_MouseMove
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_CB_MouseMove_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
