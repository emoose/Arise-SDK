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

// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.SetScale
struct ABP_MNU_3DPARTICLE_Actor_C_SetScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.SetRotation
struct ABP_MNU_3DPARTICLE_Actor_C_SetRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.Initialize
struct ABP_MNU_3DPARTICLE_Actor_C_Initialize_Params
{
	float                                              DistAdjust;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WidthAdjust;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleAdjust;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.SetScreenPos
struct ABP_MNU_3DPARTICLE_Actor_C_SetScreenPos_Params
{
	struct FVector2D                                   ScreenPos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.UserConstructionScript
struct ABP_MNU_3DPARTICLE_Actor_C_UserConstructionScript_Params
{
};

// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
struct ABP_MNU_3DPARTICLE_Actor_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.ReceiveTick
struct ABP_MNU_3DPARTICLE_Actor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.ReceiveBeginPlay
struct ABP_MNU_3DPARTICLE_Actor_C_ReceiveBeginPlay_Params
{
};

// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.ExecuteUbergraph_BP_MNU_3DPARTICLE_Actor
struct ABP_MNU_3DPARTICLE_Actor_C_ExecuteUbergraph_BP_MNU_3DPARTICLE_Actor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
