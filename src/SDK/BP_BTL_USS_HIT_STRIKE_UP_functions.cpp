
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

// Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnHiCombo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DamageCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HitCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_HIT_STRIKE_UP_C::OnHiCombo(class ABtlCharacterBase* DamageCharacter, class ABtlCharacterBase* Attacker, int HitCount, int TotalDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnHiCombo");

	UBP_BTL_USS_HIT_STRIKE_UP_C_OnHiCombo_Params params;
	params.DamageCharacter = DamageCharacter;
	params.Attacker = Attacker;
	params.HitCount = HitCount;
	params.TotalDamage = TotalDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnHitPlayerTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HitCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_HIT_STRIKE_UP_C::OnHitPlayerTarget(int HitCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnHitPlayerTarget");

	UBP_BTL_USS_HIT_STRIKE_UP_C_OnHitPlayerTarget_Params params;
	params.HitCount = HitCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_HIT_STRIKE_UP_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnEnabled");

	UBP_BTL_USS_HIT_STRIKE_UP_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_HIT_STRIKE_UP_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.OnDisabled");

	UBP_BTL_USS_HIT_STRIKE_UP_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.ExecuteUbergraph_BP_BTL_USS_HIT_STRIKE_UP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_HIT_STRIKE_UP_C::ExecuteUbergraph_BP_BTL_USS_HIT_STRIKE_UP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_HIT_STRIKE_UP.BP_BTL_USS_HIT_STRIKE_UP_C.ExecuteUbergraph_BP_BTL_USS_HIT_STRIKE_UP");

	UBP_BTL_USS_HIT_STRIKE_UP_C_ExecuteUbergraph_BP_BTL_USS_HIT_STRIKE_UP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
