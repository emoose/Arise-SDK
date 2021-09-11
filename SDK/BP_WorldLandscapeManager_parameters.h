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

// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.UserConstructionScript
struct ABP_WorldLandscapeManager_C_UserConstructionScript_Params
{
};

// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnMenuOpened
struct ABP_WorldLandscapeManager_C_OnMenuOpened_Params
{
};

// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnMenuClosed
struct ABP_WorldLandscapeManager_C_OnMenuClosed_Params
{
};

// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.SetLandscapeTickEnabled
struct ABP_WorldLandscapeManager_C_SetLandscapeTickEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.ReceiveBeginPlay
struct ABP_WorldLandscapeManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnSceneChanged
struct ABP_WorldLandscapeManager_C_OnSceneChanged_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.OnMapChanged
struct ABP_WorldLandscapeManager_C_OnMapChanged_Params
{
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_WorldLandscapeManager.BP_WorldLandscapeManager_C.ExecuteUbergraph_BP_WorldLandscapeManager
struct ABP_WorldLandscapeManager_C_ExecuteUbergraph_BP_WorldLandscapeManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
