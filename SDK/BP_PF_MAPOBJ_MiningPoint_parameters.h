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

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ReceiveSerializeBreakPointParameter
struct ABP_PF_MAPOBJ_MiningPoint_C_ReceiveSerializeBreakPointParameter_Params
{
	struct FPFPlacementBreakPointDatabaseRow           DestinationParameter;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.GetOutlinerFolderPath
struct ABP_PF_MAPOBJ_MiningPoint_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.GetOutlinerLabelName
struct ABP_PF_MAPOBJ_MiningPoint_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.InitializePlacementData
struct ABP_PF_MAPOBJ_MiningPoint_C_InitializePlacementData_Params
{
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.CollectGetItems
struct ABP_PF_MAPOBJ_MiningPoint_C_CollectGetItems_Params
{
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.PopGetItemLog
struct ABP_PF_MAPOBJ_MiningPoint_C_PopGetItemLog_Params
{
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.PushGetItemLog
struct ABP_PF_MAPOBJ_MiningPoint_C_PushGetItemLog_Params
{
	struct FString                                     ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOption                                            LogOption;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.GetItem
struct ABP_PF_MAPOBJ_MiningPoint_C_GetItem_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AbilityID;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               GetIt;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDialog;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.StopEffect
struct ABP_PF_MAPOBJ_MiningPoint_C_StopEffect_Params
{
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.PlayEffect
struct ABP_PF_MAPOBJ_MiningPoint_C_PlayEffect_Params
{
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.AcquiredMiningData
struct ABP_PF_MAPOBJ_MiningPoint_C_AcquiredMiningData_Params
{
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.CreateMiningData
struct ABP_PF_MAPOBJ_MiningPoint_C_CreateMiningData_Params
{
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ApplyStatus
struct ABP_PF_MAPOBJ_MiningPoint_C_ApplyStatus_Params
{
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.UserConstructionScript
struct ABP_PF_MAPOBJ_MiningPoint_C_UserConstructionScript_Params
{
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ReceiveBeginPlay
struct ABP_PF_MAPOBJ_MiningPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.Break
struct ABP_PF_MAPOBJ_MiningPoint_C_Break_Params
{
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.OnSetBaseModel
struct ABP_PF_MAPOBJ_MiningPoint_C_OnSetBaseModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.OnSetGatheredModel
struct ABP_PF_MAPOBJ_MiningPoint_C_OnSetGatheredModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ReceiveEndPlay
struct ABP_PF_MAPOBJ_MiningPoint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.OnSetHideModel
struct ABP_PF_MAPOBJ_MiningPoint_C_OnSetHideModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.Event Get Mining Items
struct ABP_PF_MAPOBJ_MiningPoint_C_Event_Get_Mining_Items_Params
{
	TArray<struct FAriseMiningItemSaveInfo>            Items;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_MiningPoint
struct ABP_PF_MAPOBJ_MiningPoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_MiningPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
