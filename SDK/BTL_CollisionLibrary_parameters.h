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

// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.CalculationImpactPoint
struct UBTL_CollisionLibrary_C_CalculationImpactPoint_Params
{
	class UShapeComponent*                             AttackCollision;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      DestructibleActor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.DoBattleAttackHit
struct UBTL_CollisionLibrary_C_DoBattleAttackHit_Params
{
	class UShapeComponent*                             GaveComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           ReceivedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   ReceivedComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.BattleUnitAttackHitDamageProcess
struct UBTL_CollisionLibrary_C_BattleUnitAttackHitDamageProcess_Params
{
	class UBtlHitObjectMemoryBase*                     HitMemoryComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_BtlCharacterBase_C*                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UBtlAttackCollisionInterface> AtkCollisionInterface;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                AttackArtsData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FBtlHitStatusRecord                         NewHitStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFriendlyFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RunAutoGuard;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RunAutoStep;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.BattleUnitAttackHitCheck
struct UBTL_CollisionLibrary_C_BattleUnitAttackHitCheck_Params
{
	class UBtlHitObjectMemoryBase*                     HitMemoryComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_BtlCharacterBase_C*                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AtkCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UBtlAttackCollisionInterface> AtkCollisionInterface;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                AttackArtsData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DoDamageProcess;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ResultIsFriendlyFire;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ResultRunAutoGuard;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ResultRunAutoStep;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.DestructionMesh
struct UBTL_CollisionLibrary_C_DestructionMesh_Params
{
	class UDestructibleComponent*                      DestructibleComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	EDestructibleType                                  DestructibleType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDestruction;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.ConvertCircleToSquare
struct UBTL_CollisionLibrary_C_ConvertCircleToSquare_Params
{
	struct FVector2D                                   Vec2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BTL_CollisionLibrary.BTL_CollisionLibrary_C.ProcessBattleUnitAttackHit
struct UBTL_CollisionLibrary_C_ProcessBattleUnitAttackHit_Params
{
	class UBtlHitObjectMemoryBase*                     HitMemoryComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           GaveActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             GaveComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           ReceivedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   ReceivedComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
