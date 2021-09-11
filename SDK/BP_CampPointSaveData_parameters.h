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

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.BindOnDiscoverStateChanged
struct UBP_CampPointSaveData_C_BindOnDiscoverStateChanged_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.GetDiscoverCount
struct UBP_CampPointSaveData_C_GetDiscoverCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.GetLevelActors
struct UBP_CampPointSaveData_C_GetLevelActors_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             ActorID_Array;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.SetDiscover
struct UBP_CampPointSaveData_C_SetDiscover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.FillDiscover
struct UBP_CampPointSaveData_C_FillDiscover_Params
{
	bool                                               bDiscover;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.IsChunkEnable
struct UBP_CampPointSaveData_C_IsChunkEnable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.SetChunkEnable
struct UBP_CampPointSaveData_C_SetChunkEnable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.IsDiscover
struct UBP_CampPointSaveData_C_IsDiscover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.Discover
struct UBP_CampPointSaveData_C_Discover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.RegisterParameter
struct UBP_CampPointSaveData_C_RegisterParameter_Params
{
};

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.ExecuteUbergraph_BP_CampPointSaveData
struct UBP_CampPointSaveData_C_ExecuteUbergraph_BP_CampPointSaveData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.OnDiscoverStateChanged__DelegateSignature
struct UBP_CampPointSaveData_C_OnDiscoverStateChanged__DelegateSignature_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
