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

// Function TO14_BPI_GUI_MNU_COM_GAUGE_RING.TO14_BPI_GUI_MNU_COM_GAUGE_RING_C.SetMaxBarDisplay
struct UTO14_BPI_GUI_MNU_COM_GAUGE_RING_C_SetMaxBarDisplay_Params
{
	bool                                               InIsMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_RING.TO14_BPI_GUI_MNU_COM_GAUGE_RING_C.SetValueBar
struct UTO14_BPI_GUI_MNU_COM_GAUGE_RING_C_SetValueBar_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_RING.TO14_BPI_GUI_MNU_COM_GAUGE_RING_C.SetBarStatus
struct UTO14_BPI_GUI_MNU_COM_GAUGE_RING_C_SetBarStatus_Params
{
	int                                                Now;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InMaxLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
