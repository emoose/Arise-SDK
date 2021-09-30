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

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsReceiveSmashCondition
struct UBP_BtlStatusViewModel_C_IsReceiveSmashCondition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeAttributeIcon
struct UBP_BtlStatusViewModel_C_OnChangeAttributeIcon_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBreak;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudAbnormalType                             EnableIconType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudAbnormalType                             BreakIconType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ChangeAbnormalIcon
struct UBP_BtlStatusViewModel_C_ChangeAbnormalIcon_Params
{
	EBattleHudAbnormalType                             PrevType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudAbnormalType                             NextType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ConvertHudAbnormal
struct UBP_BtlStatusViewModel_C_ConvertHudAbnormal_Params
{
	EBattleHudAbnormalType                             HudAbnormal;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAbnormalType                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetAbnormalValue
struct UBP_BtlStatusViewModel_C_GetAbnormalValue_Params
{
	EBattleHudAbnormalType                             AbnormalType;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetAbnormalTimePercent
struct UBP_BtlStatusViewModel_C_GetAbnormalTimePercent_Params
{
	EBattleHudAbnormalType                             AbnormalType;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.RemoveAbnormalInfo
struct UBP_BtlStatusViewModel_C_RemoveAbnormalInfo_Params
{
	EBattleHudAbnormalType                             InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               removed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.AddAbnormalInfo
struct UBP_BtlStatusViewModel_C_AddAbnormalInfo_Params
{
	EBattleHudAbnormalType                             InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakArmor
struct UBP_BtlStatusViewModel_C_IsBreakArmor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakSuperAvoid
struct UBP_BtlStatusViewModel_C_IsBreakSuperAvoid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsMomentaryRush
struct UBP_BtlStatusViewModel_C_IsMomentaryRush_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.UpdateBuffIcon
struct UBP_BtlStatusViewModel_C_UpdateBuffIcon_Params
{
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.SetBuffIcon
struct UBP_BtlStatusViewModel_C_SetBuffIcon_Params
{
	EBattleHudAbnormalType                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EndBuff
struct UBP_BtlStatusViewModel_C_EndBuff_Params
{
	EBattleHudAbnormalType                             HudType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.StartBuff
struct UBP_BtlStatusViewModel_C_StartBuff_Params
{
	EBattleHudAbnormalType                             HudType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BuffValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsEnableFlying
struct UBP_BtlStatusViewModel_C_IsEnableFlying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsDead
struct UBP_BtlStatusViewModel_C_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetLevel
struct UBP_BtlStatusViewModel_C_GetLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetSPInternal
struct UBP_BtlStatusViewModel_C_GetSPInternal_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetMaxSPInternal
struct UBP_BtlStatusViewModel_C_GetMaxSPInternal_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsUseableArts
struct UBP_BtlStatusViewModel_C_IsUseableArts_Params
{
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetUniqueSkillValueMax
struct UBP_BtlStatusViewModel_C_GetUniqueSkillValueMax_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetUniqueSkillValue
struct UBP_BtlStatusViewModel_C_GetUniqueSkillValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsUniqueSkillActive
struct UBP_BtlStatusViewModel_C_IsUniqueSkillActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ChangeAbnormalTime
struct UBP_BtlStatusViewModel_C_ChangeAbnormalTime_Params
{
	EAbnormalType                                      Abnormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AbnormalTimer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ConvertAbnormal
struct UBP_BtlStatusViewModel_C_ConvertAbnormal_Params
{
	EAbnormalType                                      Abnormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleHudAbnormalType                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetDName
struct UBP_BtlStatusViewModel_C_GetDName_Params
{
	struct FDictionaryText                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnPinch2Normal
struct UBP_BtlStatusViewModel_C_OnPinch2Normal_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnNormal2Pinch
struct UBP_BtlStatusViewModel_C_OnNormal2Pinch_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetStrikeRate
struct UBP_BtlStatusViewModel_C_GetStrikeRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsAvailableStrikeAttack
struct UBP_BtlStatusViewModel_C_IsAvailableStrikeAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsStrikeSmash
struct UBP_BtlStatusViewModel_C_IsStrikeSmash_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsMysticLearned
struct UBP_BtlStatusViewModel_C_IsMysticLearned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsPlayerOperation
struct UBP_BtlStatusViewModel_C_IsPlayerOperation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsAir
struct UBP_BtlStatusViewModel_C_IsAir_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsOverlimit
struct UBP_BtlStatusViewModel_C_IsOverlimit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakRush
struct UBP_BtlStatusViewModel_C_IsBreakRush_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsBreakFlying
struct UBP_BtlStatusViewModel_C_IsBreakFlying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsEnableArmor
struct UBP_BtlStatusViewModel_C_IsEnableArmor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsEnableSuperAvoid
struct UBP_BtlStatusViewModel_C_IsEnableSuperAvoid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetElementType
struct UBP_BtlStatusViewModel_C_GetElementType_Params
{
	EBtlElementType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetSpellCastLocation
struct UBP_BtlStatusViewModel_C_GetSpellCastLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetAbnormalType
struct UBP_BtlStatusViewModel_C_GetAbnormalType_Params
{
	TArray<EBattleHudAbnormalType>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetOverlimitRate
struct UBP_BtlStatusViewModel_C_GetOverlimitRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetPlayerWorldPosition
struct UBP_BtlStatusViewModel_C_GetPlayerWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetTargetWorldPosition
struct UBP_BtlStatusViewModel_C_GetTargetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetMaxSP
struct UBP_BtlStatusViewModel_C_GetMaxSP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetPcOrder
struct UBP_BtlStatusViewModel_C_GetPcOrder_Params
{
	EPCOrder                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.IsStrikeFull
struct UBP_BtlStatusViewModel_C_IsStrikeFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetWorldPosition
struct UBP_BtlStatusViewModel_C_GetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetName
struct UBP_BtlStatusViewModel_C_GetName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetPartyId
struct UBP_BtlStatusViewModel_C_GetPartyId_Params
{
	EArisePartyID                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetSP
struct UBP_BtlStatusViewModel_C_GetSP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetMaxHp
struct UBP_BtlStatusViewModel_C_GetMaxHp_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.GetHp
struct UBP_BtlStatusViewModel_C_GetHp_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeOverlimitTime
struct UBP_BtlStatusViewModel_C_EventOnChangeOverlimitTime_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnBeginAbnormal
struct UBP_BtlStatusViewModel_C_EventOnBeginAbnormal_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAbnormalType                                      AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnEndAbnormal
struct UBP_BtlStatusViewModel_C_EventOnEndAbnormal_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAbnormalType                                      AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeTarget
struct UBP_BtlStatusViewModel_C_OnChangeTarget_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlTargetCursorComponent*                   NewTargetComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           NewTargetCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlTargetCursorComponent*                   PrevTargetComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.K2_Initialize
struct UBP_BtlStatusViewModel_C_K2_Initialize_Params
{
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAirArtsChange
struct UBP_BtlStatusViewModel_C_OnAirArtsChange_Params
{
	bool                                               IsAir;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.K2_Fainalize
struct UBP_BtlStatusViewModel_C_K2_Fainalize_Params
{
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangePCArts
struct UBP_BtlStatusViewModel_C_OnChangePCArts_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnMaxStrike
struct UBP_BtlStatusViewModel_C_EventOnMaxStrike_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeSmashCondition
struct UBP_BtlStatusViewModel_C_OnChangeSmashCondition_Params
{
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeStrike
struct UBP_BtlStatusViewModel_C_EventOnChangeStrike_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangePCOrder
struct UBP_BtlStatusViewModel_C_OnChangePCOrder_Params
{
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormal_RushBreak
struct UBP_BtlStatusViewModel_C_OnAbnormal_RushBreak_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeExAbnormal
struct UBP_BtlStatusViewModel_C_OnChangeExAbnormal_Params
{
	EBattleHudAbnormalType                             AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormal_Armor
struct UBP_BtlStatusViewModel_C_OnAbnormal_Armor_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormalFryingBreak
struct UBP_BtlStatusViewModel_C_OnAbnormalFryingBreak_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormal_SuperAvoid
struct UBP_BtlStatusViewModel_C_OnAbnormal_SuperAvoid_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeAbnormalTime
struct UBP_BtlStatusViewModel_C_OnChangeAbnormalTime_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAbnormalType                                      AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PrevTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.BeginUniqueSkill
struct UBP_BtlStatusViewModel_C_BeginUniqueSkill_Params
{
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EndUniqueSkill
struct UBP_BtlStatusViewModel_C_EndUniqueSkill_Params
{
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeSpInternal
struct UBP_BtlStatusViewModel_C_EventOnChangeSpInternal_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PrevSp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewSp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnDeadCharacter
struct UBP_BtlStatusViewModel_C_OnDeadCharacter_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnRaiseDead
struct UBP_BtlStatusViewModel_C_OnRaiseDead_Params
{
	class ABtlCharacterBase*                           Healer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeHp
struct UBP_BtlStatusViewModel_C_EventOnChangeHp_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PrevHp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewHp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnBeginBuff
struct UBP_BtlStatusViewModel_C_EventOnBeginBuff_Params
{
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnEndBuff
struct UBP_BtlStatusViewModel_C_EventOnEndBuff_Params
{
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnBeginMomentaryRush
struct UBP_BtlStatusViewModel_C_OnBeginMomentaryRush_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnEndMomentaryRush
struct UBP_BtlStatusViewModel_C_OnEndMomentaryRush_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnRecoil
struct UBP_BtlStatusViewModel_C_OnRecoil_Params
{
	class ABtlCharacterBase*                           Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnAbnormalStateChanged
struct UBP_BtlStatusViewModel_C_OnAbnormalStateChanged_Params
{
	class UBtlStatusComponent*                         Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EBattleHudAbnormalType                             IconId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnChangeOperationCharacter
struct UBP_BtlStatusViewModel_C_OnChangeOperationCharacter_Params
{
	class ABtlCharacterBase*                           PrevOperationUnit;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           NowOperationUnit;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.񣌘򠳾񍯐�0�0_1
struct UBP_BtlStatusViewModel_C_񣌘򠳾񍯐�0�0_1_Params
{
	struct FBtlChangeOrderHandle                       Handle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeTp
struct UBP_BtlStatusViewModel_C_EventOnChangeTp_Params
{
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.OnReserveArtsStrikeSmash
struct UBP_BtlStatusViewModel_C_OnReserveArtsStrikeSmash_Params
{
	struct FName                                       StrikeLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnChangeElementType
struct UBP_BtlStatusViewModel_C_EventOnChangeElementType_Params
{
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.EventOnOutMaxStrike
struct UBP_BtlStatusViewModel_C_EventOnOutMaxStrike_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlStatusViewModel.BP_BtlStatusViewModel_C.ExecuteUbergraph_BP_BtlStatusViewModel
struct UBP_BtlStatusViewModel_C_ExecuteUbergraph_BP_BtlStatusViewModel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
