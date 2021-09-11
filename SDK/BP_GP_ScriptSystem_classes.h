#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GP_ScriptSystem.BP_GP_ScriptSystem_C
// 0x00C1 (0x03E9 - 0x0328)
class ABP_GP_ScriptSystem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bFinishMessage;                                           // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChoice;                                                  // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x033A(0x0006) MISSED OFFSET
	TArray<int>                                        Selection;                                                // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        SelectExclusion;                                          // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FModifiedText>                       SelectMessages;                                           // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnGetUserData;                                            // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                MetaEventResult;                                          // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class UBP_GP_Script2_C*                            GPScript;                                                 // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      DefaultTargetActor;                                       // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCharacterTurn;                                          // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterLookAt;                                        // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterPlayAction;                                    // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UPFOneTopComponent*                          OneTopComponent;                                          // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FString                                     CameraPresetLabel;                                        // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTO14_BPI_GUI_SYS_MSG_C*                     GUI_SYS_MSG;                                              // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bDuringFade;                                              // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GP_ScriptSystem.BP_GP_ScriptSystem_C");
		return ptr;
	}


	void SetupOneTopComponent(const struct FPFOneTopID& OneTopID, const struct FString& SelectTalkNo);
	void CollectMasterComponent();
	void PerseActionLookAtAimParameter(const struct FString& SourceString, float* Yaw, float* Pitch, float* Distance);
	void SetCharacterActionLookAtAim(class APFNpcCharacterBase* TargetCharacter, class ABP_PF_NPC_Stand_AIController_C* TargetController, TEnumAsByte<EDE_PF_NPC_AIController_LookAtType> LookAtType, float Yaw, float Pitch, float Distance);
	void SetCharacterPlayAction(class APFNpcCharacterBase* TargetCharacter, class ABP_PF_NPC_Stand_AIController_C* TargetController, const struct FString& ActionKey, bool bBlend, bool bForce, EPFNpcAnimPlayActionLoop Loop);
	void SetCharacterActionLookAt(class APFNpcCharacterBase* TargetCharacter, class ABP_PF_NPC_Stand_AIController_C* TargetController, const struct FString& LookAtTarget, TEnumAsByte<EDE_PF_NPC_AIController_LookAtType> LookAtType, class AActor* NonTargetLookAtActor);
	void MetaEvent_PlaySE(TArray<struct FString>* Args);
	void IsMessageWindowClose(bool* bClose);
	void OnPlayVoiceEvent(const struct FString& VoiceLabel, const struct FString& CaptionId, bool bHasLipSync);
	void GetMoveToLocation(class ACharacter* Character, float Yaw, float Distance, struct FVector* Location);
	void MetaEvent_CheckTargetCount(TArray<struct FString>* Args);
	void ApplyCameraPreset();
	void MetaEvent_SetCameraPreset(TArray<struct FString>* Args);
	void «0á0é0RŠ0ÿfH0();
	void ×0ê0»0Ã0È0iÜ_();
	void ¯0ê0Ã0×0Ü0ü0É0k0³0Ô0ü0();
	void MetaEvent_AddGald(TArray<struct FString>* Args);
	void MetaEvent_AddUserItemNum(TArray<struct FString>* Args);
	void GetScriptQuestFlag(const struct FString& FlagString, TEnumAsByte<EDE_PF_Script_QuestFlag>* Flag);
	void MetaEvent_SetQuestGuideStepFlagByID(TArray<struct FString>* Args);
	void MetaEvent_SetQuestGuideFlagByID(TArray<struct FString>* Args);
	void MetaEvent_SetScenarioFlag(TArray<struct FString>* Args);
	void MetaEvent_SetScenarioCounter(TArray<struct FString>* Args);
	void MetaEvent_AddFavorability(TArray<struct FString>* Args);
	void FindNPC(const struct FString& CharacterID, class APFNpcCharacterBase** Character);
	void MetaEvent_IsQuestGuideFlag(TArray<struct FString>* Args);
	void MetaEvent_SetQuestGuideFlag(TArray<struct FString>* Args);
	void MetaEvent_IsQuestGuideStepFlag(TArray<struct FString>* Args);
	void MetaEvent();
	void MetaEvent_SetQuestGuideStepFlag(TArray<struct FString>* Args);
	void OnCharacterEvent(TArray<struct FPFOneTopCharacterEvent>* CharacterEvents);
	void MetaEvent_FadeOut(TArray<struct FString>* Args);
	void MetaEvent_FadeIn(TArray<struct FString>* Args);
	void MetaEvent_CheckItem(TArray<struct FString>* Args);
	void MetaEvent_Custom(TArray<struct FString>* Args);
	void OnMetaEvent(unsigned char MetaType, TArray<struct FString>* UserData, int* Result);
	void GetSelectionNo(int SelectIndex, int* SelectNo);
	void MakeSelection(TArray<struct FModifiedText>* InSelectMessages);
	void TickMessage(class UUserWidget* Widget, bool* bClose);
	void FinishMessage();
	void UserConstructionScript();
	void Run_Message(const struct FPFOneTopID& OneTopID, const struct FString& SelectTalkNo);
	void End_Message();
	void ReceiveBeginPlay();
	void Play_MetaEvent_FadeOut(TEnumAsByte<EVisualFadeLayer> Layer, float Duration);
	void Play_MetaEvent_FadeIn(TEnumAsByte<EVisualFadeLayer> Layer, float Duration);
	void ExecuteUbergraph_BP_GP_ScriptSystem(int EntryPoint);
	void OnCharacterPlayAction__DelegateSignature(class APFNpcCharacterBase* Character);
	void OnCharacterLookAt__DelegateSignature(class APFNpcCharacterBase* Character);
	void OnCharacterTurn__DelegateSignature(class APFNpcCharacterBase* Character);
	void OnGetUserData__DelegateSignature(const struct FString& UserData01, const struct FString& UserData02, const struct FString& UserData03);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
