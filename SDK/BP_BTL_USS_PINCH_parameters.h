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

// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnPinchToNormal
struct UBP_BTL_USS_PINCH_C_OnPinchToNormal_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnNormalToPinch
struct UBP_BTL_USS_PINCH_C_OnNormalToPinch_Params
{
	class UBtlStatusComponent*                         SelfComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnDisabled
struct UBP_BTL_USS_PINCH_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnEnabled
struct UBP_BTL_USS_PINCH_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnDeadUnit
struct UBP_BTL_USS_PINCH_C_OnDeadUnit_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                PreArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnRaiseDeadUnit
struct UBP_BTL_USS_PINCH_C_OnRaiseDeadUnit_Params
{
	class ABtlCharacterBase*                           Healer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.ExecuteUbergraph_BP_BTL_USS_PINCH
struct UBP_BTL_USS_PINCH_C_ExecuteUbergraph_BP_BTL_USS_PINCH_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
