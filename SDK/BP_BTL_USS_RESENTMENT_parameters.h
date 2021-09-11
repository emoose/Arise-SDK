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

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.GetRevengeBaseElementAttack
struct UBP_BTL_USS_RESENTMENT_C_GetRevengeBaseElementAttack_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.GetRevengeBasePhysicalAttack
struct UBP_BTL_USS_RESENTMENT_C_GetRevengeBasePhysicalAttack_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.GetRevengeEffectValue
struct UBP_BTL_USS_RESENTMENT_C_GetRevengeEffectValue_Params
{
	float                                              MaxEffectValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnGuard
struct UBP_BTL_USS_RESENTMENT_C_OnGuard_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnDamage
struct UBP_BTL_USS_RESENTMENT_C_OnDamage_Params
{
	int                                                Damage;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.DamageCharacter
struct UBP_BTL_USS_RESENTMENT_C_DamageCharacter_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                PreArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                PrevHp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantDeath;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Critical;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.StateChanged
struct UBP_BTL_USS_RESENTMENT_C_StateChanged_Params
{
	EBattleActionState                                 NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleActionState                                 PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnActionChanged
struct UBP_BTL_USS_RESENTMENT_C_OnActionChanged_Params
{
	EBattleActionState                                 NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleActionState                                 PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.ChangeStatusRise
struct UBP_BTL_USS_RESENTMENT_C_ChangeStatusRise_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnEnabled
struct UBP_BTL_USS_RESENTMENT_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnDisabled
struct UBP_BTL_USS_RESENTMENT_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnApplySkill
struct UBP_BTL_USS_RESENTMENT_C_OnApplySkill_Params
{
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnUnapplySkill
struct UBP_BTL_USS_RESENTMENT_C_OnUnapplySkill_Params
{
};

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.ExecuteUbergraph_BP_BTL_USS_RESENTMENT
struct UBP_BTL_USS_RESENTMENT_C_ExecuteUbergraph_BP_BTL_USS_RESENTMENT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
