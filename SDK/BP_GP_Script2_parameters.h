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

// Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventManagedScriptKill
struct UBP_GP_Script2_C_SetPostEventManagedScriptKill_Params
{
	bool                                               bPlayQuest;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.RequestAutoSave
struct UBP_GP_Script2_C_RequestAutoSave_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.ManageAutoSave
struct UBP_GP_Script2_C_ManageAutoSave_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.IsQuestAdvanced
struct UBP_GP_Script2_C_IsQuestAdvanced_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.CollectionReferenceCharacters
struct UBP_GP_Script2_C_CollectionReferenceCharacters_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.CollectionQuestStatus
struct UBP_GP_Script2_C_CollectionQuestStatus_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.DoPostEventTeleportLocator
struct UBP_GP_Script2_C_DoPostEventTeleportLocator_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.DoPostEventBattle
struct UBP_GP_Script2_C_DoPostEventBattle_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.DoPostEventMapJump
struct UBP_GP_Script2_C_DoPostEventMapJump_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.ChangeCameraPresetOverride
struct UBP_GP_Script2_C_ChangeCameraPresetOverride_Params
{
	struct FString                                     NewCameraPresetName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.ChangeCameraPreset
struct UBP_GP_Script2_C_ChangeCameraPreset_Params
{
	struct FString                                     NewCameraPresetName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetPersonVisibility
struct UBP_GP_Script2_C_SetPersonVisibility_Params
{
	struct FAchScenarioCharacterID                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.HideMovementPerson
struct UBP_GP_Script2_C_HideMovementPerson_Params
{
	TArray<class ABP_PF_NpcCharacterEvent_C*>          MovementPerson;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_Script2.BP_GP_Script2_C.AddMovementPerson
struct UBP_GP_Script2_C_AddMovementPerson_Params
{
	class AActor*                                      Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.TermQuest
struct UBP_GP_Script2_C_TermQuest_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.TrapIn
struct UBP_GP_Script2_C_TrapIn_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.ShowNowLoading
struct UBP_GP_Script2_C_ShowNowLoading_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.IsQuestContinue
struct UBP_GP_Script2_C_IsQuestContinue_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetFacialPresetPerson
struct UBP_GP_Script2_C_SetFacialPresetPerson_Params
{
	struct FAchScenarioCharacterID                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                PresetNo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetDefaultFacialPerson
struct UBP_GP_Script2_C_SetDefaultFacialPerson_Params
{
	struct FAchScenarioCharacterID                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GP_Script2.BP_GP_Script2_C.ResetPF
struct UBP_GP_Script2_C_ResetPF_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.DestroyInstatnceCharacter
struct UBP_GP_Script2_C_DestroyInstatnceCharacter_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.TermScriptSystem
struct UBP_GP_Script2_C_TermScriptSystem_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.BuildPersonInternal
struct UBP_GP_Script2_C_BuildPersonInternal_Params
{
	class ABP_PF_NpcCharacterEvent_C*                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InCharacterID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EPFNpcCharacterBuildType                           Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InitPlayAction;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.IsLoadComplateEncountEffect
struct UBP_GP_Script2_C_IsLoadComplateEncountEffect_Params
{
	bool                                               bCompleted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionActorLookAt
struct UBP_GP_Script2_C_SetCaptionActorLookAt_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionActorLip
struct UBP_GP_Script2_C_SetCaptionActorLip_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.ResetCaptionActor
struct UBP_GP_Script2_C_ResetCaptionActor_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.FindVoiceSpeaker
struct UBP_GP_Script2_C_FindVoiceSpeaker_Params
{
	struct FString                                     InCharacterID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AActor*                                      OutSpeaker;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.IsQuestGuideLocFlag
struct UBP_GP_Script2_C_IsQuestGuideLocFlag_Params
{
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bClear;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetQuestGuideLocFlag
struct UBP_GP_Script2_C_SetQuestGuideLocFlag_Params
{
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bClear;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetQuestContinueOff
struct UBP_GP_Script2_C_SetQuestContinueOff_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetQuestContinueOn
struct UBP_GP_Script2_C_SetQuestContinueOn_Params
{
	bool                                               bKeepBlackOut;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventTeleportLocator
struct UBP_GP_Script2_C_SetPostEventTeleportLocator_Params
{
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventMapJump
struct UBP_GP_Script2_C_SetPostEventMapJump_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetVisbilityPF
struct UBP_GP_Script2_C_SetVisbilityPF_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.DuplicatePerson (from Npc)
struct UBP_GP_Script2_C_DuplicatePerson__from_Npc__Params
{
	struct FPFNpcDefineID                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ACharacter*                                  NewCharacter;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.DuplicatePersonInternal
struct UBP_GP_Script2_C_DuplicatePersonInternal_Params
{
	class AActor*                                      SourceCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAsyncLoad;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  NewCharacter;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.PostMessageEvent
struct UBP_GP_Script2_C_PostMessageEvent_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.IsAllPersonBuildCompleted
struct UBP_GP_Script2_C_IsAllPersonBuildCompleted_Params
{
	bool                                               bCompleted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionCamera
struct UBP_GP_Script2_C_SetCaptionCamera_Params
{
	struct FString                                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.GetPlayerAnimSetPath
struct UBP_GP_Script2_C_GetPlayerAnimSetPath_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FSoftObjectPath                             AnimSetPath;                                              // (Parm, OutParm)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetCaptionActor
struct UBP_GP_Script2_C_SetCaptionActor_Params
{
	class AActor*                                      CaptionActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPFOneTopComponent*                          OneTopComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.GetCategoryPerson
struct UBP_GP_Script2_C_GetCategoryPerson_Params
{
	TEnumAsByte<EDE_PF_NpcEventCategory>               Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ACharacter*>                          Characters;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetLookAtPerson
struct UBP_GP_Script2_C_SetLookAtPerson_Params
{
	TEnumAsByte<EDE_PF_NpcEventCategory>               Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetPerson;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.IsMainQuest
struct UBP_GP_Script2_C_IsMainQuest_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.InitQuest
struct UBP_GP_Script2_C_InitQuest_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.CreateEncountEffect
struct UBP_GP_Script2_C_CreateEncountEffect_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.InitScriptSystem
struct UBP_GP_Script2_C_InitScriptSystem_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.CheckQuestClear
struct UBP_GP_Script2_C_CheckQuestClear_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.CheckQuestStart
struct UBP_GP_Script2_C_CheckQuestStart_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.GetPerson
struct UBP_GP_Script2_C_GetPerson_Params
{
	struct FString                                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class APFNpcCharacterBase*                         Characters;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.UpdateSelectionEvent
struct UBP_GP_Script2_C_UpdateSelectionEvent_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.CalcLookAtPointPitch
struct UBP_GP_Script2_C_CalcLookAtPointPitch_Params
{
	struct FVector                                     LookAtPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Ptich;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.UpdateMessageEvent
struct UBP_GP_Script2_C_UpdateMessageEvent_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.GetOneTopMasterComponent
struct UBP_GP_Script2_C_GetOneTopMasterComponent_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.CreateQuesetDefaultCamera
struct UBP_GP_Script2_C_CreateQuesetDefaultCamera_Params
{
	struct FVector                                     BaseLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FDT_PF_QuestArgs                            Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GP_Script2.BP_GP_Script2_C.GetAllPerson
struct UBP_GP_Script2_C_GetAllPerson_Params
{
	TArray<class ACharacter*>                          Characters;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.CreateQuestCamera
struct UBP_GP_Script2_C_CreateQuestCamera_Params
{
	class AActor*                                      BaseActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      NewCamera;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.DuplicateQuestPerson
struct UBP_GP_Script2_C_DuplicateQuestPerson_Params
{
	class AActor*                                      SourceCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  NewCharacter;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.ChangeOwnerScapegoat
struct UBP_GP_Script2_C_ChangeOwnerScapegoat_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.ShowOwner
struct UBP_GP_Script2_C_ShowOwner_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetCharacterActive
struct UBP_GP_Script2_C_SetCharacterActive_Params
{
	class ACharacter*                                  InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.CreateQuestPerson
struct UBP_GP_Script2_C_CreateQuestPerson_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAchScenarioCharacterID                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UASAnimationSet*                             AnimSet;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.CreatePersonInternal
struct UBP_GP_Script2_C_CreatePersonInternal_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAchScenarioCharacterID                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UASAnimationSet*                             AnimSet;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             AnimSetPath;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPFNpcPlacementData                         PlacementInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EDE_PF_NpcEventCategory>               CaptionCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CaptionNumber;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAsyncLoad;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InitPlayAction;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.DisplayQuestMsgEx
struct UBP_GP_Script2_C_DisplayQuestMsgEx_Params
{
	struct FPFOneTopID                                 GroupID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScriptDelegate                             GetUserDataEvent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_Script2.BP_GP_Script2_C.IsFinishQuestMsg
struct UBP_GP_Script2_C_IsFinishQuestMsg_Params
{
	bool                                               bFinish;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.DisplayQuestMsg
struct UBP_GP_Script2_C_DisplayQuestMsg_Params
{
	struct FPFOneTopID                                 GroupID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     SelectTalkNo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.GetUserItemNum
struct UBP_GP_Script2_C_GetUserItemNum_Params
{
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.AddUserItemNum
struct UBP_GP_Script2_C_AddUserItemNum_Params
{
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                AddNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.ResetPlayerCamera
struct UBP_GP_Script2_C_ResetPlayerCamera_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.GetActor
struct UBP_GP_Script2_C_GetActor_Params
{
	struct FString                                     ActorName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.GetPlayerActor
struct UBP_GP_Script2_C_GetPlayerActor_Params
{
	class AActor*                                      PlayerActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.WarpToTargetPoint
struct UBP_GP_Script2_C_WarpToTargetPoint_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Locator;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.DisplayTalkMsg
struct UBP_GP_Script2_C_DisplayTalkMsg_Params
{
	int                                                TalkNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetPostEventBattle
struct UBP_GP_Script2_C_SetPostEventBattle_Params
{
	struct FString                                     BattleMapName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     EncountGroupName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bQuestContinue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.ShowPartyTop
struct UBP_GP_Script2_C_ShowPartyTop_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.IsTimeElapsed
struct UBP_GP_Script2_C_IsTimeElapsed_Params
{
	int                                                Minutes;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                elapsedDay;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                elapsedHour;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ElapsedMinute;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bElapsed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.GetTimeStamp
struct UBP_GP_Script2_C_GetTimeStamp_Params
{
	int                                                Timestamp;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.MakeSelections
struct UBP_GP_Script2_C_MakeSelections_Params
{
	TArray<int>                                        Selects;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Exclusions;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        NewSelects;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Indices;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.IsQuestGuideStepFlag
struct UBP_GP_Script2_C_IsQuestGuideStepFlag_Params
{
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDE_PF_Script_QuestFlag>               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClear;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetQuestGuideStepFlag
struct UBP_GP_Script2_C_SetQuestGuideStepFlag_Params
{
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDE_PF_Script_QuestFlag>               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.IsQuestGuideFlag
struct UBP_GP_Script2_C_IsQuestGuideFlag_Params
{
	TEnumAsByte<EDE_PF_Script_QuestFlag>               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClear;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetQuestGuideFlag
struct UBP_GP_Script2_C_SetQuestGuideFlag_Params
{
	TEnumAsByte<EDE_PF_Script_QuestFlag>               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.CreatePC
struct UBP_GP_Script2_C_CreatePC_Params
{
	struct FString                                     Locator;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.FindActorFromName
struct UBP_GP_Script2_C_FindActorFromName_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.SetCamera
struct UBP_GP_Script2_C_SetCamera_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              BlendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.FindLocator
struct UBP_GP_Script2_C_FindLocator_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class ATargetPoint*                                Locator;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.CreatePerson
struct UBP_GP_Script2_C_CreatePerson_Params
{
	struct FString                                     Locator;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FAchScenarioCharacterID                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UASAnimationSet*                             AnimSet;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.OnSelection
struct UBP_GP_Script2_C_OnSelection_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.SubProcessKill
struct UBP_GP_Script2_C_SubProcessKill_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.IsSubProcessCompleted
struct UBP_GP_Script2_C_IsSubProcessCompleted_Params
{
	bool                                               bCompleted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.RunSubProcess
struct UBP_GP_Script2_C_RunSubProcess_Params
{
	class UClass*                                      ProcessClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAriseGameProcess*                           Process;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAriseGameProcessComponent*                  Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.Main
struct UBP_GP_Script2_C_Main_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.Go Back Title
struct UBP_GP_Script2_C_Go_Back_Title_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.Finish Quest Start
struct UBP_GP_Script2_C_Finish_Quest_Start_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.Finish Quest End
struct UBP_GP_Script2_C_Finish_Quest_End_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.Quest Start
struct UBP_GP_Script2_C_Quest_Start_Params
{
	struct FDT_PF_QuestArgs                            Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GP_Script2.BP_GP_Script2_C.Quest End
struct UBP_GP_Script2_C_Quest_End_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.Simple Quest Start
struct UBP_GP_Script2_C_Simple_Quest_Start_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.Simple Quest Start Finish
struct UBP_GP_Script2_C_Simple_Quest_Start_Finish_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.Quest Post
struct UBP_GP_Script2_C_Quest_Post_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.Finish Quest Post
struct UBP_GP_Script2_C_Finish_Quest_Post_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.Play Quest Effects
struct UBP_GP_Script2_C_Play_Quest_Effects_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.ProcessBegin
struct UBP_GP_Script2_C_ProcessBegin_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.On Event End
struct UBP_GP_Script2_C_On_Event_End_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.On Event Start
struct UBP_GP_Script2_C_On_Event_Start_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.ReceiveBeginPlay
struct UBP_GP_Script2_C_ReceiveBeginPlay_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.ReceiveEndPlay
struct UBP_GP_Script2_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.On Post Begin Talk
struct UBP_GP_Script2_C_On_Post_Begin_Talk_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.On Pre End Talk
struct UBP_GP_Script2_C_On_Pre_End_Talk_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.On Pre Begin Talk
struct UBP_GP_Script2_C_On_Pre_Begin_Talk_Params
{
};

// Function BP_GP_Script2.BP_GP_Script2_C.On Post End Talk
struct UBP_GP_Script2_C_On_Post_End_Talk_Params
{
	class UPFOneTopComponent*                          OneTopComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GP_Script2.BP_GP_Script2_C.On Setup Talk
struct UBP_GP_Script2_C_On_Setup_Talk_Params
{
	struct FPFOneTopID                                 OneTopID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     SelectTalkNo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_Script2.BP_GP_Script2_C.ExecuteUbergraph_BP_GP_Script2
struct UBP_GP_Script2_C_ExecuteUbergraph_BP_GP_Script2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
