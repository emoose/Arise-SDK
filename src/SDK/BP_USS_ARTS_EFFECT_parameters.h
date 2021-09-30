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

// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.RegisterArtsEffects
struct UBP_USS_ARTS_EFFECT_C_RegisterArtsEffects_Params
{
};

// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.GetSkillEffects
struct UBP_USS_ARTS_EFFECT_C_GetSkillEffects_Params
{
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              EffectTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAriseSkillEffect>                   SkillEffects;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.OnArtsEffect
struct UBP_USS_ARTS_EFFECT_C_OnArtsEffect_Params
{
	class ABtlCharacterBase*                           Supporter;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.OnInitialized
struct UBP_USS_ARTS_EFFECT_C_OnInitialized_Params
{
};

// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.OnApplySkill
struct UBP_USS_ARTS_EFFECT_C_OnApplySkill_Params
{
};

// Function BP_USS_ARTS_EFFECT.BP_USS_ARTS_EFFECT_C.ExecuteUbergraph_BP_USS_ARTS_EFFECT
struct UBP_USS_ARTS_EFFECT_C_ExecuteUbergraph_BP_USS_ARTS_EFFECT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
