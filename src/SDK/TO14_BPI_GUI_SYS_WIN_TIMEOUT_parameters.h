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

// Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.PadWork
struct UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.Tick
struct UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.SetTimer
struct UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C_SetTimer_Params
{
	float                                              Timer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_TIMEOUT.TO14_BPI_GUI_SYS_WIN_TIMEOUT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TIMEOUT
struct UTO14_BPI_GUI_SYS_WIN_TIMEOUT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TIMEOUT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
