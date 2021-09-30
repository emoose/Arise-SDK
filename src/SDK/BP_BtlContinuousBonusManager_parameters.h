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

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.DefeatEnemyLevelCheck
struct ABP_BtlContinuousBonusManager_C_DefeatEnemyLevelCheck_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.UserConstructionScript
struct ABP_BtlContinuousBonusManager_C_UserConstructionScript_Params
{
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.Received_Initialize
struct ABP_BtlContinuousBonusManager_C_Received_Initialize_Params
{
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.Received_Finalize
struct ABP_BtlContinuousBonusManager_C_Received_Finalize_Params
{
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnUseItem_Event
struct ABP_BtlContinuousBonusManager_C_OnUseItem_Event_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnEndBattle
struct ABP_BtlContinuousBonusManager_C_OnEndBattle_Params
{
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnDeadCharacter
struct ABP_BtlContinuousBonusManager_C_OnDeadCharacter_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnBeginArtsStrikeAttack
struct ABP_BtlContinuousBonusManager_C_OnBeginArtsStrikeAttack_Params
{
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnBeginArtsStrikeSmash
struct ABP_BtlContinuousBonusManager_C_OnBeginArtsStrikeSmash_Params
{
	struct FBtlStrikeSmashBeginParam                   Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnSpecialDown
struct ABP_BtlContinuousBonusManager_C_OnSpecialDown_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnApplyReward
struct ABP_BtlContinuousBonusManager_C_OnApplyReward_Params
{
	EBtlResultType                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnBoostAttackBreak
struct ABP_BtlContinuousBonusManager_C_OnBoostAttackBreak_Params
{
	struct FBtlCollisionSignatureData                  CollisionParam;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.ExecuteUbergraph_BP_BtlContinuousBonusManager
struct ABP_BtlContinuousBonusManager_C_ExecuteUbergraph_BP_BtlContinuousBonusManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
