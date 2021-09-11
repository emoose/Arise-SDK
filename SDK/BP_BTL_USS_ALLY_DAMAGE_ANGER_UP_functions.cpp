
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

// Function BP_BTL_USS_ALLY_DAMAGE_ANGER_UP.BP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C.OnDamageCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            PreArts                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            PrevHp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantDeath                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Critical                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C::OnDamageCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& PreArts, int PrevHp, bool InstantDeath, bool Critical, int DamageValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_ALLY_DAMAGE_ANGER_UP.BP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C.OnDamageCharacter");

	UBP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C_OnDamageCharacter_Params params;
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


// Function BP_BTL_USS_ALLY_DAMAGE_ANGER_UP.BP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_ALLY_DAMAGE_ANGER_UP.BP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C.OnEnabled");

	UBP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_ALLY_DAMAGE_ANGER_UP.BP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_ALLY_DAMAGE_ANGER_UP.BP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C.OnDisabled");

	UBP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_ALLY_DAMAGE_ANGER_UP.BP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C.ExecuteUbergraph_BP_BTL_USS_ALLY_DAMAGE_ANGER_UP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C::ExecuteUbergraph_BP_BTL_USS_ALLY_DAMAGE_ANGER_UP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_ALLY_DAMAGE_ANGER_UP.BP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C.ExecuteUbergraph_BP_BTL_USS_ALLY_DAMAGE_ANGER_UP");

	UBP_BTL_USS_ALLY_DAMAGE_ANGER_UP_C_ExecuteUbergraph_BP_BTL_USS_ALLY_DAMAGE_ANGER_UP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
