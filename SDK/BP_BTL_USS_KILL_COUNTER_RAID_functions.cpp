
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

// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.CanCounterRaid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BTL_USS_KILL_COUNTER_RAID_C::CanCounterRaid(class ABtlCharacterBase* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.CanCounterRaid");

	UBP_BTL_USS_KILL_COUNTER_RAID_C_CanCounterRaid_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.DeadCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BTL_USS_KILL_COUNTER_RAID_C::DeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.DeadCharacter");

	UBP_BTL_USS_KILL_COUNTER_RAID_C_DeadCharacter_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnDefeated
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_USS_KILL_COUNTER_RAID_C::OnDefeated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnDefeated");

	UBP_BTL_USS_KILL_COUNTER_RAID_C_OnDefeated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnTargetChanged
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_USS_KILL_COUNTER_RAID_C::OnTargetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnTargetChanged");

	UBP_BTL_USS_KILL_COUNTER_RAID_C_OnTargetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.TargetChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlTargetCursorComponent* NewTargetComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       NewTargetCharacter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlTargetCursorComponent* PrevTargetComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BTL_USS_KILL_COUNTER_RAID_C::TargetChanged(class ABtlCharacterBase* SelfCharacter, class UBtlTargetCursorComponent* NewTargetComponent, class ABtlCharacterBase* NewTargetCharacter, class UBtlTargetCursorComponent* PrevTargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.TargetChanged");

	UBP_BTL_USS_KILL_COUNTER_RAID_C_TargetChanged_Params params;
	params.SelfCharacter = SelfCharacter;
	params.NewTargetComponent = NewTargetComponent;
	params.NewTargetCharacter = NewTargetCharacter;
	params.PrevTargetComponent = PrevTargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_KILL_COUNTER_RAID_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnEnabled");

	UBP_BTL_USS_KILL_COUNTER_RAID_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void UBP_BTL_USS_KILL_COUNTER_RAID_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.OnDisabled");

	UBP_BTL_USS_KILL_COUNTER_RAID_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.ExecuteUbergraph_BP_BTL_USS_KILL_COUNTER_RAID
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_USS_KILL_COUNTER_RAID_C::ExecuteUbergraph_BP_BTL_USS_KILL_COUNTER_RAID(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_USS_KILL_COUNTER_RAID.BP_BTL_USS_KILL_COUNTER_RAID_C.ExecuteUbergraph_BP_BTL_USS_KILL_COUNTER_RAID");

	UBP_BTL_USS_KILL_COUNTER_RAID_C_ExecuteUbergraph_BP_BTL_USS_KILL_COUNTER_RAID_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
