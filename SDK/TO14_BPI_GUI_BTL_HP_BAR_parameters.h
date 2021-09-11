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

// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.GetNativeUiParts
struct UTO14_BPI_GUI_BTL_HP_BAR_C_GetNativeUiParts_Params
{
	class UProgressBar*                                OutProgressBar;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    OutBarMaterial;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.RefreshPinchMode
struct UTO14_BPI_GUI_BTL_HP_BAR_C_RefreshPinchMode_Params
{
};

// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.Construct
struct UTO14_BPI_GUI_BTL_HP_BAR_C_Construct_Params
{
};

// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.Destruct
struct UTO14_BPI_GUI_BTL_HP_BAR_C_Destruct_Params
{
};

// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.EventOnBeginWorkPinch
struct UTO14_BPI_GUI_BTL_HP_BAR_C_EventOnBeginWorkPinch_Params
{
};

// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.EventOnEndWorkPinch
struct UTO14_BPI_GUI_BTL_HP_BAR_C_EventOnEndWorkPinch_Params
{
};

// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.Tick
struct UTO14_BPI_GUI_BTL_HP_BAR_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.EventOnGaugeAnimationFinish
struct UTO14_BPI_GUI_BTL_HP_BAR_C_EventOnGaugeAnimationFinish_Params
{
};

// Function TO14_BPI_GUI_BTL_HP_BAR.TO14_BPI_GUI_BTL_HP_BAR_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_HP_BAR
struct UTO14_BPI_GUI_BTL_HP_BAR_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_HP_BAR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
