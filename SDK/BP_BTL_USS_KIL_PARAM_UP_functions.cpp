
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

// Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_KIL_PARAM_UP_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.OnDisabled");

	UBP_BTL_USS_KIL_PARAM_UP_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_KIL_PARAM_UP_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.OnEnabled");

	UBP_BTL_USS_KIL_PARAM_UP_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.OnInitialized
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_KIL_PARAM_UP_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.OnInitialized");

	UBP_BTL_USS_KIL_PARAM_UP_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.DeadCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BTL_USS_KIL_PARAM_UP_C::DeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.DeadCharacter");

	UBP_BTL_USS_KIL_PARAM_UP_C_DeadCharacter_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.ExecuteUbergraph_BP_BTL_USS_KIL_PARAM_UP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_KIL_PARAM_UP_C::ExecuteUbergraph_BP_BTL_USS_KIL_PARAM_UP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KIL_PARAM_UP.BP_BTL_USS_KIL_PARAM_UP_C.ExecuteUbergraph_BP_BTL_USS_KIL_PARAM_UP");

	UBP_BTL_USS_KIL_PARAM_UP_C_ExecuteUbergraph_BP_BTL_USS_KIL_PARAM_UP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
