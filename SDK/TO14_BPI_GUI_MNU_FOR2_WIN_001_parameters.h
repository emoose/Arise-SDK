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

// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.SetIndex
struct UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_SetIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.GetCursor
struct UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_GetCursor_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.GetSelect
struct UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_GetSelect_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.PadWork
struct UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.GetWidget
struct UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_GetWidget_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_FOR2_CHARA_C*              Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.Init
struct UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_Init_Params
{
	TArray<struct FMenuFormationData>                  PartyData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_FOR2_WIN_001.TO14_BPI_GUI_MNU_FOR2_WIN_001_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_WIN_001
struct UTO14_BPI_GUI_MNU_FOR2_WIN_001_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_WIN_001_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
