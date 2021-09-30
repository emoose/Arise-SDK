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

// BlueprintGeneratedClass BP_AriseGamemode.BP_AriseGamemode_C
// 0x0388 (0x0B10 - 0x0788)
class ABP_AriseGamemode_C : public ABP_AriseGameModeCore_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0788(0x0008) (Transient, DuplicateTransient)
	class AScreenMaskBase*                             DefaultScreenMask;                                        // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AScreenMaskBase*                             CurrentScreenMask;                                        // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                tmpCounter;                                               // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSceneStreamLevelLoading;                                 // 0x07A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	class AScreenMaskBase*                             GoBackScenePostScreenMask;                                // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACharacter*                                  DefaultPlayer;                                            // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSceneStreamLevelUnloading;                               // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07B9(0x0003) MISSED OFFSET
	int                                                tmpMaxLevels;                                             // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    DoCaptureScene;                                           // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bPlayEvent;                                               // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	class ULevelSequencePlayer*                        CurrentSequencePlayer;                                    // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EventFullTime;                                            // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07E4(0x0004) MISSED OFFSET
	class UDebugParameterDatabase*                     DebugParameter;                                           // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXmlDatabaseNotificationHandle              DebugParameterNotificationHandle;                         // 0x07F0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x4];                                       // 0x07F4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    DoChangeMapEnvironment;                                   // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeWorldTime;                                        // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       DebugDisp_UELog;                                          // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DebugDisp_CustomLog;                                      // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChangeNewLevel;                                          // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0829(0x0007) MISSED OFFSET
	TArray<struct FString>                             EditLevelNames;                                           // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWorldTimeManager*                           WorldTimeManager;                                         // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventPostMapChange;                                       // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AScreenMaskBase*                             AutoDestroyedMaskOff;                                     // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APFNpcManager*                               NpcManager;                                               // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APFPlacementManager*                         MapObjManager;                                            // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AShortChatManager*                           ShortChat;                                                // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenMaskAlpha;                                          // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	class UUMG_SceneFade_C*                            UMGSceneFade;                                             // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventFieldWakeup;                                         // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventPreMapChange;                                        // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class APFGimmickManager*                           GimmickManager;                                           // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ALocationMapManager*                         LocationMapManager;                                       // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventBattleStart;                                         // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     CurrentMapName;                                           // 0x08C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CurrentMapLocation;                                       // 0x08D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventChangeLocation;                                      // 0x08E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     PlayMovieName;                                            // 0x08F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CampMapName;                                              // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUserWidget*                                 UMGNowloading;                                            // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bRequestAutosave;                                         // 0x0920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0921(0x0003) MISSED OFFSET
	float                                              AutosaveDelayTick;                                        // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 UMGAutoSave;                                              // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bAutoSaving;                                              // 0x0930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0931(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventRestartFieldScene;                                   // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bPrevScreenMasked;                                        // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	class AScreenMaskBase*                             TipsScreenMask;                                           // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AGUI_InstanceActor_C*                        GUI_InstanceActor;                                        // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x28];                                      // 0x0960(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_AriseGamemode.BP_AriseGamemode_C.NullObject
	struct FScriptMulticastDelegate                    EventOpenFastTravelPoint;                                 // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     CurrentLongChatName;                                      // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     PersistantLevel;                                          // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventExecAutoSave;                                        // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      DummyInit;                                                // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	class APFDelegateManager*                          PFDelegateManager;                                        // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBP_AriseScriptSaveDataManagerInterface_C> ScriptSaveDataManagerInterface;                           // 0x09D0(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBP_AliasManagerInterface_C> AliasManagerInterface;                                    // 0x09E0(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UTO14_BP_MenuManagerInterface_C> MenuManagerInterface;                                     // 0x09F0(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBP_WorldWindManagerInterface_C> WindManagerInterface;                                     // 0x0A00(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UGUI_InstanceManagerInterface_C> GUI_InstanceManager;                                      // 0x0A10(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBP_LongChatManagerInterface_C> LongChatManagerInterface;                                 // 0x0A20(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBP_HelpManagerInterface_C> HelpManagerInterface;                                     // 0x0A30(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AEncountManager*                             EncountManagerNative;                                     // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AArisePlatformUserManagerEvent*              PlatformUserManagerEvent;                                 // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventRequestAutoSave;                                     // 0x0A50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventAutoSaveComplite;                                    // 0x0A60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       AssetGUIInstanceManager;                                  // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AssetDefaultScreenMask;                                   // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LONGCHAT_PLAYQUE_DELAYTIME;                               // 0x0A80(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWaitLongchatPlayQue;                                     // 0x0A84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnPostMapChangeRequest;                                  // 0x0A85(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0A86(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventChangeLocation_PFUI;                                 // 0x0A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     CampPointID;                                              // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       BP_EventManager;                                          // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextureCacheFlashTimer;                                   // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TEX_CACHE_FLASH_TIME;                                     // 0x0AB4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UTO14_UMGGenericInterface_C> AutoSaveInterface;                                        // 0x0AB8(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UTO14_UMGGenericInterface_C> NowloadingInterface;                                      // 0x0AC8(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAriseGameScene                                    NextScene_OnMouseCheck;                                   // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0AD9(0x0007) MISSED OFFSET
	struct FScenarioConditionNamed                     NowloadingDispCondition;                                  // 0x0AE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventAutoSaveCancel;                                      // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseGamemode.BP_AriseGamemode_C");
		return ptr;
	}


	void IsMouseCursorVisibleScene(EAriseGameScene GameScene, bool* Visible);
	void _IsNeedAutoSaveLocation_(const struct FString& LocationName, bool* bNeedAutoSave);
	void ManageTextureCache(float Tick);
	void UnloadMenuClasses();
	void PreloadMenuClasses(int Priority);
	void SetDefaultScreenColor();
	void SetPFUILongChatManager();
	void IsCurrentFadeWhite_(bool* bWhite);
	void GoBackToLogin();
	void GoBackToScene(unsigned char NewSceneId);
	void SetDebugInputEnable(bool bNew);
	void IsDebugInputEnable(bool* bOut);
	void OpenLocationFlagImpl(const struct FString& Key);
	void BattleFinalizeToTitle();
	void GetChangeMapReason(EMapChangeReason* MapChangeReason);
	void ReloadCurrentMap(bool ChangeMap);
	void GetPFHUDManager(class APF_HUD_Manager** PFHUDManager);
	void GetHelpManagerInterface(TScriptInterface<class UBP_HelpManagerInterface_C>* HelpManager);
	void FixCameraForCapture(class UCameraComponent* BaseCamera, class UCameraComponent** OutCamera);
	void ResetPostProcessSettingsForCapture(class UCameraComponent* BaseCamera, float OldBloomIntensity, float OldMotionBlurAmount);
	void SetPostProcessSettingsForCapture(class UCameraComponent* BaseCamera, float* OldBloomIntensity, float* OldMotionBlurAmount);
	void IsAutoSaveNow(bool* bAutoSaving);
	void GetMenuManagerInterface(TScriptInterface<class UTO14_BP_MenuManagerInterface_C>* OutMenuManager);
	bool BPGeneralFunctionBool(const struct FName& OpertionName, TMap<struct FName, struct FString> Params);
	void SpawnActor(class UClass* Class, class AActor** SpawnedActor);
	void CreateGUIInstances();
	void SceneStreamLevelManagement();
	void _PLayLongChatWithArgs(const struct FLongChatPlayArgs& Args);
	void OpenFastTravelPoint(const struct FString& LocatorName, bool ShowUI);
	void UpdateLongChatPlayQue(bool bPostMapChange);
	void OpenLocationFlag();
	void SetTipsScreenMask();
	void GetCurrentScreenMask(class AScreenMaskBase** CurrentScreenMask);
	void IsScreenUnMasked(bool* bUnMasked);
	void IsScreenMasked(bool* bMasked);
	void EncountLockByUser(const struct FString& UserName, bool bLock);
	void AutoSaveManagement(float Tick);
	void AutoSaveCancel();
	void RequestAutoSave();
	void GoBackToTitle();
	void PlayMovie(const struct FString& PlayMovieName);
	void ChangeMapLocation(const struct FString& NewLocation, bool bNeedAutoSave);
	void CreateLocationMapManager();
	void DefaultPlayerReset(bool InIndoorMode);
	void OnPreMapChange(const struct FString& NewMapName, const struct FString& OldMapName);
	void UpdatePlayerInfoForMaterial();
	void GetScreenMaskAlpha(const struct FString& UserData, float* Alpha);
	struct FString BPE_GetCurrentMapname();
	void PossessDefaultPlayer();
	void OnPostMapChange(const struct FString& NewMapName, const struct FString& OldMapName, bool bSkipAutoSave);
	void GetEditLevelList(TArray<struct FString>* LevelNames);
	void AddLevelDebugMenu(TArray<struct FString>* LevelNames);
	void ResetWorldTime();
	void SetWorldTimeSettings(float CurrentHour, bool Pause, bool Immediately);
	void ChangeMapEnvironment(const struct FString& EnvName);
	void CameraReset(int InCameraPreset, float InCameraPitch);
	void CanOpenPFMenu(bool* bCan);
	void GamePause(bool bPause);
	void LockPlayerFree(bool bLock);
	void PlaySequenceEvent(class ULevelSequencePlayer* SequencePlayer);
	void ShowNowLoading(bool bShow, bool bForceWhite);
	void SetDefalutScreenMask();
	void ChangeAriseGameScene(EAriseGameScene AriseGameScene, ESceneRunType NewRunType, bool bChangeNow, bool* bAccept);
	void RequestRemoveStreamLevels(TArray<struct FName>* LevelNames);
	void RequestAddStreamLevels(TArray<struct FName>* LevelNames, TArray<struct FString>* LevelPaths);
	void ShowStreamLevels(bool bShow, TArray<struct FName>* Levels);
	void ReservedAriseGameScene(EAriseGameScene GameScene);
	void IsPrevSceneEnd(bool* bEnd);
	void CreateDefaultPlayer(const struct FVector& Loaction);
	void SetupSceneStreamLevel(const struct FString& SceneName, TArray<struct FName>* oLevelNames, TArray<struct FString>* oLevelPaths);
	void GetPlayerController(class APlayerController** PlayerController);
	void CreateUMG(class UClass* WidgetClass, class UUserWidget** UserWidget);
	void BPE_CreateSceneController(unsigned char aSceneId, class UGameSceneController** newCtrl);
	void UserConstructionScript();
	void CreateGUIInstanceManager();
	void CreateDefaultMaskInst();
	void EventPreloadMenuClasses();
	void EventPostGobackTitle();
	void OnBeginGameTitle();
	void DoScreenMask(bool MaskOn, bool AutoDestroy, bool bInstantly);
	void OnStartGameSectionProc(unsigned char StartedSection);
	void CaptureScene(const struct FTransform& CameraTransform, bool bUsePlayerTransform, class UCameraComponent* BaseCamera);
	void ChangeScreenMask(class AScreenMaskBase* NewScreenMask);
	void Event_Go_Back_Scene_Screen_Mask();
	void ReceiveBeginPlay();
	void BPE_DoLoadSceneStreamLevel();
	void BPE_DoUnloadSceneStreamLevel();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnDoSceneCapture(const struct FTransform& CaptureTransform, class UCameraComponent* BaseCamera);
	void BPE_PlayLongChat(const struct FString& LongchatName, bool bInstantly);
	void BPE_MapChange(const struct FString& MapName, const struct FString& MapLocator, EMapChangeReason reason);
	void OnRestartFieldScene();
	void OnChangeDisplayScene(unsigned char ChangedScene, unsigned char OldScene);
	void BPE_PlayLongChatWithArgs(const struct FString& LongchatName, const struct FLongChatPlayArgs& InArgs);
	void BPE_PlayMovie(const struct FString& movieName);
	void OnEndMovie(unsigned char ActiveScene, unsigned char PrevScene);
	void OnExecAutoSave();
	void DelayedUpdateLongchatPlayQue(bool bPostMapChange);
	void OnTextureCacheFlash(bool bGarbageCollection, bool DropMips);
	void BPE_MemoryRefresh(bool bGarbageCollection, bool DropMips);
	void BPE_TextureRefresh(bool bGarbageCollection, bool DropMips);
	void OnChangeScenarioCounter(int counter, int Prev);
	void EventOnChanageDisplayScene(unsigned char ChangedScene, unsigned char OldScene);
	void Event_On_Reset_Player_Free_Lock_Until_Map_Jump(const struct FString& NewMapName, const struct FString& OldMapName);
	void OnChangeGameScene(unsigned char ChangedScene, unsigned char OldScene);
	void 񣌘򠳾񍯐�0�0_1(EAriseGameState ChangedState, bool NewState);
	void ExecuteUbergraph_BP_AriseGamemode(int EntryPoint);
	void EventAutoSaveCancel__DelegateSignature();
	void EventChangeLocation_PFUI__DelegateSignature(const struct FString& NewLocationName);
	void EventAutoSaveComplite__DelegateSignature();
	void EventRequestAutoSave__DelegateSignature();
	void EventExecAutoSave__DelegateSignature();
	void EventOpenFastTravelPoint__DelegateSignature(const struct FString& LocationName);
	void EventRestartFieldScene__DelegateSignature();
	void EventChangeLocation__DelegateSignature(const struct FString& NewLocationName);
	void EventBattleStart__DelegateSignature();
	void EventPreMapChange__DelegateSignature(const struct FString& NewMapName, const struct FString& OldMapName);
	void EventFieldWakeup__DelegateSignature(unsigned char PrevScene);
	void EventPostMapChange__DelegateSignature(const struct FString& NewMapName, const struct FString& OldMapName);
	void OnChangeWorldTime__DelegateSignature(float NewWorldTime);
	void DoChangeMapEnvironment__DelegateSignature(const struct FString& EnvName);
	void DoCaptureScene__DelegateSignature(const struct FTransform& CaptureTransform, class UCameraComponent* BaseCamera);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
