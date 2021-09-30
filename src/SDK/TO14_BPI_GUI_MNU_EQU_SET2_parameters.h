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

// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetSlotVisualItem
struct UTO14_BPI_GUI_MNU_EQU_SET2_C_SetSlotVisualItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuVisualData                             VisualData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetCursorVisible
struct UTO14_BPI_GUI_MNU_EQU_SET2_C_SetCursorVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetListMode
struct UTO14_BPI_GUI_MNU_EQU_SET2_C_SetListMode_Params
{
	int                                                Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.TargetActiveChange
struct UTO14_BPI_GUI_MNU_EQU_SET2_C_TargetActiveChange_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.PadWork
struct UTO14_BPI_GUI_MNU_EQU_SET2_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelect;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SelectValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.CB_MouseSelect
struct UTO14_BPI_GUI_MNU_EQU_SET2_C_CB_MouseSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_EQU_SET2_C_CB_MouseEnter_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.SetSlotItem
struct UTO14_BPI_GUI_MNU_EQU_SET2_C_SetSlotItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET2.TO14_BPI_GUI_MNU_EQU_SET2_C.Initialize
struct UTO14_BPI_GUI_MNU_EQU_SET2_C_Initialize_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
