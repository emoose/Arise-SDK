
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

// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.GetPartyId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EArisePartyID                  EnumValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_DEVIL_WEAPON_COUNT_C::GetPartyId(EArisePartyID* EnumValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.GetPartyId");

	UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_GetPartyId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnumValue != nullptr)
		*EnumValue = params.EnumValue;
}


// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.AddDefautCount
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BTL_USS_DEVIL_WEAPON_COUNT_C::AddDefautCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.AddDefautCount");

	UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_AddDefautCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnDeadCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BTL_USS_DEVIL_WEAPON_COUNT_C::OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnDeadCharacter");

	UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_OnDeadCharacter_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnDeadEnemy
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_USS_DEVIL_WEAPON_COUNT_C::OnDeadEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnDeadEnemy");

	UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_OnDeadEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_DEVIL_WEAPON_COUNT_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnDisabled");

	UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_DEVIL_WEAPON_COUNT_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.OnEnabled");

	UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.ExecuteUbergraph_BP_BTL_USS_DEVIL_WEAPON_COUNT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_DEVIL_WEAPON_COUNT_C::ExecuteUbergraph_BP_BTL_USS_DEVIL_WEAPON_COUNT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_DEVIL_WEAPON_COUNT.BP_BTL_USS_DEVIL_WEAPON_COUNT_C.ExecuteUbergraph_BP_BTL_USS_DEVIL_WEAPON_COUNT");

	UBP_BTL_USS_DEVIL_WEAPON_COUNT_C_ExecuteUbergraph_BP_BTL_USS_DEVIL_WEAPON_COUNT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
