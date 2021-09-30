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

// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.ResetChunkTimeStamp
struct UBP_RecoveryPointSaveData_C_ResetChunkTimeStamp_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.ResetRepopTime
struct UBP_RecoveryPointSaveData_C_ResetRepopTime_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.FillUnused
struct UBP_RecoveryPointSaveData_C_FillUnused_Params
{
};

// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.GetChunkTimeStamp
struct UBP_RecoveryPointSaveData_C_GetChunkTimeStamp_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EPFSearchPointStatus                               Status;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.SetChunkTimeStamp
struct UBP_RecoveryPointSaveData_C_SetChunkTimeStamp_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.GetUsed
struct UBP_RecoveryPointSaveData_C_GetUsed_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bUsed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.SetUse
struct UBP_RecoveryPointSaveData_C_SetUse_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.RegisterParameter
struct UBP_RecoveryPointSaveData_C_RegisterParameter_Params
{
};

// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.ExecuteUbergraph_BP_RecoveryPointSaveData
struct UBP_RecoveryPointSaveData_C_ExecuteUbergraph_BP_RecoveryPointSaveData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
