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

// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.GetEditOnlyTacticsDefaultLabel
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_GetEditOnlyTacticsDefaultLabel_Params
{
	TArray<struct FString>                             LabelList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.ResetIndex
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_ResetIndex_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.GetLabelString
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_GetLabelString_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.PadWork
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_CB_MouseEnter_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.CB_MouseSelect
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_CB_MouseSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.InitDefaultTacticsList
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_InitDefaultTacticsList_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
