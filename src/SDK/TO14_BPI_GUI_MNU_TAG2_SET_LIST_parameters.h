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

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.CalculateDefaultTacticsIndex
struct UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_CalculateDefaultTacticsIndex_Params
{
	TArray<struct FMenuTacticsData>                    TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ResultIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.ChangeVisibilityDefaultTactics
struct UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_ChangeVisibilityDefaultTactics_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.PadWork
struct UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.GetData
struct UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_GetData_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuTacticsData                            TacticsData;                                              // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.Update
struct UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_Update_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuTacticsData                            TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.CB_OnMouseEnter
struct UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_CB_OnMouseEnter_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.CB_OnMouseSelect
struct UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_CB_OnMouseSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.InitConstruct
struct UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_InitConstruct_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.InitList
struct UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_InitList_Params
{
	TArray<struct FMenuTacticsData>                    TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.Construct
struct UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_LIST.TO14_BPI_GUI_MNU_TAG2_SET_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_LIST
struct UTO14_BPI_GUI_MNU_TAG2_SET_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_LIST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
