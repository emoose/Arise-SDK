
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

// Function BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C.Received_IsCalculateDamageAddCondition
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

bool UBP_BTL_SKS_HP_FULL_POWER_C::Received_IsCalculateDamageAddCondition(class ABtlCharacterBase* AttackerActor, const TScriptInterface<class UBtlAttackCollisionInterface>& AttackCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FBtlArtsHandle& ArtsHandle, const struct FBtlArtsData& ArtsData, bool IsGuard, bool IsCritical, bool IsWeakness, bool IsResistanc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C.Received_IsCalculateDamageAddCondition");

	UBP_BTL_SKS_HP_FULL_POWER_C_Received_IsCalculateDamageAddCondition_Params params;
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


// Function BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C.BeginPlay
// (Event, Protected, BlueprintEvent)

void UBP_BTL_SKS_HP_FULL_POWER_C::BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C.BeginPlay");

	UBP_BTL_SKS_HP_FULL_POWER_C_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C.EndPlay
// (Event, Protected, BlueprintEvent)

void UBP_BTL_SKS_HP_FULL_POWER_C::EndPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C.EndPlay");

	UBP_BTL_SKS_HP_FULL_POWER_C_EndPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C.OnMaxHp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     SelfComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BTL_SKS_HP_FULL_POWER_C::OnMaxHp(class UBtlStatusComponent* SelfComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C.OnMaxHp");

	UBP_BTL_SKS_HP_FULL_POWER_C_OnMaxHp_Params params;
	params.SelfComponent = SelfComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C.ExecuteUbergraph_BP_BTL_SKS_HP_FULL_POWER
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_SKS_HP_FULL_POWER_C::ExecuteUbergraph_BP_BTL_SKS_HP_FULL_POWER(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C.ExecuteUbergraph_BP_BTL_SKS_HP_FULL_POWER");

	UBP_BTL_SKS_HP_FULL_POWER_C_ExecuteUbergraph_BP_BTL_SKS_HP_FULL_POWER_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
