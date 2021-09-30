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

// Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.DebugPrintSceneState
struct UBP_AriseGameSceneControllerBase_C_DebugPrintSceneState_Params
{
	bool                                               bPrint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Header;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.UnloadThisSceneStreamLevels
struct UBP_AriseGameSceneControllerBase_C_UnloadThisSceneStreamLevels_Params
{
};

// Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.LoadThisSceneStreamLevels
struct UBP_AriseGameSceneControllerBase_C_LoadThisSceneStreamLevels_Params
{
};

// Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.AddThisSceneStreamLevels
struct UBP_AriseGameSceneControllerBase_C_AddThisSceneStreamLevels_Params
{
	EAriseGameScene                                    SceneID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGameSceneControllerBase.BP_AriseGameSceneControllerBase_C.GetAriseGameMode
struct UBP_AriseGameSceneControllerBase_C_GetAriseGameMode_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
