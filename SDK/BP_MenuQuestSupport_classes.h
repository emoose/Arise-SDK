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

// BlueprintGeneratedClass BP_MenuQuestSupport.BP_MenuQuestSupport_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MenuQuestSupport_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuQuestSupport.BP_MenuQuestSupport_C");
		return ptr;
	}


	void STATIC_NotifyOnQuestUpdate(class UObject* __WorldContext, bool* bSuccess);
	struct FVector STATIC_GetPF_PlayerLocation(class UObject* __WorldContext);
	void STATIC_GetQuestLocationDataMulti(const struct FString& QuestID, class UObject* __WorldContext, TArray<struct FString>* LocationNameArray, bool* IsValid);
	void STATIC_GetQuestIdFromLocatorInfo(const struct FLocatorInfo& LocatorInfo, class UObject* __WorldContext, struct FString* QuestID);
	void STATIC_GetQuestLocationData(const struct FString& QuestID, class UObject* __WorldContext, struct FString* LocationName, struct FModifiedText* Area, struct FModifiedText* Location);
	void STATIC_GetNearQuestLocator(const struct FString& LocationName, const struct FString& QuestID, int Step, class UObject* __WorldContext, TArray<struct FLocatorInfo>* ioLocatorList);
	void STATIC_SetSubQuestMarkByID(const struct FString& Quest_ID, class UObject* __WorldContext);
	void STATIC_IsSubQuestMarked(class UObject* __WorldContext, bool* IsMarked);
	void STATIC_GetOpenedSteps(const struct FString& ID, class UObject* __WorldContext, TArray<int>* Steps1);
	void STATIC_GetQuestOwnerPosition(const struct FString& LocationName, const struct FString& QuestID, int Step, class UObject* __WorldContext, struct FVector* Position, EMapIconType* IconType, float* Radius, float* Distance);
	void STATIC_GetCurrentSubQuest(class UObject* __WorldContext, bool* IsFound, TArray<struct FString>* RetSubQuestIDs, TArray<int>* retSubStepIndices);
	void STATIC_GetCurrentMainQuest(class UObject* __WorldContext, bool* IsFound, struct FString* retMainQuestID, int* retMainStepIndex);
	void STATIC_AddQuestIcon(const struct FString& LocationName, class UObject* __WorldContext);
	void STATIC_GetCurrentQuest(class UObject* __WorldContext, bool* found, struct FString* MainQuestID, int* MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
