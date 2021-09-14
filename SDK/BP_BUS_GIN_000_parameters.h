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

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.CanStrikeAttackDown
struct UBP_BUS_GIN_000_C_CanStrikeAttackDown_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.CoreMaterialInitialize
struct UBP_BUS_GIN_000_C_CoreMaterialInitialize_Params
{
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.SetInsID
struct UBP_BUS_GIN_000_C_SetInsID_Params
{
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.UpdateCore
struct UBP_BUS_GIN_000_C_UpdateCore_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.SetCoreBreak
struct UBP_BUS_GIN_000_C_SetCoreBreak_Params
{
	class USceneComponent*                             RecieveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnReceiveDamage
struct UBP_BUS_GIN_000_C_OnReceiveDamage_Params
{
	bool                                               IsReactionOverride;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AttackerCollision;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCoreBreak;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.IsSpecialDown
struct UBP_BUS_GIN_000_C_IsSpecialDown_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ArtsHum
struct UBP_BUS_GIN_000_C_ArtsHum_Params
{
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ArtsBladeHit_Initialize
struct UBP_BUS_GIN_000_C_ArtsBladeHit_Initialize_Params
{
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.UpdateCheckSpecialDown
struct UBP_BUS_GIN_000_C_UpdateCheckSpecialDown_Params
{
	class ABtlCharacterBase*                           BtlUnitAttacker;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCoreBreak;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                BtlArtsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USceneComponent*                             RecieveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsReactionOverride;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.BtlUnitSetDown
struct UBP_BUS_GIN_000_C_BtlUnitSetDown_Params
{
	class UBtlUnitScript*                              򠸖񸰄�0;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsForward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.SetUniqueDownHpInitialize
struct UBP_BUS_GIN_000_C_SetUniqueDownHpInitialize_Params
{
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnFlexibleNotifyBegin
struct UBP_BUS_GIN_000_C_OnFlexibleNotifyBegin_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     UserObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnTick
struct UBP_BUS_GIN_000_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnDeadCinematicEvent
struct UBP_BUS_GIN_000_C_OnDeadCinematicEvent_Params
{
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnGiveDamage
struct UBP_BUS_GIN_000_C_OnGiveDamage_Params
{
	class UShapeComponent*                             AttackCollision;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                AttackArts;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABtlCharacterBase*                           ReceiveUnit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnWaitDeathStrokeBegin
struct UBP_BUS_GIN_000_C_OnWaitDeathStrokeBegin_Params
{
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnDead
struct UBP_BUS_GIN_000_C_OnDead_Params
{
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnBeginPlay
struct UBP_BUS_GIN_000_C_OnBeginPlay_Params
{
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnEndStrikeSmash
struct UBP_BUS_GIN_000_C_OnEndStrikeSmash_Params
{
	struct FBtlStrikeSmashEndParam                     Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnFlexibleNotifyEnd
struct UBP_BUS_GIN_000_C_OnFlexibleNotifyEnd_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     UserObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnCoreReborn
struct UBP_BUS_GIN_000_C_OnCoreReborn_Params
{
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ReceiveOnStrikeAttackDown
struct UBP_BUS_GIN_000_C_ReceiveOnStrikeAttackDown_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ExecuteUbergraph_BP_BUS_GIN_000
struct UBP_BUS_GIN_000_C_ExecuteUbergraph_BP_BUS_GIN_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
