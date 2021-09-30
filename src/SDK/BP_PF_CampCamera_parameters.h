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

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ApplyPostProcessOverride
struct ABP_PF_CampCamera_C_ApplyPostProcessOverride_Params
{
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.SetCameraPresetNo
struct ABP_PF_CampCamera_C_SetCameraPresetNo_Params
{
	int                                                CameraPresetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.StepCameraPreset
struct ABP_PF_CampCamera_C_StepCameraPreset_Params
{
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ActivateCamera
struct ABP_PF_CampCamera_C_ActivateCamera_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.UpdateCamera
struct ABP_PF_CampCamera_C_UpdateCamera_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.SetLayout
struct ABP_PF_CampCamera_C_SetLayout_Params
{
	class AActor*                                      InBaseActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPFCampLayoutData                           Layout;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ApplyPostProcess
struct ABP_PF_CampCamera_C_ApplyPostProcess_Params
{
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.¯0ê0Ã0×0Ü0ü0É0³0Ô0ü0
struct ABP_PF_CampCamera_C_¯0ê0Ã0×0Ü0ü0É0³0Ô0ü0_Params
{
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.«0á0é0RŠ0ÿfH0
struct ABP_PF_CampCamera_C_«0á0é0RŠ0ÿfH0_Params
{
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.×0ê0»0Ã0È0iÜ_
struct ABP_PF_CampCamera_C_×0ê0»0Ã0È0iÜ__Params
{
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.¯0ê0Ã0×0Ü0ü0É0k0³0Ô0ü0
struct ABP_PF_CampCamera_C_¯0ê0Ã0×0Ü0ü0É0k0³0Ô0ü0_Params
{
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ApplyPreset
struct ABP_PF_CampCamera_C_ApplyPreset_Params
{
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.FindCameraPreset
struct ABP_PF_CampCamera_C_FindCameraPreset_Params
{
	struct FString                                     PresetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FScriptCameraData                           CameraData;                                               // (Parm, OutParm)
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.UserConstructionScript
struct ABP_PF_CampCamera_C_UserConstructionScript_Params
{
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ReceiveTick
struct ABP_PF_CampCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampCamera.BP_PF_CampCamera_C.ExecuteUbergraph_BP_PF_CampCamera
struct ABP_PF_CampCamera_C_ExecuteUbergraph_BP_PF_CampCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
