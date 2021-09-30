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

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetChangeColorValue
struct UTO14_BPI_GUI_TP_C_SetChangeColorValue_Params
{
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetColorLineValue
struct UTO14_BPI_GUI_TP_C_SetColorLineValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetPercent
struct UTO14_BPI_GUI_TP_C_SetPercent_Params
{
	float                                              TpPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ConvertTpBarPercent
struct UTO14_BPI_GUI_TP_C_ConvertTpBarPercent_Params
{
	float                                              GaugeValuePercent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Preview
struct UTO14_BPI_GUI_TP_C_Preview_Params
{
	int                                                UseTP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BaseTP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxTp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetTpText
struct UTO14_BPI_GUI_TP_C_SetTpText_Params
{
	int                                                TpValue;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TpMax;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Initialize
struct UTO14_BPI_GUI_TP_C_Initialize_Params
{
	int                                                Value;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.PlayTpAnim
struct UTO14_BPI_GUI_TP_C_PlayTpAnim_Params
{
	int                                                NewValue;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.SetTP
struct UTO14_BPI_GUI_TP_C_SetTP_Params
{
	int                                                Value;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyLine
struct UTO14_BPI_GUI_TP_C_ApplyLine_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyLineColor
struct UTO14_BPI_GUI_TP_C_ApplyLineColor_Params
{
	struct FLinearColor                                LineColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyBaseColor
struct UTO14_BPI_GUI_TP_C_ApplyBaseColor_Params
{
	struct FLinearColor                                NewBaseColor;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ApplyPercent
struct UTO14_BPI_GUI_TP_C_ApplyPercent_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.PreConstruct
struct UTO14_BPI_GUI_TP_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Construct
struct UTO14_BPI_GUI_TP_C_Construct_Params
{
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Tick
struct UTO14_BPI_GUI_TP_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Received_OnEndWorkPinch
struct UTO14_BPI_GUI_TP_C_Received_OnEndWorkPinch_Params
{
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.Received_OnBeginWorkPinch
struct UTO14_BPI_GUI_TP_C_Received_OnBeginWorkPinch_Params
{
};

// Function TO14_BPI_GUI_TP.TO14_BPI_GUI_TP_C.ExecuteUbergraph_TO14_BPI_GUI_TP
struct UTO14_BPI_GUI_TP_C_ExecuteUbergraph_TO14_BPI_GUI_TP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
