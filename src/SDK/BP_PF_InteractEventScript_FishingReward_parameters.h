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

// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.CheckTrophy
struct UBP_PF_InteractEventScript_FishingReward_C_CheckTrophy_Params
{
};

// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.SetReward
struct UBP_PF_InteractEventScript_FishingReward_C_SetReward_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.SaveGetReward
struct UBP_PF_InteractEventScript_FishingReward_C_SaveGetReward_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.GetRewardData
struct UBP_PF_InteractEventScript_FishingReward_C_GetRewardData_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FFishingRewardItemDatabaseRow               RewardData;                                               // (Parm, OutParm)
	bool                                               bComplete;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.Main
struct UBP_PF_InteractEventScript_FishingReward_C_Main_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.On Pre Begin Talk
struct UBP_PF_InteractEventScript_FishingReward_C_On_Pre_Begin_Talk_Params
{
};

// Function BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C.ExecuteUbergraph_BP_PF_InteractEventScript_FishingReward
struct UBP_PF_InteractEventScript_FishingReward_C_ExecuteUbergraph_BP_PF_InteractEventScript_FishingReward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
