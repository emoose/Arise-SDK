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

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.GetOutlinerFolderPath
struct ABP_EventScriptPlayArea_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.GetOutlinerLabelName
struct ABP_EventScriptPlayArea_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.SetPreMapJumped
struct ABP_EventScriptPlayArea_C_SetPreMapJumped_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.DestroyProcess
struct ABP_EventScriptPlayArea_C_DestroyProcess_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._ScreenMaskedOnMapjumpEvent
struct ABP_EventScriptPlayArea_C__ScreenMaskedOnMapjumpEvent_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.SetMapJumped
struct ABP_EventScriptPlayArea_C_SetMapJumped_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._AutoSaveResume
struct ABP_EventScriptPlayArea_C__AutoSaveResume_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._AutoSaveSuspend
struct ABP_EventScriptPlayArea_C__AutoSaveSuspend_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._SceneStateCheck
struct ABP_EventScriptPlayArea_C__SceneStateCheck_Params
{
	bool                                               bOk;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.CheckRestartArea
struct ABP_EventScriptPlayArea_C_CheckRestartArea_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.UnloadScript
struct ABP_EventScriptPlayArea_C_UnloadScript_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.LoadScript
struct ABP_EventScriptPlayArea_C_LoadScript_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.DoProcess
struct ABP_EventScriptPlayArea_C_DoProcess_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.CanPlayEvent?
struct ABP_EventScriptPlayArea_C_CanPlayEvent__Params
{
	bool                                               bCanPlay;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.IsSatisfyScenarioCondition
struct ABP_EventScriptPlayArea_C_IsSatisfyScenarioCondition_Params
{
	bool                                               bSatisfy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ScenarioFlagCheck
struct ABP_EventScriptPlayArea_C_ScenarioFlagCheck_Params
{
	bool                                               bOn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.UpdateMeshSize
struct ABP_EventScriptPlayArea_C_UpdateMeshSize_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.RunScript
struct ABP_EventScriptPlayArea_C_RunScript_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.IsPlayerActor
struct ABP_EventScriptPlayArea_C_IsPlayerActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayer;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ResizeArea
struct ABP_EventScriptPlayArea_C_ResizeArea_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.UserConstructionScript
struct ABP_EventScriptPlayArea_C_UserConstructionScript_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.Setup Event Dispatchers
struct ABP_EventScriptPlayArea_C_Setup_Event_Dispatchers_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnPlayScript
struct ABP_EventScriptPlayArea_C_OnPlayScript_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnChangeScenario
struct ABP_EventScriptPlayArea_C_OnChangeScenario_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ReceiveBeginPlay
struct ABP_EventScriptPlayArea_C_ReceiveBeginPlay_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ReceiveTick
struct ABP_EventScriptPlayArea_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnWatchEventScript
struct ABP_EventScriptPlayArea_C_OnWatchEventScript_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.BndEvt__PlayArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_EventScriptPlayArea_C_BndEvt__PlayArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.BndEvt__PlayArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_EventScriptPlayArea_C_BndEvt__PlayArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnMapChange
struct ABP_EventScriptPlayArea_C_OnMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ReceiveEndPlay
struct ABP_EventScriptPlayArea_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnChangeScenarioFlag
struct ABP_EventScriptPlayArea_C_OnChangeScenarioFlag_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnChangeScenarioCounter
struct ABP_EventScriptPlayArea_C_OnChangeScenarioCounter_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ExecuteUbergraph_BP_EventScriptPlayArea
struct ABP_EventScriptPlayArea_C_ExecuteUbergraph_BP_EventScriptPlayArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ChangeScenarioEvent__DelegateSignature
struct ABP_EventScriptPlayArea_C_ChangeScenarioEvent__DelegateSignature_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.PlayScriptProcess__DelegateSignature
struct ABP_EventScriptPlayArea_C_PlayScriptProcess__DelegateSignature_Params
{
};

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.WatchScriptProcess__DelegateSignature
struct ABP_EventScriptPlayArea_C_WatchScriptProcess__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
