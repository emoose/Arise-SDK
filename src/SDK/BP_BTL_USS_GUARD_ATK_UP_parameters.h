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

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.DamageCharacter
struct UBP_BTL_USS_GUARD_ATK_UP_C_DamageCharacter_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                PreArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                PrevHp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantDeath;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Critical;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnDamage
struct UBP_BTL_USS_GUARD_ATK_UP_C_OnDamage_Params
{
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnGuard
struct UBP_BTL_USS_GUARD_ATK_UP_C_OnGuard_Params
{
};

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.SetStatusRiseEnabled
struct UBP_BTL_USS_GUARD_ATK_UP_C_SetStatusRiseEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnDisabled
struct UBP_BTL_USS_GUARD_ATK_UP_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnApplySkill
struct UBP_BTL_USS_GUARD_ATK_UP_C_OnApplySkill_Params
{
};

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnUnapplySkill
struct UBP_BTL_USS_GUARD_ATK_UP_C_OnUnapplySkill_Params
{
};

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnEnabled
struct UBP_BTL_USS_GUARD_ATK_UP_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnInitialized
struct UBP_BTL_USS_GUARD_ATK_UP_C_OnInitialized_Params
{
};

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnJustGuard
struct UBP_BTL_USS_GUARD_ATK_UP_C_OnJustGuard_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.ExecuteUbergraph_BP_BTL_USS_GUARD_ATK_UP
struct UBP_BTL_USS_GUARD_ATK_UP_C_ExecuteUbergraph_BP_BTL_USS_GUARD_ATK_UP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
