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

// BlueprintGeneratedClass BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PF_QuestManager_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C");
		return ptr;
	}


	void QuestBattleKPIVisit(const struct FName& EncountGroupLabel);
	void RequestForceQuestLineup(const struct FString& QuestLabelID);
	void GetIsArrivedItemCounter(const struct FQuestTargetCounterData& Data, bool* Arrived);
	void GetIsArrivedEnemyCounter(const struct FQuestTargetCounterData& Data, bool* Arrived);
	void RequestAddQuestUpdate(const struct FQuestID& QuestID, int Step);
	void QuestBattleStartByMapLink();
	void CallOnQuestUpdate(bool* bSuccess);
	void UnbindOnQuestUpdate(const struct FAriseSimpleEventData& Event, bool* bSuccess);
	void BindOnQuestUpdate(const struct FAriseSimpleEventData& Event, bool* bSuccess);
	void GetCurrentSubQuest(bool* IsFound, TArray<struct FString>* RetSubQuestIDs, TArray<int>* retSubStepIndices);
	void GetCurrentMainQuest(bool* IsFound, struct FString* retMainQuestID, int* retMainStepIndex);
	void QuestBattleLoad(const struct FString& MapName, const struct FName& EncountGroupName);
	void QuestBattleResultCheck(const struct FName& EncountGroupName);
	void QuestBattleStart();
	void ManagedScriptKillPostFadeIn(float FadeTime, class UObject* ValidCheckObject, bool bPostMapJump);
	void ShowQuestClearEffects(const struct FQuestID& QuestID, bool bGetReward);
	void ShowQuestStartEffects(const struct FQuestID& QuestID, bool bSelectSubQuestMark);
	void IsDuringShowQuestEffects(bool* bShow);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
