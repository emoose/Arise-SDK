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

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.IsWatchFadeOut
struct UBP_PF_AlphaMaskComponent_C_IsWatchFadeOut_Params
{
	bool                                               OutEnable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.IsWatchFadeIn
struct UBP_PF_AlphaMaskComponent_C_IsWatchFadeIn_Params
{
	bool                                               OutEnable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.AdjustRadius
struct UBP_PF_AlphaMaskComponent_C_AdjustRadius_Params
{
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.GetSphere
struct UBP_PF_AlphaMaskComponent_C_GetSphere_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.DrawDebug
struct UBP_PF_AlphaMaskComponent_C_DrawDebug_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.TestSphere
struct UBP_PF_AlphaMaskComponent_C_TestSphere_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIntersect;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.TestCameraDistance
struct UBP_PF_AlphaMaskComponent_C_TestCameraDistance_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIntersect;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ExecuteTick
struct UBP_PF_AlphaMaskComponent_C_ExecuteTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ReceiveEndPlay
struct UBP_PF_AlphaMaskComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.OnBeginCameraAnim
struct UBP_PF_AlphaMaskComponent_C_OnBeginCameraAnim_Params
{
	class AArisePlayerCameraManager*                   PlyaerCameraManager;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCameraAnimInst*                             CameraAnimInst;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.OnEndCameraAnim
struct UBP_PF_AlphaMaskComponent_C_OnEndCameraAnim_Params
{
	class AArisePlayerCameraManager*                   PlyaerCameraManager;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ReceiveTick
struct UBP_PF_AlphaMaskComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ReceiveBeginPlay
struct UBP_PF_AlphaMaskComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ExecuteUbergraph_BP_PF_AlphaMaskComponent
struct UBP_PF_AlphaMaskComponent_C_ExecuteUbergraph_BP_PF_AlphaMaskComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
