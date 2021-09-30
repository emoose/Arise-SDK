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

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SearchNextReward
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_SearchNextReward_Params
{
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FFishingRewardItemDatabaseRow               RewardData;                                               // (Parm, OutParm)
};

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SetRewardAcquired
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_SetRewardAcquired_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.GetRewardAcquired
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_GetRewardAcquired_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAcquired;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.CheckRewardCond
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_CheckRewardCond_Params
{
	struct FFishingRewardItemDatabaseRow               FishingRewardItemDatabaseRow;                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bIsGet;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.CheckFishBigCount
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_CheckFishBigCount_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.CheckFishTypeCount
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_CheckFishTypeCount_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SearchTips
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_SearchTips_Params
{
	TArray<struct FFishingRewardItemTipsData>          Tips;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.SearchAcquireReward
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_SearchAcquireReward_Params
{
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FFishingRewardItemDatabaseRow               RewardData;                                               // (Parm, OutParm)
};

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.UserConstructionScript
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_UserConstructionScript_Params
{
};

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.MainInteract
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_MainInteract_Params
{
};

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.ReceiveDestroyed
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_ReceiveDestroyed_Params
{
};

// Function BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_FishingTackle
struct ABP_PF_NPC_InteractEvent_FishingTackle_C_ExecuteUbergraph_BP_PF_NPC_InteractEvent_FishingTackle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
