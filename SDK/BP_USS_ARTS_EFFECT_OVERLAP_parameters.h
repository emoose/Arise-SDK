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

// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.GetEffectValue
struct UBP_USS_ARTS_EFFECT_OVERLAP_C_GetEffectValue_Params
{
	struct FAriseSkillEffect                           Effect;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnUnapplySkill
struct UBP_USS_ARTS_EFFECT_OVERLAP_C_OnUnapplySkill_Params
{
};

// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnApplySkill
struct UBP_USS_ARTS_EFFECT_OVERLAP_C_OnApplySkill_Params
{
};

// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnEnabled
struct UBP_USS_ARTS_EFFECT_OVERLAP_C_OnEnabled_Params
{
};

// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.OnEndArts
struct UBP_USS_ARTS_EFFECT_OVERLAP_C_OnEndArts_Params
{
	struct FBtlArtsHandle                              ArtsHandle;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_USS_ARTS_EFFECT_OVERLAP.BP_USS_ARTS_EFFECT_OVERLAP_C.ExecuteUbergraph_BP_USS_ARTS_EFFECT_OVERLAP
struct UBP_USS_ARTS_EFFECT_OVERLAP_C_ExecuteUbergraph_BP_USS_ARTS_EFFECT_OVERLAP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
