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

// Function BP_WorldWindManager.BP_WorldWindManager_C.GetWindController
struct ABP_WorldWindManager_C_GetWindController_Params
{
	class AActor*                                      WindController;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldWindManager.BP_WorldWindManager_C.AddWindEmitter_Implemantal
struct ABP_WorldWindManager_C_AddWindEmitter_Implemantal_Params
{
	class UParticleSystemComponent*                    Particle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldWindManager.BP_WorldWindManager_C.UserConstructionScript
struct ABP_WorldWindManager_C_UserConstructionScript_Params
{
};

// Function BP_WorldWindManager.BP_WorldWindManager_C.ReceiveBeginPlay
struct ABP_WorldWindManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_WorldWindManager.BP_WorldWindManager_C.ReceiveTick
struct ABP_WorldWindManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldWindManager.BP_WorldWindManager_C.OnPreMapChange
struct ABP_WorldWindManager_C_OnPreMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_WorldWindManager.BP_WorldWindManager_C.AddWindEmitter
struct ABP_WorldWindManager_C_AddWindEmitter_Params
{
	class UParticleSystemComponent*                    Particle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldWindManager.BP_WorldWindManager_C.SetWindController
struct ABP_WorldWindManager_C_SetWindController_Params
{
	class AActor*                                      WindController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldWindManager.BP_WorldWindManager_C.ExecuteUbergraph_BP_WorldWindManager
struct ABP_WorldWindManager_C_ExecuteUbergraph_BP_WorldWindManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
