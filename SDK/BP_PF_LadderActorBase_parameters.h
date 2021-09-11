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

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.GetOutlinerFolderPath
struct ABP_PF_LadderActorBase_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.GetOutlinerLabelName
struct ABP_PF_LadderActorBase_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveSerializeLadderPointParameter
struct ABP_PF_LadderActorBase_C_ReceiveSerializeLadderPointParameter_Params
{
	struct FPFPlacementLadderPointDatabaseRow          DestinationParameter;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.IsLadderHide
struct ABP_PF_LadderActorBase_C_IsLadderHide_Params
{
	bool                                               OutHide;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.UpdateLadderVisibility
struct ABP_PF_LadderActorBase_C_UpdateLadderVisibility_Params
{
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.IsLadderEnable
struct ABP_PF_LadderActorBase_C_IsLadderEnable_Params
{
	bool                                               bOut;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.SetScenaroiCondition
struct ABP_PF_LadderActorBase_C_SetScenaroiCondition_Params
{
	struct FScenarioConditionNamed                     InNewCondition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.GetJumpPosition
struct ABP_PF_LadderActorBase_C_GetJumpPosition_Params
{
	struct FVector                                     Position;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.AddMesh
struct ABP_PF_LadderActorBase_C_AddMesh_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BuildMesh
struct ABP_PF_LadderActorBase_C_BuildMesh_Params
{
	int                                                InMiddleNum;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.UserConstructionScript
struct ABP_PF_LadderActorBase_C_UserConstructionScript_Params
{
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct ABP_PF_LadderActorBase_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  HIT;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveTick
struct ABP_PF_LadderActorBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BndEvt__HitBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_PF_LadderActorBase_C_BndEvt__HitBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BndEvt__HitBox_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct ABP_PF_LadderActorBase_C_BndEvt__HitBox_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.OnScenarioFlagChanged
struct ABP_PF_LadderActorBase_C_OnScenarioFlagChanged_Params
{
	int                                                InFlagNo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInFlagValid;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.OnScenarioCounterChanged
struct ABP_PF_LadderActorBase_C_OnScenarioCounterChanged_Params
{
	int                                                InNew;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InOld;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveEndPlay
struct ABP_PF_LadderActorBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveBeginPlay
struct ABP_PF_LadderActorBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ExecuteUbergraph_BP_PF_LadderActorBase
struct ABP_PF_LadderActorBase_C_ExecuteUbergraph_BP_PF_LadderActorBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
