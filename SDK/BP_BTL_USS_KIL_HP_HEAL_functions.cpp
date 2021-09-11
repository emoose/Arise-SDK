
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

// Function BP_BTL_USS_KIL_HP_HEAL.BP_BTL_USS_KIL_HP_HEAL_C.CanApplyEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BTL_USS_KIL_HP_HEAL_C::CanApplyEffect(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KIL_HP_HEAL.BP_BTL_USS_KIL_HP_HEAL_C.CanApplyEffect");

	UBP_BTL_USS_KIL_HP_HEAL_C_CanApplyEffect_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_USS_KIL_HP_HEAL.BP_BTL_USS_KIL_HP_HEAL_C.OnDeadCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BTL_USS_KIL_HP_HEAL_C::OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KIL_HP_HEAL.BP_BTL_USS_KIL_HP_HEAL_C.OnDeadCharacter");

	UBP_BTL_USS_KIL_HP_HEAL_C_OnDeadCharacter_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KIL_HP_HEAL.BP_BTL_USS_KIL_HP_HEAL_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_KIL_HP_HEAL_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KIL_HP_HEAL.BP_BTL_USS_KIL_HP_HEAL_C.OnEnabled");

	UBP_BTL_USS_KIL_HP_HEAL_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KIL_HP_HEAL.BP_BTL_USS_KIL_HP_HEAL_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_KIL_HP_HEAL_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KIL_HP_HEAL.BP_BTL_USS_KIL_HP_HEAL_C.OnDisabled");

	UBP_BTL_USS_KIL_HP_HEAL_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KIL_HP_HEAL.BP_BTL_USS_KIL_HP_HEAL_C.ExecuteUbergraph_BP_BTL_USS_KIL_HP_HEAL
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_KIL_HP_HEAL_C::ExecuteUbergraph_BP_BTL_USS_KIL_HP_HEAL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KIL_HP_HEAL.BP_BTL_USS_KIL_HP_HEAL_C.ExecuteUbergraph_BP_BTL_USS_KIL_HP_HEAL");

	UBP_BTL_USS_KIL_HP_HEAL_C_ExecuteUbergraph_BP_BTL_USS_KIL_HP_HEAL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
