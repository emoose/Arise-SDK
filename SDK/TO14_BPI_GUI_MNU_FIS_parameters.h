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

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.InitEquipItemData
struct UTO14_BPI_GUI_MNU_FIS_C_InitEquipItemData_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.SaveEquipData
struct UTO14_BPI_GUI_MNU_FIS_C_SaveEquipData_Params
{
	bool                                               IsRod;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.CloseList
struct UTO14_BPI_GUI_MNU_FIS_C_CloseList_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.OpenList
struct UTO14_BPI_GUI_MNU_FIS_C_OpenList_Params
{
	int                                                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.OnClosed
struct UTO14_BPI_GUI_MNU_FIS_C_OnClosed_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.Close
struct UTO14_BPI_GUI_MNU_FIS_C_Close_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.Exec
struct UTO14_BPI_GUI_MNU_FIS_C_Exec_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.PadTerm
struct UTO14_BPI_GUI_MNU_FIS_C_PadTerm_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.PadInit
struct UTO14_BPI_GUI_MNU_FIS_C_PadInit_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.Init
struct UTO14_BPI_GUI_MNU_FIS_C_Init_Params
{
	struct FFishingAreaData                            AreaData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.IsClose
struct UTO14_BPI_GUI_MNU_FIS_C_IsClose_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.EventOpen
struct UTO14_BPI_GUI_MNU_FIS_C_EventOpen_Params
{
	struct FFishingAreaData                            AreaData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.UpdateTick
struct UTO14_BPI_GUI_MNU_FIS_C_UpdateTick_Params
{
	float                                              TickData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.SetupDelegate
struct UTO14_BPI_GUI_MNU_FIS_C_SetupDelegate_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS
struct UTO14_BPI_GUI_MNU_FIS_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.ChangeSelectLure__DelegateSignature
struct UTO14_BPI_GUI_MNU_FIS_C_ChangeSelectLure__DelegateSignature_Params
{
	int                                                lureId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS.TO14_BPI_GUI_MNU_FIS_C.ChangeSelectRod__DelegateSignature
struct UTO14_BPI_GUI_MNU_FIS_C_ChangeSelectRod__DelegateSignature_Params
{
	int                                                RodId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
