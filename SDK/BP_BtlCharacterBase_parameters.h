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

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetCollisionHostArtsHandle
struct ABP_BtlCharacterBase_C_GetCollisionHostArtsHandle_Params
{
	struct FBtlArtsHandle                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetCollisionHostCharacter
struct ABP_BtlCharacterBase_C_GetCollisionHostCharacter_Params
{
	class ABtlCharacterBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetCollisionHostHitObjectMemory
struct ABP_BtlCharacterBase_C_GetCollisionHostHitObjectMemory_Params
{
	class UBtlHitObjectMemoryBase*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnCreateMagicAssetOverrideDeep
struct ABP_BtlCharacterBase_C_OnCreateMagicAssetOverrideDeep_Params
{
	class UBtlMagicAsset*                              MagicAsset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtl_MagicSpawnLocationParam                OverrideLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBtl_MagicSpawnRotationParam                OverrideRotation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ABtlMagicActor*                              SpawnMagic;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnCreateMagicAssetOverride
struct ABP_BtlCharacterBase_C_OnCreateMagicAssetOverride_Params
{
	class UBtlMagicAsset*                              MagicAsset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtl_MagicSpawnParam                        SpawnParam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ABtlMagicActor*                              SpawnMagic;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnCreateMagicAsset
struct ABP_BtlCharacterBase_C_OnCreateMagicAsset_Params
{
	class UBtlMagicAsset*                              MagicAsset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlMagicActor*                              SpawnMagic;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CanBoostAttackBreak
struct ABP_BtlCharacterBase_C_CanBoostAttackBreak_Params
{
	class ABtlCharacterBase*                           ReceiveUnit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnBeginMove
struct ABP_BtlCharacterBase_C_OnBeginMove_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CanMysticAction
struct ABP_BtlCharacterBase_C_CanMysticAction_Params
{
	class ABtlCharacterBase*                           TargetUnit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CanParalyzeAction
struct ABP_BtlCharacterBase_C_CanParalyzeAction_Params
{
	EBattleActionState                                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UseStrikeResource
struct ABP_BtlCharacterBase_C_UseStrikeResource_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.NotifyDead
struct ABP_BtlCharacterBase_C_NotifyDead_Params
{
	class ABtlCharacterBase*                           DeadCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnBeginOverlimit
struct ABP_BtlCharacterBase_C_OnBeginOverlimit_Params
{
	bool                                               RequestAccepted;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBtlActionQuery*                             ActionQuery;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.FindLookAtRotation
struct ABP_BtlCharacterBase_C_FindLookAtRotation_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Target;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               IgnoreZAxis;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetDirectionByTargetToCollision
struct ABP_BtlCharacterBase_C_GetDirectionByTargetToCollision_Params
{
	class USceneComponent*                             AttackCollision;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FloatingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SuperAvoidProcess
struct ABP_BtlCharacterBase_C_SuperAvoidProcess_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                AttackArtsData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuperAvoid;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetFlashRaidPoint
struct ABP_BtlCharacterBase_C_GetFlashRaidPoint_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAir;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FlashRaidPoint;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HealBadStatus
struct ABP_BtlCharacterBase_C_HealBadStatus_Params
{
	class ABtlCharacterBase*                           Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitEffect;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnDeadEvent
struct ABP_BtlCharacterBase_C_OnDeadEvent_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.RaiseDead
struct ABP_BtlCharacterBase_C_RaiseDead_Params
{
	class ABtlCharacterBase*                           Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitEffect;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ResultHealValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HealMagic
struct ABP_BtlCharacterBase_C_HealMagic_Params
{
	class ABtlCharacterBase*                           Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitEffect;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ResultHealValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnDeadCharacterEvent
struct ABP_BtlCharacterBase_C_OnDeadCharacterEvent_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           DeadCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnStateChange
struct ABP_BtlCharacterBase_C_OnStateChange_Params
{
	EBattleActionState                                 NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleActionState                                 PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAttackBeginEvent
struct ABP_BtlCharacterBase_C_OnAttackBeginEvent_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                NowArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleActionState                                 PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetAlphaMaskComponent
struct ABP_BtlCharacterBase_C_GetAlphaMaskComponent_Params
{
	class UAlphaMaskComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UseItemProcess
struct ABP_BtlCharacterBase_C_UseItemProcess_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HealHateProcess
struct ABP_BtlCharacterBase_C_HealHateProcess_Params
{
	class ABtlCharacterBase*                           Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.DamageHateProcess
struct ABP_BtlCharacterBase_C_DamageHateProcess_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DmgValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TargetIsDie;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetAbnormalEffectLocation
struct ABP_BtlCharacterBase_C_GetAbnormalEffectLocation_Params
{
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ParalyzeOnAction
struct ABP_BtlCharacterBase_C_ParalyzeOnAction_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AbnormalTimerOnHit
struct ABP_BtlCharacterBase_C_AbnormalTimerOnHit_Params
{
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsGuard;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeakness;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsResistance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.TickAbnormal
struct ABP_BtlCharacterBase_C_TickAbnormal_Params
{
	EAbnormalType                                      Abnormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EndAbnormal
struct ABP_BtlCharacterBase_C_EndAbnormal_Params
{
	EAbnormalType                                      Abnormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BeginAbnormal
struct ABP_BtlCharacterBase_C_BeginAbnormal_Params
{
	EAbnormalType                                      Abnormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AddAbnormalValue
struct ABP_BtlCharacterBase_C_AddAbnormalValue_Params
{
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsGuard;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeakness;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsResistance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AutoStepProcess
struct ABP_BtlCharacterBase_C_AutoStepProcess_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAutoStep;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EventOnEndOverlimit
struct ABP_BtlCharacterBase_C_EventOnEndOverlimit_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EventOnBeginOverlimit
struct ABP_BtlCharacterBase_C_EventOnBeginOverlimit_Params
{
	bool                                               RequestAccepted;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBtlActionQuery*                             ActionQuery;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.StopTurnTarget
struct ABP_BtlCharacterBase_C_StopTurnTarget_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UpdateStrikeAttackValue
struct ABP_BtlCharacterBase_C_UpdateStrikeAttackValue_Params
{
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeakness;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HitStopProcess
struct ABP_BtlCharacterBase_C_HitStopProcess_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBtlAttackCollisionInterface> AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HitStopSec;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ReactionProcess
struct ABP_BtlCharacterBase_C_ReactionProcess_Params
{
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitEffectLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    HitEffectRotation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bIsCritical;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HitProcess
struct ABP_BtlCharacterBase_C_HitProcess_Params
{
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitEffectLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    HitEffectRotation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                DmgValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GuardProcess
struct ABP_BtlCharacterBase_C_GuardProcess_Params
{
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitEffectLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                DmgValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.IsTargetGuard
struct ABP_BtlCharacterBase_C_IsTargetGuard_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RunAutoGuard;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGuard;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.HoldHeightOnHit
struct ABP_BtlCharacterBase_C_HoldHeightOnHit_Params
{
	TScriptInterface<class UBtlAttackCollisionInterface> AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BlowProcess
struct ABP_BtlCharacterBase_C_BlowProcess_Params
{
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              KnockBackSpeed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              KnockFloatSpeed;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMighty;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DownSec;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.KnockbackProcess
struct ABP_BtlCharacterBase_C_KnockbackProcess_Params
{
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CalculateHitEffectTransform
struct ABP_BtlCharacterBase_C_CalculateHitEffectTransform_Params
{
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.TargetDamageProcess
struct ABP_BtlCharacterBase_C_TargetDamageProcess_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackSec;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    HitEffectRotation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BodyDamageProcess
struct ABP_BtlCharacterBase_C_BodyDamageProcess_Params
{
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                DmgValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNotDie;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInstantDeath;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBtlAttackCollisionInterface> AtkCollisionInterface;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TargetDie;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSuccessBoostAttackBreak;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.CoreDamageProcess
struct ABP_BtlCharacterBase_C_CoreDamageProcess_Params
{
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                DmgValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsCoreBreak;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.JustStepProcess
struct ABP_BtlCharacterBase_C_JustStepProcess_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               JustStep;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.JustGuardProcess
struct ABP_BtlCharacterBase_C_JustGuardProcess_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               JustGuard;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AutoGuardProcess
struct ABP_BtlCharacterBase_C_AutoGuardProcess_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAutoGuard;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.IsCorrectHitCollisionProcess
struct ABP_BtlCharacterBase_C_IsCorrectHitCollisionProcess_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFriendlyFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCorrect;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.GetSemiautoComponent
struct ABP_BtlCharacterBase_C_GetSemiautoComponent_Params
{
	class UBtlSemiautoComponent*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimRotationYaw
struct ABP_BtlCharacterBase_C_SetAnimRotationYaw_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimMovingRotationToDirection
struct ABP_BtlCharacterBase_C_SetAnimMovingRotationToDirection_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimMovingToArtsTarget
struct ABP_BtlCharacterBase_C_SetAnimMovingToArtsTarget_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetAnimMovingTargetLocation
struct ABP_BtlCharacterBase_C_SetAnimMovingTargetLocation_Params
{
	struct FVector                                     TargetPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UpdateManualTurn
struct ABP_BtlCharacterBase_C_UpdateManualTurn_Params
{
	struct FVector                                     StickVectorInWorld;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetHomingMove
struct ABP_BtlCharacterBase_C_SetHomingMove_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetTurnTargetArts
struct ABP_BtlCharacterBase_C_SetTurnTargetArts_Params
{
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetTurnTarget
struct ABP_BtlCharacterBase_C_SetTurnTarget_Params
{
	float                                              Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.UserConstructionScript
struct ABP_BtlCharacterBase_C_UserConstructionScript_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSetLocationRelativeTarget
struct ABP_BtlCharacterBase_C_OnSetLocationRelativeTarget_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RelativeOnGroundHeight;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSetLocationWorld
struct ABP_BtlCharacterBase_C_OnSetLocationWorld_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSetRotationWorld
struct ABP_BtlCharacterBase_C_OnSetRotationWorld_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeSuperArmorEnd
struct ABP_BtlCharacterBase_C_OnAnimChangeSuperArmorEnd_Params
{
	bool                                               SuperArmor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeSuperArmorBegin
struct ABP_BtlCharacterBase_C_OnAnimChangeSuperArmorBegin_Params
{
	bool                                               SuperArmor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeIsNotDieEnd
struct ABP_BtlCharacterBase_C_OnAnimChangeIsNotDieEnd_Params
{
	bool                                               IsNotDie;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimAimWeaponBegin
struct ABP_BtlCharacterBase_C_OnAnimAimWeaponBegin_Params
{
	float                                              AngleMin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimAimWeaponEnd
struct ABP_BtlCharacterBase_C_OnAnimAimWeaponEnd_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeIsNotDieBegin
struct ABP_BtlCharacterBase_C_OnAnimChangeIsNotDieBegin_Params
{
	bool                                               IsNotDie;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDangerNoticeBegin
struct ABP_BtlCharacterBase_C_OnAnimDangerNoticeBegin_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDangerNoticeEnd
struct ABP_BtlCharacterBase_C_OnAnimDangerNoticeEnd_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRadialBlurBegin
struct ABP_BtlCharacterBase_C_OnAnimRadialBlurBegin_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRadialBlurTick
struct ABP_BtlCharacterBase_C_OnAnimRadialBlurTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRadialBlurEnd
struct ABP_BtlCharacterBase_C_OnAnimRadialBlurEnd_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDynamicsWeightBegin
struct ABP_BtlCharacterBase_C_OnAnimDynamicsWeightBegin_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUseKeyFrameAnimBegin
struct ABP_BtlCharacterBase_C_OnAnimUseKeyFrameAnimBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUseKeyFrameAnimEnd
struct ABP_BtlCharacterBase_C_OnAnimUseKeyFrameAnimEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDynamicsWeightEnd
struct ABP_BtlCharacterBase_C_OnAnimDynamicsWeightEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGravityPowerBegin
struct ABP_BtlCharacterBase_C_OnAnimGravityPowerBegin_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGravityPowerEnd
struct ABP_BtlCharacterBase_C_OnAnimGravityPowerEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDampingPowerBegin
struct ABP_BtlCharacterBase_C_OnAnimDampingPowerBegin_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimDampingPowerEnd
struct ABP_BtlCharacterBase_C_OnAnimDampingPowerEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimSimulationSpaceBegin
struct ABP_BtlCharacterBase_C_OnAnimSimulationSpaceBegin_Params
{
	EAnimPhysSimSpaceType                              Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimSimulationSpaceEnd
struct ABP_BtlCharacterBase_C_OnAnimSimulationSpaceEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUpperPartsBegin
struct ABP_BtlCharacterBase_C_OnAnimUpperPartsBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimUpperPartsEnd
struct ABP_BtlCharacterBase_C_OnAnimUpperPartsEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimLowerPartsBegin
struct ABP_BtlCharacterBase_C_OnAnimLowerPartsBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimLowerPartsEnd
struct ABP_BtlCharacterBase_C_OnAnimLowerPartsEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimHairPartsBegin
struct ABP_BtlCharacterBase_C_OnAnimHairPartsBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimHairPartsEnd
struct ABP_BtlCharacterBase_C_OnAnimHairPartsEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGroundCollisionBegin
struct ABP_BtlCharacterBase_C_OnAnimGroundCollisionBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimGroundCollisionEnd
struct ABP_BtlCharacterBase_C_OnAnimGroundCollisionEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeReceiveDamageEnd
struct ABP_BtlCharacterBase_C_OnAnimChangeReceiveDamageEnd_Params
{
	bool                                               ReceiveDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimExtraPartsBegin
struct ABP_BtlCharacterBase_C_OnAnimExtraPartsBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimExtraPartsEnd
struct ABP_BtlCharacterBase_C_OnAnimExtraPartsEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ReceiveBeginPlay
struct ABP_BtlCharacterBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnReceiveFlexibleAnimNotifyBegin
struct ABP_BtlCharacterBase_C_OnReceiveFlexibleAnimNotifyBegin_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnReceiveFlexibleAnimNotifyEnd
struct ABP_BtlCharacterBase_C_OnReceiveFlexibleAnimNotifyEnd_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeReceiveDamageBegin
struct ABP_BtlCharacterBase_C_OnAnimChangeReceiveDamageBegin_Params
{
	bool                                               ReceiveDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeInvincibleEnd
struct ABP_BtlCharacterBase_C_OnAnimChangeInvincibleEnd_Params
{
	bool                                               Invincible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeInvincibleBegin
struct ABP_BtlCharacterBase_C_OnAnimChangeInvincibleBegin_Params
{
	bool                                               Invincible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ReviveProcess
struct ABP_BtlCharacterBase_C_ReviveProcess_Params
{
	class ABtlCharacterBase*                           Healer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.AttackEndEvent_Event
struct ABP_BtlCharacterBase_C_AttackEndEvent_Event_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleActionState                                 NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                PreArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeVisibilityEnd
struct ABP_BtlCharacterBase_C_OnAnimChangeVisibilityEnd_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeVisibilityBegin
struct ABP_BtlCharacterBase_C_OnAnimChangeVisibilityBegin_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRotationEnd
struct ABP_BtlCharacterBase_C_OnAnimRotationEnd_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimRotationBegin
struct ABP_BtlCharacterBase_C_OnAnimRotationBegin_Params
{
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.TargetDeadProcess
struct ABP_BtlCharacterBase_C_TargetDeadProcess_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimMovingEnd
struct ABP_BtlCharacterBase_C_OnAnimMovingEnd_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimMovingBegin
struct ABP_BtlCharacterBase_C_OnAnimMovingBegin_Params
{
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnIgnoreUnitPushEnd
struct ABP_BtlCharacterBase_C_OnIgnoreUnitPushEnd_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnIgnoreUnitPushBegin
struct ABP_BtlCharacterBase_C_OnIgnoreUnitPushBegin_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_0_OnStateChangeEvent__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_0_OnStateChangeEvent__DelegateSignature_Params
{
	EBattleActionState                                 NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleActionState                                 PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_6_BtlAttackArtsSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_6_BtlAttackArtsSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_0_BtlStatusSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_0_BtlStatusSignature__DelegateSignature_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_1_BtlStatusSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_1_BtlStatusSignature__DelegateSignature_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_2_BtlStatusSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_2_BtlStatusSignature__DelegateSignature_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_3_BtlStatusAbnormalTickSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_3_BtlStatusAbnormalTickSignature__DelegateSignature_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAbnormalType                                      AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_4_BtlStatusAbnormalSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_4_BtlStatusAbnormalSignature__DelegateSignature_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAbnormalType                                      AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_5_BtlStatusAbnormalSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_5_BtlStatusAbnormalSignature__DelegateSignature_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAbnormalType                                      AbnormalType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnManualTurnBegin
struct ABP_BtlCharacterBase_C_OnManualTurnBegin_Params
{
	float                                              RotationRate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.򹘞򬿾�0{k
struct ABP_BtlCharacterBase_C_򹘞򬿾�0{k_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnManualTurnEnd
struct ABP_BtlCharacterBase_C_OnManualTurnEnd_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.PlayFlashRaidEnable
struct ABP_BtlCharacterBase_C_PlayFlashRaidEnable_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeGravityTick
struct ABP_BtlCharacterBase_C_OnAnimChangeGravityTick_Params
{
	float                                              GravityScale;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimTurnTargetBegin
struct ABP_BtlCharacterBase_C_OnAnimTurnTargetBegin_Params
{
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleRange;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterBeginMomentaryRushSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterBeginMomentaryRushSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterEndMomentaryRushSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterEndMomentaryRushSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimTurnTargetEnd
struct ABP_BtlCharacterBase_C_OnAnimTurnTargetEnd_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeGravityEnd
struct ABP_BtlCharacterBase_C_OnAnimChangeGravityEnd_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_5_BtlHeelSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_5_BtlHeelSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Healer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnAnimChangeGravityBegin
struct ABP_BtlCharacterBase_C_OnAnimChangeGravityBegin_Params
{
	float                                              GravityScale;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnEndInspirationArts
struct ABP_BtlCharacterBase_C_OnEndInspirationArts_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InspirationArts;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_8_BtlEnduranceBreakSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_8_BtlEnduranceBreakSignature__DelegateSignature_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnReceiveMessage
struct ABP_BtlCharacterBase_C_OnReceiveMessage_Params
{
	struct FString                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidChangeStateSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidChangeStateSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlFlashRaidState                                 Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlFlashRaidState                                 Now;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnSelfDead
struct ABP_BtlCharacterBase_C_OnSelfDead_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnFlashRaidIn
struct ABP_BtlCharacterBase_C_OnFlashRaidIn_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.EventOnFlashRaidIn
struct ABP_BtlCharacterBase_C_EventOnFlashRaidIn_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnPostGiveDamage
struct ABP_BtlCharacterBase_C_OnPostGiveDamage_Params
{
	class ABtlCharacterBase*                           TargetUnit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.RequestMysticArts
struct ABP_BtlCharacterBase_C_RequestMysticArts_Params
{
	class ABtlCharacterBase*                           TargetUnit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_7_BtlChangeOperationSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_7_BtlChangeOperationSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           PrevOperationUnit;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           NowOperationUnit;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnPlayerOperationDisabled
struct ABP_BtlCharacterBase_C_OnPlayerOperationDisabled_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_10_BtlPrepareOverlimitSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_10_BtlPrepareOverlimitSignature__DelegateSignature_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetCapsuleCollisionResponseBtlUnits
struct ABP_BtlCharacterBase_C_SetCapsuleCollisionResponseBtlUnits_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.SetCapsuleCollisionResponseOnAttack
struct ABP_BtlCharacterBase_C_SetCapsuleCollisionResponseOnAttack_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_11_BtlCollisionSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_11_BtlCollisionSignature__DelegateSignature_Params
{
	struct FBtlCollisionSignatureData                  CollisionParam;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnEndCounterRaid
struct ABP_BtlCharacterBase_C_OnEndCounterRaid_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_12_BtlSimpleSignature__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_12_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_13_ArtsEvent__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_13_ArtsEvent__DelegateSignature_Params
{
	struct FBtlArtsHandle                              ArtsHandle;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_15_ArtsRequestEvent__DelegateSignature
struct ABP_BtlCharacterBase_C_BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_15_ArtsRequestEvent__DelegateSignature_Params
{
	class UBtlArtsQuery*                               ArtsQuery;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.OnFlashRaidNotAccept
struct ABP_BtlCharacterBase_C_OnFlashRaidNotAccept_Params
{
	class UBtlActionQuery*                             ActionQuery;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCharacterBase.BP_BtlCharacterBase_C.ExecuteUbergraph_BP_BtlCharacterBase
struct ABP_BtlCharacterBase_C_ExecuteUbergraph_BP_BtlCharacterBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
