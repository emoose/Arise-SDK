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

// BlueprintGeneratedClass BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MEP_CommonFucntion_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C");
		return ptr;
	}


	void STATIC_SetWorldTimePause(bool newPause, class UObject* __WorldContext);
	int STATIC_GetQuestGuideClearCount(const struct FQuestID& Quest_ID, class UObject* __WorldContext);
	void STATIC_QuestGuideReorder(const struct FQuestID& Quest_ID, class UObject* __WorldContext);
	void STATIC_ShowPlayableHelpWindow_XmlLabel_(const struct FCollectionHelp_XmlDatabaseLabel& HelpLabel, class UObject* __WorldContext);
	void STATIC_ShowPlayableHelpWindowDuration(const struct FString& InHelpLabel, float InDuration, class UObject* __WorldContext);
	void STATIC_SetWorldTime(float newTimeHour, class UObject* __WorldContext);
	void STATIC_ShowPlayableHelpWindow(const struct FString& HelpLabel, class UObject* __WorldContext);
	void STATIC_GetAlias(const struct FString& AliasName, class UObject* __WorldContext);
	void STATIC_IsQuestGuideOpened(const struct FQuestID& Quest_ID, class UObject* __WorldContext, bool* bClear);
	void STATIC_IsQuestGuideCleared(const struct FQuestID& Quest_ID, class UObject* __WorldContext, bool* bClear);
	void STATIC_QuestGuideStart(const struct FQuestID& Quest_ID, class UObject* __WorldContext);
	void STATIC_QuestGuideStep(const struct FQuestID& Quest_ID, int Clear_Step, bool bShowGuideOpen, class UObject* __WorldContext);
	void STATIC_GetItemEquipmentPlayer(EArisePartyID PartyId, const struct FString& ItemLabel, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
