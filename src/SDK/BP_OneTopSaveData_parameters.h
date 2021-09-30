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

// Function BP_OneTopSaveData.BP_OneTopSaveData_C.SetAlreadyRead
struct UBP_OneTopSaveData_C_SetAlreadyRead_Params
{
	struct FPFOneTopRecord                             Record;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OneTopSaveData.BP_OneTopSaveData_C.IsChunkEnable
struct UBP_OneTopSaveData_C_IsChunkEnable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FPFOneTopRecord                             Record;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OneTopSaveData.BP_OneTopSaveData_C.SetChunkEnable
struct UBP_OneTopSaveData_C_SetChunkEnable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FPFOneTopRecord                             Record;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OneTopSaveData.BP_OneTopSaveData_C.IsAlreadyRead
struct UBP_OneTopSaveData_C_IsAlreadyRead_Params
{
	struct FPFOneTopRecord                             Record;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OneTopSaveData.BP_OneTopSaveData_C.AlreadyRead
struct UBP_OneTopSaveData_C_AlreadyRead_Params
{
	struct FPFOneTopRecord                             Record;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_OneTopSaveData.BP_OneTopSaveData_C.RegisterParameter
struct UBP_OneTopSaveData_C_RegisterParameter_Params
{
};

// Function BP_OneTopSaveData.BP_OneTopSaveData_C.ExecuteUbergraph_BP_OneTopSaveData
struct UBP_OneTopSaveData_C_ExecuteUbergraph_BP_OneTopSaveData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
