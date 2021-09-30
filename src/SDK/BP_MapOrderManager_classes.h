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

// BlueprintGeneratedClass BP_MapOrderManager.BP_MapOrderManager_C
// 0x0118 (0x04C0 - 0x03A8)
class ABP_MapOrderManager_C : public AMapOrderManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_StreamLevelLoader_C*                     StreamLevelLoader;                                        // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDispDebugLog;                                            // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoLoadSoundBank;                                       // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03CA(0x0006) MISSED OFFSET
	TArray<struct FString>                             SoundLevels;                                              // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     UnloadingMap;                                             // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LoadingMap;                                               // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventLoadFinished;                                        // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventUnloadFinished;                                      // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FName>                               GabageMaps;                                               // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             RequestLoadQue;                                           // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventMapGabage;                                           // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                LoadedCount;                                              // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	class ABP_MapLocatorBase_C*                        CurrentRefLocator;                                        // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, int>                          MapUser;                                                  // 0x0460(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             LoadingMapOrderDatabase;                                  // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapOrderManager.BP_MapOrderManager_C");
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
	void IsLevelsVisibled(TArray<struct FName>* Levels, bool* bVisibled);
	void IsMapVisibledWithExclude(const struct FString& MapName, bool BattleScene, TArray<struct FName>* ExcludeLevels, bool* bVisibled);
	void IsLevelsLoaded(TArray<struct FName>* Levels, bool* bLoaded);
	void IsMapLoadedWithExclude(const struct FString& MapName, TArray<struct FName>* ExcludeLevels, bool* bLoaded);
	void GetLevelNames(const struct FString& MapName, bool* bValid, TArray<struct FName>* LevelNames);
	void IsValidMapUser_(bool* IsValid);
	void CleanupValues();
	void GetLevelNamesInHideMenuScene_Implementation(const struct FString& MapName, bool* bValid, TArray<struct FName>* LevelNames);
	void IsSameVisible(TArray<bool>* Array0, TArray<bool>* Array1, bool* bSame);
	void GetUserCount(const struct FString& MapName, int* Users);
	void SnapTerrainLocation();
	void FindMapOrderUserWithCache(const struct FString& MapName, bool* bFound, struct FMapOrderUser* User);
	void ChangePlayerVisibilty(bool bShow);
	void HidePlayer();
	void GetEnvLevel_Implementation(const struct FString& MapName, struct FString* EnvLevel);
	void ChangeMapUserCount(const struct FString& MapName, int Add, int* oNewUserCount);
	void GetExcludeLevelsWithScenarioCondtion_Implementation(const struct FString& MapName, TArray<struct FName>* ExcludeLevels);
	void UnloadQueManagement();
	void LoadQueManagement(bool* bLoadingStart);
	void DoUnloadMap(const struct FString& MapName);
	void DoPreloadMap(const struct FString& MapName, bool* bSuccess);
	void IsMapHide_Implementation(const struct FString& MapName, bool bBattleScene, bool* bHide);
	void GetLevelNamesInRequired_Implementation(const struct FString& MapName, ELevelRequiredSetting InRequired, bool* bValid, TArray<struct FName>* LevelNames);
	void GetLevelNamesInType_Implementation(const struct FString& MapName, EMapOrderType InType, bool* bValid, TArray<struct FName>* LevelNames);
	void IsLevelsVisibled_Implementation(TArray<struct FName>* Levels, bool* bVisibled);
	void IsMapVisibledWithExclude_Implementation(const struct FString& MapName, bool BattleScene, TArray<struct FName>* ExcludeLevels, bool* bVisibled);
	void ShowLevels_Implementation(bool bShow, TArray<struct FName>* Levels);
	void ShowMapWithExlude_Implementation(bool bShow, const struct FString& MapName, TArray<struct FName>* ExcludeLevels);
	void IsLevelsLoaded_Implementation(TArray<struct FName>* Levels, bool* bLoaded);
	void IsMapLoadedWithExclude_Implementation(const struct FString& MapName, TArray<struct FName>* ExcludeLevels, bool* bLoaded);
	void GetLevelNames_Implementation(const struct FString& MapName, bool* bValid, TArray<struct FName>* LevelNames);
	void MaskMap(const struct FString& MapName, bool bMask, const struct FString& MaskReason);
	void IsValidMapname_(const struct FString& MapName, bool* bValid);
	void GetMapLocators(TArray<class ABP_MapLocatorBase_C*>* OutActors);
	void RemoveSoundLevel(TArray<struct FName>* SoundLevels);
	void AddSoundLevel(const struct FString& SoundLevel);
	void ClearSoundLevels();
	void IsSoundBankAvailable(const struct FName& BankName, bool* Available);
	void LoadSoundBank(TArray<struct FName>* SoundLevels);
	void UnloadSoundBank(TArray<struct FName>* SoundLevels);
	void GetMapOrderDatabasePath(const struct FString& MapName, bool Full, struct FString* Path, bool* bValid);
	void IsAllMapsUnloaded(bool* bUnloaded);
	void UnloadMap_Implementation(const struct FString& MapName);
	void RemoveMap(const struct FString& MapName);
	void IsMapVisibled(const struct FString& MapName, bool bBattleScene, bool* bVisibled);
	void IsMapUnloaded_Implementation(const struct FString& MapName, bool* bUnloaded);
	void RemoveAllMaps();
	void UnloadAllMaps();
	void ShowPlayer(const struct FString& LocationName, const struct FVector& AssignLocation, bool bLocationFromPartyProfile, bool bOnlyLocationChange, struct FVector* ChangeLocation);
	void ShowMap(bool bShow, const struct FString& MapName, bool bBattleScene, bool bIgnoreAlwaysShow);
	void IsMapLoaded(const struct FString& MapName, bool* bLoaded);
	void PreloadMap_Implementation(const struct FString& MapName, bool bReload);
	void UserConstructionScript();
	void OnUnloadFinished();
	void OnLoadFinished();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnMapGabage();
	void PreloadMap(const struct FString& MapName, bool bReload);
	void ShowMapWithExlude(bool bShow, const struct FString& MapName, TArray<struct FName>* ExcludeLevels);
	void ShowLevels(bool bShow, TArray<struct FName> Levels);
	void UnloadMap(const struct FString& MapName);
	void BPE_DoCleanup();
	void ExecuteUbergraph_BP_MapOrderManager(int EntryPoint);
	void EventMapGabage__DelegateSignature();
	void EventUnloadFinished__DelegateSignature(const struct FString& MapName);
	void EventLoadFinished__DelegateSignature(const struct FString& MapName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
