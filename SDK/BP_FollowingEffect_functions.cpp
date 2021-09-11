
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

// Function BP_FollowingEffect.BP_FollowingEffect_C.UpdateFollow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FollowingEffect_C::UpdateFollow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FollowingEffect.BP_FollowingEffect_C.UpdateFollow");

	ABP_FollowingEffect_C_UpdateFollow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FollowingEffect.BP_FollowingEffect_C.UpdateEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseMapEffectFinalSettings Settings                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_FollowingEffect_C::UpdateEffect(const struct FAriseMapEffectFinalSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FollowingEffect.BP_FollowingEffect_C.UpdateEffect");

	ABP_FollowingEffect_C_UpdateEffect_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FollowingEffect.BP_FollowingEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FollowingEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FollowingEffect.BP_FollowingEffect_C.UserConstructionScript");

	ABP_FollowingEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FollowingEffect.BP_FollowingEffect_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FollowingEffect_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FollowingEffect.BP_FollowingEffect_C.ReceiveTick");

	ABP_FollowingEffect_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FollowingEffect.BP_FollowingEffect_C.ExecuteUbergraph_BP_FollowingEffect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FollowingEffect_C::ExecuteUbergraph_BP_FollowingEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FollowingEffect.BP_FollowingEffect_C.ExecuteUbergraph_BP_FollowingEffect");

	ABP_FollowingEffect_C_ExecuteUbergraph_BP_FollowingEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
