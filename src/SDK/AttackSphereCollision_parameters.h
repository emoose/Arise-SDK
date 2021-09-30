#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AttackSphereCollision.AttackSphereCollision_C.Received_CalculationImpactPoint
struct UAttackSphereCollision_C_Received_CalculationImpactPoint_Params
{
	class AActor*                                      DestructibleActor;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultImpactPoint;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AttackSphereCollision.AttackSphereCollision_C.ApplytAttackParam
struct UAttackSphereCollision_C_ApplytAttackParam_Params
{
};

// Function AttackSphereCollision.AttackSphereCollision_C.ApplytAttackSphereParam
struct UAttackSphereCollision_C_ApplytAttackSphereParam_Params
{
	struct FAttackSphereParam                          Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AttackSphereCollision.AttackSphereCollision_C.Received_DoDamageHit
struct UAttackSphereCollision_C_Received_DoDamageHit_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AttackSphereCollision.AttackSphereCollision_C.ExecuteUbergraph_AttackSphereCollision
struct UAttackSphereCollision_C_ExecuteUbergraph_AttackSphereCollision_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
