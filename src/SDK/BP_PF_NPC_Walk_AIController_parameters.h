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

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.IsNavigationEnabled
struct ABP_PF_NPC_Walk_AIController_C_IsNavigationEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.GetNodeFollowingListEx
struct ABP_PF_NPC_Walk_AIController_C_GetNodeFollowingListEx_Params
{
	int                                                StartIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        FollowingIndexList;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.SetNextWaypointAction
struct ABP_PF_NPC_Walk_AIController_C_SetNextWaypointAction_Params
{
};

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.GetCurrentWaypointAction
struct ABP_PF_NPC_Walk_AIController_C_GetCurrentWaypointAction_Params
{
	struct FST_PF_NPC_Walk_WaypointActionData          WaypointAction;                                           // (Parm, OutParm)
};

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.SetWaypoint
struct ABP_PF_NPC_Walk_AIController_C_SetWaypoint_Params
{
	class ABP_PF_NPC_Waypoint_C*                       Waypoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.SetMoveSegment
struct ABP_PF_NPC_Walk_AIController_C_SetMoveSegment_Params
{
	int                                                StartIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.UserConstructionScript
struct ABP_PF_NPC_Walk_AIController_C_UserConstructionScript_Params
{
};

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.ReceiveTick
struct ABP_PF_NPC_Walk_AIController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.ReceiveBeginPlay
struct ABP_PF_NPC_Walk_AIController_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.OnPossess
struct ABP_PF_NPC_Walk_AIController_C_OnPossess_Params
{
	class APawn*                                       PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.ExecuteUbergraph_BP_PF_NPC_Walk_AIController
struct ABP_PF_NPC_Walk_AIController_C_ExecuteUbergraph_BP_PF_NPC_Walk_AIController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
