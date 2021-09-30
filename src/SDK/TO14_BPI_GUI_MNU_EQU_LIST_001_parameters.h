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

// Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.TextColorChange
struct UTO14_BPI_GUI_MNU_EQU_LIST_001_C_TextColorChange_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.PadWork
struct UTO14_BPI_GUI_MNU_EQU_LIST_001_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.DataInitialize
struct UTO14_BPI_GUI_MNU_EQU_LIST_001_C_DataInitialize_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.CB_MouseSelect
struct UTO14_BPI_GUI_MNU_EQU_LIST_001_C_CB_MouseSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_001.TO14_BPI_GUI_MNU_EQU_LIST_001_C.CB_MouseOver
struct UTO14_BPI_GUI_MNU_EQU_LIST_001_C_CB_MouseOver_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
