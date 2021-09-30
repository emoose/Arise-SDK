
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

// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.DamageCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            PreArts                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            PrevHp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantDeath                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Critical                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_GUARD_ATK_UP_C::DamageCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& PreArts, int PrevHp, bool InstantDeath, bool Critical, int DamageValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.DamageCharacter");

	UBP_BTL_USS_GUARD_ATK_UP_C_DamageCharacter_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.PreArts = PreArts;
	params.PrevHp = PrevHp;
	params.InstantDeath = InstantDeath;
	params.Critical = Critical;
	params.DamageValue = DamageValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_GUARD_ATK_UP_C::OnDamage(class ABtlCharacterBase* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnDamage");

	UBP_BTL_USS_GUARD_ATK_UP_C_OnDamage_Params params;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnGuard
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_USS_GUARD_ATK_UP_C::OnGuard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnGuard");

	UBP_BTL_USS_GUARD_ATK_UP_C_OnGuard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.SetStatusRiseEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_GUARD_ATK_UP_C::SetStatusRiseEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.SetStatusRiseEnabled");

	UBP_BTL_USS_GUARD_ATK_UP_C_SetStatusRiseEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_GUARD_ATK_UP_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnDisabled");

	UBP_BTL_USS_GUARD_ATK_UP_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnApplySkill
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_GUARD_ATK_UP_C::OnApplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnApplySkill");

	UBP_BTL_USS_GUARD_ATK_UP_C_OnApplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnUnapplySkill
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_GUARD_ATK_UP_C::OnUnapplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnUnapplySkill");

	UBP_BTL_USS_GUARD_ATK_UP_C_OnUnapplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_GUARD_ATK_UP_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnEnabled");

	UBP_BTL_USS_GUARD_ATK_UP_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnInitialized
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_GUARD_ATK_UP_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnInitialized");

	UBP_BTL_USS_GUARD_ATK_UP_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnJustGuard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_GUARD_ATK_UP_C::OnJustGuard(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.OnJustGuard");

	UBP_BTL_USS_GUARD_ATK_UP_C_OnJustGuard_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.ExecuteUbergraph_BP_BTL_USS_GUARD_ATK_UP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_GUARD_ATK_UP_C::ExecuteUbergraph_BP_BTL_USS_GUARD_ATK_UP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_GUARD_ATK_UP.BP_BTL_USS_GUARD_ATK_UP_C.ExecuteUbergraph_BP_BTL_USS_GUARD_ATK_UP");

	UBP_BTL_USS_GUARD_ATK_UP_C_ExecuteUbergraph_BP_BTL_USS_GUARD_ATK_UP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
