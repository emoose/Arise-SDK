
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

// Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_HAS_COOK_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnDisabled");

	UBP_BTL_USS_HAS_COOK_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_HAS_COOK_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnEnabled");

	UBP_BTL_USS_HAS_COOK_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnDeadUnit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            PreArts                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BTL_USS_HAS_COOK_C::OnDeadUnit(class ABtlCharacterBase* SelfCharacter, class ABtlCharacterBase* Attacker, const struct FBtlArtsData& PreArts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnDeadUnit");

	UBP_BTL_USS_HAS_COOK_C_OnDeadUnit_Params params;
	params.SelfCharacter = SelfCharacter;
	params.Attacker = Attacker;
	params.PreArts = PreArts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnRaiseDeadUnit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Healer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_HAS_COOK_C::OnRaiseDeadUnit(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.OnRaiseDeadUnit");

	UBP_BTL_USS_HAS_COOK_C_OnRaiseDeadUnit_Params params;
	params.Healer = Healer;
	params.Receiver = Receiver;
	params.HealValue = HealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.ExecuteUbergraph_BP_BTL_USS_HAS_COOK
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_HAS_COOK_C::ExecuteUbergraph_BP_BTL_USS_HAS_COOK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_HAS_COOK.BP_BTL_USS_HAS_COOK_C.ExecuteUbergraph_BP_BTL_USS_HAS_COOK");

	UBP_BTL_USS_HAS_COOK_C_ExecuteUbergraph_BP_BTL_USS_HAS_COOK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
