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

// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.EndOverlapCheck
struct ABP_CameraTrapLookAt_C_EndOverlapCheck_Params
{
};

// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.CanPlayEvents
struct ABP_CameraTrapLookAt_C_CanPlayEvents_Params
{
	bool                                               bPlayEvent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayQuest;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayCamp;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayLongChat;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.IsScenarioSatisfyCondition
struct ABP_CameraTrapLookAt_C_IsScenarioSatisfyCondition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.UserConstructionScript
struct ABP_CameraTrapLookAt_C_UserConstructionScript_Params
{
};

// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ReceiveTick
struct ABP_CameraTrapLookAt_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_CameraTrapLookAt_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_CameraTrapLookAt_C_BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ReceiveBeginPlay
struct ABP_CameraTrapLookAt_C_ReceiveBeginPlay_Params
{
};

// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ReceiveEndPlay
struct ABP_CameraTrapLookAt_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ExecuteUbergraph_BP_CameraTrapLookAt
struct ABP_CameraTrapLookAt_C_ExecuteUbergraph_BP_CameraTrapLookAt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
