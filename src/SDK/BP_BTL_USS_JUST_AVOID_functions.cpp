
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

// Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.OnJustGuard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_JUST_AVOID_C::OnJustGuard(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.OnJustGuard");

	UBP_BTL_USS_JUST_AVOID_C_OnJustGuard_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.OnJustAvoid
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_JUST_AVOID_C::OnJustAvoid(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.OnJustAvoid");

	UBP_BTL_USS_JUST_AVOID_C_OnJustAvoid_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_JUST_AVOID_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.OnEnabled");

	UBP_BTL_USS_JUST_AVOID_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_JUST_AVOID_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.OnDisabled");

	UBP_BTL_USS_JUST_AVOID_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.OnInitialized
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_JUST_AVOID_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.OnInitialized");

	UBP_BTL_USS_JUST_AVOID_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.ExecuteUbergraph_BP_BTL_USS_JUST_AVOID
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_JUST_AVOID_C::ExecuteUbergraph_BP_BTL_USS_JUST_AVOID(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_JUST_AVOID.BP_BTL_USS_JUST_AVOID_C.ExecuteUbergraph_BP_BTL_USS_JUST_AVOID");

	UBP_BTL_USS_JUST_AVOID_C_ExecuteUbergraph_BP_BTL_USS_JUST_AVOID_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
