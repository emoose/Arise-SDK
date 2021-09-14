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

// Function AttackCapsuleCollision.AttackCapsuleCollision_C.Received_CalculationImpactPoint
struct UAttackCapsuleCollision_C_Received_CalculationImpactPoint_Params
{
	class AActor*                                      DestructibleActor;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultImpactPoint;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AttackCapsuleCollision.AttackCapsuleCollision_C.Received_DoDamageHit
struct UAttackCapsuleCollision_C_Received_DoDamageHit_Params
{
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AttackCapsuleCollision.AttackCapsuleCollision_C.ExecuteUbergraph_AttackCapsuleCollision
struct UAttackCapsuleCollision_C_ExecuteUbergraph_AttackCapsuleCollision_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
