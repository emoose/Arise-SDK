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

// Function BP_FollowingEffect.BP_FollowingEffect_C.UpdateFollow
struct ABP_FollowingEffect_C_UpdateFollow_Params
{
};

// Function BP_FollowingEffect.BP_FollowingEffect_C.UpdateEffect
struct ABP_FollowingEffect_C_UpdateEffect_Params
{
	struct FAriseMapEffectFinalSettings                Settings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_FollowingEffect.BP_FollowingEffect_C.UserConstructionScript
struct ABP_FollowingEffect_C_UserConstructionScript_Params
{
};

// Function BP_FollowingEffect.BP_FollowingEffect_C.ReceiveTick
struct ABP_FollowingEffect_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FollowingEffect.BP_FollowingEffect_C.ExecuteUbergraph_BP_FollowingEffect
struct ABP_FollowingEffect_C_ExecuteUbergraph_BP_FollowingEffect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
