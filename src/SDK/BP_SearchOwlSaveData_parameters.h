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

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetLevelActors
struct UBP_SearchOwlSaveData_C_GetLevelActors_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             ActorID_Array;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.SetReceiveFlag
struct UBP_SearchOwlSaveData_C_SetReceiveFlag_Params
{
	int                                                InRewardID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInNew;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetReceivableReward
struct UBP_SearchOwlSaveData_C_GetReceivableReward_Params
{
	TArray<int>                                        OutRewardID;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetCompletedNum
struct UBP_SearchOwlSaveData_C_GetCompletedNum_Params
{
	int                                                OutNum;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetCompletedRate
struct UBP_SearchOwlSaveData_C_GetCompletedRate_Params
{
	int                                                OutRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.IsReceiveReward
struct UBP_SearchOwlSaveData_C_IsReceiveReward_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetDiscoverdRate
struct UBP_SearchOwlSaveData_C_GetDiscoverdRate_Params
{
	int                                                OutRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.ReceiveReward
struct UBP_SearchOwlSaveData_C_ReceiveReward_Params
{
	TArray<int>                                        OutReceiveRewardID;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetDiscoveredNum
struct UBP_SearchOwlSaveData_C_GetDiscoveredNum_Params
{
	struct FString                                     InRegionName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.Update
struct UBP_SearchOwlSaveData_C_Update_Params
{
	float                                              InDeltaSeconds;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.BindOnDiscoverStateChanged
struct UBP_SearchOwlSaveData_C_BindOnDiscoverStateChanged_Params
{
	struct FScriptDelegate                             Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.SetDiscover
struct UBP_SearchOwlSaveData_C_SetDiscover_Params
{
	struct FString                                     InLabel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               InDiscover;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.FillDiscover
struct UBP_SearchOwlSaveData_C_FillDiscover_Params
{
	bool                                               InDiscover;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InWithEx;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.IsDiscover
struct UBP_SearchOwlSaveData_C_IsDiscover_Params
{
	struct FString                                     InActorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bInDiscoverPoint;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.Discover
struct UBP_SearchOwlSaveData_C_Discover_Params
{
	struct FString                                     InLabel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.Event On New Game
struct UBP_SearchOwlSaveData_C_Event_On_New_Game_Params
{
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.RegisterParameter
struct UBP_SearchOwlSaveData_C_RegisterParameter_Params
{
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.ExecuteUbergraph_BP_SearchOwlSaveData
struct UBP_SearchOwlSaveData_C_ExecuteUbergraph_BP_SearchOwlSaveData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.OnDiscoverStateChanged__DelegateSignature
struct UBP_SearchOwlSaveData_C_OnDiscoverStateChanged__DelegateSignature_Params
{
	struct FString                                     InActorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
