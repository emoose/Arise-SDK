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

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.GetDebugColor
struct ABP_PF_NpcManager_C_GetDebugColor_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.IsSpawnable
struct ABP_PF_NpcManager_C_IsSpawnable_Params
{
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnMinimapRefresh
struct ABP_PF_NpcManager_C_OnMinimapRefresh_Params
{
};

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnBuild
struct ABP_PF_NpcManager_C_OnBuild_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.UserConstructionScript
struct ABP_PF_NpcManager_C_UserConstructionScript_Params
{
};

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.ReceiveSpawnAll
struct ABP_PF_NpcManager_C_ReceiveSpawnAll_Params
{
	EPFNpcSpawnType                                    SpawnType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.ReceiveRemoveAll
struct ABP_PF_NpcManager_C_ReceiveRemoveAll_Params
{
};

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.ReceiveBeginPlay
struct ABP_PF_NpcManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnPreMapChange
struct ABP_PF_NpcManager_C_OnPreMapChange_Params
{
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.OnChangeDisplayScene
struct ABP_PF_NpcManager_C_OnChangeDisplayScene_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcManager.BP_PF_NpcManager_C.ExecuteUbergraph_BP_PF_NpcManager
struct ABP_PF_NpcManager_C_ExecuteUbergraph_BP_PF_NpcManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
