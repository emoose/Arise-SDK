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

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.PlayUnitBoostBreakText
struct UBP_BUS_FUNCTION_COMMON_C_PlayUnitBoostBreakText_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsEnemyLive
struct UBP_BUS_FUNCTION_COMMON_C_IsEnemyLive_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnemyLive;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.CallOnSpecialDown
struct UBP_BUS_FUNCTION_COMMON_C_CallOnSpecialDown_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraReset
struct UBP_BUS_FUNCTION_COMMON_C_BtlCameraReset_Params
{
	float                                              Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ofset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraSetNoLerp
struct UBP_BUS_FUNCTION_COMMON_C_BtlCameraSetNoLerp_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsEnemyMysticBootEnable
struct UBP_BUS_FUNCTION_COMMON_C_IsEnemyMysticBootEnable_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsHpRateRange
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitIsHpRateRange_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetFixLocation
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetFixLocation_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsMomentaryRushDamage
struct UBP_BUS_FUNCTION_COMMON_C_IsMomentaryRushDamage_Params
{
	class ABtlCharacterBase*                           AttackerUnit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           RecieverUnit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               RushBreak;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDamage;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDeathEnemies
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitDeathEnemies_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitCoreReborn
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitCoreReborn_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CoreHP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetCoreMaterialOn
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetCoreMaterialOn_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               MaterialNames;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              GlowScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmissivePower;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EmissiveColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                GlowColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetReviveAll
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetReviveAll_Params
{
	bool                                               ARI;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SIO;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NNA;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ZGU;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MNK;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               YRA;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetStrikeGageMax
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetStrikeGageMax_Params
{
	bool                                               ARI;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SIO;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NNA;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ZGU;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MNK;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               YRA;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlSetupEnemyMystic
struct UBP_BUS_FUNCTION_COMMON_C_BtlSetupEnemyMystic_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayBreakEffect
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayBreakEffect_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffefctOfset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               CursorPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AttackerColision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlSphereComponent*                         RecieveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlResetTransformParty
struct UBP_BUS_FUNCTION_COMMON_C_BtlResetTransformParty_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<struct FVector>                             Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlResetTransformEnemy
struct UBP_BUS_FUNCTION_COMMON_C_BtlResetTransformEnemy_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<struct FVector>                             Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlResetTransformBattleLocation
struct UBP_BUS_FUNCTION_COMMON_C_BtlResetTransformBattleLocation_Params
{
	bool                                               PlayerDisable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayArtsById
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayArtsById_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArts_XmlDatatableLabel                  Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetRevive
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetRevive_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitOnFlexibleNotifyEndBoss
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitOnFlexibleNotifyEndBoss_Params
{
	int                                                UsetInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FBtlCoreMaterial                            CoreMaterial0;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FBtlCoreMaterial                            CoreMaterial1;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitResetPartyTarget
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitResetPartyTarget_Params
{
	struct FBtlUnitID                                  BtlUnitID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitResetActionStateIdle
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitResetActionStateIdle_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetSpecialStrikeUI
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetSpecialStrikeUI_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSlow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBlur;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUI;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TransformName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitStopAIParty
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitStopAIParty_Params
{
	bool                                               Stop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayStrikeDownEffect
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayStrikeDownEffect_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayDeadEvent
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayDeadEvent_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               RecoveryTransform;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitOnFlexibleNotifyBeginBoss
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitOnFlexibleNotifyBeginBoss_Params
{
	int                                                UsetInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FBtlCoreMaterial                            CoreMaterial0;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FBtlCoreMaterial                            CoreMaterial1;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetSlowWorld
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetSlowWorld_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayCoreBreakEffect
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayCoreBreakEffect_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               CursorPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetHpPercentValue
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitGetHpPercentValue_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsSpecialDown
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitIsSpecialDown_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AirDownDisable;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Boss;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChantForce;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DownEnable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayPhaseChangeEffect
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayPhaseChangeEffect_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffefctOfset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               CursorPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetHpValue
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitGetHpValue_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetHpValue
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetHpValue_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HPValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsBlackBoardSignal
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitIsBlackBoardSignal_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SignalName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSignal;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAimOffsetOverride
struct UBP_BUS_FUNCTION_COMMON_C_BtlCameraAimOffsetOverride_Params
{
	bool                                               OverrideAimOffset;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AimOffset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Interpolate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayArtsForce
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayArtsForce_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CrossFade;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FallCheck;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayEndArts
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayEndArts_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlSetTargetPlayer(UnitID)
struct UBP_BUS_FUNCTION_COMMON_C_BtlSetTargetPlayer_UnitID__Params
{
	struct FBtlUnitID                                  TargetEnemy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               CameraReset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraDistanceOverride
struct UBP_BUS_FUNCTION_COMMON_C_BtlCameraDistanceOverride_Params
{
	bool                                               OverrideDistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Interpolate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlStrikeDownCountUp
struct UBP_BUS_FUNCTION_COMMON_C_BtlStrikeDownCountUp_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAngleOverride
struct UBP_BUS_FUNCTION_COMMON_C_BtlCameraAngleOverride_Params
{
	bool                                               OverridePitch;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideYaw;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Interpolate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayEnemyMystic
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayEnemyMystic_Params
{
	class ULevelSequence*                              LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       ArtsName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlHudVisible_DatatableLabel               HUDPreset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               RecoveryTransform;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayMysticSE;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ScreenCaptureDisable;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAngleReset
struct UBP_BUS_FUNCTION_COMMON_C_BtlCameraAngleReset_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlCameraAngleOffset
struct UBP_BUS_FUNCTION_COMMON_C_BtlCameraAngleOffset_Params
{
	float                                              OffsetPitch;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetYaw;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Interpolate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlGetUnitForBtlID(UnitID)
struct UBP_BUS_FUNCTION_COMMON_C_BtlGetUnitForBtlID_UnitID__Params
{
	struct FBtlUnitID                                  BtlIUnitID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               AliveOnly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TargetableOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           BtlUnit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Find;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDeath
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitDeath_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDeleteBlackBoardSignal
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitDeleteBlackBoardSignal_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SignalName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.IsBtlUnitBtlID
struct UBP_BUS_FUNCTION_COMMON_C_IsBtlUnitBtlID_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlUnitID                                  BtlID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Find;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetHpRate
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitGetHpRate_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitStopAI
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitStopAI_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Stop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayEvent
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayEvent_Params
{
	class ULevelSequence*                              LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlHudVisible_DatatableLabel               HUDPreset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               RecoveryTransform;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetParticleActivate
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetParticleActivate_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticleName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Activate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetCoreMaterialOff
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetCoreMaterialOff_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               MaterialNames;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ParamValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetMaterialVector
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetMaterialVector_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParamValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUniqueButtonIsJustPressed
struct UBP_BUS_FUNCTION_COMMON_C_BtlUniqueButtonIsJustPressed_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUniqueButtonIsPressed
struct UBP_BUS_FUNCTION_COMMON_C_BtlUniqueButtonIsPressed_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitBreakParts
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitBreakParts_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HidePartsName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     VisiblePartsName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitPlayArts
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitPlayArts_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitUpdateUniqueDownHp
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitUpdateUniqueDownHp_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlUnitScript*                              BtlUnitScript;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                HPPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsReactionOverride;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetCollision
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetCollision_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DamageEnable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CollisionEnable;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CollisionName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               CollisionSetup;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitIsState
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitIsState_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleActionState                                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsState;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitCheckUniqueDownHp
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitCheckUniqueDownHp_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HPPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUniqueDown;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NextUniqueDownHp;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetUniqueDownHpInitialize
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetUniqueDownHpInitialize_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HPPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextUniqueDownHp;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetMaterialDynamics
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitGetMaterialDynamics_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Material;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDebugPrintMaterialName
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitDebugPrintMaterialName_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetMaterialParam
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetMaterialParam_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParamValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetMaterialParamAll
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetMaterialParamAll_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParamValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAchCharacterBuildComponent>           InComponentType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlArtsButtonIsPressed
struct UBP_BUS_FUNCTION_COMMON_C_BtlArtsButtonIsPressed_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetHpPercent
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetHpPercent_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HPPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetVisiblePartsList
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetVisiblePartsList_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Nemes;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Visble;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAchCharacterBuildComponent>           NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlGetUnitForBtlID
struct UBP_BUS_FUNCTION_COMMON_C_BtlGetUnitForBtlID_Params
{
	struct FName                                       BtlIUnitID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AliveOnly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TargetableOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           BtlUnit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Find;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitGetSocketLocation
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitGetSocketLocation_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetBlackBoardSignal
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetBlackBoardSignal_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SignalName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetDown
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetDown_Params
{
	class UBtlUnitScript*                              BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DownSec;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFoward;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetVisibleMesh
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetVisibleMesh_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MeshName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDebugPrintMeshName
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitDebugPrintMeshName_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitDebugPrintPartsName
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitDebugPrintPartsName_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetVisibleParts
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetVisibleParts_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PartsName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAchCharacterBuildComponent>           Component_Type;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetSpecialDown
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetSpecialDown_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpecialDown;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlUnitSetRotationTarget
struct UBP_BUS_FUNCTION_COMMON_C_BtlUnitSetRotationTarget_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           UnitTarget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlArtsIsStrikeAttack
struct UBP_BUS_FUNCTION_COMMON_C_BtlArtsIsStrikeAttack_Params
{
	struct FBtlArtsData                                BtlArtsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsStrikeAttack;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C.BtlArtsIsFlashRaid
struct UBP_BUS_FUNCTION_COMMON_C_BtlArtsIsFlashRaid_Params
{
	struct FBtlArtsData                                BtlArtsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFlashRaid;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
