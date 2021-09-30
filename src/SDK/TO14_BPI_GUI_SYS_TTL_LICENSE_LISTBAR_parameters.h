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

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR.TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C.UpdateMoveText
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C_UpdateMoveText_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR.TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C.SetSliderValue
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C_SetSliderValue_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR.TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C.AddSliderValue
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C_AddSliderValue_Params
{
	float                                              InAddValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsSE;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR.TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C.Tick
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR.TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C.BndEvt__AriseScrollBar_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C_BndEvt__AriseScrollBar_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR.TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR
struct UTO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_LICENSE_LISTBAR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
