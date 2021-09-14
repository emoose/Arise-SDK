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

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OpenUniqueSkillIcon
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OpenUniqueSkillIcon_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.SetHpNumber
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_SetHpNumber_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.ChangeMemberRequest
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_ChangeMemberRequest_Params
{
	class UBtlStatusViewModelBase*                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OpenHpbar
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OpenHpbar_Params
{
	bool                                               IsPlayGaugeAnim;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.Initilize
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_Initilize_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.GetTargetController
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_GetTargetController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.GetTargetWorldPosition
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_GetTargetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.GetTargetSlot
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_GetTargetSlot_Params
{
	class UCanvasPanelSlot*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnDamageHp
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnDamageHp_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnRecoveryHp
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnRecoveryHp_Params
{
	int                                                RecoveryValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnChangeSp
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnChangeSp_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.Open
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_Open_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.BindEvent
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_BindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.UnBindEvent
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_UnBindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnChangeOverlimitMode
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnChangeOverlimitMode_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnChangeOverlimit
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnChangeOverlimit_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnChangeSpMode
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnChangeSpMode_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.BndEvt__SpToOverlimitAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_BndEvt__SpToOverlimitAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.BndEvt__BeginChangeMemberAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_BndEvt__BeginChangeMemberAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.BndEvt__SpToOverlimitAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_BndEvt__SpToOverlimitAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.BndEvt__OverlimitToSpAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_BndEvt__OverlimitToSpAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnChangeUniquSkillTime
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnChangeUniquSkillTime_Params
{
	float                                              PrevRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnNotUseUniqueSkill
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnNotUseUniqueSkill_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.BndEvt__SkillEndAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_BndEvt__SkillEndAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.BndEvt__SkilStartAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_BndEvt__SkilStartAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnEndUniqueSkill
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnEndUniqueSkill_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnBeginUniqueSkill
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnBeginUniqueSkill_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.NotUseArts
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_NotUseArts_Params
{
	int                                                RequiredCost;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.Received_ChangeViewModelRequest
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_Received_ChangeViewModelRequest_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.BndEvt__BeginChangeMemberAnim_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_BndEvt__BeginChangeMemberAnim_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.BndEvt__SpMode_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_BndEvt__SpMode_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.BndEvt__OverlimitMode_K2Node_ComponentBoundEvent_7_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_BndEvt__OverlimitMode_K2Node_ComponentBoundEvent_7_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.Destruct
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_Destruct_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.Construct
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_Construct_Params
{
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnChangeScenarioFlag
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnChangeScenarioFlag_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnHpBonusChanged
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnHpBonusChanged_Params
{
	int                                                HandleIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnChangePreset
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnChangePreset_Params
{
	struct FName                                       Preset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.OnSkill_Value
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_OnSkill_Value_Params
{
	int                                                PrevValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PLAYER_BAR_3.TO14_BPI_GUI_BTL_PLAYER_BAR_2_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_PLAYER_BAR_3
struct UTO14_BPI_GUI_BTL_PLAYER_BAR_2_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_PLAYER_BAR_3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
