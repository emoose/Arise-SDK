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

// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.PreRemoveAttackCollisionComponent
struct UBtlMagicExtension_Interface_C_PreRemoveAttackCollisionComponent_Params
{
	class UBtlAttackSphereComponent*                   CollisionComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddMagicSkeletalMesh
struct UBtlMagicExtension_Interface_C_AddMagicSkeletalMesh_Params
{
	class USkeletalMesh*                               SourceMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USkeletalMeshComponent*                      SpawnComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.GetHitObjectMemory
struct UBtlMagicExtension_Interface_C_GetHitObjectMemory_Params
{
	class UBtlHitObjectMemoryBase*                     HitMemory;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.RemoveNotifyCollisionComponent
struct UBtlMagicExtension_Interface_C_RemoveNotifyCollisionComponent_Params
{
	class UBtlSphereComponent*                         SphereCollision;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddNotifyCollisionComponent
struct UBtlMagicExtension_Interface_C_AddNotifyCollisionComponent_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlSphereComponent*                         CreateCollision;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.RemoveAttackCollisionComponent
struct UBtlMagicExtension_Interface_C_RemoveAttackCollisionComponent_Params
{
	class UBtlAttackSphereComponent*                   CollisionComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddAttackCollisionComponent
struct UBtlMagicExtension_Interface_C_AddAttackCollisionComponent_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlCollisionScript*                         OverrideCollisionScript;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAttackSphereParam                          AttackParam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UBtlAttackSphereComponent*                   CreateCollision;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BtlMagicExtension_Interface.BtlMagicExtension_Interface_C.AddDestructComponent
struct UBtlMagicExtension_Interface_C_AddDestructComponent_Params
{
	class UDestructibleMesh*                           NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UDestructibleComponent*                      DestructComponent;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
