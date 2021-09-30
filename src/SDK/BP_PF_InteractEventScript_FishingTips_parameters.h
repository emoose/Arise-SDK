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

// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.IsVisitedAreaByHint
struct UBP_PF_InteractEventScript_FishingTips_C_IsVisitedAreaByHint_Params
{
	struct FString                                     FishLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bVisited;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AreaStr;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.SetReplaceMessage_RewardFishTypeCount
struct UBP_PF_InteractEventScript_FishingTips_C_SetReplaceMessage_RewardFishTypeCount_Params
{
};

// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.SetReplaceMessage_GetFishTypeCount
struct UBP_PF_InteractEventScript_FishingTips_C_SetReplaceMessage_GetFishTypeCount_Params
{
};

// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.IsVisitedAreaByLocationID
struct UBP_PF_InteractEventScript_FishingTips_C_IsVisitedAreaByLocationID_Params
{
	struct FString                                     LocationID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bVisited;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.IsVisitedAreaByAreaStrID
struct UBP_PF_InteractEventScript_FishingTips_C_IsVisitedAreaByAreaStrID_Params
{
	struct FString                                     AreaStrID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bVisited;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.CollectionUncatchedFish
struct UBP_PF_InteractEventScript_FishingTips_C_CollectionUncatchedFish_Params
{
};

// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.Selection
struct UBP_PF_InteractEventScript_FishingTips_C_Selection_Params
{
	int                                                SelectNo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectTextNo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.On Pre Begin Talk
struct UBP_PF_InteractEventScript_FishingTips_C_On_Pre_Begin_Talk_Params
{
};

// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.On Post End Talk
struct UBP_PF_InteractEventScript_FishingTips_C_On_Post_End_Talk_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C.ExecuteUbergraph_BP_PF_InteractEventScript_FishingTips
struct UBP_PF_InteractEventScript_FishingTips_C_ExecuteUbergraph_BP_PF_InteractEventScript_FishingTips_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
