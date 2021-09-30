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

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetActiveCondition
struct ABP_PF_MAPOBJ_BaseObject_C_GetActiveCondition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.IsEnableChangeState
struct ABP_PF_MAPOBJ_BaseObject_C_IsEnableChangeState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetDebShowInfoMessage
struct ABP_PF_MAPOBJ_BaseObject_C_GetDebShowInfoMessage_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutMessage;                                               // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Received_OnChangeState
struct ABP_PF_MAPOBJ_BaseObject_C_Received_OnChangeState_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ChangeActive
struct ABP_PF_MAPOBJ_BaseObject_C_ChangeActive_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.SetRecieverEnable
struct ABP_PF_MAPOBJ_BaseObject_C_SetRecieverEnable_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveUpdateActive
struct ABP_PF_MAPOBJ_BaseObject_C_ReceiveUpdateActive_Params
{
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.UpdateActive
struct ABP_PF_MAPOBJ_BaseObject_C_UpdateActive_Params
{
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetCurrentQuestComponent
struct ABP_PF_MAPOBJ_BaseObject_C_GetCurrentQuestComponent_Params
{
	class UBP_QuestComponent_C*                        Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.CheckQuest
struct ABP_PF_MAPOBJ_BaseObject_C_CheckQuest_Params
{
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetMinimapIconName
struct ABP_PF_MAPOBJ_BaseObject_C_GetMinimapIconName_Params
{
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.OnFoundTrapIn
struct ABP_PF_MAPOBJ_BaseObject_C_OnFoundTrapIn_Params
{
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.UserConstructionScript
struct ABP_PF_MAPOBJ_BaseObject_C_UserConstructionScript_Params
{
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveOnConstruction
struct ABP_PF_MAPOBJ_BaseObject_C_ReceiveOnConstruction_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Event OnFoundTrapIn
struct ABP_PF_MAPOBJ_BaseObject_C_Event_OnFoundTrapIn_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.DB_ShowInformation
struct ABP_PF_MAPOBJ_BaseObject_C_DB_ShowInformation_Params
{
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveBeginPlay
struct ABP_PF_MAPOBJ_BaseObject_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Event OnChangeScenarioCounter
struct ABP_PF_MAPOBJ_BaseObject_C_Event_OnChangeScenarioCounter_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Event OnChageScenarioFlag
struct ABP_PF_MAPOBJ_BaseObject_C_Event_OnChageScenarioFlag_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveEndPlay
struct ABP_PF_MAPOBJ_BaseObject_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.RequestUpdateActive
struct ABP_PF_MAPOBJ_BaseObject_C_RequestUpdateActive_Params
{
};

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ExecuteUbergraph_BP_PF_MAPOBJ_BaseObject
struct ABP_PF_MAPOBJ_BaseObject_C_ExecuteUbergraph_BP_PF_MAPOBJ_BaseObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
