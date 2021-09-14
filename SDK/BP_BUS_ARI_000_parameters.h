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

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFilterComboArts
struct UBP_BUS_ARI_000_C_OnFilterComboArts_Params
{
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordTimeLimit
struct UBP_BUS_ARI_000_C_GetFireSwordTimeLimit_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetHPMax
struct UBP_BUS_ARI_000_C_GetHPMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordChargePower
struct UBP_BUS_ARI_000_C_GetFireSwordChargePower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordFirstDamage
struct UBP_BUS_ARI_000_C_GetFireSwordFirstDamage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireUseHpMax
struct UBP_BUS_ARI_000_C_GetFireUseHpMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordUsedHp
struct UBP_BUS_ARI_000_C_GetFireSwordUsedHp_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetFireSwordUsedHp
struct UBP_BUS_ARI_000_C_SetFireSwordUsedHp_Params
{
	int                                                UsedHp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.PlayFireSword
struct UBP_BUS_ARI_000_C_PlayFireSword_Params
{
	struct FName                                       FireSwordArtsLabel;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.CanFireSword
struct UBP_BUS_ARI_000_C_CanFireSword_Params
{
	struct FName                                       FireSwordArtsLabel;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRequest;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ArtsData;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.CanFireSwordCharge
struct UBP_BUS_ARI_000_C_CanFireSwordCharge_Params
{
	bool                                               TryFireSword;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.ChargeFireSword
struct UBP_BUS_ARI_000_C_ChargeFireSword_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TryFireSword;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnBoostAttackTraits
struct UBP_BUS_ARI_000_C_OnBoostAttackTraits_Params
{
	class UShapeComponent*                             AttackCollision;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                AttackArts;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABtlCharacterBase*                           ReceiveUnit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsSuccessBoostBreak;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.CreateLastMysticBinding
struct UBP_BUS_ARI_000_C_CreateLastMysticBinding_Params
{
	class UBtlCutSceneBindingParam*                    Binding;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SpawnChargeRankChangedEffect
struct UBP_BUS_ARI_000_C_SpawnChargeRankChangedEffect_Params
{
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.GetFireSwordChargeRank
struct UBP_BUS_ARI_000_C_GetFireSwordChargeRank_Params
{
	int                                                Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttackAirSub
struct UBP_BUS_ARI_000_C_OnGetBoostAttackAirSub_Params
{
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttackSub
struct UBP_BUS_ARI_000_C_OnGetBoostAttackSub_Params
{
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttackAir
struct UBP_BUS_ARI_000_C_OnGetBoostAttackAir_Params
{
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGetBoostAttack
struct UBP_BUS_ARI_000_C_OnGetBoostAttack_Params
{
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnPlayableMystic
struct UBP_BUS_ARI_000_C_OnPlayableMystic_Params
{
	struct FName                                       MysticLabel;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireSwordUseForStrike
struct UBP_BUS_ARI_000_C_StartFireSwordUseForStrike_Params
{
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.AssortFlexibleNotify
struct UBP_BUS_ARI_000_C_AssortFlexibleNotify_Params
{
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Fresnel_ON;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnReceiveDamage
struct UBP_BUS_ARI_000_C_OnReceiveDamage_Params
{
	bool                                               IsReactionOverride;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AttackerCollision;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCoreBreak;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.ToStoringArtsNext
struct UBP_BUS_ARI_000_C_ToStoringArtsNext_Params
{
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.FadeOutProcess
struct UBP_BUS_ARI_000_C_FadeOutProcess_Params
{
	bool                                               IsFadeOutFlag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              FadeOutEmissive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              FadeOutAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               NotFadeAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireLeftArm
struct UBP_BUS_ARI_000_C_StartFireLeftArm_Params
{
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireRightArm
struct UBP_BUS_ARI_000_C_StartFireRightArm_Params
{
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamBody
struct UBP_BUS_ARI_000_C_SetMatParamBody_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Emissive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamWeapon
struct UBP_BUS_ARI_000_C_SetMatParamWeapon_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Emissive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamLeftArm
struct UBP_BUS_ARI_000_C_SetMatParamLeftArm_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Emissive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.SetMatParamRightArm
struct UBP_BUS_ARI_000_C_SetMatParamRightArm_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Emissive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.TickFireSword
struct UBP_BUS_ARI_000_C_TickFireSword_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.StartFireSwordUse
struct UBP_BUS_ARI_000_C_StartFireSwordUse_Params
{
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnTick
struct UBP_BUS_ARI_000_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFlexibleNotifyEnd
struct UBP_BUS_ARI_000_C_OnFlexibleNotifyEnd_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     UserObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFlexibleNotifyBegin
struct UBP_BUS_ARI_000_C_OnFlexibleNotifyBegin_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     UserObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnBeginPlay
struct UBP_BUS_ARI_000_C_OnBeginPlay_Params
{
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.AttackBegin
struct UBP_BUS_ARI_000_C_AttackBegin_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                NowArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleActionState                                 PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnFireSwordCharge
struct UBP_BUS_ARI_000_C_OnFireSwordCharge_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnEndFireSwordChange
struct UBP_BUS_ARI_000_C_OnEndFireSwordChange_Params
{
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnBeginCancelRange
struct UBP_BUS_ARI_000_C_OnBeginCancelRange_Params
{
	struct FActionCancelParam                          CancelParam;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnEndMystic
struct UBP_BUS_ARI_000_C_OnEndMystic_Params
{
	struct FBtlMysticEndParam                          Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.OnGiveDamage
struct UBP_BUS_ARI_000_C_OnGiveDamage_Params
{
	class UShapeComponent*                             AttackCollision;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                AttackArts;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABtlCharacterBase*                           ReceiveUnit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_ARI_000.BP_BUS_ARI_000_C.ExecuteUbergraph_BP_BUS_ARI_000
struct UBP_BUS_ARI_000_C_ExecuteUbergraph_BP_BUS_ARI_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
