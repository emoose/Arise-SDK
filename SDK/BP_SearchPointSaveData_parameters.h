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

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.SetRepopUnlock
struct UBP_SearchPointSaveData_C_SetRepopUnlock_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.SetRepopLock
struct UBP_SearchPointSaveData_C_SetRepopLock_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.FillUnacquired
struct UBP_SearchPointSaveData_C_FillUnacquired_Params
{
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.ResetItemGetTime
struct UBP_SearchPointSaveData_C_ResetItemGetTime_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.ResetChunkTimeStamp
struct UBP_SearchPointSaveData_C_ResetChunkTimeStamp_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.SetAcquireOnce
struct UBP_SearchPointSaveData_C_SetAcquireOnce_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.IsAcquireOnce
struct UBP_SearchPointSaveData_C_IsAcquireOnce_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.GetItemGetStatus
struct UBP_SearchPointSaveData_C_GetItemGetStatus_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bPop;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.BindOnItemGetStateChanged
struct UBP_SearchPointSaveData_C_BindOnItemGetStateChanged_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.BindOnDiscoverStateChanged
struct UBP_SearchPointSaveData_C_BindOnDiscoverStateChanged_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.GetLevelActors
struct UBP_SearchPointSaveData_C_GetLevelActors_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             ActorID_Array;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.SetDiscover
struct UBP_SearchPointSaveData_C_SetDiscover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.FillDiscover
struct UBP_SearchPointSaveData_C_FillDiscover_Params
{
	bool                                               bDiscover;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.GetChunkTimeStamp
struct UBP_SearchPointSaveData_C_GetChunkTimeStamp_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EPFSearchPointStatus                               Status;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.SetChunkTimeStamp
struct UBP_SearchPointSaveData_C_SetChunkTimeStamp_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.SetItemGetTime
struct UBP_SearchPointSaveData_C_SetItemGetTime_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.IsChunkEnable
struct UBP_SearchPointSaveData_C_IsChunkEnable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.SetChunkEnable
struct UBP_SearchPointSaveData_C_SetChunkEnable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.IsDiscover
struct UBP_SearchPointSaveData_C_IsDiscover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.Discover
struct UBP_SearchPointSaveData_C_Discover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.RegisterParameter
struct UBP_SearchPointSaveData_C_RegisterParameter_Params
{
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.ExecuteUbergraph_BP_SearchPointSaveData
struct UBP_SearchPointSaveData_C_ExecuteUbergraph_BP_SearchPointSaveData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.OnItemGetStateChanged__DelegateSignature
struct UBP_SearchPointSaveData_C_OnItemGetStateChanged__DelegateSignature_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_SearchPointSaveData.BP_SearchPointSaveData_C.OnDiscoverStateChanged__DelegateSignature
struct UBP_SearchPointSaveData_C_OnDiscoverStateChanged__DelegateSignature_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
