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

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetOutlinerFolderPath
struct ABP_PF_NpcObject_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetOutlinerLabelName
struct ABP_PF_NpcObject_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.CreateInfluenceMap
struct ABP_PF_NpcObject_C_CreateInfluenceMap_Params
{
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetOverrideInteractReceiverState
struct ABP_PF_NpcObject_C_SetOverrideInteractReceiverState_Params
{
	TEnumAsByte<EPFActorInteractState>                 OverrideInteractReceiverState;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ApplySpawnStatus
struct ABP_PF_NpcObject_C_ApplySpawnStatus_Params
{
	EPFNpcSpawnType                                    SpawnType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.DestroyInfluenceMap
struct ABP_PF_NpcObject_C_DestroyInfluenceMap_Params
{
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.UpdateInfluenceMap
struct ABP_PF_NpcObject_C_UpdateInfluenceMap_Params
{
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecSkeletalMesh
struct ABP_PF_NpcObject_C_SpawnSpecSkeletalMesh_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bBlockBuild;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadImmediate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetCollide
struct ABP_PF_NpcObject_C_SetCollide_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCentering;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecEmpty
struct ABP_PF_NpcObject_C_SpawnSpecEmpty_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetChildrenActors
struct ABP_PF_NpcObject_C_GetChildrenActors_Params
{
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnTryChangeScenarioConditionRespawn
struct ABP_PF_NpcObject_C_OnTryChangeScenarioConditionRespawn_Params
{
	bool                                               bBlock;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnTryDespawn
struct ABP_PF_NpcObject_C_OnTryDespawn_Params
{
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetSpec
struct ABP_PF_NpcObject_C_GetSpec_Params
{
	struct FPFNpcPlacementData                         PlacementData;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EDE_PF_NpcPawnSpec>                    ReturnSpec;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecStand
struct ABP_PF_NpcObject_C_SpawnSpecStand_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bBlockBuild;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadImmediate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecStaticMesh
struct ABP_PF_NpcObject_C_SpawnSpecStaticMesh_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bBlockBuild;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadImmediate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.CopyComponent
struct ABP_PF_NpcObject_C_CopyComponent_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetInteractionInfo
struct ABP_PF_NpcObject_C_SetInteractionInfo_Params
{
	EPFNpcInteractionType                              Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPFNpcInteractionData                       Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetInteractionReceiverData
struct ABP_PF_NpcObject_C_SetInteractionReceiverData_Params
{
	class UClass*                                      SymbolInfoClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReceiverInfoClass;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EventClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.DisableComponent
struct ABP_PF_NpcObject_C_DisableComponent_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnTrySpawn
struct ABP_PF_NpcObject_C_OnTrySpawn_Params
{
	bool                                               bBlock;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPFNpcSpawnType                                    SpawnType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadImmediate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnCharacter
struct ABP_PF_NpcObject_C_SpawnCharacter_Params
{
	bool                                               bBlock;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadImmediate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bCollisionCentering;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.UserConstructionScript
struct ABP_PF_NpcObject_C_UserConstructionScript_Params
{
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnUpdateInteraction
struct ABP_PF_NpcObject_C_OnUpdateInteraction_Params
{
	class AActor*                                      PawnActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPFNpcInteractionUpdateInfo                 UpdateInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveBeginPlay
struct ABP_PF_NpcObject_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveEndPlay
struct ABP_PF_NpcObject_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnSpawnRequest
struct ABP_PF_NpcObject_C_OnSpawnRequest_Params
{
	EPFNpcSpawnType                                    SpawnType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadImmediate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnDespawnRequest
struct ABP_PF_NpcObject_C_OnDespawnRequest_Params
{
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveDoUpdateSpawn
struct ABP_PF_NpcObject_C_ReceiveDoUpdateSpawn_Params
{
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveDestroyed
struct ABP_PF_NpcObject_C_ReceiveDestroyed_Params
{
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.On Spawn Influence Map
struct ABP_PF_NpcObject_C_On_Spawn_Influence_Map_Params
{
};

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ExecuteUbergraph_BP_PF_NpcObject
struct ABP_PF_NpcObject_C_ExecuteUbergraph_BP_PF_NpcObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
