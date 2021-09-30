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

// Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.Refresh
struct UTO14_BPI_GUI_SYS_PF_LOC_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.Construct
struct UTO14_BPI_GUI_SYS_PF_LOC_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.Tick
struct UTO14_BPI_GUI_SYS_PF_LOC_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.EventOnCloseAnimationEnd
struct UTO14_BPI_GUI_SYS_PF_LOC_C_EventOnCloseAnimationEnd_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_LOC.TO14_BPI_GUI_SYS_PF_LOC_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_LOC
struct UTO14_BPI_GUI_SYS_PF_LOC_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_LOC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
