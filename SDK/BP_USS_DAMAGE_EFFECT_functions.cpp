
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

// Function BP_USS_DAMAGE_EFFECT.BP_USS_DAMAGE_EFFECT_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_DAMAGE_EFFECT_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT.BP_USS_DAMAGE_EFFECT_C.OnEnabled");

	UBP_USS_DAMAGE_EFFECT_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_DAMAGE_EFFECT.BP_USS_DAMAGE_EFFECT_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_DAMAGE_EFFECT_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT.BP_USS_DAMAGE_EFFECT_C.OnDisabled");

	UBP_USS_DAMAGE_EFFECT_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_DAMAGE_EFFECT.BP_USS_DAMAGE_EFFECT_C.ExecuteUbergraph_BP_USS_DAMAGE_EFFECT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_DAMAGE_EFFECT_C::ExecuteUbergraph_BP_USS_DAMAGE_EFFECT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT.BP_USS_DAMAGE_EFFECT_C.ExecuteUbergraph_BP_USS_DAMAGE_EFFECT");

	UBP_USS_DAMAGE_EFFECT_C_ExecuteUbergraph_BP_USS_DAMAGE_EFFECT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
