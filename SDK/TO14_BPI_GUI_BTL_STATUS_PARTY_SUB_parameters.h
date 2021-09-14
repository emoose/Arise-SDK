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

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetOpenAnim
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_GetOpenAnim_Params
{
	class UWidgetAnimation*                            Anim;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetCharaName
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_GetCharaName_Params
{
	class UTO14_BPI_GUI_BTL_RUNE_FONT_C*               NameWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetHpBar
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_GetHpBar_Params
{
	class UBattleGaugeViewBase*                        HpBar;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetSubStatusViewList
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_GetSubStatusViewList_Params
{
	TArray<class UBtlStatusViewBase*>                  View;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.BndEvt__Fadein_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_BndEvt__Fadein_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_SUB
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
