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

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetupOneTopComponent
struct ABP_GP_ScriptSystem_C_SetupOneTopComponent_Params
{
	struct FPFOneTopID                                 OneTopID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     SelectTalkNo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.CollectMasterComponent
struct ABP_GP_ScriptSystem_C_CollectMasterComponent_Params
{
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.PerseActionLookAtAimParameter
struct ABP_GP_ScriptSystem_C_PerseActionLookAtAimParameter_Params
{
	struct FString                                     SourceString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetCharacterActionLookAtAim
struct ABP_GP_ScriptSystem_C_SetCharacterActionLookAtAim_Params
{
	class APFNpcCharacterBase*                         TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PF_NPC_Stand_AIController_C*             TargetController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDE_PF_NPC_AIController_LookAtType>    LookAtType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetCharacterPlayAction
struct ABP_GP_ScriptSystem_C_SetCharacterPlayAction_Params
{
	class APFNpcCharacterBase*                         TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PF_NPC_Stand_AIController_C*             TargetController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActionKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bBlend;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPFNpcAnimPlayActionLoop                           Loop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.SetCharacterActionLookAt
struct ABP_GP_ScriptSystem_C_SetCharacterActionLookAt_Params
{
	class APFNpcCharacterBase*                         TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PF_NPC_Stand_AIController_C*             TargetController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LookAtTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<EDE_PF_NPC_AIController_LookAtType>    LookAtType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NonTargetLookAtActor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_PlaySE
struct ABP_GP_ScriptSystem_C_MetaEvent_PlaySE_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.IsMessageWindowClose
struct ABP_GP_ScriptSystem_C_IsMessageWindowClose_Params
{
	bool                                               bClose;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnPlayVoiceEvent
struct ABP_GP_ScriptSystem_C_OnPlayVoiceEvent_Params
{
	struct FString                                     VoiceLabel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     CaptionId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bHasLipSync;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.GetMoveToLocation
struct ABP_GP_ScriptSystem_C_GetMoveToLocation_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_CheckTargetCount
struct ABP_GP_ScriptSystem_C_MetaEvent_CheckTargetCount_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.ApplyCameraPreset
struct ABP_GP_ScriptSystem_C_ApplyCameraPreset_Params
{
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetCameraPreset
struct ABP_GP_ScriptSystem_C_MetaEvent_SetCameraPreset_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.«0á0é0RŠ0ÿfH0
struct ABP_GP_ScriptSystem_C_«0á0é0RŠ0ÿfH0_Params
{
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.×0ê0»0Ã0È0iÜ_
struct ABP_GP_ScriptSystem_C_×0ê0»0Ã0È0iÜ__Params
{
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.¯0ê0Ã0×0Ü0ü0É0k0³0Ô0ü0
struct ABP_GP_ScriptSystem_C_¯0ê0Ã0×0Ü0ü0É0k0³0Ô0ü0_Params
{
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_AddGald
struct ABP_GP_ScriptSystem_C_MetaEvent_AddGald_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_AddUserItemNum
struct ABP_GP_ScriptSystem_C_MetaEvent_AddUserItemNum_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.GetScriptQuestFlag
struct ABP_GP_ScriptSystem_C_GetScriptQuestFlag_Params
{
	struct FString                                     FlagString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<EDE_PF_Script_QuestFlag>               Flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideStepFlagByID
struct ABP_GP_ScriptSystem_C_MetaEvent_SetQuestGuideStepFlagByID_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideFlagByID
struct ABP_GP_ScriptSystem_C_MetaEvent_SetQuestGuideFlagByID_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetScenarioFlag
struct ABP_GP_ScriptSystem_C_MetaEvent_SetScenarioFlag_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetScenarioCounter
struct ABP_GP_ScriptSystem_C_MetaEvent_SetScenarioCounter_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_AddFavorability
struct ABP_GP_ScriptSystem_C_MetaEvent_AddFavorability_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.FindNPC
struct ABP_GP_ScriptSystem_C_FindNPC_Params
{
	struct FString                                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class APFNpcCharacterBase*                         Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_IsQuestGuideFlag
struct ABP_GP_ScriptSystem_C_MetaEvent_IsQuestGuideFlag_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideFlag
struct ABP_GP_ScriptSystem_C_MetaEvent_SetQuestGuideFlag_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_IsQuestGuideStepFlag
struct ABP_GP_ScriptSystem_C_MetaEvent_IsQuestGuideStepFlag_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent
struct ABP_GP_ScriptSystem_C_MetaEvent_Params
{
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_SetQuestGuideStepFlag
struct ABP_GP_ScriptSystem_C_MetaEvent_SetQuestGuideStepFlag_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterEvent
struct ABP_GP_ScriptSystem_C_OnCharacterEvent_Params
{
	TArray<struct FPFOneTopCharacterEvent>             CharacterEvents;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_FadeOut
struct ABP_GP_ScriptSystem_C_MetaEvent_FadeOut_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_FadeIn
struct ABP_GP_ScriptSystem_C_MetaEvent_FadeIn_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_CheckItem
struct ABP_GP_ScriptSystem_C_MetaEvent_CheckItem_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MetaEvent_Custom
struct ABP_GP_ScriptSystem_C_MetaEvent_Custom_Params
{
	TArray<struct FString>                             Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnMetaEvent
struct ABP_GP_ScriptSystem_C_OnMetaEvent_Params
{
	unsigned char                                      MetaType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             UserData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.GetSelectionNo
struct ABP_GP_ScriptSystem_C_GetSelectionNo_Params
{
	int                                                SelectIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectNo;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.MakeSelection
struct ABP_GP_ScriptSystem_C_MakeSelection_Params
{
	TArray<struct FModifiedText>                       InSelectMessages;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.TickMessage
struct ABP_GP_ScriptSystem_C_TickMessage_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bClose;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.FinishMessage
struct ABP_GP_ScriptSystem_C_FinishMessage_Params
{
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.UserConstructionScript
struct ABP_GP_ScriptSystem_C_UserConstructionScript_Params
{
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.Run Message
struct ABP_GP_ScriptSystem_C_Run_Message_Params
{
	struct FPFOneTopID                                 OneTopID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     SelectTalkNo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.End Message
struct ABP_GP_ScriptSystem_C_End_Message_Params
{
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.ReceiveBeginPlay
struct ABP_GP_ScriptSystem_C_ReceiveBeginPlay_Params
{
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.Play MetaEvent_FadeOut
struct ABP_GP_ScriptSystem_C_Play_MetaEvent_FadeOut_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.Play MetaEvent_FadeIn
struct ABP_GP_ScriptSystem_C_Play_MetaEvent_FadeIn_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.ExecuteUbergraph_BP_GP_ScriptSystem
struct ABP_GP_ScriptSystem_C_ExecuteUbergraph_BP_GP_ScriptSystem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterPlayAction__DelegateSignature
struct ABP_GP_ScriptSystem_C_OnCharacterPlayAction__DelegateSignature_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterLookAt__DelegateSignature
struct ABP_GP_ScriptSystem_C_OnCharacterLookAt__DelegateSignature_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnCharacterTurn__DelegateSignature
struct ABP_GP_ScriptSystem_C_OnCharacterTurn__DelegateSignature_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_ScriptSystem.BP_GP_ScriptSystem_C.OnGetUserData__DelegateSignature
struct ABP_GP_ScriptSystem_C_OnGetUserData__DelegateSignature_Params
{
	struct FString                                     UserData01;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     UserData02;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     UserData03;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
