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

// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.CanCounterRaid
struct UBP_BTL_USS_KILL_COUNTER_RAID_C_CanCounterRaid_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.DeadCharacter
struct UBP_BTL_USS_KILL_COUNTER_RAID_C_DeadCharacter_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnDefeated
struct UBP_BTL_USS_KILL_COUNTER_RAID_C_OnDefeated_Params
{
};

// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnTargetChanged
struct UBP_BTL_USS_KILL_COUNTER_RAID_C_OnTargetChanged_Params
{
};

// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.TargetChanged
struct UBP_BTL_USS_KILL_COUNTER_RAID_C_TargetChanged_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlTargetCursorComponent*                   NewTargetComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           NewTargetCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlTargetCursorComponent*                   PrevTargetComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnEnabled
struct UBP_BTL_USS_KILL_COUNTER_RAID_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnDisabled
struct UBP_BTL_USS_KILL_COUNTER_RAID_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.ExecuteUbergraph_BP_BTL_USS_KILL_COUNTER_RAID
struct UBP_BTL_USS_KILL_COUNTER_RAID_C_ExecuteUbergraph_BP_BTL_USS_KILL_COUNTER_RAID_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
