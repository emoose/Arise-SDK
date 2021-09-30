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

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetGageBoxSize_NoCurve
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetGageBoxSize_NoCurve_Params
{
	float                                              InGaugeNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMaxGaugeNum;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMaxGaugeSize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetNameText
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetNameText_Params
{
	struct FModifiedText                               ModText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetGageBoxSize
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetGageBoxSize_Params
{
	float                                              InGaugeNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMaxGaugeNum;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMaxGaugeSize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.UpdateTimeAnimation
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_UpdateTimeAnimation_Params
{
	float                                              AddTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.InitStatusTimeAnimation
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_InitStatusTimeAnimation_Params
{
	int                                                GaugeMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FinishTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetModText
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetModText_Params
{
	struct FModifiedText                               ModText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetChangeModText
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetChangeModText_Params
{
	struct FModifiedText                               ModText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.UpdateAnimatoin
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_UpdateAnimatoin_Params
{
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.InitAnimation
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_InitAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetChangeNum
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetChangeNum_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetNum
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetNum_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetChangeText
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetChangeText_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetParam
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetParam_Params
{
	int                                                Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GAUGE;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ChangeText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetText
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetText_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetGaugeScale
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetGaugeScale_Params
{
	float                                              GaugeScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.SetIconNo
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_SetIconNo_Params
{
	int                                                IconNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TextSpace;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.Tick
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_COM_GAUGE_STA.TO14_BPI_GUI_MNU_COM_GAUGE_STA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA
struct UTO14_BPI_GUI_MNU_COM_GAUGE_STA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE_STA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
