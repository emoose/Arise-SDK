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

// Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.OnDisabled
struct UBP_BTL_USS_KIL_PARAM_UP_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.OnEnabled
struct UBP_BTL_USS_KIL_PARAM_UP_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.OnInitialized
struct UBP_BTL_USS_KIL_PARAM_UP_C_OnInitialized_Params
{
};

// Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.DeadCharacter
struct UBP_BTL_USS_KIL_PARAM_UP_C_DeadCharacter_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.ExecuteUbergraph_BP_BTL_USS_KIL_PARAM_UP
struct UBP_BTL_USS_KIL_PARAM_UP_C_ExecuteUbergraph_BP_BTL_USS_KIL_PARAM_UP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
