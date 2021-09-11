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

// Function BP_USS_ALWAYS_DAMAGE_EFFECT.BP_USS_ALWAYS_DAMAGE_EFFECT_C.OnEnabled
struct UBP_USS_ALWAYS_DAMAGE_EFFECT_C_OnEnabled_Params
{
};

// Function BP_USS_ALWAYS_DAMAGE_EFFECT.BP_USS_ALWAYS_DAMAGE_EFFECT_C.OnDisabled
struct UBP_USS_ALWAYS_DAMAGE_EFFECT_C_OnDisabled_Params
{
};

// Function BP_USS_ALWAYS_DAMAGE_EFFECT.BP_USS_ALWAYS_DAMAGE_EFFECT_C.OnBeginBattle
struct UBP_USS_ALWAYS_DAMAGE_EFFECT_C_OnBeginBattle_Params
{
};

// Function BP_USS_ALWAYS_DAMAGE_EFFECT.BP_USS_ALWAYS_DAMAGE_EFFECT_C.OnEndBattle
struct UBP_USS_ALWAYS_DAMAGE_EFFECT_C_OnEndBattle_Params
{
	EBtlResultType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_USS_ALWAYS_DAMAGE_EFFECT.BP_USS_ALWAYS_DAMAGE_EFFECT_C.AddDamageEffectScript
struct UBP_USS_ALWAYS_DAMAGE_EFFECT_C_AddDamageEffectScript_Params
{
};

// Function BP_USS_ALWAYS_DAMAGE_EFFECT.BP_USS_ALWAYS_DAMAGE_EFFECT_C.RemoveDamageEffectScript
struct UBP_USS_ALWAYS_DAMAGE_EFFECT_C_RemoveDamageEffectScript_Params
{
};

// Function BP_USS_ALWAYS_DAMAGE_EFFECT.BP_USS_ALWAYS_DAMAGE_EFFECT_C.ExecuteUbergraph_BP_USS_ALWAYS_DAMAGE_EFFECT
struct UBP_USS_ALWAYS_DAMAGE_EFFECT_C_ExecuteUbergraph_BP_USS_ALWAYS_DAMAGE_EFFECT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
