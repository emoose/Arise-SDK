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

// BlueprintGeneratedClass BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PF_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_SetQuestGuideStepOpenCheck(const struct FQuestID& QuestID, int QuestStep, int StepStart, int StepEnd, bool bGuideUpdate, class UObject* __WorldContext);
	bool STATIC_RotateToBackward(class AActor* Target, class AActor* To, bool bTeleportPhysics, class UObject* __WorldContext);
	void STATIC_WhiteIn(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext);
	bool STATIC_RotateTo(class AActor* Target, class AActor* To, bool bTeleportPhysics, class UObject* __WorldContext);
	void STATIC_WhiteOut(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext);
	void STATIC_GetQuestGuideStepShowFlag(const struct FQuestID& QuestID, int StepNo, class UObject* __WorldContext, bool* ShowFlag);
	void STATIC_BlackOut_Deactive_(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext);
	void STATIC_SetNPCAdjustHeightWithActor(const struct FPFNpcDefineID& DefineID, class AActor* Target, class UObject* __WorldContext);
	void STATIC_CollectQuestSysRewardLossItems(const struct FQuestID& QuestID, int StepNo, class UObject* __WorldContext, bool* bHasLoss, TArray<struct FSysWinItemData>* LossItems, int* LossGald);
	void STATIC_GetNPCActorFromDefineID(const struct FPFNpcDefineID& DefineID, class UObject* __WorldContext, class AActor** NpcActor);
	void STATIC_GetMenuManagerInterface(class UObject* __WorldContext, TScriptInterface<class UTO14_BP_MenuManagerInterface_C>* MenuManagerInterface);
	void STATIC_SetAllMapObjVisibility(bool bVisible, class UObject* __WorldContext);
	void STATIC_TeleportLocator(const struct FString& MapLocatorName, class UObject* __WorldContext, bool* bSuccess);
	void STATIC_IsQuestGuideMultiStepCleared(const struct FQuestID& QuestID, class UObject* __WorldContext, TArray<int>* QuestStepArray, bool* bValid);
	void STATIC_BlackInStay(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext);
	void STATIC_CheckScenarioCondition(class UObject* __WorldContext, TArray<struct FScenarioConditionNamed>* Conditions, bool* ok);
	void STATIC_SetEventContinueState(bool bSet, class UObject* __WorldContext);
	void STATIC_IsLongChatPlaying(class UObject* __WorldContext, bool* bPlaying);
	void STATIC_PlayLongChat(const struct FString& LongCharName, bool bQued, class UObject* __WorldContext);
	void STATIC_GetArtsLearnByLabel(EArisePartyID PartyId, const struct FString& ArtsLabel, class UObject* __WorldContext, bool* bValid);
	void STATIC_GetAliasLearnByLabel(const struct FString& Label, class UObject* __WorldContext, bool* bValid);
	void STATIC_SetScenarioFlagByNameArray(bool Flag, class UObject* __WorldContext, TArray<struct FString>* FlagName);
	void STATIC_RecoverAllForStayingInn(class UObject* __WorldContext);
	void STATIC_CollectQuestGuideRewardLossItems(const struct FQuestID& QuestID, class UObject* __WorldContext, TArray<struct FQuestRewardItem>* LossItems, int* LossGald);
	void STATIC_CheckRisePointMaxNum(int AddRP, class UObject* __WorldContext, bool* GetIt);
	void STATIC_CheckRisePointNum(int RP, class UObject* __WorldContext, bool* HaveIt);
	void STATIC_CheckGaldMaxNum(int AddGald, class UObject* __WorldContext, bool* GetIt, int* LostNum);
	void STATIC_CheckGaldNum(int Gald, class UObject* __WorldContext, bool* HaveIt);
	void STATIC_GetQuestGuideReward(const struct FQuestID& QuestID, class UObject* __WorldContext, bool* GetIt, TArray<struct FString>* LearningAlias);
	void STATIC_DuplicateNPCActor(class AActor* DestinationActor, class AActor* SourceActor, class UObject* __WorldContext);
	void STATIC_PF_OpenShopMenu(const struct FString& ShopID, class UObject* __WorldContext);
	void STATIC_GetMenuManager(class UObject* __WorldContext, class ATO14_BP_MenuManagerBase_C** MenuManager);
	void STATIC_PF_OpenMenu(const struct FString& MenuID, class UObject* __WorldContext);
	void STATIC_MakeQuestGuideStepNameByString(const struct FString& QuestID, const struct FString& QuestStep, class UObject* __WorldContext, struct FString* Name);
	void STATIC_SetQuestGuideStepFlagByString(const struct FString& QuestID, const struct FString& QuestStep, const struct FString& QuestFlag, const struct FString& Valid, class UObject* __WorldContext);
	void STATIC_GetQuestGuideStepFlagByString(const struct FQuestID& QuestID, int QuestStep, TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, class UObject* __WorldContext, bool* bValid);
	void STATIC_GetNPCActorFromID(const struct FString& CharacterID, class UObject* __WorldContext, class AActor** NpcActor);
	void STATIC_CheckItemMaxNum(const struct FString& ItemLabel, int ItemNum, bool bCategory, class UObject* __WorldContext, bool* GetIt, int* LostNum);
	int STATIC_GetItemId(const struct FString& ItemLabel, class UObject* __WorldContext);
	void STATIC_GetItemMaxNum(const struct FString& ItemLabel, class UObject* __WorldContext, int* MaxNum);
	void STATIC_GetQuestRewardItem(const struct FString& RewardItemLabel, int ItemNum, class UObject* __WorldContext, bool* GetIt);
	void STATIC_CheckItemNum(const struct FString& ItemLabel, int ItemNum, class UObject* __WorldContext, bool* HaveIt);
	void STATIC_AddUserItemNum(const struct FString& ItemLabel, int AddNum, bool bAccessorySkillRandom, class UObject* __WorldContext);
	void STATIC_GetUserItemNum(const struct FString& ItemLabel, class UObject* __WorldContext, int* ItemNum);
	void STATIC_BlackIn(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext);
	void STATIC_BlackOut(TEnumAsByte<EVisualFadeLayer> Layer, float Duration, class UObject* __WorldContext);
	void STATIC_MapJump(const struct FString& MapName, const struct FString& MapLocatorName, bool ChangeScenarioFlag, class UObject* __WorldContext);
	void STATIC_GetNPCActor(const struct FString& NpcName, class UObject* __WorldContext, class AActor** NpcActor);
	void STATIC_SeparateTimeMinutes(int Minutes, class UObject* __WorldContext, struct FDT_PF_ScriptTime* Time);
	void STATIC_IsTimeElapsed(int Timestamp, int elapsedDay, int elapsedHour, int ElapsedMinute, class UObject* __WorldContext, bool* bElapsed);
	void STATIC_GetTimeStamp(class UObject* __WorldContext, int* Timestamp);
	void STATIC_GetTimeToMinutes(const struct FDT_PF_ScriptTime& Time, class UObject* __WorldContext, int* Minutes);
	void STATIC_GetTimeElapsedMinutes(int Minutes, class UObject* __WorldContext, int* ElapsedMinutes);
	void STATIC_GetExcludeStringArray(class UObject* __WorldContext, TArray<struct FString>* Selects, TArray<int>* ExcludeIndexs, TArray<struct FString>* NewSelects, TArray<int>* Indices);
	void STATIC_GetDictionaryModifiedTextArray(const struct FString& Group, class UObject* __WorldContext, TArray<struct FString>* IDs, TArray<struct FModifiedText>* ModifiedTextArray);
	void STATIC_GetDictionaryModifiedText(const struct FString& Group, const struct FString& ID, class UObject* __WorldContext, struct FModifiedText* ModifiedText);
	void STATIC_GetExcludeIndexArray(class UObject* __WorldContext, TArray<int>* Selects, TArray<int>* ExcludeIndexs, TArray<int>* NewSelects, TArray<int>* Indices);
	class UAriseScriptComponent* STATIC_GetPFScriptComponent(class AActor* Actor, class UObject* __WorldContext);
	void STATIC_GetQuestGuideStepFlagByID(const struct FQuestID& QuestID, int QuestStep, TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, class UObject* __WorldContext, bool* bValid);
	void STATIC_SetQuestGuideStepFlagByID(const struct FQuestID& QuestID, int QuestStep, TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, bool bValid, bool bGuideUpdate, class UObject* __WorldContext);
	void STATIC_MakeQuestGuideStepName(const struct FQuestID& QuestID, int QuestStep, class UObject* __WorldContext, struct FString* Name);
	void STATIC_GetQuestGuideFlagByID(const struct FQuestID& QuestID, TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, class UObject* __WorldContext, bool* bValid);
	void STATIC_MakeQuestGuideFlagSuffixName(TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, class UObject* __WorldContext, struct FString* String);
	void STATIC_SetQuestGuideFlagByID(const struct FQuestID& QuestID, TEnumAsByte<EDE_PF_Script_QuestFlag> QuestFlag, bool bValid, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
