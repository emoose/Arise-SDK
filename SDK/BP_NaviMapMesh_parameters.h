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

// Function BP_NaviMapMesh.BP_NaviMapMesh_C.UserConstructionScript
struct ABP_NaviMapMesh_C_UserConstructionScript_Params
{
};

// Function BP_NaviMapMesh.BP_NaviMapMesh_C.ReceiveBeginPlay
struct ABP_NaviMapMesh_C_ReceiveBeginPlay_Params
{
};

// Function BP_NaviMapMesh.BP_NaviMapMesh_C.ReceiveTick
struct ABP_NaviMapMesh_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NaviMapMesh.BP_NaviMapMesh_C.EventOnLoadStart
struct ABP_NaviMapMesh_C_EventOnLoadStart_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_NaviMapMesh.BP_NaviMapMesh_C.EventLoadEnd
struct ABP_NaviMapMesh_C_EventLoadEnd_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NaviMapMesh.BP_NaviMapMesh_C.ExecuteUbergraph_BP_NaviMapMesh
struct ABP_NaviMapMesh_C_ExecuteUbergraph_BP_NaviMapMesh_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NaviMapMesh.BP_NaviMapMesh_C.EventMeshLoadEnd__DelegateSignature
struct ABP_NaviMapMesh_C_EventMeshLoadEnd__DelegateSignature_Params
{
	bool                                               Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
