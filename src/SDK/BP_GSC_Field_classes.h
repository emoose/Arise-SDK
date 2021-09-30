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

// BlueprintGeneratedClass BP_GSC_Field.BP_GSC_Field_C
// 0x0275 (0x02E5 - 0x0070)
class UBP_GSC_Field_C : public UBP_AriseGameSceneControllerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0070(0x0008) (Transient, DuplicateTransient)
	class ABP_MapOrderManager_C*                       MapOrderManager;                                          // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<ENM_MapLoadState>>              PreLoadMapsState;                                         // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             PreLoadMapsName;                                          // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ENM_FieldSceneLocalState>              LocalState;                                               // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FString                                     UnLoadMapName;                                            // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CurrentMapName;                                           // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NextMapName;                                              // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDebugPrintGameSceneState;                                // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideFieldMap;                                            // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAriseGameScene                                    PrevScene;                                                // 0x00DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAriseGameScene                                    nextScene;                                                // 0x00DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FString                                     MapLocatorName;                                           // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     SavedPlayerLocation;                                      // 0x00F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class ABP_MapLinkBase_C*                           FinalizeMapLink;                                          // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     NowLoadingMap;                                            // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NowUnloadingMap;                                          // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       PreLoadMinimapExist;                                      // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_PF_HUD_C*                                PF_HUD;                                                   // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowPFHUD;                                               // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventPostFieldWakeup;                                     // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FString>                             UnLoadMapsName;                                           // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ENM_MapLoadState>>              UnLoadMapsState;                                          // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bForceHidePFHUD;                                          // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	TArray<struct FSTR_PFCharLock>                     PFCharaLockUsers;                                         // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PFEnableDelayFrame;                                       // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	struct FString                                     OldMapName;                                               // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bSetMapChangeFlag;                                        // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	class ABP_LocationMapManager_C*                    LocaMapManager;                                           // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     MenuID;                                                   // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMapLocatorDatabase*                         MapLocatorDatabase;                                       // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Indoor;                                                   // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPostDataLoad;                                            // 0x01D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x01D2(0x0002) MISSED OFFSET
	float                                              DelayMapLoading;                                          // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CurrentLocationId;                                        // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              EncountLockTimer;                                         // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	TArray<struct FSTR_PrePFStartOperation>            PrePFOperations;                                          // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AAriseGameProcess*                           PreStartScript;                                           // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventPreStartScriptManagement;                            // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FSTR_PrePFStartOperation>            PrePFScripts;                                             // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bPostLoadData;                                            // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceCameraReset;                                        // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x022A(0x0002) MISSED OFFSET
	int                                                LastScenarioCounter;                                      // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMapChangeReason                                   MapChangeReason;                                          // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FString                                     PostLoadLocationId;                                       // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPostWakeupShowPlayer;                                   // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bWaitRequiredSpawnNPC;                                    // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class AActor*                                      BpMapStartInst;                                           // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraMouseControlEnable;                                // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowMaping;                                              // 0x0269(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x026A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventPreUnloadMap;                                        // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventPostUnloadMap;                                       // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bInitialized;                                             // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	TArray<struct FString>                             HotLinks;                                                 // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             DumyLoadMapByHotLinks;                                    // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnLoadGameFromMenu;                                       // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<ENM_MapShowState>                      ShowMapState;                                             // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNpcRespawPostEvent;                                      // 0x02C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x02CA(0x0002) MISSED OFFSET
	float                                              SpawnTimeLimit;                                           // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LCDelayPlayCount;                                         // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WakeupWithNpcRespawn;                                     // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoSaveShowSkip;                                        // 0x02D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPauseField;                                              // 0x02D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnedActorsStored;                                     // 0x02D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResetPlayerPoseForEventShowPlayer;                       // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPostSavedataLoad;                                        // 0x02D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipNpcSpawnShowMapOnce;                                 // 0x02DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDelayedMenuOpen;                                         // 0x02DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TexStreaming_WTMLow;                                      // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TexStreaming_WTMHi;                                       // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMenuOpen;                                                // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSC_Field.BP_GSC_Field_C");
		return ptr;
	}


	void GetFieldSceneLocalState(TEnumAsByte<ENM_FieldSceneLocalState>* LocalState);
	void GetMapShowState(TEnumAsByte<ENM_MapShowState>* MapShowState);
	void IsMapUnloadedWithAllMapNoAction_(const struct FString& MapName, bool* bEntry);
	void IsPFHoldMousePosition(bool* Out);
	void IsPreShowMap_(bool* bPreShow);
	void GetMenuID(struct FString* MenuID);
	void GetMapLocatorName(struct FString* MapLocatorName);
	void GetNextMapName(struct FString* NextMapName);
	void GetMapLocatorDatabase(class UMapLocatorDatabase** MapLocatorDatabase);
	void IsPlayerFree_(bool* Is);
	void GetMapChangeReason(EMapChangeReason* MapChangeReason);
	void GetOldMapName(struct FString* OldMapName);
	void GetPFHUD(class APF_HUD_Manager** PFHUD);
	void ChangeMap(const struct FString& ChangeMap, const struct FString& MapLocatorName, EMapChangeReason MapChangeReason, bool bChangeScenarioFlag, bool bForceMapChangePostEvent, bool bNpcRespawn, bool bResetPlayerPose, bool* bAccept);
	void PreloadMap(const struct FString& MapName, bool* bAccept, bool* bPreloaded);
	void UnloadMap(const struct FString& MapName, bool bAtActorFinalize, bool* UnloadAccept);
	void IsMapUnloaded_(const struct FString& MapName, bool* bEntry);
	void GetCurrentMapName(struct FString* CurrentMapName);
	void WatchingTextureStreamingTick(float Tick);
	void StartWatchingTextureStreaming();
	void IsTextureStreaming_(bool* bStreaming);
	void DestoryPFWidget();
	void OnChangeMapChnagingState(bool bChangingState);
	void OnNotifyPFStart();
	void ScreenFadeClear();
	void _IsFadeOrMaskOn(bool* bFadeOrMask);
	void _IsPlayQuest_(bool* NewParam);
	void OnChangeScenarioCounter(int counter, int Prev);
	void _PopHotlinkLoad();
	bool IsPausePossibleState();
	bool IsEnableSystemPause();
	void _PrintLog(const struct FString& LogText);
	void OnLoadGameData();
	void UpdateCameraMouseControlEnable();
	void IsCameraMouseControlEnable(bool* Out);
	void NormalizeLocationId();
	void ManagementFastTravelPointOpen();
	void _PreloadmapListed_(const struct FString& MapName, bool* bEntry, int* idx);
	void ScreenMaskManagement();
	void GetPFStartFirstScript(struct FSTR_PrePFStartOperation* ScriptInfo, bool* bValid);
	void RunPFStartScript(class UClass* GameProcessClass, const struct FString& Param);
	void AddPrePFOperation_Implementation(const struct FSTR_PrePFStartOperation& Operation);
	void SaveCurrentPlayerLocation();
	void PFStart(bool DisplaySceneIsPF, bool SavedLocation, bool bNeedResetCharacter);
	void CanOpenMenu(bool* Out);
	void CameraReset_Implementation();
	void GetRefLocatorData(bool* bValid, struct FMapLocatorData* OutLocatorData);
	void GetRefLocatorResetCameraParams(int* OutCameraType, float* OutCamera_Pitch);
	void RefLocatorInDoor_(bool* bIndoor);
	void IsPlayerFree_Implementation(bool* Is);
	void ChangeLocator_Implementation(const struct FString& MapLocatorName);
	void ShowFieldMap_Implementation(bool NewShow);
	void ShowPlayer(bool bShow, const struct FVector& AssignLocation, bool bNeedResetCharacter);
	void ReloadMap();
	void OnChangeEventSatate(bool bEventOn);
	void PFCharacterActive(bool NewActive, bool bNeedResetCharacter, class AActor** PlayerActor);
	void PFCharacterLockUpdate(float Tick);
	void AddPFCharacterLock(const struct FString& User, bool bLock, float UnlockDelaySec);
	void IsEntryUnloadmap_(const struct FString& MapName, bool* bEntry, int* idx);
	void CanPlayable_(bool* bPlayAble);
	void ShowPFHUD(bool Show, bool PFEnableNOCheck);
	void CreanupPreloadMap_Implementation();
	void ForceWakeup();
	void CurrentSceneIsSubScene_(bool* bSubScene);
	void PrevSceneIsSubScene_(bool* bSubScene);
	void CreatePFWidget();
	void DebugPrint(bool PrintScreen);
	void IsAllMapNoAction_(bool* bAnyAction);
	void IsMapLoaded_(const struct FString& MapName, bool* bEntry);
	void IsMapUnloaded__Implementation(const struct FString& MapName, bool* bEntry);
	void TickLoadUnloadManagement(float Tick);
	void IsEntryPreloadmap_(const struct FString& MapName, bool* bEntry, int* idx, bool* bNextUnload);
	void AddPreloadmap(const struct FString& MapName);
	void OnPostMapChange();
	void UnloadMap_Implementation(const struct FString& MapName, bool bAtActorFinalize, bool* UnloadAccept);
	void ScreenMaskOff(bool bUseDefaultMask);
	void OpenPFMenu(class ABP_AriseGamemode_C* AriseGameMode, const struct FString& MenuID, bool bChangeNow);
	void GetPrevScene(EAriseGameScene* PrevScene);
	void ScreenMaskOn(bool bUseDefaultMask, bool bInstantly);
	void GetMapOrderManager(class ABP_MapOrderManager_C** MapOrderManager);
	void PreloadMap_Implementation(const struct FString& MapName, bool* bAccept, bool* bPreloaded);
	void ChangeMap_Implementation(const struct FString& ChangeMap, const struct FString& MapLocatorName, EMapChangeReason MapChangeReason, bool bChangeScenarioFlag, bool bForceMapChangePostEvent, bool bNpcRespawn, bool bResetPlayerPose, bool* bAccept);
	void BPE_Initialize(ESceneInitializeMode initMode);
	void BPE_Finalize(ESceneFinalizeReason finalizeReason);
	void BPE_Tick(float DeltaTime);
	void BPE_Wakeup(unsigned char PrevScene);
	void BPE_Sleep(unsigned char nextScene);
	void OnLoadFinished(const struct FString& MapName);
	void OnUnloadFinished(const struct FString& MapName);
	void PlayDelayedLongChat();
	void OnChageGameState(EAriseGameState ChangedState, bool NewState);
	void OnChangeDisplayScene(unsigned char ChangedScene, unsigned char OldScene);
	void OnPreStartManagement();
	void EventShowPlayer();
	void CreanupPreloadMap();
	void SetPostDataLoad(bool PostDataLoad);
	void SetHideFieldMap(bool HideFieldMap);
	void ChangeLocator(const struct FString& MapLocatorName);
	void CameraReset();
	void ShowFieldMap(bool NewShow);
	void ReloadCurrentMap();
	void AddPrePFOperation(const struct FSTR_PrePFStartOperation& Operation);
	void RegisterEvent_OnPostWakeupShowPlayer(const struct FAriseSimpleEventData& Event);
	void OpenPlayerFreeMenu(const struct FString& MenuID, bool bChangeNow);
	void ShowPlayerFreeHUD(bool Show, bool PFEnableNOCheck);
	void PauseField();
	void UnpauseField();
	void SkipNpcSpawnShowMapOnce();
	void MakeHotLink(const struct FString& LinkName);
	void EventShowMap();
	void ScreenFadeMaskClearDelayed();
	void DelayedOpenMenu(const struct FString& MenuID);
	void ExecuteUbergraph_BP_GSC_Field(int EntryPoint);
	void OnLoadGameFromMenu__DelegateSignature();
	void EventPostUnloadMap__DelegateSignature();
	void EventPreUnloadMap__DelegateSignature();
	void OnPostWakeupShowPlayer__DelegateSignature();
	void EventPreStartScriptManagement__DelegateSignature();
	void EventPostFieldWakeup__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
