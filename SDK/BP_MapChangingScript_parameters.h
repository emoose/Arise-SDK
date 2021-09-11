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

// Function BP_MapChangingScript.BP_MapChangingScript_C.TrimAreaName
struct ABP_MapChangingScript_C_TrimAreaName_Params
{
	struct FString                                     iAreaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     oAreaName;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapChangingScript.BP_MapChangingScript_C.PlaySE
struct ABP_MapChangingScript_C_PlaySE_Params
{
	struct FString                                     SELabel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapChangingScript.BP_MapChangingScript_C.UserConstructionScript
struct ABP_MapChangingScript_C_UserConstructionScript_Params
{
};

// Function BP_MapChangingScript.BP_MapChangingScript_C.ReceiveBeginPlay
struct ABP_MapChangingScript_C_ReceiveBeginPlay_Params
{
};

// Function BP_MapChangingScript.BP_MapChangingScript_C.OnMapChange
struct ABP_MapChangingScript_C_OnMapChange_Params
{
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapChangingScript.BP_MapChangingScript_C.PlayMapOutSE
struct ABP_MapChangingScript_C_PlayMapOutSE_Params
{
};

// Function BP_MapChangingScript.BP_MapChangingScript_C.ExecuteUbergraph_BP_MapChangingScript
struct ABP_MapChangingScript_C_ExecuteUbergraph_BP_MapChangingScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
