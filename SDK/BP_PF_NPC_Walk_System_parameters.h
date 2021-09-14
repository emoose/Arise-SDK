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

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ShrinkPopCharacter
struct ABP_PF_NPC_Walk_System_C_ShrinkPopCharacter_Params
{
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.SetAIControllerFromWaypoint
struct ABP_PF_NPC_Walk_System_C_SetAIControllerFromWaypoint_Params
{
	class UObject*                                     Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APFWalkableNpcCharacter*                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaypointIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.CheckDisappearing
struct ABP_PF_NPC_Walk_System_C_CheckDisappearing_Params
{
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.OnRespawnCharacter
struct ABP_PF_NPC_Walk_System_C_OnRespawnCharacter_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetSpawnTransformFromWaypoint
struct ABP_PF_NPC_Walk_System_C_GetSpawnTransformFromWaypoint_Params
{
	bool                                               bImmediately;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
	int                                                WaypointIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.IsSpawnLocked
struct ABP_PF_NPC_Walk_System_C_IsSpawnLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.OnSpawnCharacter
struct ABP_PF_NPC_Walk_System_C_OnSpawnCharacter_Params
{
	struct FPFNpWalkSpawnData                          SpawnData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bImmediately;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APFNpcCharacterBase*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetPopDistanceWaypoint
struct ABP_PF_NPC_Walk_System_C_GetPopDistanceWaypoint_Params
{
	TArray<int>                                        InIndexes;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutIndexes;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetDistanceWaypoint
struct ABP_PF_NPC_Walk_System_C_GetDistanceWaypoint_Params
{
	TArray<int>                                        InIndexs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutIndexs;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetPawnWaypoint
struct ABP_PF_NPC_Walk_System_C_GetPawnWaypoint_Params
{
	bool                                               bImmediately;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Waypoint;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetOccludedWaypoint
struct ABP_PF_NPC_Walk_System_C_GetOccludedWaypoint_Params
{
	TArray<int>                                        InIndexs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        OutIndexs;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetInSightWaypoint
struct ABP_PF_NPC_Walk_System_C_GetInSightWaypoint_Params
{
	TArray<int>                                        InIndexs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        InSightIndexs;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OutSightIndexs;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.UserConstructionScript
struct ABP_PF_NPC_Walk_System_C_UserConstructionScript_Params
{
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveBeginPlay
struct ABP_PF_NPC_Walk_System_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveEndPlay
struct ABP_PF_NPC_Walk_System_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveDoUpdateSpawn
struct ABP_PF_NPC_Walk_System_C_ReceiveDoUpdateSpawn_Params
{
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.OnDespawnCharacter
struct ABP_PF_NPC_Walk_System_C_OnDespawnCharacter_Params
{
	class APFNpcCharacterBase*                         Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveDoSetVisibility
struct ABP_PF_NPC_Walk_System_C_ReceiveDoSetVisibility_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ExecuteUbergraph_BP_PF_NPC_Walk_System
struct ABP_PF_NPC_Walk_System_C_ExecuteUbergraph_BP_PF_NPC_Walk_System_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
