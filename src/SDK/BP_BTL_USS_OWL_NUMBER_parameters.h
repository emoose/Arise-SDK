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

// Function BP_BTL_USS_OWL_NUMBER.BP_BTL_USS_OWL_NUMBER_C.GetEffectValue
struct UBP_BTL_USS_OWL_NUMBER_C_GetEffectValue_Params
{
	struct FAriseSkillEffect                           Effect;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_USS_OWL_NUMBER.BP_BTL_USS_OWL_NUMBER_C.OnDisabled
struct UBP_BTL_USS_OWL_NUMBER_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_OWL_NUMBER.BP_BTL_USS_OWL_NUMBER_C.OnEnabled
struct UBP_BTL_USS_OWL_NUMBER_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_OWL_NUMBER.BP_BTL_USS_OWL_NUMBER_C.ExecuteUbergraph_BP_BTL_USS_OWL_NUMBER
struct UBP_BTL_USS_OWL_NUMBER_C_ExecuteUbergraph_BP_BTL_USS_OWL_NUMBER_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
