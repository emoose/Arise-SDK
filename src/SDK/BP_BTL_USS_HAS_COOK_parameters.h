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

// Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnDisabled
struct UBP_BTL_USS_HAS_COOK_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnEnabled
struct UBP_BTL_USS_HAS_COOK_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnDeadUnit
struct UBP_BTL_USS_HAS_COOK_C_OnDeadUnit_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                PreArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnRaiseDeadUnit
struct UBP_BTL_USS_HAS_COOK_C_OnRaiseDeadUnit_Params
{
	class ABtlCharacterBase*                           Healer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.ExecuteUbergraph_BP_BTL_USS_HAS_COOK
struct UBP_BTL_USS_HAS_COOK_C_ExecuteUbergraph_BP_BTL_USS_HAS_COOK_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
