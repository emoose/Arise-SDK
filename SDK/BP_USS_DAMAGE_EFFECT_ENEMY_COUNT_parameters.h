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

// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.GetEffectValue
struct UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_GetEffectValue_Params
{
	struct FAriseSkillEffect                           Effect;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnSpawnUnit
struct UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnSpawnUnit_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reinforcement;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnDisabled
struct UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnDisabled_Params
{
};

// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.AddUnitCount
struct UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_AddUnitCount_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnEnabled
struct UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnEnabled_Params
{
};

// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnReinforced
struct UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnReinforced_Params
{
};

// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnDefeated
struct UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnDefeated_Params
{
};

// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnDeadUnit
struct UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnDeadUnit_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.ExecuteUbergraph_BP_USS_DAMAGE_EFFECT_ENEMY_COUNT
struct UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_ExecuteUbergraph_BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
