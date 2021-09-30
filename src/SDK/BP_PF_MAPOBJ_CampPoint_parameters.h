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

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.GetOutlinerFolderPath
struct ABP_PF_MAPOBJ_CampPoint_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.GetOutlinerLabelName
struct ABP_PF_MAPOBJ_CampPoint_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Received_OnChangeState
struct ABP_PF_MAPOBJ_CampPoint_C_Received_OnChangeState_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.SetDiscover
struct ABP_PF_MAPOBJ_CampPoint_C_SetDiscover_Params
{
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.IsDiscover
struct ABP_PF_MAPOBJ_CampPoint_C_IsDiscover_Params
{
	bool                                               bCleared;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Unload
struct ABP_PF_MAPOBJ_CampPoint_C_Unload_Params
{
	bool                                               bAtActorFinalize;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Preload
struct ABP_PF_MAPOBJ_CampPoint_C_Preload_Params
{
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.UserConstructionScript
struct ABP_PF_MAPOBJ_CampPoint_C_UserConstructionScript_Params
{
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ReceiveBeginPlay
struct ABP_PF_MAPOBJ_CampPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Preload Begin Overlap
struct ABP_PF_MAPOBJ_CampPoint_C_Preload_Begin_Overlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ReceiveOnConstruction
struct ABP_PF_MAPOBJ_CampPoint_C_ReceiveOnConstruction_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.Preload End Overlap
struct ABP_PF_MAPOBJ_CampPoint_C_Preload_End_Overlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.OnFoundTrapIn
struct ABP_PF_MAPOBJ_CampPoint_C_OnFoundTrapIn_Params
{
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ReceiveEndPlay
struct ABP_PF_MAPOBJ_CampPoint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.OnLockCampPont
struct ABP_PF_MAPOBJ_CampPoint_C_OnLockCampPont_Params
{
};

// Function BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_CampPoint
struct ABP_PF_MAPOBJ_CampPoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_CampPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
