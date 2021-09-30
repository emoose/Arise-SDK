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

// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.SetCount
struct UBP_QuestEnemyCountSaveData_C_SetCount_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.GetChunkCount
struct UBP_QuestEnemyCountSaveData_C_GetChunkCount_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.SetChunkCount
struct UBP_QuestEnemyCountSaveData_C_SetChunkCount_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.GetCount
struct UBP_QuestEnemyCountSaveData_C_GetCount_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.RegisterParameter
struct UBP_QuestEnemyCountSaveData_C_RegisterParameter_Params
{
};

// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.ExecuteUbergraph_BP_QuestEnemyCountSaveData
struct UBP_QuestEnemyCountSaveData_C_ExecuteUbergraph_BP_QuestEnemyCountSaveData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
