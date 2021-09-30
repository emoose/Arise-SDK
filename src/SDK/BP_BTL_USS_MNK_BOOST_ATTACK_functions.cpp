
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

// Function BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_MNK_BOOST_ATTACK_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C.OnDisabled");

	UBP_BTL_USS_MNK_BOOST_ATTACK_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_MNK_BOOST_ATTACK_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C.OnEnabled");

	UBP_BTL_USS_MNK_BOOST_ATTACK_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C.OnInitialized
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_MNK_BOOST_ATTACK_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C.OnInitialized");

	UBP_BTL_USS_MNK_BOOST_ATTACK_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C.OnBeginArtsStrikeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_MNK_BOOST_ATTACK_C::OnBeginArtsStrikeAttack(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C.OnBeginArtsStrikeAttack");

	UBP_BTL_USS_MNK_BOOST_ATTACK_C_OnBeginArtsStrikeAttack_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C.ExecuteUbergraph_BP_BTL_USS_MNK_BOOST_ATTACK
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_MNK_BOOST_ATTACK_C::ExecuteUbergraph_BP_BTL_USS_MNK_BOOST_ATTACK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_MNK_BOOST_ATTACK.BP_BTL_USS_MNK_BOOST_ATTACK_C.ExecuteUbergraph_BP_BTL_USS_MNK_BOOST_ATTACK");

	UBP_BTL_USS_MNK_BOOST_ATTACK_C_ExecuteUbergraph_BP_BTL_USS_MNK_BOOST_ATTACK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
