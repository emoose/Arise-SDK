
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

// Function BP_USS_AWAKE.BP_USS_AWAKE_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_AWAKE_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE.BP_USS_AWAKE_C.OnEnabled");

	UBP_USS_AWAKE_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_AWAKE.BP_USS_AWAKE_C.OnAwakeRankChanged
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_AWAKE_C::OnAwakeRankChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE.BP_USS_AWAKE_C.OnAwakeRankChanged");

	UBP_USS_AWAKE_C_OnAwakeRankChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_AWAKE.BP_USS_AWAKE_C.ExecuteUbergraph_BP_USS_AWAKE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_AWAKE_C::ExecuteUbergraph_BP_USS_AWAKE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_AWAKE.BP_USS_AWAKE_C.ExecuteUbergraph_BP_USS_AWAKE");

	UBP_USS_AWAKE_C_ExecuteUbergraph_BP_USS_AWAKE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
