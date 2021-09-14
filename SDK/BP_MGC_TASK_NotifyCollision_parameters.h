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

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.GetIdentifier
struct UBP_MGC_TASK_NotifyCollision_C_GetIdentifier_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_ReplaceTask
struct UBP_MGC_TASK_NotifyCollision_C_Received_ReplaceTask_Params
{
	class UBtlMagicTask*                               NewTask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_GetNotesInfomation
struct UBP_MGC_TASK_NotifyCollision_C_Received_GetNotesInfomation_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_DebugRender
struct UBP_MGC_TASK_NotifyCollision_C_Received_DebugRender_Params
{
	float                                              FrameDeltaTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.IsSomeGroup
struct UBP_MGC_TASK_NotifyCollision_C_IsSomeGroup_Params
{
	EBtlUnitGroup                                      SelfGroup;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlUnitGroup                                      TargetGroup;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SameGroup;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.IsFilterActor
struct UBP_MGC_TASK_NotifyCollision_C_IsFilterActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionObjectType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_GetErrorMessage
struct UBP_MGC_TASK_NotifyCollision_C_Received_GetErrorMessage_Params
{
	class UBtlMagicAsset*                              Asset;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.TickFinish
struct UBP_MGC_TASK_NotifyCollision_C_TickFinish_Params
{
	TArray<class UPrimitiveComponent*>                 Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.TickHit
struct UBP_MGC_TASK_NotifyCollision_C_TickHit_Params
{
	TArray<class UPrimitiveComponent*>                 Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_GetTaskName
struct UBP_MGC_TASK_NotifyCollision_C_Received_GetTaskName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.UpdateParam
struct UBP_MGC_TASK_NotifyCollision_C_UpdateParam_Params
{
	float                                              ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_Begin
struct UBP_MGC_TASK_NotifyCollision_C_Received_Begin_Params
{
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_Tick
struct UBP_MGC_TASK_NotifyCollision_C_Received_Tick_Params
{
	float                                              FrameDeltaTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.ExecuteUbergraph_BP_MGC_TASK_NotifyCollision
struct UBP_MGC_TASK_NotifyCollision_C_ExecuteUbergraph_BP_MGC_TASK_NotifyCollision_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.OnEndOverlap__DelegateSignature
struct UBP_MGC_TASK_NotifyCollision_C_OnEndOverlap__DelegateSignature_Params
{
	class UPrimitiveComponent*                         Collision;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.OnBeginOverlap__DelegateSignature
struct UBP_MGC_TASK_NotifyCollision_C_OnBeginOverlap__DelegateSignature_Params
{
	class UPrimitiveComponent*                         Collision;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
