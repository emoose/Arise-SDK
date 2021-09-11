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

// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.CanHide
struct UTO14_BPI_GUI_SYS_LOADING_000_C_CanHide_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.If_IsShow
struct UTO14_BPI_GUI_SYS_LOADING_000_C_If_IsShow_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.ShowIcon
struct UTO14_BPI_GUI_SYS_LOADING_000_C_ShowIcon_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWhite;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.EventShowStart
struct UTO14_BPI_GUI_SYS_LOADING_000_C_EventShowStart_Params
{
	bool                                               bWhite;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.EventHide
struct UTO14_BPI_GUI_SYS_LOADING_000_C_EventHide_Params
{
};

// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.Construct
struct UTO14_BPI_GUI_SYS_LOADING_000_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.RequestShowNowlodingIcon
struct UTO14_BPI_GUI_SYS_LOADING_000_C_RequestShowNowlodingIcon_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWhite;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.RequestShow
struct UTO14_BPI_GUI_SYS_LOADING_000_C_RequestShow_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_000
struct UTO14_BPI_GUI_SYS_LOADING_000_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
