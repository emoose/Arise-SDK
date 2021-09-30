
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

// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.GetEffectValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAriseSkillEffect       Effect                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C::GetEffectValue(const struct FAriseSkillEffect& Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.GetEffectValue");

	UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_GetEffectValue_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnSpawnUnit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reinforcement                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C::OnSpawnUnit(class ABtlCharacterBase* Character, bool Reinforcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnSpawnUnit");

	UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnSpawnUnit_Params params;
	params.Character = Character;
	params.Reinforcement = Reinforcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnDisabled");

	UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.AddUnitCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C::AddUnitCount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.AddUnitCount");

	UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_AddUnitCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnEnabled");

	UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnReinforced
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C::OnReinforced()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnReinforced");

	UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnReinforced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnDefeated
// (BlueprintCallable, BlueprintEvent)

void UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C::OnDefeated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnDefeated");

	UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnDefeated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnDeadUnit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C::OnDeadUnit(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.OnDeadUnit");

	UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_OnDeadUnit_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.ExecuteUbergraph_BP_USS_DAMAGE_EFFECT_ENEMY_COUNT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C::ExecuteUbergraph_BP_USS_DAMAGE_EFFECT_ENEMY_COUNT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USS_DAMAGE_EFFECT_ENEMY_COUNT.BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C.ExecuteUbergraph_BP_USS_DAMAGE_EFFECT_ENEMY_COUNT");

	UBP_USS_DAMAGE_EFFECT_ENEMY_COUNT_C_ExecuteUbergraph_BP_USS_DAMAGE_EFFECT_ENEMY_COUNT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
