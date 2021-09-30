
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

// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnPinchToNormal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BTL_USS_PINCH_C::OnPinchToNormal(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnPinchToNormal");

	UBP_BTL_USS_PINCH_C_OnPinchToNormal_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnNormalToPinch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BTL_USS_PINCH_C::OnNormalToPinch(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnNormalToPinch");

	UBP_BTL_USS_PINCH_C_OnNormalToPinch_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_PINCH_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnDisabled");

	UBP_BTL_USS_PINCH_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_PINCH_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnEnabled");

	UBP_BTL_USS_PINCH_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnDeadUnit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            PreArts                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BTL_USS_PINCH_C::OnDeadUnit(class ABtlCharacterBase* SelfCharacter, class ABtlCharacterBase* Attacker, const struct FBtlArtsData& PreArts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnDeadUnit");

	UBP_BTL_USS_PINCH_C_OnDeadUnit_Params params;
	params.SelfCharacter = SelfCharacter;
	params.Attacker = Attacker;
	params.PreArts = PreArts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnRaiseDeadUnit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Healer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_PINCH_C::OnRaiseDeadUnit(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.OnRaiseDeadUnit");

	UBP_BTL_USS_PINCH_C_OnRaiseDeadUnit_Params params;
	params.Healer = Healer;
	params.Receiver = Receiver;
	params.HealValue = HealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.ExecuteUbergraph_BP_BTL_USS_PINCH
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_PINCH_C::ExecuteUbergraph_BP_BTL_USS_PINCH(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_PINCH.BP_BTL_USS_PINCH_C.ExecuteUbergraph_BP_BTL_USS_PINCH");

	UBP_BTL_USS_PINCH_C_ExecuteUbergraph_BP_BTL_USS_PINCH_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
