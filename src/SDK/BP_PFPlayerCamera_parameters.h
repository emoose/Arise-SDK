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

// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.ApplyPostProcessParam
struct ABP_PFPlayerCamera_C_ApplyPostProcessParam_Params
{
	struct FPostProcessSettings                        StructRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.UserConstructionScript
struct ABP_PFPlayerCamera_C_UserConstructionScript_Params
{
};

// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.ReceiveBeginPlay
struct ABP_PFPlayerCamera_C_ReceiveBeginPlay_Params
{
};

// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.OnApplyMotionBlurParams
struct ABP_PFPlayerCamera_C_OnApplyMotionBlurParams_Params
{
};

// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.OnPostMapChange
struct ABP_PFPlayerCamera_C_OnPostMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.ExecuteUbergraph_BP_PFPlayerCamera
struct ABP_PFPlayerCamera_C_ExecuteUbergraph_BP_PFPlayerCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
