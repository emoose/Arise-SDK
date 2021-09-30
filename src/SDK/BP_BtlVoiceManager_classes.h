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

// BlueprintGeneratedClass BP_BtlVoiceManager.BP_BtlVoiceManager_C
// 0x0087 (0x04C7 - 0x0440)
class ABP_BtlVoiceManager_C : public ABtlVoiceManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	class UBtlTimerHandleComponent*                    BtlTimerHandle;                                           // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BattleStartHpRate;                                        // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloseTImer;                                               // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TMap<EArisePartyID, int>                           PrevPartyLevel;                                           // 0x0458(0x0050) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	int                                                BattleStartTpRate;                                        // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EtcStrongLevel;                                           // 0x04AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UBP_VoiceValidationHandle_C*>         VoiceValidationHandles;                                   // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                BattleRank;                                               // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDeadInBattle;                                           // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWinTalkRequest;                                         // 0x04C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRegisterConditionRecorder;                               // 0x04C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlVoiceManager.BP_BtlVoiceManager_C");
		return ptr;
	}


	bool CanPlayVoice(const struct FBtlVoiceData& VoiceData, class ABtlCharacterBase* SpeakerUnit);
	void OnEndVoice(bool Success, struct FBtlVoiceMessageCommand* Command);
	class UBtlVoiceHandle* CreateVoiceHandle(class ABtlCharacterBase* Unit);
	TArray<struct FBtlVoiceLottery> GetVoiceLotteries(EBtlVoiceState State, EBtlVoiceCondition Condition);
	void GetVoiceHandleByUnit(class ABtlCharacterBase* Unit, class UBtlVoiceHandle** VoiceHandle);
	float GetInterpTime();
	void GetBattleRank(int* WinRank);
	bool CanResultVoice(const struct FBtlVoice_DatabaseLabel& VoiceLabel, TArray<EBtlVoiceCharaID>* PartyCharacterList);
	void GetSequentialVoiceArray(const struct FBtlVoice_DatabaseLabel& VoiceLabel, TArray<struct FBtlVoice_DatabaseLabel>* VoiceLabelArray);
	void MakeDictionaryText(struct FBtlVoice_DatabaseLabel* VoiceLabel, TArray<struct FDictionaryText>* DictionaryTextArray);
	void CacheResultVoiceLotteries();
	TArray<struct FBtlVoiceLottery> GetResultVoiceLotteries();
	void GetLotteryToDictionaryText(TArray<struct FBtlVoiceLottery> Lotteries, struct FString* Voice_Label);
	void GetMessageDataArray(struct FBtlVoice_DatabaseLabel* VoiceLabel, TArray<class UMessageData*>* ShortChatMessageArray);
	void OnRequestResultVoice();
	void RequestDerivedVoice(const struct FBtlVoiceMessageCommand& SourceCommand, bool* DerivedScenarioVoiceExist);
	void OnLoadTimePatternTable(class UDataTable* DataTable);
	void IsRewardItemInResult(bool Rare, bool* Result);
	void GetValidationHandle(EBtlVoiceState State, EBtlVoiceCondition Condition, TArray<class UBP_VoiceValidationHandle_C*>* Handles);
	void GetEasyFightConditionTime(float* ConditionTime);
	void GetHardFightConditionTime(float* ConditionTime);
	void IsEasyFight(bool* Result);
	void IsHardFight(bool* Result);
	void SetWinTalkRequest(bool Enabled);
	void GetValidationHandleByState(EBtlVoiceState State, TArray<class UBP_VoiceValidationHandle_C*>* Handles);
	void GetValidationHandleByCondition(EBtlVoiceCondition Condition, TArray<class UBP_VoiceValidationHandle_C*>* Handles);
	void VoiceCheck_Win(const struct FString& Label, bool* Result);
	void GetWinRank(int* Rank);
	void IsLevelUpUnit(EPCOrder TargetPcOrder, bool* Result);
	void @MakeVoiceLotteryEtc(TArray<struct FBtlVoiceLottery>* VoiceLottery);
	void UserConstructionScript();
	bool IsRelationshipCheck(const struct FBtlVoiceData& VoiceData);
	void @GetHpRate(bool bVanguardOnly, float* HpRate);
	bool IsCheckVoiceTargetType(class ABtlCharacterBase* Character, const struct FString& VoiceLabel, EBtlVoiceTarget VoiceTarget, class ABtlCharacterBase* VoiceSpeaker);
	void VoiceEvent_OnBeginBattle();
	void VoiceCheck_DamageRate(class ABtlCharacterBase* PartyMember, const struct FString& VoiceLabel, const struct FBtlVoiceInfoData& VoiceInfo, const struct FBtlVoiceConditionData& VoiceCondition, bool* Result);
	void OnLoaded_492A336D42BB9FF86232E4AD65B6DE01(class UObject* Loaded);
	void OnLoaded_2E86D3664C3EA014B57FB3BB939A332F(class UObject* Loaded);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSimpleSignature__DelegateSignature();
	void StoreVoiceValidationHandle();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlSimpleSignature__DelegateSignature();
	void OnLosed();
	void InitializeVoiceRecorder();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDecideWinSignature__DelegateSignature();
	void OnResultShortChat();
	void ClearVoiceValidationHandle();
	void OnLoadVoiceHandleRecord(const struct FSTR_VoiceConditionRecord& Record);
	void InitializeVoiceFlags();
	void OnEndResult();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlAttackArtsSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void InitializeBattleRankFlags();
	void OnGoBackTitle();
	void RegisterEvent();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void UnregisterEvent();
	void StopVoice(float InterpTimeSec);
	void StopVoiceByUnit(class ABtlCharacterBase* Unit, float InterpTimeSec);
	void OnEndLoad();
	void EndLoad(EAriseSaveResult iResult);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature();
	void OnEndVoiceMessageCommand(const struct FBtlVoiceMessageCommand& Command, bool Success);
	void ExecuteUbergraph_BP_BtlVoiceManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
