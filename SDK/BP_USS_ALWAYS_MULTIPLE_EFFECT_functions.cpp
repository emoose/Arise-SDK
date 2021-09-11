
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

// Function BP_USS_ALWAYS_MULTIPLE_EFFECT.BP_USS_ALWAYS_MULTIPLE_EFFECT_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_ALWAYS_MULTIPLE_EFFECT_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ALWAYS_MULTIPLE_EFFECT.BP_USS_ALWAYS_MULTIPLE_EFFECT_C.OnEnabled");

	UBP_USS_ALWAYS_MULTIPLE_EFFECT_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ALWAYS_MULTIPLE_EFFECT.BP_USS_ALWAYS_MULTIPLE_EFFECT_C.OnInitialized
// (Event, Protected, BlueprintEvent)

void UBP_USS_ALWAYS_MULTIPLE_EFFECT_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ALWAYS_MULTIPLE_EFFECT.BP_USS_ALWAYS_MULTIPLE_EFFECT_C.OnInitialized");

	UBP_USS_ALWAYS_MULTIPLE_EFFECT_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_ALWAYS_MULTIPLE_EFFECT.BP_USS_ALWAYS_MULTIPLE_EFFECT_C.ExecuteUbergraph_BP_USS_ALWAYS_MULTIPLE_EFFECT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_ALWAYS_MULTIPLE_EFFECT_C::ExecuteUbergraph_BP_USS_ALWAYS_MULTIPLE_EFFECT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_ALWAYS_MULTIPLE_EFFECT.BP_USS_ALWAYS_MULTIPLE_EFFECT_C.ExecuteUbergraph_BP_USS_ALWAYS_MULTIPLE_EFFECT");

	UBP_USS_ALWAYS_MULTIPLE_EFFECT_C_ExecuteUbergraph_BP_USS_ALWAYS_MULTIPLE_EFFECT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
