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

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetCameraInteractDistance
struct ABP_PF_MAPOBJ_OwlPoint_C_GetCameraInteractDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetSpawnedActor
struct ABP_PF_MAPOBJ_OwlPoint_C_GetSpawnedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetPointLocation
struct ABP_PF_MAPOBJ_OwlPoint_C_GetPointLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetOutlinerFolderPath
struct ABP_PF_MAPOBJ_OwlPoint_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetOutlinerLabelName
struct ABP_PF_MAPOBJ_OwlPoint_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.UpdateInteractParams
struct ABP_PF_MAPOBJ_OwlPoint_C_UpdateInteractParams_Params
{
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.GetLocationName
struct ABP_PF_MAPOBJ_OwlPoint_C_GetLocationName_Params
{
	struct FString                                     OutLocationName;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.UserConstructionScript
struct ABP_PF_MAPOBJ_OwlPoint_C_UserConstructionScript_Params
{
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.DiscoverOwlPoint
struct ABP_PF_MAPOBJ_OwlPoint_C_DiscoverOwlPoint_Params
{
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.Event Post Map Chagne
struct ABP_PF_MAPOBJ_OwlPoint_C_Event_Post_Map_Chagne_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceiveBeginPlay
struct ABP_PF_MAPOBJ_OwlPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ChangeActive
struct ABP_PF_MAPOBJ_OwlPoint_C_ChangeActive_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceivePostEditChangeProperty
struct ABP_PF_MAPOBJ_OwlPoint_C_ReceivePostEditChangeProperty_Params
{
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.Event Change Location
struct ABP_PF_MAPOBJ_OwlPoint_C_Event_Change_Location_Params
{
	struct FString                                     NewLocationName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceiveOnConstruction
struct ABP_PF_MAPOBJ_OwlPoint_C_ReceiveOnConstruction_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ReceiveEndPlay
struct ABP_PF_MAPOBJ_OwlPoint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_OwlPoint
struct ABP_PF_MAPOBJ_OwlPoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_OwlPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
