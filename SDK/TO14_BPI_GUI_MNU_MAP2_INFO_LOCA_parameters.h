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

// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.RefreshAsLocation
struct UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_RefreshAsLocation_Params
{
	struct FMapLocationData                            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnViewClose
struct UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnViewOpenFinished
struct UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_OnViewOpenFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.OnRefreshAsLocation
struct UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_OnRefreshAsLocation_Params
{
	struct FMapLocationData                            Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAP2_INFO_LOCA.TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_INFO_LOCA
struct UTO14_BPI_GUI_MNU_MAP2_INFO_LOCA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_INFO_LOCA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
