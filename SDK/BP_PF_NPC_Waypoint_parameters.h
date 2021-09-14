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

// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetTraceIndexs
struct ABP_PF_NPC_Waypoint_C_GetTraceIndexs_Params
{
	TArray<int>                                        Indexs;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetTraceLocations
struct ABP_PF_NPC_Waypoint_C_GetTraceLocations_Params
{
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetTraceLocationAtWaypointIndex
struct ABP_PF_NPC_Waypoint_C_GetTraceLocationAtWaypointIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetLocationAtWaypointIndex
struct ABP_PF_NPC_Waypoint_C_GetLocationAtWaypointIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.UserConstructionScript
struct ABP_PF_NPC_Waypoint_C_UserConstructionScript_Params
{
};

// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.ReceiveTick
struct ABP_PF_NPC_Waypoint_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.ReceiveBeginPlay
struct ABP_PF_NPC_Waypoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.ExecuteUbergraph_BP_PF_NPC_Waypoint
struct ABP_PF_NPC_Waypoint_C_ExecuteUbergraph_BP_PF_NPC_Waypoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
