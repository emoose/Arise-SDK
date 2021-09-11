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

// BlueprintGeneratedClass BP_PF_QuestManager.BP_PF_QuestManager_C
// 0x01B3 (0x051B - 0x0368)
class ABP_PF_QuestManager_C : public AQuestManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bScenarioChange;                                          // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnQuestUpdate;                                            // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bBattleAsyncLoad;                                         // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	struct FString                                     BattleMapName;                                            // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       BattleEncountGroupName;                                   // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemCounter_NewNum;                                       // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<struct FQuestTargetCounterData>             PurposeEnemyCounterList;                                  // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FQuestTargetCounterData>             PurposeItemCounterList;                                   // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bItemGetEvent;                                            // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	TMap<int, int>                                     ItemGetMap;                                               // 0x03E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bBattleEvent;                                             // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	TMap<struct FName, int>                            SaveDefeatEnemy;                                          // 0x0440(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             QuestUpdateQueue;                                         // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_BtlLaunchWorkerActor_C*                  QuestBattleLauncher;                                      // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateQuestEvent;                                        // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsControlEnable;                                         // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsQuestContinue;                                         // 0x04AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x04AB(0x0005) MISSED OFFSET
	TArray<struct FBtlEncountGroupParam>               SaveDefeatEncountGroup;                                   // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bFinishQuestEffects;                                      // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishSelectSubQuestMark;                                // 0x04C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBattleByMapLink;                                         // 0x04C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x04C3(0x0005) MISSED OFFSET
	TMap<struct FString, struct FQuestTargetCounterData> TargetCounterScriptPlayCache;                             // 0x04C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUpdateTargetCounterScriptPlay;                           // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bImmediateAutoSave;                                       // 0x0519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bItemGetEventArrivedStep;                                 // 0x051A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_QuestManager.BP_PF_QuestManager_C");
		return ptr;
	}


	void GetIsArrivedItemCounter(const struct FQuestTargetCounterData& Data, bool* Arrived);
	void GetIsArrivedEnemyCounter(const struct FQuestTargetCounterData& Data, bool* Arrived);
	void CallOnQuestUpdate(bool* bSuccess);
	void UnbindOnQuestUpdate(const struct FAriseSimpleEventData& Event, bool* bSuccess);
	void BindOnQuestUpdate(const struct FAriseSimpleEventData& Event, bool* bSuccess);
	void GetCurrentSubQuest(bool* IsFound, TArray<struct FString>* RetSubQuestIDs, TArray<int>* retSubStepIndices);
	void GetCurrentMainQuest(bool* IsFound, struct FString* retMainQuestID, int* retMainStepIndex);
	void IsDuringShowQuestEffects(bool* bShow);
	void FlushTargetCounterScriptPlayCache();
	void CheckTargetCounterScriptPlay(const struct FQuestTargetCounterData& CounterData, class AActor** NewPlayScriptActor);
	void SetBattleByMapLink(bool bEnable);
	void CheckEnemyScriptContinue(TArray<struct FBtlEncountGroupParam>* EncountGroup);
	void OnBattleKPIVisit(TArray<struct FBtlEncountGroupParam>* Array);
	void KPI(const struct FQuestTargetCounterData& CounterData, EAriseKpiExDungeonData InDataType);
	void NotifyEnemyCounter(const struct FString& EnemyID, int DefeatNum, int DefeatMax);
	void FlushQuestUpdateQueue(const struct FString& QuestID);
	void AddQuestUpdateQueue(const struct FString& QuestID, int QuestStep);
	void NotifyItemCounter(int ItemID, int NewNum);
	bool ReceiveOnCheckLineup();
	void IsArrivedItemCounter(const struct FQuestTargetCounterData& CounterData, bool* bArrived);
	void IsArrivedEnemyCounter(const struct FQuestTargetCounterData& CounterData, bool* bArrived);
	void GetItemCounter(const struct FQuestTargetCounterData& CounterData, int* Count);
	void GetEnemyCounter(const struct FQuestTargetCounterData& CounterData, int* Count);
	void CheckTargetCounterArrivedOptions(const struct FQuestTargetCounterData& CounterData);
	void DoBattleEvent();
	void DoItemGetEvent();
	void OnQuestCounterCheck();
	void ApplyItemCounter(const struct FQuestTargetCounterData& CounterData, bool* bArrived);
	void CheckItemCounter(int ItemID, int NewNum);
	void ApplyEnemyCounter(const struct FQuestTargetCounterData& CounterData, bool* bArrived);
	void CheckTargetCounter(const struct FQuestTargetCounterData& QuestTargetCounterData, const struct FScriptDelegate& Delegate, bool* bArrived);
	void CheckEnemyCounter(const struct FString& EncountGroup);
	void OnBattleStart();
	void OnBattleLoad(const struct FString& MapName, const struct FName& EncountGroupName);
	void OnBattleFinish();
	void GetTimeToMinutes(int CurrentTime, int TimeDay, int TimeHour, int TimeMinute, int* Minutes);
	void ForceQuestLineup(const struct FString& QuestLabelID);
	void QuestLineupByDatabase(const struct FQuestLineupData& QuestLineupData);
	void OnQuestLineupCheckByDatabase();
	void QuestLineupFromCounterAndScenarioFlagAndTimeStamp(const struct FQuestID& QuestID, int Chapter, int Section, int Timestamp, int elapsedDay, int elapsedHour, int ElapsedMinute, TArray<struct FString>* ConditionScenarioFlags);
	void QuestLineupFromCounterAndTimeStamp(const struct FQuestID& QuestID, int Capter, int Section, int Timestamp, int elapsedDay, int ElaspedHour, int ElapsedMinute);
	void OnInteractionCheck();
	void CheckScenarioFlags(TArray<struct FString>* Flags, bool* IsValid);
	void CheckScenarioCounter(int Capter, int Section, bool* IsValid);
	void QuestLineupFromCounterAndScenarioFlag(const struct FQuestID& QuestID, int Chapter, int Section, TArray<struct FString>* ConditionScenarioFlags);
	void QuestLineupFromCounter(const struct FQuestID& QuestID, int Capter, int Section);
	void OnQuestLineupCheck();
	void OnItemGetCheck(int ItemID, int NewNum);
	void OnBattleResultCheck(TArray<struct FName>* EncountLabel);
	void UserConstructionScript();
	void CHECK_SQ_0665_PLEASEWIZARD();
	void CHECK_SQ_0680_GOMIHIROI();
	void CHECK_SQ_0465_DAIDOKORO();
	void CHECK_SQ_0260_IWABA();
	void CHECK_SQ_0080_MORESALES();
	void CHECK_SQ_0160_WARASIBE();
	void CHECK_SQ_0355_REQUEST();
	void CHECK_SQ_0350_NEWLEADER();
	void CHECK_SQ_0360_PRIZESTART();
	void Select_Sub_Quest_Mark(const struct FString& QuestID);
	void ShowQuestClearEffects(const struct FQuestID& QuestID, bool bGetReward);
	void ShowQuestStartEffects(const struct FQuestID& QuestID, bool bSelectSubQuestMark);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CHECK_SQ_0030_NABESAGASI();
	void Event_OnChangeScenarioCounter(int counter, int Prev);
	void Event_OnChageScenarioFlag(int Flag, bool bValid);
	void CHECK_SQ_0040_KANATOKO();
	void Event_Add_Item(int ItemID, int OldNum, int NewNum);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void CHECK_SQ_0060_FIELDWORK();
	void On_Event_Field_Wakeup(unsigned char PrevScene);
	void Register_Event_Field_Wakeup();
	void Event_OnBattleFinalize(const struct FBtlResultInfo& ResultInfo);
	void On_Refresh_Post_FadeIn(float FadeTime, class UObject* ValidCheckObject, bool bPostMapJump);
	void CHECK_SQ_0205_AFTER();
	void EventDoCollectLocators();
	void ManagedScriptKillPostFadeIn(float FadeTime, class UObject* ValidCheckObject, bool bPostMapJump);
	void QuestBattleLoad(const struct FString& MapName, const struct FName& EncountGroupName);
	void QuestBattleStart();
	void QuestBattleResultCheck(const struct FName& EncountGroupName);
	void QuestBattleStartByMapLink();
	void RequestAddQuestUpdate(const struct FQuestID& QuestID, int Step);
	void RequestForceQuestLineup(const struct FString& QuestLabelID);
	void Do_Post_Map_Change(const struct FString& NewMapName, const struct FString& OldMapName);
	void QuestBattleKPIVisit(const struct FName& EncountGroupLabel);
	void On_Auto_Save_Execute();
	void Event_OnChangeDisplayScene(unsigned char ChangedScene, unsigned char OldScene);
	void On_Auto_Save_Cancel();
	void ExecuteUbergraph_BP_PF_QuestManager(int EntryPoint);
	void OnQuestUpdate__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
