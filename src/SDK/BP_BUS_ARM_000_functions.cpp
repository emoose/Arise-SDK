
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

// Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.CanStrikeAttackDown
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARM_000_C::CanStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.CanStrikeAttackDown");

	UBP_BUS_ARM_000_C_CanStrikeAttackDown_Params params;
	params.Attacker = Attacker;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.OnReceiveDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReactionOverride             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCoreBreak                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARM_000_C::OnReceiveDamage(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision, int Damage, bool IsCoreBreak, bool* IsReactionOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.OnReceiveDamage");

	UBP_BUS_ARM_000_C_OnReceiveDamage_Params params;
	params.Attacker = Attacker;
	params.AttackerCollision = AttackerCollision;
	params.ArtsData = ArtsData;
	params.ReceiveCollision = ReceiveCollision;
	params.Damage = Damage;
	params.IsCoreBreak = IsCoreBreak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReactionOverride != nullptr)
		*IsReactionOverride = params.IsReactionOverride;
}


// Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.ChangeDirection 
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Charactor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ChangeDirectionX               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARM_000_C::ChangeDirection_(class ABtlCharacterBase* Charactor, float ChangeDirectionX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.ChangeDirection ");

	UBP_BUS_ARM_000_C_ChangeDirection__Params params;
	params.Charactor = Charactor;
	params.ChangeDirectionX = ChangeDirectionX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.OnBreakArmor
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BUS_ARM_000_C::OnBreakArmor(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.OnBreakArmor");

	UBP_BUS_ARM_000_C_OnBreakArmor_Params params;
	params.Attacker = Attacker;
	params.AttackerCollision = AttackerCollision;
	params.ArtsData = ArtsData;
	params.ReceiveCollision = ReceiveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.ReceiveOnStrikeAttackDown
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARM_000_C::ReceiveOnStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.ReceiveOnStrikeAttackDown");

	UBP_BUS_ARM_000_C_ReceiveOnStrikeAttackDown_Params params;
	params.Attacker = Attacker;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.ExecuteUbergraph_BP_BUS_ARM_000
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_ARM_000_C::ExecuteUbergraph_BP_BUS_ARM_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_ARM_000.BP_BUS_ARM_000_C.ExecuteUbergraph_BP_BUS_ARM_000");

	UBP_BUS_ARM_000_C_ExecuteUbergraph_BP_BUS_ARM_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
