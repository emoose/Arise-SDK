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

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.ReceiveOnStrikeAttackDown
struct UBP_BtlUnitScript_C_ReceiveOnStrikeAttackDown_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.CanStrikeAttackDown
struct UBP_BtlUnitScript_C_CanStrikeAttackDown_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.GetUnitParameterAsBool
struct UBP_BtlUnitScript_C_GetUnitParameterAsBool_Params
{
	struct FBtlUnitParameterLabel                      Label;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.GetUnitParameterAsInt
struct UBP_BtlUnitScript_C_GetUnitParameterAsInt_Params
{
	struct FBtlUnitParameterLabel                      Label;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.GetUnitParameter
struct UBP_BtlUnitScript_C_GetUnitParameter_Params
{
	struct FBtlUnitParameterLabel                      Label;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnComboNext
struct UBP_BtlUnitScript_C_OnComboNext_Params
{
	struct FName                                       PrevArts;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Override;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NextArts;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttackAirSub
struct UBP_BtlUnitScript_C_OnGetBoostAttackAirSub_Params
{
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttackAir
struct UBP_BtlUnitScript_C_OnGetBoostAttackAir_Params
{
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttackSub
struct UBP_BtlUnitScript_C_OnGetBoostAttackSub_Params
{
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttack
struct UBP_BtlUnitScript_C_OnGetBoostAttack_Params
{
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.ApplyBreakEffect
struct UBP_BtlUnitScript_C_ApplyBreakEffect_Params
{
	EBtlStrikeType                                     StrikeType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.ApplyBreakVisibility
struct UBP_BtlUnitScript_C_ApplyBreakVisibility_Params
{
	EBtlStrikeType                                     StrikeType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakRush
struct UBP_BtlUnitScript_C_OnBreakRush_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AttackerCollision;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakArmor
struct UBP_BtlUnitScript_C_OnBreakArmor_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AttackerCollision;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakSuperAvoid
struct UBP_BtlUnitScript_C_OnBreakSuperAvoid_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AttackerCollision;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnReceiveFireSword
struct UBP_BtlUnitScript_C_OnReceiveFireSword_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AttackerCollision;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnDead
struct UBP_BtlUnitScript_C_OnDead_Params
{
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnStrikeAttackDown
struct UBP_BtlUnitScript_C_OnStrikeAttackDown_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnDeadAction
struct UBP_BtlUnitScript_C_OnDeadAction_Params
{
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakChant
struct UBP_BtlUnitScript_C_OnBreakChant_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AttackerCollision;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnCutsceneResetAnimation
struct UBP_BtlUnitScript_C_OnCutsceneResetAnimation_Params
{
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnSuccessJustGuard
struct UBP_BtlUnitScript_C_OnSuccessJustGuard_Params
{
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnSuccessJustAvoid
struct UBP_BtlUnitScript_C_OnSuccessJustAvoid_Params
{
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakFlying
struct UBP_BtlUnitScript_C_OnBreakFlying_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AttackerCollision;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnFrozenAction
struct UBP_BtlUnitScript_C_OnFrozenAction_Params
{
};

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.ExecuteUbergraph_BP_BtlUnitScript
struct UBP_BtlUnitScript_C_ExecuteUbergraph_BP_BtlUnitScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
