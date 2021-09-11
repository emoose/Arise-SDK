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

// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.GetPartyId
struct UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_GetPartyId_Params
{
	EArisePartyID                                      EnumValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.AddDefautCount
struct UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_AddDefautCount_Params
{
};

// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnDeadCharacter
struct UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_OnDeadCharacter_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnDeadEnemy
struct UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_OnDeadEnemy_Params
{
};

// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnDisabled
struct UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnEnabled
struct UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.ExecuteUbergraph_BP_BTL_USS_DEVIL_WEAPON_COUNT
struct UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_ExecuteUbergraph_BP_BTL_USS_DEVIL_WEAPON_COUNT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
