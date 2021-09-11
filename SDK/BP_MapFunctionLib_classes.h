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

// BlueprintGeneratedClass BP_MapFunctionLib.BP_MapFunctionLib_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MapFunctionLib_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapFunctionLib.BP_MapFunctionLib_C");
		return ptr;
	}


	void STATIC_GetSnapTerrainCharacterLocation(const struct FVector& InLocation, TArray<class AActor*> ActorsToIgnore, class UObject* __WorldContext, struct FVector* SnapLocation);
	void STATIC_UnloadMap(const struct FString& MapName, bool bAtActorFinalize, class UObject* __WorldContext, bool* bUnloadAccept);
	void STATIC_GetMapOrderManagerInterface(class UObject* __WorldContext, TScriptInterface<class UBP_MapOrderManagerInterface_C>* MapOrderManager);
	void STATIC_MapJump(const struct FString& MapName, const struct FString& MapLocatorName, bool ChangeScenarioFlag, class UObject* __WorldContext);
	void STATIC_PreloadMap(const struct FString& MapName, class UObject* __WorldContext, bool* bAccept, bool* bPreloaded);
	void STATIC_HideSubLevelAtEvent(class UObject* __WorldContext, TArray<EMapOrderType>* HideType, TArray<struct FName>* HideMapNames);
	void STATIC_GetMapOrderManagerNative(class UObject* __WorldContext, class AMapOrderManager** MapOrderManager);
	void STATIC_GetChangeMapReason(class UObject* __WorldContext, EMapChangeReason* MapChangeReason);
	void STATIC_GetLongChatGamma(class UObject* __WorldContext, float* Gamma);
	void STATIC_GetBattleUnnecessaryFieldLevelName(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bValid, TArray<struct FName>* LevelNames);
	void STATIC_ShowMapEnvironment(bool bNewShow, class UObject* __WorldContext);
	void STATIC_CurrentTimeZoneShift(class UObject* __WorldContext, EWorldTimeZone* TimeZone);
	void STATIC_ShowSubLevel(EMapOrderType MapOrderType, bool bShow, class UObject* __WorldContext, bool* bSuc, bool* bOldVisible);
	void STATIC_GetPrevLevelName(class UObject* __WorldContext, struct FString* LevelName);
	void STATIC_GetCurrentLevelName(class UObject* __WorldContext, struct FString* LevelName);
	void STATIC_ReloadCurrentMap(bool bChangeMap, class UObject* __WorldContext);
	void STATIC_GetExcludeLevelScenarioCondition(const struct FString& MapDatabaseName, class UObject* __WorldContext, TArray<struct FName>* ExludeLevels);
	void STATIC_IsMapAllHide(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bHide);
	void STATIC_ShowFieldMap(bool NewShow, class UObject* __WorldContext);
	void STATIC_IsFieldMapAllHide(class UObject* __WorldContext, bool* bHide);
	void STATIC_IsBattleMap(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bBattleMap);
	void STATIC_GetLevelNamesInRequired(const struct FString& MapDatabaseName, ELevelRequiredSetting InRequired, class UObject* __WorldContext, bool* bValid, TArray<struct FName>* LevelNames);
	void STATIC_GetBattleLevelNames(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bValid, TArray<struct FName>* LevelNames);
	void STATIC_IsMapUnloaded(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bUnloaded);
	void STATIC_UnloadAnsyncMap(const struct FString& MapDatabaseName, class UObject* __WorldContext);
	void STATIC_IsLevelsVisibled(class UObject* __WorldContext, TArray<struct FName>* Levels, bool* bVisibled);
	void STATIC_IsMapVisibled(const struct FString& MapDatabaseName, bool BattleScene, class UObject* __WorldContext, TArray<struct FName>* ExcludeLevels, bool* bVisibled);
	void STATIC_ShowLevels(bool NewShow, class UObject* __WorldContext, TArray<struct FName>* Levels);
	void STATIC_ShowMap(const struct FString& MapDatabaseName, bool NewShow, class UObject* __WorldContext, TArray<struct FName>* ExcludeLevels);
	void STATIC_IsLevelsLoaded(class UObject* __WorldContext, TArray<struct FName>* Levels, bool* bLoaded);
	void STATIC_IsMapLoaded(const struct FString& MapDatabaseName, class UObject* __WorldContext, TArray<struct FName>* ExcludeLevels, bool* bLoaded);
	void STATIC_GetLevelNames(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bValid, TArray<struct FName>* LevelNames);
	void STATIC_LoadAsyncMap(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bAaccept);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
