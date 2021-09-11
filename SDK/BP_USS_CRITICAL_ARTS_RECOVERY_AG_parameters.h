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

// Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.OnDisabled
struct UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C_OnDisabled_Params
{
};

// Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.OnEnabled
struct UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C_OnEnabled_Params
{
};

// Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.OnFirstCriticalAttack
struct UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C_OnFirstCriticalAttack_Params
{
	class ABtlCharacterBase*                           Target;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_USS_CRITICAL_ARTS_RECOVERY_AG.BP_USS_CRITICAL_ARTS_RECOVERY_AG_C.ExecuteUbergraph_BP_USS_CRITICAL_ARTS_RECOVERY_AG
struct UBP_USS_CRITICAL_ARTS_RECOVERY_AG_C_ExecuteUbergraph_BP_USS_CRITICAL_ARTS_RECOVERY_AG_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
