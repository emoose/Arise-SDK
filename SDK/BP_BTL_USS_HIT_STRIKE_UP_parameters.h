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

// Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnHiCombo
struct UBP_BTL_USS_HIT_STRIKE_UP_C_OnHiCombo_Params
{
	class ABtlCharacterBase*                           DamageCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnHitPlayerTarget
struct UBP_BTL_USS_HIT_STRIKE_UP_C_OnHitPlayerTarget_Params
{
	int                                                HitCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnEnabled
struct UBP_BTL_USS_HIT_STRIKE_UP_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnDisabled
struct UBP_BTL_USS_HIT_STRIKE_UP_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.ExecuteUbergraph_BP_BTL_USS_HIT_STRIKE_UP
struct UBP_BTL_USS_HIT_STRIKE_UP_C_ExecuteUbergraph_BP_BTL_USS_HIT_STRIKE_UP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
