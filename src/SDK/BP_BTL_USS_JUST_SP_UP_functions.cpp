
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

// Function BP_BTL_USS_JUST_SP_UP.BP_BTL_USS_JUST_SP_UP_C.OnJustGuard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_JUST_SP_UP_C::OnJustGuard(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_JUST_SP_UP.BP_BTL_USS_JUST_SP_UP_C.OnJustGuard");

	UBP_BTL_USS_JUST_SP_UP_C_OnJustGuard_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_JUST_SP_UP.BP_BTL_USS_JUST_SP_UP_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_JUST_SP_UP_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_JUST_SP_UP.BP_BTL_USS_JUST_SP_UP_C.OnEnabled");

	UBP_BTL_USS_JUST_SP_UP_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_JUST_SP_UP.BP_BTL_USS_JUST_SP_UP_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_JUST_SP_UP_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_JUST_SP_UP.BP_BTL_USS_JUST_SP_UP_C.OnDisabled");

	UBP_BTL_USS_JUST_SP_UP_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_JUST_SP_UP.BP_BTL_USS_JUST_SP_UP_C.ExecuteUbergraph_BP_BTL_USS_JUST_SP_UP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_JUST_SP_UP_C::ExecuteUbergraph_BP_BTL_USS_JUST_SP_UP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_JUST_SP_UP.BP_BTL_USS_JUST_SP_UP_C.ExecuteUbergraph_BP_BTL_USS_JUST_SP_UP");

	UBP_BTL_USS_JUST_SP_UP_C_ExecuteUbergraph_BP_BTL_USS_JUST_SP_UP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
