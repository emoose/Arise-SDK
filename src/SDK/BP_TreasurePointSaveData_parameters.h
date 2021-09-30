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

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.GetOpenCount
struct UBP_TreasurePointSaveData_C_GetOpenCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.BindOnOpenStateChanged
struct UBP_TreasurePointSaveData_C_BindOnOpenStateChanged_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.BindOnDiscoverStateChanged
struct UBP_TreasurePointSaveData_C_BindOnDiscoverStateChanged_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.GetLevelActors
struct UBP_TreasurePointSaveData_C_GetLevelActors_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             ActorID_Array;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.SetDiscover
struct UBP_TreasurePointSaveData_C_SetDiscover_Params
{
	struct FPFTreasurePointItemID                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bValue;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.FillDiscover
struct UBP_TreasurePointSaveData_C_FillDiscover_Params
{
	bool                                               bDiscover;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.IsChunkEnable
struct UBP_TreasurePointSaveData_C_IsChunkEnable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FPFTreasurePointItemID                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.SetChunkEnable
struct UBP_TreasurePointSaveData_C_SetChunkEnable_Params
{
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FPFTreasurePointItemID                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.IsOpen
struct UBP_TreasurePointSaveData_C_IsOpen_Params
{
	struct FPFTreasurePointItemID                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.Open
struct UBP_TreasurePointSaveData_C_Open_Params
{
	struct FPFTreasurePointItemID                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.IsDiscover
struct UBP_TreasurePointSaveData_C_IsDiscover_Params
{
	struct FPFTreasurePointItemID                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.Discover
struct UBP_TreasurePointSaveData_C_Discover_Params
{
	struct FPFTreasurePointItemID                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.RegisterParameter
struct UBP_TreasurePointSaveData_C_RegisterParameter_Params
{
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.ExecuteUbergraph_BP_TreasurePointSaveData
struct UBP_TreasurePointSaveData_C_ExecuteUbergraph_BP_TreasurePointSaveData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.OnOpenStateChanged__DelegateSignature
struct UBP_TreasurePointSaveData_C_OnOpenStateChanged__DelegateSignature_Params
{
	struct FString                                     actorId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.OnDiscoverStateChanged__DelegateSignature
struct UBP_TreasurePointSaveData_C_OnDiscoverStateChanged__DelegateSignature_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
