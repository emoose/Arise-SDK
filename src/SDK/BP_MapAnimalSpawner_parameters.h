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

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ClearMoveTempParams
struct ABP_MapAnimalSpawner_C_ClearMoveTempParams_Params
{
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ClacBlendAlpha
struct ABP_MapAnimalSpawner_C_ClacBlendAlpha_Params
{
	float                                              ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.Move_Internal
struct ABP_MapAnimalSpawner_C_Move_Internal_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialRelativeLocation;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     TargetRelativeLocation;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InitialRelativeRollAngle;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetRelativeRollAngle;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.Move
struct ABP_MapAnimalSpawner_C_Move_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.BeginMove
struct ABP_MapAnimalSpawner_C_BeginMove_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MoveValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnMovingPerAnimal
struct ABP_MapAnimalSpawner_C_OnMovingPerAnimal_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.FadeOut
struct ABP_MapAnimalSpawner_C_FadeOut_Params
{
	class USkeletalMeshComponent*                      SpawnedMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.AreAllAnimalDestroyed
struct ABP_MapAnimalSpawner_C_AreAllAnimalDestroyed_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.DespawnAnimal
struct ABP_MapAnimalSpawner_C_DespawnAnimal_Params
{
	class USkeletalMeshComponent*                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.DespawnAll
struct ABP_MapAnimalSpawner_C_DespawnAll_Params
{
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.GetComponentForward
struct ABP_MapAnimalSpawner_C_GetComponentForward_Params
{
	class USceneComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.Respawn
struct ABP_MapAnimalSpawner_C_Respawn_Params
{
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.GetAnimInstance
struct ABP_MapAnimalSpawner_C_GetAnimInstance_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMapAnimalAnimInstance*                      AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnPlayerApproaching
struct ABP_MapAnimalSpawner_C_OnPlayerApproaching_Params
{
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.TestPlayerApproaching
struct ABP_MapAnimalSpawner_C_TestPlayerApproaching_Params
{
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.SnapPosition
struct ABP_MapAnimalSpawner_C_SnapPosition_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ModifiedLocation;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.CalcSpawnRelativeTransform
struct ABP_MapAnimalSpawner_C_CalcSpawnRelativeTransform_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.SpawnSkeletalMesh
struct ABP_MapAnimalSpawner_C_SpawnSkeletalMesh_Params
{
	struct FTransform                                  RelativeTransform;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.SpawnSkeletalMeshes
struct ABP_MapAnimalSpawner_C_SpawnSkeletalMeshes_Params
{
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.UserConstructionScript
struct ABP_MapAnimalSpawner_C_UserConstructionScript_Params
{
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ReceiveBeginPlay
struct ABP_MapAnimalSpawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ReceiveActorBeginOverlap
struct ABP_MapAnimalSpawner_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnAnimStateChange
struct ABP_MapAnimalSpawner_C_OnAnimStateChange_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     PreviousStateName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     NextStateName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Turn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnRotated
struct ABP_MapAnimalSpawner_C_OnRotated_Params
{
	class USceneComponent*                             Moved;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ReceiveTick
struct ABP_MapAnimalSpawner_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ExecuteUbergraph_BP_MapAnimalSpawner
struct ABP_MapAnimalSpawner_C_ExecuteUbergraph_BP_MapAnimalSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
