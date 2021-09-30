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

// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.GetRewardLossItemFromIDs
struct ABP_PF_NPC_InteractEvent_OwlShop_C_GetRewardLossItemFromIDs_Params
{
	TArray<int>                                        InRewardID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSysWinItemData>                     OutItemData;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.GetRewardLossItemFromID
struct ABP_PF_NPC_InteractEvent_OwlShop_C_GetRewardLossItemFromID_Params
{
	TArray<struct FSearchOwlRewardItemData>            InRewardItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSysWinItemData>                     OutLossItem;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.RewardItemToWinSysItem
struct ABP_PF_NPC_InteractEvent_OwlShop_C_RewardItemToWinSysItem_Params
{
	TArray<struct FSearchOwlRewardItemData>            InRewardItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSysWinItemData>                     Out;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.UserConstructionScript
struct ABP_PF_NPC_InteractEvent_OwlShop_C_UserConstructionScript_Params
{
};

// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.MainInteract
struct ABP_PF_NPC_InteractEvent_OwlShop_C_MainInteract_Params
{
};

// Function BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_OwlShop
struct ABP_PF_NPC_InteractEvent_OwlShop_C_ExecuteUbergraph_BP_PF_NPC_InteractEvent_OwlShop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
