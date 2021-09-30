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

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.InitCategoryText
struct UTO14_BPI_GUI_MNU_EQU_SET_C_InitCategoryText_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.IsSelectCancel
struct UTO14_BPI_GUI_MNU_EQU_SET_C_IsSelectCancel_Params
{
	bool                                               IsCancel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.IsSlotSelect
struct UTO14_BPI_GUI_MNU_EQU_SET_C_IsSlotSelect_Params
{
	bool                                               IsSelect;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.SetEquipItem
struct UTO14_BPI_GUI_MNU_EQU_SET_C_SetEquipItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.SetMouseActivate
struct UTO14_BPI_GUI_MNU_EQU_SET_C_SetMouseActivate_Params
{
	bool                                               Activate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.Init
struct UTO14_BPI_GUI_MNU_EQU_SET_C_Init_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SelectReset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBattlemode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.PadWork
struct UTO14_BPI_GUI_MNU_EQU_SET_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_EQU_SET_C_CB_MouseEnter_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.CB_MouseSelect
struct UTO14_BPI_GUI_MNU_EQU_SET_C_CB_MouseSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.OnWidgetCreated
struct UTO14_BPI_GUI_MNU_EQU_SET_C_OnWidgetCreated_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.Construct
struct UTO14_BPI_GUI_MNU_EQU_SET_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_SET.TO14_BPI_GUI_MNU_EQU_SET_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET
struct UTO14_BPI_GUI_MNU_EQU_SET_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
