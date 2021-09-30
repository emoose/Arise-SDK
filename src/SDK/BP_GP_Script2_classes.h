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

// BlueprintGeneratedClass BP_GP_Script2.BP_GP_Script2_C
// 0x0321 (0x0421 - 0x0100)
class UBP_GP_Script2_C : public UAriseGameProcessComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (Transient, DuplicateTransient)
	TArray<class AAriseGameProcess*>                   SubProcess;                                               // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FQuestID                                    QuestID;                                                  // 0x0118(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FModifiedText>                       SelectList;                                               // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ACharacter*>                          InstanceCharacters;                                       // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACharacter*>                          ReferenceCharacters;                                      // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bResetCamera;                                             // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	struct FString                                     UserString;                                               // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bAlreadyPlayerLock;                                       // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	class AActor*                                      OwnerActor;                                               // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AAriseGameMode*                              AriseGameMode;                                            // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableBattle;                                            // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowQuestStart;                                          // 0x0189(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowQuestClear;                                          // 0x018A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x018B(0x0005) MISSED OFFSET
	TArray<struct FString>                             UpdateScenarioFlagNameList;                               // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SeqMsgID;                                                 // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	class ABP_GP_ScriptSystem_C*                       ScriptSystem;                                             // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      SavedOwnerActor;                                          // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOwnerScapegoat;                                          // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET
	class ACameraActor*                                QuestCamera;                                              // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCreateQuestCamera;                                       // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	TArray<struct FAchScenarioCharacterID>             QuestPersonLocations;                                     // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bQuestStartEndAutoScreenFade;                             // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishQuestStart;                                        // 0x01E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishQuestEnd;                                          // 0x01E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowQuestEnd;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SysSelectedID;                                            // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OneTopLastSelectTextNo;                                   // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOneTopSelectEnableCancel;                                // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishSetupTalk;                                         // 0x01ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x01EE(0x0002) MISSED OFFSET
	struct FDT_PF_QuestArgs                            QuestArgument;                                            // 0x01F0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bSaveQuestOpen;                                           // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSaveQuestClear;                                          // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEventStartFadeIn;                                        // 0x0232(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x0233(0x0005) MISSED OFFSET
	struct FQuestData                                  SaveQuestData;                                            // 0x0238(0x00E8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EQuestGuideProgress>                   SaveQuestGuideProgress;                                   // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	class ACharacter*                                  PlayerMainActor;                                          // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACharacter*                                  PlayerSubActor;                                           // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CurrentCaptionActor;                                      // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerCount;                                              // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClientCount;                                              // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishBeginTalk;                                         // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bQuestEvent;                                              // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishEndTalk;                                           // 0x034A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x034B(0x0005) MISSED OFFSET
	struct FDT_PF_QuestCameraPreset                    QuestCameraPreset;                                        // 0x0350(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      QuestLocationActor;                                       // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishQuestPost;                                         // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableMapJump;                                           // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x038A(0x0006) MISSED OFFSET
	struct FString                                     MapJumpMapName;                                           // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     MapJumpLocatorName;                                       // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bEnableTeleportLocator;                                   // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	struct FString                                     TeleportLocatorMapLocatorName;                            // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FadeInDuration_TalkStart;                                 // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutDuration_End;                                      // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeInDuration_End;                                       // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishEventEnd;                                          // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	float                                              FadeInDuration_QuestStart;                                // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OneTopLastTalkCount;                                      // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipQuestStart;                                          // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipQuestClear;                                          // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x6];                                       // 0x03E2(0x0006) MISSED OFFSET
	TArray<class ABP_PF_NpcCharacterEvent_C*>          MovementPersonClient;                                     // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_PF_NpcCharacterEvent_C*>          MovementPersonPlayer;                                     // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bTrapInLockPlayerFree;                                    // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EQuestStepProgress>>            SaveQuestStepProgress;                                    // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bSkipAutoSave;                                            // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GP_Script2.BP_GP_Script2_C");
		return ptr;
	}


	void SetPostEventManagedScriptKill(bool bPlayQuest);
	void RequestAutoSave();
	void ManageAutoSave();
	void IsQuestAdvanced(bool* bResult);
	void CollectionReferenceCharacters();
	void CollectionQuestStatus();
	void DoPostEventTeleportLocator();
	void DoPostEventBattle();
	void DoPostEventMapJump();
	void ChangeCameraPresetOverride(const struct FString& NewCameraPresetName);
	void ChangeCameraPreset(const struct FString& NewCameraPresetName);
	void SetPersonVisibility(const struct FAchScenarioCharacterID& CharacterID, bool bVisible);
	void HideMovementPerson(TArray<class ABP_PF_NpcCharacterEvent_C*>* MovementPerson);
	void AddMovementPerson(class AActor* Object);
	void TermQuest();
	void TrapIn(float Duration, TEnumAsByte<EVisualFadeLayer> Layer);
	void ShowNowLoading(bool bShow);
	void IsQuestContinue(bool* bResult);
	void SetFacialPresetPerson(const struct FAchScenarioCharacterID& CharacterID, int PresetNo);
	void SetDefaultFacialPerson(const struct FAchScenarioCharacterID& CharacterID);
	void ResetPF();
	void DestroyInstatnceCharacter();
	void TermScriptSystem();
	bool BuildPersonInternal(class ABP_PF_NpcCharacterEvent_C* Character, const struct FString& InCharacterID, EPFNpcCharacterBuildType Type, const struct FName& InitPlayAction);
	void IsLoadComplateEncountEffect(bool* bCompleted);
	void SetCaptionActorLookAt();
	void SetCaptionActorLip(class UPFOneTopComponent* OneTopComponent);
	void ResetCaptionActor();
	void FindVoiceSpeaker(const struct FString& InCharacterID, class AActor** OutSpeaker);
	void IsQuestGuideLocFlag(int Step, const struct FString& actorId, bool* bClear);
	void SetQuestGuideLocFlag(int Step, const struct FString& actorId, bool bClear);
	void SetQuestContinueOff();
	void SetQuestContinueOn(bool bKeepBlackOut);
	void SetPostEventTeleportLocator(const struct FString& MapLocatorName);
	void SetPostEventMapJump(const struct FString& MapName, const struct FString& MapLocatorName);
	void SetVisbilityPF(bool bVisible);
	void DuplicatePerson__from_Npc_(const struct FPFNpcDefineID& DefineID, class ACharacter** NewCharacter);
	void DuplicatePersonInternal(class AActor* SourceCharacter, bool bAsyncLoad, class ACharacter** NewCharacter);
	void PostMessageEvent(class UPFOneTopComponent* OneTopComponent);
	void IsAllPersonBuildCompleted(bool* bCompleted);
	void SetCaptionCamera(const struct FString& CharacterID);
	void GetPlayerAnimSetPath(const struct FString& Name, struct FSoftObjectPath* AnimSetPath);
	void SetCaptionActor(class AActor* CaptionActor, class UPFOneTopComponent* OneTopComponent);
	void GetCategoryPerson(TEnumAsByte<EDE_PF_NpcEventCategory> Category, TArray<class ACharacter*>* Characters);
	void SetLookAtPerson(TEnumAsByte<EDE_PF_NpcEventCategory> Category, class AActor* TargetPerson);
	void IsMainQuest(bool* bResult);
	void InitQuest();
	void CreateEncountEffect();
	void InitScriptSystem();
	void CheckQuestClear();
	void CheckQuestStart();
	void GetPerson(const struct FString& CharacterID, class APFNpcCharacterBase** Characters);
	void UpdateSelectionEvent(class UPFOneTopComponent* OneTopComponent);
	void CalcLookAtPointPitch(const struct FVector& LookAtPoint, float* Ptich);
	void UpdateMessageEvent(class UPFOneTopComponent* OneTopComponent);
	void GetOneTopMasterComponent(class UPFOneTopComponent** OneTopComponent);
	void CreateQuesetDefaultCamera(const struct FVector& BaseLocation, const struct FDT_PF_QuestArgs& Args);
	void GetAllPerson(TArray<class ACharacter*>* Characters);
	void CreateQuestCamera(class AActor* BaseActor, const struct FVector& LookAtPoint, class AActor** NewCamera);
	void DuplicateQuestPerson(class AActor* SourceCharacter, class ACharacter** NewCharacter);
	void ChangeOwnerScapegoat();
	void ShowOwner(bool bShow);
	void SetCharacterActive(class ACharacter* InCharacter, bool bActive);
	void CreateQuestPerson(int ID, const struct FAchScenarioCharacterID& CharacterID, class UASAnimationSet* AnimSet, class ACharacter** Character);
	void CreatePersonInternal(const struct FTransform& Transform, const struct FAchScenarioCharacterID& ID, class UASAnimationSet* AnimSet, const struct FSoftObjectPath& AnimSetPath, const struct FPFNpcPlacementData& PlacementInfo, TEnumAsByte<EDE_PF_NpcEventCategory> CaptionCategory, int CaptionNumber, bool bAsyncLoad, const struct FName& InitPlayAction, class ACharacter** Character);
	void DisplayQuestMsgEx(const struct FPFOneTopID& GroupID, struct FScriptDelegate* GetUserDataEvent);
	void IsFinishQuestMsg(bool* bFinish);
	void DisplayQuestMsg(const struct FPFOneTopID& GroupID, const struct FString& SelectTalkNo);
	void GetUserItemNum(const struct FString& ItemLabel, int* ItemNum);
	void AddUserItemNum(const struct FString& ItemLabel, int AddNum);
	void ResetPlayerCamera();
	void GetActor(const struct FString& ActorName, class AActor** Actor);
	void GetPlayerActor(class AActor** PlayerActor);
	void WarpToTargetPoint(class AActor* Actor, const struct FString& Locator);
	void DisplayTalkMsg(int TalkNo);
	void SetPostEventBattle(const struct FString& BattleMapName, const struct FString& EncountGroupName, bool bQuestContinue);
	void ShowPartyTop(bool bShow);
	void IsTimeElapsed(int Minutes, int elapsedDay, int elapsedHour, int ElapsedMinute, bool* bElapsed);
	void GetTimeStamp(int* Timestamp);
	void MakeSelections(TArray<int>* Selects, TArray<int>* Exclusions, TArray<int>* NewSelects, TArray<int>* Indices);
	void IsQuestGuideStepFlag(int Step, TEnumAsByte<EDE_PF_Script_QuestFlag> Flag, bool* bClear);
	void SetQuestGuideStepFlag(int Step, TEnumAsByte<EDE_PF_Script_QuestFlag> Flag);
	void IsQuestGuideFlag(TEnumAsByte<EDE_PF_Script_QuestFlag> Flag, bool* bClear);
	void SetQuestGuideFlag(TEnumAsByte<EDE_PF_Script_QuestFlag> Flag);
	void CreatePC(const struct FString& Locator, EArisePartyID PartyId, class ACharacter** Character);
	void FindActorFromName(class UClass* Class, const struct FString& Name, class AActor** Actor);
	void SetCamera(const struct FString& Name, float BlendTime);
	void FindLocator(const struct FString& Name, class ATargetPoint** Locator);
	void CreatePerson(const struct FString& Locator, const struct FAchScenarioCharacterID& ID, class UASAnimationSet* AnimSet, class ACharacter** Character);
	void OnSelection();
	void SubProcessKill();
	void IsSubProcessCompleted(bool* bCompleted);
	void RunSubProcess(class UClass* ProcessClass, class AAriseGameProcess** Process, class UAriseGameProcessComponent** Component);
	void Main(const struct FString& String);
	void Go_Back_Title();
	void Finish_Quest_Start();
	void Finish_Quest_End();
	void Quest_Start(const struct FDT_PF_QuestArgs& Args);
	void Quest_End();
	void Simple_Quest_Start();
	void Simple_Quest_Start_Finish();
	void Quest_Post();
	void Finish_Quest_Post();
	void Play_Quest_Effects();
	void ProcessBegin();
	void On_Event_End();
	void On_Event_Start();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void On_Post_Begin_Talk(class UPFOneTopComponent* OneTopComponent);
	void On_Pre_End_Talk(class UPFOneTopComponent* OneTopComponent);
	void On_Pre_Begin_Talk();
	void On_Post_End_Talk(class UPFOneTopComponent* OneTopComponent);
	void On_Setup_Talk(const struct FPFOneTopID& OneTopID, const struct FString& SelectTalkNo);
	void ExecuteUbergraph_BP_GP_Script2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
