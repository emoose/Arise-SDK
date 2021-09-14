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

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.ChnageTargetRequest
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_ChnageTargetRequest_Params
{
	class UBP_BtlStatusViewModel_C*                    NewViewModel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.SetHpBar
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_SetHpBar_Params
{
	class UUserWidget*                                 ParentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBattleGaugeViewBase*                        GaugeViewArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UWidgetAnimation*>                    GaugeAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C*          RecoilNotifyText;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OpenHpbar
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OpenHpbar_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.LoadStatus
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_LoadStatus_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.EventOnReccoveryHp
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_EventOnReccoveryHp_Params
{
	int                                                RecoveryValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnDamageHp
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnDamageHp_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.EventOnOpen
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_EventOnOpen_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnChangeSmashConditionRate
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnChangeSmashConditionRate_Params
{
	float                                              PrevRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.UnBindEvent
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_UnBindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.Received_ChangeViewModelRequest
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_Received_ChangeViewModelRequest_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.BindEvent
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_BindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnChangeStrikeSmash
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnChangeStrikeSmash_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnBeginSpecialStrike
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnBeginSpecialStrike_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnEndSpecialStrike
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnEndSpecialStrike_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnRecoilNotify
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnRecoilNotify_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnUseStrike
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnUseStrike_Params
{
};

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK
struct UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
