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

// Function BP_EventAreaBase.BP_EventAreaBase_C.GetOutlinerFolderPath
struct ABP_EventAreaBase_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.GetOutlinerLabelName
struct ABP_EventAreaBase_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C._ClearFreeObjectPoolNpc
struct ABP_EventAreaBase_C__ClearFreeObjectPoolNpc_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C._DespawnNpc
struct ABP_EventAreaBase_C__DespawnNpc_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C._SetPreMapJumped
struct ABP_EventAreaBase_C__SetPreMapJumped_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C._SetMapJumped
struct ABP_EventAreaBase_C__SetMapJumped_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C._SetAreaMeshColor
struct ABP_EventAreaBase_C__SetAreaMeshColor_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C._BuildProcedualMesh
struct ABP_EventAreaBase_C__BuildProcedualMesh_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C._SceneStateCheck
struct ABP_EventAreaBase_C__SceneStateCheck_Params
{
	bool                                               bOk;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C._ScreenMaskedOnMapjumpEvent
struct ABP_EventAreaBase_C__ScreenMaskedOnMapjumpEvent_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C._IsNpcSpawned
struct ABP_EventAreaBase_C__IsNpcSpawned_Params
{
	bool                                               bCheckedSpawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnedOrDontCare;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C._SpawnNpc
struct ABP_EventAreaBase_C__SpawnNpc_Params
{
	bool                                               bSpawn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.DebugEventStart
struct ABP_EventAreaBase_C_DebugEventStart_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.CheckIligalCollision
struct ABP_EventAreaBase_C_CheckIligalCollision_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.SetEventAreaCollisionEnable
struct ABP_EventAreaBase_C_SetEventAreaCollisionEnable_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.ResizeEventArea
struct ABP_EventAreaBase_C_ResizeEventArea_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.UpdateMeshSize
struct ABP_EventAreaBase_C_UpdateMeshSize_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.CanPlayEvent?
struct ABP_EventAreaBase_C_CanPlayEvent__Params
{
	bool                                               bCanPlay;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.UpdateDebugText
struct ABP_EventAreaBase_C_UpdateDebugText_Params
{
	bool                                               bConstruction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.EnableEventCollision
struct ABP_EventAreaBase_C_EnableEventCollision_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.IsPlayerCollision?
struct ABP_EventAreaBase_C_IsPlayerCollision__Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPlayer;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.UserConstructionScript
struct ABP_EventAreaBase_C_UserConstructionScript_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.OnPlayEvent
struct ABP_EventAreaBase_C_OnPlayEvent_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.OnScenarioCounterChange
struct ABP_EventAreaBase_C_OnScenarioCounterChange_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.OnMapChange
struct ABP_EventAreaBase_C_OnMapChange_Params
{
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.OnFieldWakeup
struct ABP_EventAreaBase_C_OnFieldWakeup_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.OnScenarioFlagChange
struct ABP_EventAreaBase_C_OnScenarioFlagChange_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_EventAreaBase_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.ReceiveEndPlay
struct ABP_EventAreaBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.ReceiveTick
struct ABP_EventAreaBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_EventAreaBase_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.ReceiveBeginPlay
struct ABP_EventAreaBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.OnLoadGame
struct ABP_EventAreaBase_C_OnLoadGame_Params
{
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.On Event Finalize
struct ABP_EventAreaBase_C_On_Event_Finalize_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OptionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.ExecuteUbergraph_BP_EventAreaBase
struct ABP_EventAreaBase_C_ExecuteUbergraph_BP_EventAreaBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventAreaBase.BP_EventAreaBase_C.DoPlayEvent__DelegateSignature
struct ABP_EventAreaBase_C_DoPlayEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
