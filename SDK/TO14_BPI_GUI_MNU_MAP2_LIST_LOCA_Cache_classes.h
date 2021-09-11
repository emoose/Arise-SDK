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

// BlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C
// 0x00A0 (0x00C8 - 0x0028)
class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C : public UObject
{
public:
	TMap<struct FString, struct FTO14_ST_GUI_MNU_MAP2_QUEST> BeforeSubQuestMap;                                        // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FTO14_ST_GUI_MNU_MAP2_QUEST> QuestMap;                                                 // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C");
		return ptr;
	}


	void ClearQuest();
	void GetQuest(const struct FString& LocationName, bool* bFound, TArray<struct FString>* ActorIDs, TArray<struct FString>* QuestIDs);
	void CacheQuest(const struct FString& LocationName, TArray<struct FString>* ActorIDs, TArray<struct FString>* QuestIDs);
	void Term();
	void ClearBeforeSubQuestActorIDs();
	void GetBeforeSubQuest(const struct FString& LocationName, bool* bFound, TArray<struct FString>* ActorIDs);
	void CacheBeforeSubQuest(const struct FString& LocationName, TArray<struct FString>* ActorIDs);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
