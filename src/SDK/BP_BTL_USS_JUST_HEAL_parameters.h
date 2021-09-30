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

// Function BP_BTL_USS_JUST_HEAL.BP_BTL_USS_JUST_HEAL_C.OnJustGuard
struct UBP_BTL_USS_JUST_HEAL_C_OnJustGuard_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_JUST_HEAL.BP_BTL_USS_JUST_HEAL_C.OnEnabled
struct UBP_BTL_USS_JUST_HEAL_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_JUST_HEAL.BP_BTL_USS_JUST_HEAL_C.OnDisabled
struct UBP_BTL_USS_JUST_HEAL_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_JUST_HEAL.BP_BTL_USS_JUST_HEAL_C.ExecuteUbergraph_BP_BTL_USS_JUST_HEAL
struct UBP_BTL_USS_JUST_HEAL_C_ExecuteUbergraph_BP_BTL_USS_JUST_HEAL_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
