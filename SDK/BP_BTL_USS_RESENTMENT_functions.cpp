
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

// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.GetRevengeBaseElementAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BTL_USS_RESENTMENT_C::GetRevengeBaseElementAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.GetRevengeBaseElementAttack");

	UBP_BTL_USS_RESENTMENT_C_GetRevengeBaseElementAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.GetRevengeBasePhysicalAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BTL_USS_RESENTMENT_C::GetRevengeBasePhysicalAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.GetRevengeBasePhysicalAttack");

	UBP_BTL_USS_RESENTMENT_C_GetRevengeBasePhysicalAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.GetRevengeEffectValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          MaxEffectValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BTL_USS_RESENTMENT_C::GetRevengeEffectValue(float MaxEffectValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.GetRevengeEffectValue");

	UBP_BTL_USS_RESENTMENT_C_GetRevengeEffectValue_Params params;
	params.MaxEffectValue = MaxEffectValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnGuard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_RESENTMENT_C::OnGuard(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnGuard");

	UBP_BTL_USS_RESENTMENT_C_OnGuard_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnDamage
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Damage                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_BTL_USS_RESENTMENT_C::OnDamage(int Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnDamage");

	UBP_BTL_USS_RESENTMENT_C_OnDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.DamageCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            PreArts                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            PrevHp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantDeath                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Critical                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_RESENTMENT_C::DamageCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& PreArts, int PrevHp, bool InstantDeath, bool Critical, int DamageValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.DamageCharacter");

	UBP_BTL_USS_RESENTMENT_C_DamageCharacter_Params params;
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


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.StateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleActionState             NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleActionState             PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_RESENTMENT_C::StateChanged(EBattleActionState NowState, EBattleActionState PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.StateChanged");

	UBP_BTL_USS_RESENTMENT_C_StateChanged_Params params;
	params.NowState = NowState;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnActionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleActionState             NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleActionState             PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_RESENTMENT_C::OnActionChanged(EBattleActionState NowState, EBattleActionState PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnActionChanged");

	UBP_BTL_USS_RESENTMENT_C_OnActionChanged_Params params;
	params.NowState = NowState;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.ChangeStatusRise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_RESENTMENT_C::ChangeStatusRise(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.ChangeStatusRise");

	UBP_BTL_USS_RESENTMENT_C_ChangeStatusRise_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_RESENTMENT_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnEnabled");

	UBP_BTL_USS_RESENTMENT_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_RESENTMENT_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnDisabled");

	UBP_BTL_USS_RESENTMENT_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnApplySkill
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_RESENTMENT_C::OnApplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnApplySkill");

	UBP_BTL_USS_RESENTMENT_C_OnApplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnUnapplySkill
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_RESENTMENT_C::OnUnapplySkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.OnUnapplySkill");

	UBP_BTL_USS_RESENTMENT_C_OnUnapplySkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.ExecuteUbergraph_BP_BTL_USS_RESENTMENT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_RESENTMENT_C::ExecuteUbergraph_BP_BTL_USS_RESENTMENT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_RESENTMENT.BP_BTL_USS_RESENTMENT_C.ExecuteUbergraph_BP_BTL_USS_RESENTMENT");

	UBP_BTL_USS_RESENTMENT_C_ExecuteUbergraph_BP_BTL_USS_RESENTMENT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
