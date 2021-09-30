
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

// Function BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C.OnAwakeEffect
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_AWAKE_OVER_LIMIT_REGENERATION_C::OnAwakeEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C.OnAwakeEffect");

	UBP_USS_AWAKE_OVER_LIMIT_REGENERATION_C_OnAwakeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C.OnUnapplySkill
// (Event, Protected, BlueprintEvent)

void UBP_USS_AWAKE_OVER_LIMIT_REGENERATION_C::OnUnapplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C.OnUnapplySkill");

	UBP_USS_AWAKE_OVER_LIMIT_REGENERATION_C_OnUnapplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C.OnApplySkill
// (Event, Protected, BlueprintEvent)

void UBP_USS_AWAKE_OVER_LIMIT_REGENERATION_C::OnApplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C.OnApplySkill");

	UBP_USS_AWAKE_OVER_LIMIT_REGENERATION_C_OnApplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C.OnInitialized
// (Event, Protected, BlueprintEvent)

void UBP_USS_AWAKE_OVER_LIMIT_REGENERATION_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C.OnInitialized");

	UBP_USS_AWAKE_OVER_LIMIT_REGENERATION_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C.ExecuteUbergraph_BP_USS_AWAKE_OVER_LIMIT_REGENERATION
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_AWAKE_OVER_LIMIT_REGENERATION_C::ExecuteUbergraph_BP_USS_AWAKE_OVER_LIMIT_REGENERATION(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE_OVER_LIMIT_REGENERATION.BP_USS_AWAKE_OVER_LIMIT_REGENERATION_C.ExecuteUbergraph_BP_USS_AWAKE_OVER_LIMIT_REGENERATION");

	UBP_USS_AWAKE_OVER_LIMIT_REGENERATION_C_ExecuteUbergraph_BP_USS_AWAKE_OVER_LIMIT_REGENERATION_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
