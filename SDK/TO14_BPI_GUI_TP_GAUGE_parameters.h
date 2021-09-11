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

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.SetShow
struct UTO14_BPI_GUI_TP_GAUGE_C_SetShow_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.PFUIHelp_Close
struct UTO14_BPI_GUI_TP_GAUGE_C_PFUIHelp_Close_Params
{
};

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.PFUIHelp_Open
struct UTO14_BPI_GUI_TP_GAUGE_C_PFUIHelp_Open_Params
{
};

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.ApplyPercent
struct UTO14_BPI_GUI_TP_GAUGE_C_ApplyPercent_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.Tick
struct UTO14_BPI_GUI_TP_GAUGE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.OnOpen
struct UTO14_BPI_GUI_TP_GAUGE_C_OnOpen_Params
{
	int                                                NewTpMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewTp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.Initlize
struct UTO14_BPI_GUI_TP_GAUGE_C_Initlize_Params
{
	int                                                NewTpMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewTp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.ChangeValue
struct UTO14_BPI_GUI_TP_GAUGE_C_ChangeValue_Params
{
	int                                                NewTp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.PreConstruct
struct UTO14_BPI_GUI_TP_GAUGE_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.OpneStated
struct UTO14_BPI_GUI_TP_GAUGE_C_OpneStated_Params
{
};

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.CloseFinished
struct UTO14_BPI_GUI_TP_GAUGE_C_CloseFinished_Params
{
};

// Function TO14_BPI_GUI_TP_GAUGE.TO14_BPI_GUI_TP_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_TP_GAUGE
struct UTO14_BPI_GUI_TP_GAUGE_C_ExecuteUbergraph_TO14_BPI_GUI_TP_GAUGE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
