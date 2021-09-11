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

// BlueprintGeneratedClass BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MapOrderManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C");
		return ptr;
	}


	void GetLevelNamesInHideMenuScene(const struct FString& MapName, bool* bValidMap, TArray<struct FName>* LevelNames);
	void GetMapUser(TMap<struct FString, int>* MapUser);
	void GetEnvLevel(const struct FString& MapName, struct FString* EnvLevel);
	void GetExcludeLevelsWithScenarioCondtion(const struct FString& MapName, TArray<struct FName>* ExcludeLevels);
	void IsMapHide(const struct FString& MapName, bool bBattleScene, bool* bHide);
	void GetLevelNamesInRequired(const struct FString& MapName, ELevelRequiredSetting InRequired, bool* bValid, TArray<struct FName>* LevelNames);
	void GetLevelNamesInType(const struct FString& MapName, EMapOrderType InType, bool* bValid, TArray<struct FName>* LevelNames);
	void IsMapUnloaded(const struct FString& MapName, bool* bUnloaded);
	void UnloadMap(const struct FString& MapName);
	void IsLevelsVisibled(TArray<struct FName>* Levels, bool* bVisibled);
	void IsMapVisibledWithExclude(const struct FString& MapName, bool BattleScene, TArray<struct FName>* ExcludeLevels, bool* bVisibled);
	void ShowLevels(bool bShow, TArray<struct FName> Levels);
	void ShowMapWithExlude(bool bShow, const struct FString& MapName, TArray<struct FName>* ExcludeLevels);
	void IsLevelsLoaded(TArray<struct FName>* Levels, bool* bLoaded);
	void IsMapLoadedWithExclude(const struct FString& MapName, TArray<struct FName>* ExcludeLevels, bool* bLoaded);
	void GetLevelNames(const struct FString& MapName, bool* bValid, TArray<struct FName>* LevelNames);
	void PreloadMap(const struct FString& MapName, bool bReload);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
