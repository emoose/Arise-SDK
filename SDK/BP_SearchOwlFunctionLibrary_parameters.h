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

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.SetSearchOwlReceiveRewardFlag
struct UBP_SearchOwlFunctionLibrary_C_SetSearchOwlReceiveRewardFlag_Params
{
	int                                                InRewardID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInNew;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetReceivableSearchOwlReward
struct UBP_SearchOwlFunctionLibrary_C_GetReceivableSearchOwlReward_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutRewardID;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.DiscoverSearchOwl
struct UBP_SearchOwlFunctionLibrary_C_DiscoverSearchOwl_Params
{
	struct FString                                     InOwlPointID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetDiscoveredSearchOwlNum
struct UBP_SearchOwlFunctionLibrary_C_GetDiscoveredSearchOwlNum_Params
{
	struct FString                                     InRegionName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutNum;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetCompletedSearchOwlNum
struct UBP_SearchOwlFunctionLibrary_C_GetCompletedSearchOwlNum_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutNum;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetDiscoveredSearchOwlRate
struct UBP_SearchOwlFunctionLibrary_C_GetDiscoveredSearchOwlRate_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.GetCompletedSearchOwlRate
struct UBP_SearchOwlFunctionLibrary_C_GetCompletedSearchOwlRate_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.IsReceiveSearchOwlReward
struct UBP_SearchOwlFunctionLibrary_C_IsReceiveSearchOwlReward_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.ReceiveSearchOwlReward
struct UBP_SearchOwlFunctionLibrary_C_ReceiveSearchOwlReward_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutReceiveRewardID;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.BindOnSearchOwlDiscoveryStateChanged
struct UBP_SearchOwlFunctionLibrary_C_BindOnSearchOwlDiscoveryStateChanged_Params
{
	struct FScriptDelegate                             Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.FillDiscoverySearchOwl
struct UBP_SearchOwlFunctionLibrary_C_FillDiscoverySearchOwl_Params
{
	bool                                               InDiscovery;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InWithEx;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchOwlFunctionLibrary.BP_SearchOwlFunctionLibrary_C.IsDiscoverySearchOwl (From ActorID)
struct UBP_SearchOwlFunctionLibrary_C_IsDiscoverySearchOwl__From_ActorID__Params
{
	struct FString                                     InActorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bInDiscoverPoint;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
