
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

// Function AttackSphereCollision.AttackSphereCollision_C.Received_CalculationImpactPoint
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  DestructibleActor              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResultImpactPoint              (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttackSphereCollision_C::Received_CalculationImpactPoint(class AActor* DestructibleActor, struct FVector* ResultImpactPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackSphereCollision.AttackSphereCollision_C.Received_CalculationImpactPoint");

	UAttackSphereCollision_C_Received_CalculationImpactPoint_Params params;
	params.DestructibleActor = DestructibleActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultImpactPoint != nullptr)
		*ResultImpactPoint = params.ResultImpactPoint;

	return params.ReturnValue;
}


// Function AttackSphereCollision.AttackSphereCollision_C.ApplytAttackParam
// (Public, BlueprintCallable, BlueprintEvent)

void UAttackSphereCollision_C::ApplytAttackParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackSphereCollision.AttackSphereCollision_C.ApplytAttackParam");

	UAttackSphereCollision_C_ApplytAttackParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackSphereCollision.AttackSphereCollision_C.ApplytAttackSphereParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAttackSphereParam      Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAttackSphereCollision_C::ApplytAttackSphereParam(const struct FAttackSphereParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackSphereCollision.AttackSphereCollision_C.ApplytAttackSphereParam");

	UAttackSphereCollision_C_ApplytAttackSphereParam_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackSphereCollision.AttackSphereCollision_C.Received_DoDamageHit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DmgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAttackSphereCollision_C::Received_DoDamageHit(class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackSphereCollision.AttackSphereCollision_C.Received_DoDamageHit");

	UAttackSphereCollision_C_Received_DoDamageHit_Params params;
	params.DmgActor = DmgActor;
	params.DmgCollision = DmgCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackSphereCollision.AttackSphereCollision_C.ExecuteUbergraph_AttackSphereCollision
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAttackSphereCollision_C::ExecuteUbergraph_AttackSphereCollision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackSphereCollision.AttackSphereCollision_C.ExecuteUbergraph_AttackSphereCollision");

	UAttackSphereCollision_C_ExecuteUbergraph_AttackSphereCollision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
