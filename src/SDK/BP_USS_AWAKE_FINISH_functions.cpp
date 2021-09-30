
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

// Function BP_USS_AWAKE_FINISH.BP_USS_AWAKE_FINISH_C.OnBattleWon
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_AWAKE_FINISH_C::OnBattleWon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE_FINISH.BP_USS_AWAKE_FINISH_C.OnBattleWon");

	UBP_USS_AWAKE_FINISH_C_OnBattleWon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_AWAKE_FINISH.BP_USS_AWAKE_FINISH_C.EndBattle
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_AWAKE_FINISH_C::EndBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE_FINISH.BP_USS_AWAKE_FINISH_C.EndBattle");

	UBP_USS_AWAKE_FINISH_C_EndBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_AWAKE_FINISH.BP_USS_AWAKE_FINISH_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_AWAKE_FINISH_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE_FINISH.BP_USS_AWAKE_FINISH_C.OnEnabled");

	UBP_USS_AWAKE_FINISH_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_AWAKE_FINISH.BP_USS_AWAKE_FINISH_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_AWAKE_FINISH_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE_FINISH.BP_USS_AWAKE_FINISH_C.OnDisabled");

	UBP_USS_AWAKE_FINISH_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_AWAKE_FINISH.BP_USS_AWAKE_FINISH_C.ExecuteUbergraph_BP_USS_AWAKE_FINISH
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_AWAKE_FINISH_C::ExecuteUbergraph_BP_USS_AWAKE_FINISH(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE_FINISH.BP_USS_AWAKE_FINISH_C.ExecuteUbergraph_BP_USS_AWAKE_FINISH");

	UBP_USS_AWAKE_FINISH_C_ExecuteUbergraph_BP_USS_AWAKE_FINISH_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
