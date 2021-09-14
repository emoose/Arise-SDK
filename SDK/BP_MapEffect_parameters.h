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

// Function BP_MapEffect.BP_MapEffect_C.GetOutlinerFolderPath
struct ABP_MapEffect_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MapEffect.BP_MapEffect_C.GetOutlinerLabelName
struct ABP_MapEffect_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MapEffect.BP_MapEffect_C.OnSpawnAreaIn
struct ABP_MapEffect_C_OnSpawnAreaIn_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.CheckDirectivity
struct ABP_MapEffect_C_CheckDirectivity_Params
{
	struct FVector                                     ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsOk;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapEffect.BP_MapEffect_C._PreSpawnParticle
struct ABP_MapEffect_C__PreSpawnParticle_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.SpawnEmitterWithPlayerDistance
struct ABP_MapEffect_C_SpawnEmitterWithPlayerDistance_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.AbsoluteToRelative
struct ABP_MapEffect_C_AbsoluteToRelative_Params
{
	struct FVector                                     Abs;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     rel;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MapEffect.BP_MapEffect_C.RelativeToAbsolute
struct ABP_MapEffect_C_RelativeToAbsolute_Params
{
	struct FVector                                     RelLoc;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     AbsLoc;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MapEffect.BP_MapEffect_C.SnapPosition
struct ABP_MapEffect_C_SnapPosition_Params
{
	TEnumAsByte<ENM_SpawnSnapType>                     SnapType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ModifiedLocation;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MapEffect.BP_MapEffect_C.SpawnStaticMeshs
struct ABP_MapEffect_C_SpawnStaticMeshs_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.BehaviorAreaIn
struct ABP_MapEffect_C_BehaviorAreaIn_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.HideStaticMesh
struct ABP_MapEffect_C_HideStaticMesh_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.SpawnEmitter
struct ABP_MapEffect_C_SpawnEmitter_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.NowTimeOn?
struct ABP_MapEffect_C_NowTimeOn__Params
{
	float                                              CurHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OnHour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapEffect.BP_MapEffect_C.ParticleOnOffManagement
struct ABP_MapEffect_C_ParticleOnOffManagement_Params
{
	float                                              CurHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapEffect.BP_MapEffect_C.UserConstructionScript
struct ABP_MapEffect_C_UserConstructionScript_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.OnPlayAction
struct ABP_MapEffect_C_OnPlayAction_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.Update
struct ABP_MapEffect_C_Update_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.BndEvt__SwitchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MapEffect_C_BndEvt__SwitchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MapEffect.BP_MapEffect_C.ReceiveBeginPlay
struct ABP_MapEffect_C_ReceiveBeginPlay_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.ReceiveEndPlay
struct ABP_MapEffect_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapEffect.BP_MapEffect_C.OnDestroyPreSpawnParticle
struct ABP_MapEffect_C_OnDestroyPreSpawnParticle_Params
{
};

// Function BP_MapEffect.BP_MapEffect_C.ExecuteUbergraph_BP_MapEffect
struct ABP_MapEffect_C_ExecuteUbergraph_BP_MapEffect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
