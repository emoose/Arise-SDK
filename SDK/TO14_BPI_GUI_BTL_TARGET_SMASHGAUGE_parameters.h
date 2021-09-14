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

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.IsFullMode
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_IsFullMode_Params
{
	bool                                               IsFull;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.ChangeStrikeMode
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_ChangeStrikeMode_Params
{
	struct FName                                       NewStrikeGaugeMode;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewIsStrikeMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWidgetAnimation*>                    StopAnimArray;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.PlayStrikeClick
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_PlayStrikeClick_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.CancelStrike
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_CancelStrike_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.BndEvt__STRIKE_SMASH_GAUGE_FULL_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_BndEvt__STRIKE_SMASH_GAUGE_FULL_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.StrikeFull
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_StrikeFull_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.PreConstruct
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.Set_Percent
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_Set_Percent_Params
{
	float                                              InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.Construct
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.Destruct
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_Destruct_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.SetFilterStrikeButtonIcon
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_SetFilterStrikeButtonIcon_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.BndEvt__STRIKE_SMASH_GAUGE_OFF_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_BndEvt__STRIKE_SMASH_GAUGE_OFF_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.BndEvt__STRIKE_SMASH_ON_CLICK_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_BndEvt__STRIKE_SMASH_ON_CLICK_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.StrikeEnd
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_StrikeEnd_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE
struct UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
