
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

// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.Received_IsCalculateDamageAddCondition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       AttackerActor                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBtlAttackCollisionInterface> AttackCollision                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class ABtlCharacterBase*       DmgActor                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsHandle          ArtsHandle                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsGuard                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeakness                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsResistanc                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BTL_SKS_OUTNUMBER_C::Received_IsCalculateDamageAddCondition(class ABtlCharacterBase* AttackerActor, const TScriptInterface<class UBtlAttackCollisionInterface>& AttackCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FBtlArtsHandle& ArtsHandle, const struct FBtlArtsData& ArtsData, bool IsGuard, bool IsCritical, bool IsWeakness, bool IsResistanc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.Received_IsCalculateDamageAddCondition");

	UBP_BTL_SKS_OUTNUMBER_C_Received_IsCalculateDamageAddCondition_Params params;
	params.AttackerActor = AttackerActor;
	params.AttackCollision = AttackCollision;
	params.DmgActor = DmgActor;
	params.DmgCollision = DmgCollision;
	params.ArtsHandle = ArtsHandle;
	params.ArtsData = ArtsData;
	params.IsGuard = IsGuard;
	params.IsCritical = IsCritical;
	params.IsWeakness = IsWeakness;
	params.IsResistanc = IsResistanc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.BeginPlay
// (Event, Protected, BlueprintEvent)

void UBP_BTL_SKS_OUTNUMBER_C::BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.BeginPlay");

	UBP_BTL_SKS_OUTNUMBER_C_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.OnBeginBattle
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_SKS_OUTNUMBER_C::OnBeginBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.OnBeginBattle");

	UBP_BTL_SKS_OUTNUMBER_C_OnBeginBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.OnDeadCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BTL_SKS_OUTNUMBER_C::OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.OnDeadCharacter");

	UBP_BTL_SKS_OUTNUMBER_C_OnDeadCharacter_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.EndPlay
// (Event, Protected, BlueprintEvent)

void UBP_BTL_SKS_OUTNUMBER_C::EndPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.EndPlay");

	UBP_BTL_SKS_OUTNUMBER_C_EndPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.OnSpawnCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reinforcement                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_SKS_OUTNUMBER_C::OnSpawnCharacter(class ABtlCharacterBase* Character, bool Reinforcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.OnSpawnCharacter");

	UBP_BTL_SKS_OUTNUMBER_C_OnSpawnCharacter_Params params;
	params.Character = Character;
	params.Reinforcement = Reinforcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.ExecuteUbergraph_BP_BTL_SKS_OUTNUMBER
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_SKS_OUTNUMBER_C::ExecuteUbergraph_BP_BTL_SKS_OUTNUMBER(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.ExecuteUbergraph_BP_BTL_SKS_OUTNUMBER");

	UBP_BTL_SKS_OUTNUMBER_C_ExecuteUbergraph_BP_BTL_SKS_OUTNUMBER_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
