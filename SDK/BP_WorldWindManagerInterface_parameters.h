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

// Function BP_WorldWindManagerInterface.BP_WorldWindManagerInterface_C.SetWindController
struct UBP_WorldWindManagerInterface_C_SetWindController_Params
{
	class AActor*                                      WindController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldWindManagerInterface.BP_WorldWindManagerInterface_C.GetWindController
struct UBP_WorldWindManagerInterface_C_GetWindController_Params
{
	class AActor*                                      WindController;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldWindManagerInterface.BP_WorldWindManagerInterface_C.AddWindEmitter
struct UBP_WorldWindManagerInterface_C_AddWindEmitter_Params
{
	class UParticleSystemComponent*                    Particle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
