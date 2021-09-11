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

// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.IsClose
struct UTO14_BPI_GUI_SYS_WIN_C_IsClose_Params
{
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.Open
struct UTO14_BPI_GUI_SYS_WIN_C_Open_Params
{
	int                                                ZOrder;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.Construct
struct UTO14_BPI_GUI_SYS_WIN_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.Tick
struct UTO14_BPI_GUI_SYS_WIN_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.OnAnimationFinished
struct UTO14_BPI_GUI_SYS_WIN_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN.TO14_BPI_GUI_SYS_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN
struct UTO14_BPI_GUI_SYS_WIN_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
