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

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ApplyHpBar
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_ApplyHpBar_Params
{
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ReceivedOnRecoveryHp
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_ReceivedOnRecoveryHp_Params
{
	int                                                RecoveryValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ReceivedOnDamageHp
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_ReceivedOnDamageHp_Params
{
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.PlayHealAnim
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_PlayHealAnim_Params
{
	int                                                HealValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnChangePreset
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnChangePreset_Params
{
	struct FName                                       Preset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.SetHpNumberText
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_SetHpNumberText_Params
{
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetHpNumber
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetHpNumber_Params
{
	class UTO14_BPI_GUI_BTL_RUNE_NUMBER_C*             Number;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetOpenAnim
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetOpenAnim_Params
{
	class UWidgetAnimation*                            Anim;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetEndChangeAnim
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetEndChangeAnim_Params
{
	class UWidgetAnimation*                            Anim;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetBeginChangeAnim
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetBeginChangeAnim_Params
{
	class UWidgetAnimation*                            Anim;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetSubStatusViewList
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetSubStatusViewList_Params
{
	TArray<class UBtlStatusViewBase*>                  View;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetCharaName
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetCharaName_Params
{
	class UTO14_BPI_GUI_BTL_RUNE_FONT_C*               NameWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetHpBar
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetHpBar_Params
{
	class UBattleGaugeViewBase*                        HpBar;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnOpen
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnOpen_Params
{
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnDamageHp
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnDamageHp_Params
{
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnRecoveryHp
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnRecoveryHp_Params
{
	int                                                RecoveryValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.BindEvent
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_BindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.UnBindEvent
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_UnBindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.Received_ChangeViewModelRequest
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_Received_ChangeViewModelRequest_Params
{
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnApplyViewModel
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnApplyViewModel_Params
{
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnHpBonusChanged
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnHpBonusChanged_Params
{
	int                                                HandleIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_BASE
struct UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
