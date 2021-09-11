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

// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.Decide
struct UTO14_BPI_GUI_MNU_FIS_LIST_C_Decide_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.InputPad
struct UTO14_BPI_GUI_MNU_FIS_LIST_C_InputPad_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.RestructLureList
struct UTO14_BPI_GUI_MNU_FIS_LIST_C_RestructLureList_Params
{
	TArray<struct FLureData>                           LureMaster;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SelectID;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.SetupItem
struct UTO14_BPI_GUI_MNU_FIS_LIST_C_SetupItem_Params
{
	int                                                IremID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MapIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DataIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.RestructRodList
struct UTO14_BPI_GUI_MNU_FIS_LIST_C_RestructRodList_Params
{
	TArray<struct FRodData>                            RodMaster;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SelectID;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_LIST.TO14_BPI_GUI_MNU_FIS_LIST_C.Init
struct UTO14_BPI_GUI_MNU_FIS_LIST_C_Init_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
