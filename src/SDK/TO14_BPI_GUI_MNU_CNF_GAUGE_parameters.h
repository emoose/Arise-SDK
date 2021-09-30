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

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.ValueChenge
struct UTO14_BPI_GUI_MNU_CNF_GAUGE_C_ValueChenge_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.GetGaugePercent
struct UTO14_BPI_GUI_MNU_CNF_GAUGE_C_GetGaugePercent_Params
{
	int                                                OutPercent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.AddGaugePercent
struct UTO14_BPI_GUI_MNU_CNF_GAUGE_C_AddGaugePercent_Params
{
	int                                                InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.SetGaugePercent
struct UTO14_BPI_GUI_MNU_CNF_GAUGE_C_SetGaugePercent_Params
{
	int                                                InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.Construct
struct UTO14_BPI_GUI_MNU_CNF_GAUGE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.Tick
struct UTO14_BPI_GUI_MNU_CNF_GAUGE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.MouseCaptureEnd
struct UTO14_BPI_GUI_MNU_CNF_GAUGE_C_MouseCaptureEnd_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GAUGE_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GAUGE
struct UTO14_BPI_GUI_MNU_CNF_GAUGE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GAUGE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.ValueChengeEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GAUGE_C_ValueChengeEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GAUGE.TO14_BPI_GUI_MNU_CNF_GAUGE_C.MouseHovered__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GAUGE_C_MouseHovered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
