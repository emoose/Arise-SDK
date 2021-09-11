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

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetRepopUnlock
struct UBP_BreakPointSaveData_C_SetRepopUnlock_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetRepopLock
struct UBP_BreakPointSaveData_C_SetRepopLock_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.FillUnacquired
struct UBP_BreakPointSaveData_C_FillUnacquired_Params
{
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.ResetItemGetTime
struct UBP_BreakPointSaveData_C_ResetItemGetTime_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.ResetChunkTimeStamp
struct UBP_BreakPointSaveData_C_ResetChunkTimeStamp_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetAcquireOnce
struct UBP_BreakPointSaveData_C_SetAcquireOnce_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.IsAcquireOnce
struct UBP_BreakPointSaveData_C_IsAcquireOnce_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.AcquiredMiningData
struct UBP_BreakPointSaveData_C_AcquiredMiningData_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetMiningData
struct UBP_BreakPointSaveData_C_GetMiningData_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FPFMiningPointItemID                        ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAriseMiningPointSaveInfo                   MiningPointInfo;                                          // (Parm, OutParm)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetChunkDropTable
struct UBP_BreakPointSaveData_C_GetChunkDropTable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        RandomSkillID;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetChunkDropTable
struct UBP_BreakPointSaveData_C_SetChunkDropTable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        RandomSkillID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetItemGetStatus
struct UBP_BreakPointSaveData_C_GetItemGetStatus_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bPop;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.BindOnItemGetStateChanged
struct UBP_BreakPointSaveData_C_BindOnItemGetStateChanged_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.BindOnDiscoverStateChanged
struct UBP_BreakPointSaveData_C_BindOnDiscoverStateChanged_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetLevelActors
struct UBP_BreakPointSaveData_C_GetLevelActors_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             ActorID_Array;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetDiscover
struct UBP_BreakPointSaveData_C_SetDiscover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.FillDiscover
struct UBP_BreakPointSaveData_C_FillDiscover_Params
{
	bool                                               bDiscover;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetChunkTimeStamp
struct UBP_BreakPointSaveData_C_GetChunkTimeStamp_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EPFSearchPointStatus                               Status;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetChunkTimeStamp
struct UBP_BreakPointSaveData_C_SetChunkTimeStamp_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetItemGetTime
struct UBP_BreakPointSaveData_C_SetItemGetTime_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.IsChunkEnable
struct UBP_BreakPointSaveData_C_IsChunkEnable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetChunkEnable
struct UBP_BreakPointSaveData_C_SetChunkEnable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.IsDiscover
struct UBP_BreakPointSaveData_C_IsDiscover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.Discover
struct UBP_BreakPointSaveData_C_Discover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.RegisterParameter
struct UBP_BreakPointSaveData_C_RegisterParameter_Params
{
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.ExecuteUbergraph_BP_BreakPointSaveData
struct UBP_BreakPointSaveData_C_ExecuteUbergraph_BP_BreakPointSaveData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.OnItemGetStateChanged__DelegateSignature
struct UBP_BreakPointSaveData_C_OnItemGetStateChanged__DelegateSignature_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.OnDiscoverStateChanged__DelegateSignature
struct UBP_BreakPointSaveData_C_OnDiscoverStateChanged__DelegateSignature_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
