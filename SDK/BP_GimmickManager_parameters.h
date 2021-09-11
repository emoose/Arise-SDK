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

// Function BP_GimmickManager.BP_GimmickManager_C.GetStreamData
struct ABP_GimmickManager_C_GetStreamData_Params
{
	struct FString                                     actorId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Current_Map_Name;                                         // (Parm, OutParm, ZeroConstructor)
	struct FString                                     LoadMapName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GimmickManager.BP_GimmickManager_C.IsShowMap
struct ABP_GimmickManager_C_IsShowMap_Params
{
	bool                                               Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Next;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GimmickManager.BP_GimmickManager_C.UserConstructionScript
struct ABP_GimmickManager_C_UserConstructionScript_Params
{
};

// Function BP_GimmickManager.BP_GimmickManager_C.RegisterMapOrder
struct ABP_GimmickManager_C_RegisterMapOrder_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     CurrentMapName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LoadMapName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GimmickManager.BP_GimmickManager_C.PreloadMap
struct ABP_GimmickManager_C_PreloadMap_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GimmickManager.BP_GimmickManager_C.UnloadMap
struct ABP_GimmickManager_C_UnloadMap_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GimmickManager.BP_GimmickManager_C.ShowMap
struct ABP_GimmickManager_C_ShowMap_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GimmickManager.BP_GimmickManager_C.HideMap
struct ABP_GimmickManager_C_HideMap_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GimmickManager.BP_GimmickManager_C.ShowCurrentMap
struct ABP_GimmickManager_C_ShowCurrentMap_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GimmickManager.BP_GimmickManager_C.HideCurrentMap
struct ABP_GimmickManager_C_HideCurrentMap_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GimmickManager.BP_GimmickManager_C.ReceiveBeginPlay
struct ABP_GimmickManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_GimmickManager.BP_GimmickManager_C.OnMapChangeStart
struct ABP_GimmickManager_C_OnMapChangeStart_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GimmickManager.BP_GimmickManager_C.OnShowMap
struct ABP_GimmickManager_C_OnShowMap_Params
{
	struct FName                                       LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GimmickManager.BP_GimmickManager_C.BPE_UnloadLevel
struct ABP_GimmickManager_C_BPE_UnloadLevel_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GimmickManager.BP_GimmickManager_C.ExecuteUbergraph_BP_GimmickManager
struct ABP_GimmickManager_C_ExecuteUbergraph_BP_GimmickManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
