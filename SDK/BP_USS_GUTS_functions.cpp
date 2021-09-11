
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

// Function BP_USS_GUTS.BP_USS_GUTS_C.OnDeathAvoidance
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_GUTS_C::OnDeathAvoidance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_GUTS.BP_USS_GUTS_C.OnDeathAvoidance");

	UBP_USS_GUTS_C_OnDeathAvoidance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_GUTS.BP_USS_GUTS_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_GUTS_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_GUTS.BP_USS_GUTS_C.OnEnabled");

	UBP_USS_GUTS_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_GUTS.BP_USS_GUTS_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_GUTS_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_GUTS.BP_USS_GUTS_C.OnDisabled");

	UBP_USS_GUTS_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_GUTS.BP_USS_GUTS_C.OnEndInvincibleTime
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_GUTS_C::OnEndInvincibleTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_GUTS.BP_USS_GUTS_C.OnEndInvincibleTime");

	UBP_USS_GUTS_C_OnEndInvincibleTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_GUTS.BP_USS_GUTS_C.ExecuteUbergraph_BP_USS_GUTS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_GUTS_C::ExecuteUbergraph_BP_USS_GUTS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_GUTS.BP_USS_GUTS_C.ExecuteUbergraph_BP_USS_GUTS");

	UBP_USS_GUTS_C_ExecuteUbergraph_BP_USS_GUTS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
