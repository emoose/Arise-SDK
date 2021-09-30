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

// BlueprintGeneratedClass BP_BtlLinkLibrary.BP_BtlLinkLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BtlLinkLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlLinkLibrary.BP_BtlLinkLibrary_C");
		return ptr;
	}


	void STATIC_ShowLoadInfo(const struct FString& DebugMessage, class UObject* __WorldContext);
	void STATIC_IsLoadingBattleWarAssetsComplated_Implementation(class UObject* __WorldContext, bool* bIsLoadComplated);
	void STATIC_GetMapOrderManagerInterface(class UObject* __WorldContext, TScriptInterface<class UBP_MapOrderManagerInterface_C>* MapOrderManager);
	void STATIC_GetExcludeLevelScenarioCondition(const struct FString& MapName, class UObject* __WorldContext, TArray<struct FName>* ExludeLevels);
	void STATIC_GetBattleLevelNames(const struct FString& MapName, class UObject* __WorldContext, bool* Valid, TArray<struct FName>* LevelNames);
	void STATIC_IsBattleMap(const struct FString& MapNames, class UObject* __WorldContext, bool* Result);
	void STATIC_GetBattleUnnecessaryFieldLevelName(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bValid, TArray<struct FName>* LevelNames);
	void STATIC_UnloadRequiredResident(bool Force, class UObject* __WorldContext);
	void STATIC_LoadAsyncRequiredResident(class UObject* __WorldContext);
	void STATIC_LoadAsyncBattle(const struct FString& MapDatabaseName, const struct FName& EncountGroup, const struct FString& SourceContext, class UObject* __WorldContext);
	void STATIC_UnloadBattle(const struct FString& MapDatabaseName, const struct FName& EncountGroup, bool Force, const struct FString& SourceContext, class UObject* __WorldContext);
	void STATIC_UnloadEncountGroup(const struct FName& EncountGroup, bool Force, class UObject* __WorldContext);
	void STATIC_LoadAsyncEncountGroup(const struct FName& EncountGroup, class UObject* __WorldContext);
	void STATIC_HideBattleMap(const struct FString& MapDatabaseName, class UObject* __WorldContext);
	void STATIC_IsShowBattleLevelComplete(const struct FName& LevelName, class UObject* __WorldContext, bool* Result);
	void STATIC_ChangeVisibleBattleLevel(const struct FName& LevelName, bool Visible, class UObject* __WorldContext);
	void STATIC_GetOnMemoryBattleMap(class UObject* __WorldContext, TArray<struct FString>* Result);
	void STATIC_IsShowBattleMapComplete(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* Result);
	void STATIC_ShowBattleMap(const struct FString& MapDatabaseName, class UObject* __WorldContext);
	void STATIC_UnloadBattleMapAll(bool Force, class UObject* __WorldContext);
	void STATIC_UnloadBattleMap(const struct FString& MapDatabaseName, bool Force, class UObject* __WorldContext);
	void STATIC_IsLoadCompleteBattleMap(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* Result);
	void STATIC_LoadAsyncBattleMap(const struct FString& MapDatabaseName, class UObject* __WorldContext);
	void STATIC_BattleFinalizeToTitle(class UObject* __WorldContext);
	void STATIC_IsFieldMapAllHide(class UObject* __WorldContext, bool* Hide);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
