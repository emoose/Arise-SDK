
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

// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.DefeatEnemyLevelCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlContinuousBonusManager_C::DefeatEnemyLevelCheck(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.DefeatEnemyLevelCheck");

	ABP_BtlContinuousBonusManager_C_DefeatEnemyLevelCheck_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlContinuousBonusManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.UserConstructionScript");

	ABP_BtlContinuousBonusManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.Received_Initialize
// (Event, Public, BlueprintEvent)

void ABP_BtlContinuousBonusManager_C::Received_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.Received_Initialize");

	ABP_BtlContinuousBonusManager_C_Received_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.Received_Finalize
// (Event, Public, BlueprintEvent)

void ABP_BtlContinuousBonusManager_C::Received_Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.Received_Finalize");

	ABP_BtlContinuousBonusManager_C_Received_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnUseItem_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlContinuousBonusManager_C::OnUseItem_Event(int ItemID, EArisePartyID PartyId, bool UseItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnUseItem_Event");

	ABP_BtlContinuousBonusManager_C_OnUseItem_Event_Params params;
	params.ItemID = ItemID;
	params.PartyId = PartyId;
	params.UseItem = UseItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnEndBattle
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlContinuousBonusManager_C::OnEndBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnEndBattle");

	ABP_BtlContinuousBonusManager_C_OnEndBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnDeadCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlContinuousBonusManager_C::OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnDeadCharacter");

	ABP_BtlContinuousBonusManager_C_OnDeadCharacter_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnBeginArtsStrikeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlContinuousBonusManager_C::OnBeginArtsStrikeAttack(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnBeginArtsStrikeAttack");

	ABP_BtlContinuousBonusManager_C_OnBeginArtsStrikeAttack_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnBeginArtsStrikeSmash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlStrikeSmashBeginParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlContinuousBonusManager_C::OnBeginArtsStrikeSmash(const struct FBtlStrikeSmashBeginParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnBeginArtsStrikeSmash");

	ABP_BtlContinuousBonusManager_C_OnBeginArtsStrikeSmash_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnSpecialDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlContinuousBonusManager_C::OnSpecialDown(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnSpecialDown");

	ABP_BtlContinuousBonusManager_C_OnSpecialDown_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnApplyReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlResultType                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlContinuousBonusManager_C::OnApplyReward(EBtlResultType Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnApplyReward");

	ABP_BtlContinuousBonusManager_C_OnApplyReward_Params params;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnBoostAttackBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlCollisionSignatureData CollisionParam                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlContinuousBonusManager_C::OnBoostAttackBreak(const struct FBtlCollisionSignatureData& CollisionParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.OnBoostAttackBreak");

	ABP_BtlContinuousBonusManager_C_OnBoostAttackBreak_Params params;
	params.CollisionParam = CollisionParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.ExecuteUbergraph_BP_BtlContinuousBonusManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlContinuousBonusManager_C::ExecuteUbergraph_BP_BtlContinuousBonusManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C.ExecuteUbergraph_BP_BtlContinuousBonusManager");

	ABP_BtlContinuousBonusManager_C_ExecuteUbergraph_BP_BtlContinuousBonusManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
