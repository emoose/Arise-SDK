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

// Function BP_FastTravelLocator.BP_FastTravelLocator_C.DrawDebugArea
struct ABP_FastTravelLocator_C_DrawDebugArea_Params
{
};

// Function BP_FastTravelLocator.BP_FastTravelLocator_C.IsPlayerCollision?
struct ABP_FastTravelLocator_C_IsPlayerCollision__Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPlayer;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FastTravelLocator.BP_FastTravelLocator_C.UpdateMeshSize
struct ABP_FastTravelLocator_C_UpdateMeshSize_Params
{
};

// Function BP_FastTravelLocator.BP_FastTravelLocator_C.ResizeArea
struct ABP_FastTravelLocator_C_ResizeArea_Params
{
};

// Function BP_FastTravelLocator.BP_FastTravelLocator_C.UserConstructionScript
struct ABP_FastTravelLocator_C_UserConstructionScript_Params
{
};

// Function BP_FastTravelLocator.BP_FastTravelLocator_C.BndEvt__InteractionArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_FastTravelLocator_C_BndEvt__InteractionArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_FastTravelLocator.BP_FastTravelLocator_C.ReceiveBeginPlay
struct ABP_FastTravelLocator_C_ReceiveBeginPlay_Params
{
};

// Function BP_FastTravelLocator.BP_FastTravelLocator_C.ExecuteUbergraph_BP_FastTravelLocator
struct ABP_FastTravelLocator_C_ExecuteUbergraph_BP_FastTravelLocator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
