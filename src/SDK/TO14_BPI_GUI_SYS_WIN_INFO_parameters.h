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

// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.SetValueClamp
struct UTO14_BPI_GUI_SYS_WIN_INFO_C_SetValueClamp_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.Construct
struct UTO14_BPI_GUI_SYS_WIN_INFO_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.Tick
struct UTO14_BPI_GUI_SYS_WIN_INFO_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.SetValueInt
struct UTO14_BPI_GUI_SYS_WIN_INFO_C_SetValueInt_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.AddValueInt
struct UTO14_BPI_GUI_SYS_WIN_INFO_C_AddValueInt_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimationTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.SkipAnimation
struct UTO14_BPI_GUI_SYS_WIN_INFO_C_SkipAnimation_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.CountUpAnimation
struct UTO14_BPI_GUI_SYS_WIN_INFO_C_CountUpAnimation_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_INFO.TO14_BPI_GUI_SYS_WIN_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_INFO
struct UTO14_BPI_GUI_SYS_WIN_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_INFO_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
