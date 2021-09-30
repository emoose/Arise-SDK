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

// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.Reset
struct UTO14_BPI_GUI_MNU_COM_GAUGE_C_Reset_Params
{
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.SetPreview
struct UTO14_BPI_GUI_MNU_COM_GAUGE_C_SetPreview_Params
{
	int                                                ChangeNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.AnimationWork
struct UTO14_BPI_GUI_MNU_COM_GAUGE_C_AnimationWork_Params
{
	float                                              AddTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.SetStatusAnimation
struct UTO14_BPI_GUI_MNU_COM_GAUGE_C_SetStatusAnimation_Params
{
	int                                                ChangeNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              WaitTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimeTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.SetBarStatus
struct UTO14_BPI_GUI_MNU_COM_GAUGE_C_SetBarStatus_Params
{
	int                                                Now;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.Construct
struct UTO14_BPI_GUI_MNU_COM_GAUGE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.Tick
struct UTO14_BPI_GUI_MNU_COM_GAUGE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.DataConstruct
struct UTO14_BPI_GUI_MNU_COM_GAUGE_C_DataConstruct_Params
{
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE
struct UTO14_BPI_GUI_MNU_COM_GAUGE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
