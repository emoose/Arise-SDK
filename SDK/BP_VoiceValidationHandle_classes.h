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

// BlueprintGeneratedClass BP_VoiceValidationHandle.BP_VoiceValidationHandle_C
// 0x0014 (0x0044 - 0x0030)
class UBP_VoiceValidationHandle_C : public UBtlVoiceValidationHandle
{
public:
	class ABtlVoiceManager*                            VoiceManager;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	EBtlVoiceState                                     VoiceState;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBtlVoiceCondition                                 VoiceCondition;                                           // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              TalkWeight;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeriveWeight;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VoiceValidationHandle.BP_VoiceValidationHandle_C");
		return ptr;
	}


	void IsTargetableInCutScene(class ABtlCharacterBase* Unit, bool* Result);
	TArray<class ABtlCharacterBase*> GetEnemyUnitsInCutScene();
	void OnEndBattle();
	TArray<struct FBtlVoiceLottery> GetDerivedVoiceListByInternalPredicate(int SourceVoiceIndex, class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, bool DelayRequest, bool TalkRequest, bool IgnoreOrder, const struct FScriptDelegate& UnitFilter, const struct FScriptDelegate& VoiceFilter);
	void SetBattleTimerByEvent(const struct FScriptDelegate& Event, float Time, bool bLooping);
	bool RequestVoiceLottery(class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, bool TalkRequest, bool IgnoreOrder);
	TArray<struct FBtlVoiceLottery> GetDerivedVoiceList(const struct FBtlVoiceMessageCommand& SourceCommand);
	TArray<struct FBtlVoiceLottery> GetVoiceListByInternalPredicate(class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, bool DelayRequest, bool TalkRequest, bool IgnoreOrder, const struct FScriptDelegate& UnitFilter, const struct FScriptDelegate& VoiceFilter);
	void IsRequestVoiceConditionMatched(class ABtlCharacterBase* Speaker, class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, const struct FString& Args, bool* Result);
	void IsDerivedVoiceConditionMatched(int SourceVoiceIndex, class ABtlCharacterBase* Speaker, class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, const struct FString& Args, bool* Result);
	bool BreakConditionArgs(const struct FString& ConditionArgs, int RequiredCount, TArray<struct FString>* Args);
	void OnBeginBattle();
	void IsVoiceConditionMatched(class ABtlCharacterBase* Speaker, class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, const struct FString& Args, bool* Result);
	void IsTargetConditionMatched(class ABtlCharacterBase* Speaker, class ABtlCharacterBase* Character, const struct FString& Label, EBtlVoiceTarget Target, bool* Result);
	TArray<struct FBtlVoiceLottery> GetVoiceList();
	TArray<struct FBtlVoiceLottery> GetVoiceListByPredicate(bool TalkRequired, class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, bool IgnoreOrder);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
