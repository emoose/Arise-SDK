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

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.IsSkip
struct UTO14_BPI_GUI_SYS_PAU_C_IsSkip_Params
{
	bool                                               bDoSkip;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.IsClose
struct UTO14_BPI_GUI_SYS_PAU_C_IsClose_Params
{
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.PadInit
struct UTO14_BPI_GUI_SYS_PAU_C_PadInit_Params
{
};

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.PadTerm
struct UTO14_BPI_GUI_SYS_PAU_C_PadTerm_Params
{
};

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.EventClose
struct UTO14_BPI_GUI_SYS_PAU_C_EventClose_Params
{
};

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.EventOpen
struct UTO14_BPI_GUI_SYS_PAU_C_EventOpen_Params
{
	bool                                               IsSimple;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.UpdateTick
struct UTO14_BPI_GUI_SYS_PAU_C_UpdateTick_Params
{
	float                                              TickData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.SetupDelegate
struct UTO14_BPI_GUI_SYS_PAU_C_SetupDelegate_Params
{
};

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.Tick
struct UTO14_BPI_GUI_SYS_PAU_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.EventOnClosed
struct UTO14_BPI_GUI_SYS_PAU_C_EventOnClosed_Params
{
};

// Function TO14_BPI_GUI_SYS_PAU.TO14_BPI_GUI_SYS_PAU_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PAU
struct UTO14_BPI_GUI_SYS_PAU_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PAU_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
