
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

// Function AttackCapsuleCollision.AttackCapsuleCollision_C.Received_CalculationImpactPoint
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  DestructibleActor              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResultImpactPoint              (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttackCapsuleCollision_C::Received_CalculationImpactPoint(class AActor* DestructibleActor, struct FVector* ResultImpactPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackCapsuleCollision.AttackCapsuleCollision_C.Received_CalculationImpactPoint");

	UAttackCapsuleCollision_C_Received_CalculationImpactPoint_Params params;
	params.DestructibleActor = DestructibleActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultImpactPoint != nullptr)
		*ResultImpactPoint = params.ResultImpactPoint;

	return params.ReturnValue;
}


// Function AttackCapsuleCollision.AttackCapsuleCollision_C.Received_DoDamageHit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAttackCapsuleCollision_C::Received_DoDamageHit(class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackCapsuleCollision.AttackCapsuleCollision_C.Received_DoDamageHit");

	UAttackCapsuleCollision_C_Received_DoDamageHit_Params params;
	params.DmgActor = DmgActor;
	params.DmgCollision = DmgCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackCapsuleCollision.AttackCapsuleCollision_C.ExecuteUbergraph_AttackCapsuleCollision
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAttackCapsuleCollision_C::ExecuteUbergraph_AttackCapsuleCollision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackCapsuleCollision.AttackCapsuleCollision_C.ExecuteUbergraph_AttackCapsuleCollision");

	UAttackCapsuleCollision_C_ExecuteUbergraph_AttackCapsuleCollision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
