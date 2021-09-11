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

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetSphereRadius
struct ABP_EncountSymbolBase_C_GetSphereRadius_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetRadar
struct ABP_EncountSymbolBase_C_GetRadar_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Activate
struct ABP_EncountSymbolBase_C_Activate_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetRelativeLocation
struct ABP_EncountSymbolBase_C_SetRelativeLocation_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnChangeStateImpl
struct ABP_EncountSymbolBase_C_OnChangeStateImpl_Params
{
	EAriseGameState                                    State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetModelBounds
struct ABP_EncountSymbolBase_C_GetModelBounds_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EnableBlockSphereCollision
struct ABP_EncountSymbolBase_C_EnableBlockSphereCollision_Params
{
	bool                                               InEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsFindedMimicSymbol
struct ABP_EncountSymbolBase_C_IsFindedMimicSymbol_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_IsEntrySearchBox
struct ABP_EncountSymbolBase_C_BPE_IsEntrySearchBox_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetupUsePathFinding
struct ABP_EncountSymbolBase_C_SetupUsePathFinding_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.CanEncounting
struct ABP_EncountSymbolBase_C_CanEncounting_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetDesiredFlyHeight
struct ABP_EncountSymbolBase_C_GetDesiredFlyHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitFlyMode
struct ABP_EncountSymbolBase_C_InitFlyMode_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetDestination
struct ABP_EncountSymbolBase_C_GetDestination_Params
{
	struct FVector                                     InDestination;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetRelativeFlyHeight
struct ABP_EncountSymbolBase_C_GetRelativeFlyHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetBoxExtent
struct ABP_EncountSymbolBase_C_SetBoxExtent_Params
{
	class UBoxComponent*                               Box;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetWanderingMode
struct ABP_EncountSymbolBase_C_SetWanderingMode_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EnableEncountCollision
struct ABP_EncountSymbolBase_C_EnableEncountCollision_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitSplineData
struct ABP_EncountSymbolBase_C_InitSplineData_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsFlyState
struct ABP_EncountSymbolBase_C_IsFlyState_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsRandomWaitState
struct ABP_EncountSymbolBase_C_IsRandomWaitState_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetFlyMode
struct ABP_EncountSymbolBase_C_SetFlyMode_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Postinitialize
struct ABP_EncountSymbolBase_C_Postinitialize_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsGround
struct ABP_EncountSymbolBase_C_IsGround_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.RespawnParameter
struct ABP_EncountSymbolBase_C_RespawnParameter_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EnableOrientRotation
struct ABP_EncountSymbolBase_C_EnableOrientRotation_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Deactive
struct ABP_EncountSymbolBase_C_Deactive_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EncountLink
struct ABP_EncountSymbolBase_C_EncountLink_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsInvisible
struct ABP_EncountSymbolBase_C_IsInvisible_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetAIController
struct ABP_EncountSymbolBase_C_GetAIController_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.DetectSearchBox
struct ABP_EncountSymbolBase_C_DetectSearchBox_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetCeilMoveMode
struct ABP_EncountSymbolBase_C_SetCeilMoveMode_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetupActionState
struct ABP_EncountSymbolBase_C_SetupActionState_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Setup
struct ABP_EncountSymbolBase_C_Setup_Params
{
	class APFBP_EnSym_Placement_C*                     Placement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetMyGroup
struct ABP_EncountSymbolBase_C_GetMyGroup_Params
{
	class ABP_EncountGroup_C*                          Group;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.UserConstructionScript
struct ABP_EncountSymbolBase_C_UserConstructionScript_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnDoSceneCapture
struct ABP_EncountSymbolBase_C_OnDoSceneCapture_Params
{
	struct FTransform                                  CaptureTransform;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UCameraComponent*                            BaseCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EncounProcess
struct ABP_EncountSymbolBase_C_EncounProcess_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnEncount
struct ABP_EncountSymbolBase_C_OnEncount_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitCallback
struct ABP_EncountSymbolBase_C_InitCallback_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_EncountSymbolBase_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnEndOverlapCaptuer
struct ABP_EncountSymbolBase_C_OnEndOverlapCaptuer_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_EncountSymbolBase_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.FadeOut
struct ABP_EncountSymbolBase_C_FadeOut_Params
{
	bool                                               bNotDelete;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.FadeIn
struct ABP_EncountSymbolBase_C_FadeIn_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnBuildCharacter
struct ABP_EncountSymbolBase_C_OnBuildCharacter_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnEndEncount
struct ABP_EncountSymbolBase_C_OnEndEncount_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCompleteFadeOutEvent
struct ABP_EncountSymbolBase_C_OnCompleteFadeOutEvent_Params
{
	bool                                               NotDelete;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCompleteFadeInEvent
struct ABP_EncountSymbolBase_C_OnCompleteFadeInEvent_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCollisionEnable
struct ABP_EncountSymbolBase_C_OnCollisionEnable_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCapture
struct ABP_EncountSymbolBase_C_OnCapture_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitEncountSystem
struct ABP_EncountSymbolBase_C_InitEncountSystem_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.ReceiveBeginPlay
struct ABP_EncountSymbolBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.TickNavMeshRecovery
struct ABP_EncountSymbolBase_C_TickNavMeshRecovery_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     RecoveryDestination;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnPostInitialized
struct ABP_EncountSymbolBase_C_OnPostInitialized_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnPFMovementStateDash
struct ABP_EncountSymbolBase_C_OnPFMovementStateDash_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_ExecEntrySearchBox
struct ABP_EncountSymbolBase_C_BPE_ExecEntrySearchBox_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_ResearchAIRoute
struct ABP_EncountSymbolBase_C_BPE_ResearchAIRoute_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnFindedTarget
struct ABP_EncountSymbolBase_C_OnFindedTarget_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnLostTarget
struct ABP_EncountSymbolBase_C_OnLostTarget_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_ForceRepop
struct ABP_EncountSymbolBase_C_BPE_ForceRepop_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_UpdateSearchBoxSize
struct ABP_EncountSymbolBase_C_BPE_UpdateSearchBoxSize_Params
{
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_UpdateMinimapVisibleSymbol
struct ABP_EncountSymbolBase_C_BPE_UpdateMinimapVisibleSymbol_Params
{
	bool                                               bVisible;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.ExecuteUbergraph_BP_EncountSymbolBase
struct ABP_EncountSymbolBase_C_ExecuteUbergraph_BP_EncountSymbolBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnHitCollision__DelegateSignature
struct ABP_EncountSymbolBase_C_OnHitCollision__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
