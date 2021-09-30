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

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetOutlinerFolderPath
struct ABP_MapLinkBase_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetOutlinerLabelName
struct ABP_MapLinkBase_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.SetNearMapLink
struct ABP_MapLinkBase_C_SetNearMapLink_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.MapUnload
struct ABP_MapLinkBase_C_MapUnload_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._GetAreaNameEX
struct ABP_MapLinkBase_C__GetAreaNameEX_Params
{
	struct FString                                     AreaName;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._FinishPreMapJumpEvent
struct ABP_MapLinkBase_C__FinishPreMapJumpEvent_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._CancelPreMapJumpEvent
struct ABP_MapLinkBase_C__CancelPreMapJumpEvent_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._RunPreJumpEvent
struct ABP_MapLinkBase_C__RunPreJumpEvent_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._UpdateInteractionIcon
struct ABP_MapLinkBase_C__UpdateInteractionIcon_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._UpdateInteractionActInfo
struct ABP_MapLinkBase_C__UpdateInteractionActInfo_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._IsMapChangeCanceld
struct ABP_MapLinkBase_C__IsMapChangeCanceld_Params
{
	bool                                               bCanceled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._LoadScript
struct ABP_MapLinkBase_C__LoadScript_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._RunPreJumpScript
struct ABP_MapLinkBase_C__RunPreJumpScript_Params
{
	bool                                               bRunScript;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._CrossDirCheck
struct ABP_MapLinkBase_C__CrossDirCheck_Params
{
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedCheck;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vec1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Vec2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               CrossDirOrValid;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._OpendMap?
struct ABP_MapLinkBase_C__OpendMap__Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bOpen;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._GetForwardLocation
struct ABP_MapLinkBase_C__GetForwardLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._IsScriptEnd?
struct ABP_MapLinkBase_C__IsScriptEnd__Params
{
	bool                                               bEndOrNothing;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C._RunSubScript
struct ABP_MapLinkBase_C__RunSubScript_Params
{
	class UClass*                                      ScriptClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ScriptArgs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetIconAngle
struct ABP_MapLinkBase_C_GetIconAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetIconImageDataName
struct ABP_MapLinkBase_C_GetIconImageDataName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetIconLocation
struct ABP_MapLinkBase_C_GetIconLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.ShowNextMapName
struct ABP_MapLinkBase_C_ShowNextMapName_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.IsCollisionActive
struct ABP_MapLinkBase_C_IsCollisionActive_Params
{
	bool                                               bActive;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.NextMapNameDispManagement
struct ABP_MapLinkBase_C_NextMapNameDispManagement_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.SetMapLinkCollisionEnable
struct ABP_MapLinkBase_C_SetMapLinkCollisionEnable_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.DispDestinationName
struct ABP_MapLinkBase_C_DispDestinationName_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.LoadDelayTimerManagement
struct ABP_MapLinkBase_C_LoadDelayTimerManagement_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.OnChangeScenarioCondition
struct ABP_MapLinkBase_C_OnChangeScenarioCondition_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.CheckDoMapChange
struct ABP_MapLinkBase_C_CheckDoMapChange_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.DebugInfoManagement
struct ABP_MapLinkBase_C_DebugInfoManagement_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetLinkedLocatorName
struct ABP_MapLinkBase_C_GetLinkedLocatorName_Params
{
	struct FString                                     LocatorName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetMaplinkData
struct ABP_MapLinkBase_C_GetMaplinkData_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetAreaName
struct ABP_MapLinkBase_C_GetAreaName_Params
{
	struct FString                                     AreaName;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetLinkedMapName
struct ABP_MapLinkBase_C_GetLinkedMapName_Params
{
	struct FString                                     MapName;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.RefreshText
struct ABP_MapLinkBase_C_RefreshText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.Finalizing
struct ABP_MapLinkBase_C_Finalizing_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.Finalize
struct ABP_MapLinkBase_C_Finalize_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.InFanCharacter
struct ABP_MapLinkBase_C_InFanCharacter_Params
{
	class ACharacter*                                  Charcter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FanCenter;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              FanRadius;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FanAngle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FanVector;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bin;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.DebugDrawFanLine
struct ABP_MapLinkBase_C_DebugDrawFanLine_Params
{
	struct FVector                                     Center;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                Divs;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OuterPos;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.DrawDebugInfo
struct ABP_MapLinkBase_C_DrawDebugInfo_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.CollisionDebug
struct ABP_MapLinkBase_C_CollisionDebug_Params
{
	bool                                               bDrawDebugInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetPlayerPosition
struct ABP_MapLinkBase_C_GetPlayerPosition_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.MapUnloadDistance
struct ABP_MapLinkBase_C_MapUnloadDistance_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.MapPreload
struct ABP_MapLinkBase_C_MapPreload_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetFieldSceneController
struct ABP_MapLinkBase_C_GetFieldSceneController_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.IsCollisionPlaneVsLine
struct ABP_MapLinkBase_C_IsCollisionPlaneVsLine_Params
{
	struct FVector                                     PlaneNormal;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     PlanePoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     pointA;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     pointB;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bCollid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     IntersectionPoint;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               bPlusDir;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.UserConstructionScript
struct ABP_MapLinkBase_C_UserConstructionScript_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.OnMapChange
struct ABP_MapLinkBase_C_OnMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.ReceiveBeginPlay
struct ABP_MapLinkBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MapLinkBase_C_BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.OnScenarioCounter
struct ABP_MapLinkBase_C_OnScenarioCounter_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.ReceiveEndPlay
struct ABP_MapLinkBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.OnChangeScenarioFlag
struct ABP_MapLinkBase_C_OnChangeScenarioFlag_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.OnDoMapJump
struct ABP_MapLinkBase_C_OnDoMapJump_Params
{
	class UClass*                                      PreMapJumpScript;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ScriptArgs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.OnRunPreMapJumpScript
struct ABP_MapLinkBase_C_OnRunPreMapJumpScript_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MapLinkBase_C_BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__PreOverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MapLinkBase_C_BndEvt__PreOverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__PreOverlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MapLinkBase_C_BndEvt__PreOverlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.ReceiveTick
struct ABP_MapLinkBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.ExecuteUbergraph_BP_MapLinkBase
struct ABP_MapLinkBase_C_ExecuteUbergraph_BP_MapLinkBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.RunPreMapJumpEvent__DelegateSignature
struct ABP_MapLinkBase_C_RunPreMapJumpEvent__DelegateSignature_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.RunPreMapJumpScript__DelegateSignature
struct ABP_MapLinkBase_C_RunPreMapJumpScript__DelegateSignature_Params
{
};

// Function BP_MapLinkBase.BP_MapLinkBase_C.DoMapJump__DelegateSignature
struct ABP_MapLinkBase_C_DoMapJump__DelegateSignature_Params
{
	class UClass*                                      PreMapJumpScript;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ScriptArgs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
