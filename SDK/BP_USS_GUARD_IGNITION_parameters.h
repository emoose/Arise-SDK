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

// Function BP_USS_GUARD_IGNITION.BP_USS_GUARD_IGNITION_C.GetEffectValue
struct UBP_USS_GUARD_IGNITION_C_GetEffectValue_Params
{
	struct FAriseSkillEffect                           Effect;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_USS_GUARD_IGNITION.BP_USS_GUARD_IGNITION_C.OnGuardIgnitionRankChanged
struct UBP_USS_GUARD_IGNITION_C_OnGuardIgnitionRankChanged_Params
{
};

// Function BP_USS_GUARD_IGNITION.BP_USS_GUARD_IGNITION_C.OnEnabled
struct UBP_USS_GUARD_IGNITION_C_OnEnabled_Params
{
};

// Function BP_USS_GUARD_IGNITION.BP_USS_GUARD_IGNITION_C.OnInitialized
struct UBP_USS_GUARD_IGNITION_C_OnInitialized_Params
{
};

// Function BP_USS_GUARD_IGNITION.BP_USS_GUARD_IGNITION_C.ExecuteUbergraph_BP_USS_GUARD_IGNITION
struct UBP_USS_GUARD_IGNITION_C_ExecuteUbergraph_BP_USS_GUARD_IGNITION_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
