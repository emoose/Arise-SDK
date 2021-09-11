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

// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.UpdatePostProcess
struct UBP_PF_ScriptCameraComponent_C_UpdatePostProcess_Params
{
};

// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.GetCameraPresetName
struct UBP_PF_ScriptCameraComponent_C_GetCameraPresetName_Params
{
	struct FString                                     PresteName;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ApplyPostProcess
struct UBP_PF_ScriptCameraComponent_C_ApplyPostProcess_Params
{
};

// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.FindCameraPreset
struct UBP_PF_ScriptCameraComponent_C_FindCameraPreset_Params
{
	struct FString                                     PresetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FScriptCameraData                           CameraData;                                               // (Parm, OutParm)
};

// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ApplyTransform
struct UBP_PF_ScriptCameraComponent_C_ApplyTransform_Params
{
};

// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.GetCameraTransform
struct UBP_PF_ScriptCameraComponent_C_GetCameraTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ReceiveBeginPlay
struct UBP_PF_ScriptCameraComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ReceiveTick
struct UBP_PF_ScriptCameraComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ExecuteUbergraph_BP_PF_ScriptCameraComponent
struct UBP_PF_ScriptCameraComponent_C_ExecuteUbergraph_BP_PF_ScriptCameraComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
