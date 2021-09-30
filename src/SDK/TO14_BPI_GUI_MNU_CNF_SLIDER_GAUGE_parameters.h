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

// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.GetSaveValue
struct UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_GetSaveValue_Params
{
	int                                                OutSaveValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.ChengeValue
struct UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_ChengeValue_Params
{
	float                                              InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.ChengeGaugePercent
struct UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_ChengeGaugePercent_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutPercent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.SetUpdate
struct UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_SetUpdate_Params
{
	int                                                InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.AddGaugePercent
struct UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_AddGaugePercent_Params
{
	float                                              InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.MouseCaptureEnd
struct UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_MouseCaptureEnd_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.Tick
struct UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.Construct
struct UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE
struct UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
