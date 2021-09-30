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

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.GetOutlinerFolderPath
struct ABP_PlayerPassBlocking_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.GetOutlinerLabelName
struct ABP_PlayerPassBlocking_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.SystemBlockManagement
struct ABP_PlayerPassBlocking_C_SystemBlockManagement_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.DoProcess
struct ABP_PlayerPassBlocking_C_DoProcess_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.RunNpcTalkScript
struct ABP_PlayerPassBlocking_C_RunNpcTalkScript_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.GetDatabaseRow
struct ABP_PlayerPassBlocking_C_GetDatabaseRow_Params
{
	struct FPassBlockData                              Record;                                                   // (Parm, OutParm)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.CanAcceptBlockAction
struct ABP_PlayerPassBlocking_C_CanAcceptBlockAction_Params
{
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.RunScript
struct ABP_PlayerPassBlocking_C_RunScript_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ResizeAndRelocationPM
struct ABP_PlayerPassBlocking_C_ResizeAndRelocationPM_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.SwitchScenarioCondition
struct ABP_PlayerPassBlocking_C_SwitchScenarioCondition_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.UserConstructionScript
struct ABP_PlayerPassBlocking_C_UserConstructionScript_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ReceiveTick
struct ABP_PlayerPassBlocking_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.BndEvt__Blocking_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_PlayerPassBlocking_C_BndEvt__Blocking_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  HIT;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.BndEvt__Overlaped_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_PlayerPassBlocking_C_BndEvt__Overlaped_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.BndEvt__Overlaped_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct ABP_PlayerPassBlocking_C_BndEvt__Overlaped_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ReceiveBeginPlay
struct ABP_PlayerPassBlocking_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnChangeScenarioCounter
struct ABP_PlayerPassBlocking_C_OnChangeScenarioCounter_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnChangeScenarioFlag
struct ABP_PlayerPassBlocking_C_OnChangeScenarioFlag_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ReceiveEndPlay
struct ABP_PlayerPassBlocking_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnWatchScriptEvent
struct ABP_PlayerPassBlocking_C_OnWatchScriptEvent_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnPlayEvent
struct ABP_PlayerPassBlocking_C_OnPlayEvent_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnShowEvent
struct ABP_PlayerPassBlocking_C_OnShowEvent_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnShowSysBlockMessage
struct ABP_PlayerPassBlocking_C_OnShowSysBlockMessage_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.Set NPC PassBlocking
struct ABP_PlayerPassBlocking_C_Set_NPC_PassBlocking_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.EventDelayShowMessage
struct ABP_PlayerPassBlocking_C_EventDelayShowMessage_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ExecuteUbergraph_BP_PlayerPassBlocking
struct ABP_PlayerPassBlocking_C_ExecuteUbergraph_BP_PlayerPassBlocking_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.DoPlayEvent__DelegateSignature
struct ABP_PlayerPassBlocking_C_DoPlayEvent__DelegateSignature_Params
{
};

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.WatchScriptProcess__DelegateSignature
struct ABP_PlayerPassBlocking_C_WatchScriptProcess__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
