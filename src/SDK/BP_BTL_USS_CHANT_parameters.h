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

// Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.OnStateChanged
struct UBP_BTL_USS_CHANT_C_OnStateChanged_Params
{
	EBattleActionState                                 NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleActionState                                 PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.OnDisabled
struct UBP_BTL_USS_CHANT_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.OnEnabled
struct UBP_BTL_USS_CHANT_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_CHANT.BP_BTL_USS_CHANT_C.ExecuteUbergraph_BP_BTL_USS_CHANT
struct UBP_BTL_USS_CHANT_C_ExecuteUbergraph_BP_BTL_USS_CHANT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
