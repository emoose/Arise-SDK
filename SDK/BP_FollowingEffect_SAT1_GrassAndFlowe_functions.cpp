
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_FollowingEffect_SAT1_GrassAndFlowe.BP_FollowingEffect_SAT1_GrassAndFlowe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FollowingEffect_SAT1_GrassAndFlowe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FollowingEffect_SAT1_GrassAndFlowe.BP_FollowingEffect_SAT1_GrassAndFlowe_C.UserConstructionScript");

	ABP_FollowingEffect_SAT1_GrassAndFlowe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FollowingEffect_SAT1_GrassAndFlowe.BP_FollowingEffect_SAT1_GrassAndFlowe_C.UpdateEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseMapEffectFinalSettings Settings                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_FollowingEffect_SAT1_GrassAndFlowe_C::UpdateEffect(const struct FAriseMapEffectFinalSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FollowingEffect_SAT1_GrassAndFlowe.BP_FollowingEffect_SAT1_GrassAndFlowe_C.UpdateEffect");

	ABP_FollowingEffect_SAT1_GrassAndFlowe_C_UpdateEffect_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FollowingEffect_SAT1_GrassAndFlowe.BP_FollowingEffect_SAT1_GrassAndFlowe_C.ExecuteUbergraph_BP_FollowingEffect_SAT1_GrassAndFlowe
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FollowingEffect_SAT1_GrassAndFlowe_C::ExecuteUbergraph_BP_FollowingEffect_SAT1_GrassAndFlowe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FollowingEffect_SAT1_GrassAndFlowe.BP_FollowingEffect_SAT1_GrassAndFlowe_C.ExecuteUbergraph_BP_FollowingEffect_SAT1_GrassAndFlowe");

	ABP_FollowingEffect_SAT1_GrassAndFlowe_C_ExecuteUbergraph_BP_FollowingEffect_SAT1_GrassAndFlowe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
