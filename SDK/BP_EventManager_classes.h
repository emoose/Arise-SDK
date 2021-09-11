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

// BlueprintGeneratedClass BP_EventManager.BP_EventManager_C
// 0x0283 (0x0863 - 0x05E0)
class ABP_EventManager_C : public AEventManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       PlayEventLevelName;                                       // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEventComponent*                             PlayingComponent;                                         // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ALevelSequenceActor*                         PlayingLevelSequenceActor;                                // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EvLevelUnload;                                            // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowDebugInfo;                                           // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	class AActor*                                      CurrentPlayer;                                            // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBP_GSC_Field_C*                             FieldController;                                          // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAriseGameProcess*                           GameProcess;                                              // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    WatchScriptProcess;                                       // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     ChangeMapName;                                            // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bShowNowloading;                                          // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	class ULongChatDatabase*                           LongChatDatabase;                                         // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayLoopLevelSequence;                                   // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOldShowGimmic;                                           // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OldShowEnemy;                                             // 0x0689(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNpcSpawnPostBattle;                                      // 0x068A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x068B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    EvPreEventBattle;                                         // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ULevelSequencePlayer*                        CurrentSubSequencePlayer;                                 // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x28];                                      // 0x06A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_EventManager.BP_EventManager_C.NullObject
	class UUMG_EventPause_C*                           UMGPause;                                                 // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bEventAllSkip;                                            // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    EvEventSkipAll;                                           // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bPlayEventComponet;                                       // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	TArray<struct FName>                               Empty;                                                    // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bStartedBattle;                                           // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0709(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPreEvent;                                               // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndEvent;                                               // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FName>                               OldShowLevels;                                            // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_BtlLaunchWorkerActor_C*                  BattleLauncher;                                           // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceMapChange;                                          // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	class ABP_EventSkipController_C*                   EventSkipController;                                      // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EvPlayLevelSequence;                                      // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    _OnPlayLevelSequence;                                     // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<class UCineCameraComponent*, float>           CineCameraBloomIntensityMap;                              // 0x0778(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UCineCameraComponent*, float>           CineCameraMotionBlurAmountMap;                            // 0x07C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DelayMessageSkip;                                         // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMessageSkipEnable;                                       // 0x081C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartPauseManagement;                                    // 0x081D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreloading;                                              // 0x081E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x081F(0x0001) MISSED OFFSET
	class AEventTrophyUnlocker_C*                      EventTrophyUnlocker;                                      // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      EventManagerLogger;                                       // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBattleStartOnPostEvent;                                  // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	struct FName                                       FinalizeTaskName;                                         // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneFinalizeTask*                          FinalizeTask;                                             // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnloadingEventComponent;                                 // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	int                                                tmpLevelShowCounter;                                      // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               TempLevels;                                               // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bNeedLevelUnload;                                         // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPostLongchatEvent;                                       // 0x0861(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDelayLongchatClose;                                      // 0x0862(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventManager.BP_EventManager_C");
		return ptr;
	}


	void GetEventLevelSequencePlayer(class ULevelSequencePlayer** Player);
	void IsPostEventNpcRespawn(bool* bNpcRespawn);
	void DestroyObjects(bool* bAccept);
	void IsRunPostScript(bool* bRun);
	void GetCurrentFrameInfo(struct FString* Info);
	void IsNeedDisplayFrameInfo(bool* Need);
	void SoundRecoveryOnEventPlayEnd();
	void SendKpiPopularity();
	void GetMovieSceneEventType(EMovieSceneEventType* EventType);
	void IsPreloadComplete_(bool* bPreloaded);
	void DestroyObjectsImpl();
	void IsRunPostScriptImpl(bool* bRun);
	bool _PostEventNpcRespawn_();
	bool IsEnableSystemPause();
	void _EventKPIManagement(const struct FString& EventName);
	void _OpenLocationFlag();
	void _CanEventSkipTiming_(bool* bCanSkip);
	void IsNeedDisplayPlayingFrame(bool* bNeedDisplay);
	struct FString GetCurrentFrames();
	void DoPostHpRecover();
	void DoPostFade();
	void ApplyPostProcessSettings(float BloomIntensity, float MotionBlurAmount, struct FPostProcessSettings* PostProcessSettings);
	void _EventSeekManagement();
	void _PostEventPostProcessOverride();
	void _PreEventPostProcessOverride();
	void _PostEventSoundControl();
	void _IsChangeMapOrder_(const struct FString& MapName, int oldSceCounter, int newSceCounter, bool* bChange);
	void PauseManagement_Release();
	void _SetSkipEnable(class UMovieSceneSequencePlayer* Player);
	void _RenderDebugInfo();
	void EventSkipManagement(float Tick);
	void PrintPlayEventInfo(bool bPrint);
	void EventAllSkip();
	void GetInputPause(bool* bPressed);
	void PauseManagement();
	void GetPlayerAndFieldController();
	void AutoSaveManagement();
	void SetPlayTransform(class ULevelSequencePlayer* Player);
	void MapHideInEvent();
	struct FString ConvertLongchatName(const struct FString& EventName);
	void BattlePreload();
	void ShowNowLoading(bool NewShow);
	void PostEventProc(bool bPostLongchat);
	void CanEncount_(bool* bCanEncount);
	void UserConstructionScript();
	void EventManagerFinalize();
	void Event_ShowLevels_HiddenInPlayEvent(bool bDelayShowObject, bool bPostLongchat);
	void OnPlayLevelSequence(class ULevelSequence* Sq, class ALevelSequenceActor* SqActor, bool bLoop);
	void OnSkippedToEnd(const struct FFrameNumber& SkipFrame, const struct FName& EventName);
	void OnPlayEnd();
	void OnSkipEnable(class ULevelSequencePlayer* SequencePlayer, float DelaySec);
	void OnEventEndDelay(float DelaySec);
	void BPE_MapChange(const struct FString& MapName, const struct FString& LocatorName, int oldSceCounter, int newSceCounter);
	void EventAtPFRuning();
	void BPE_PlayLongChat(const struct FString& EventNo);
	void OnChangeScene(unsigned char ActiveScene, unsigned char PrevScene);
	void ReceiveBeginPlay();
	void BPE_PlayEvent(class UEventComponent* EventComponent);
	void ReceiveTick(float DeltaSeconds);
	void OnLevelUnload(class UEventComponent* nowComponent, bool bAbort);
	void OnEventFinalize(const struct FString& EventName, const struct FString& OptionName);
	void OnPostMapChange(const struct FString& NewMapName, const struct FString& OldMapName);
	void BPE_PreEvent(EEventPlayState playState);
	void BPE_RunScript(class UClass* ScriptClass, const struct FString& ScriptUserString, class AActor* scriptOwnerActor);
	void OnWatchEventScript();
	void BPE_EndEvent();
	void OnEventBattleStart();
	void OnPostEventBattle(unsigned char PrevScene);
	void BPE_PlayMovie(const struct FString& EventNo);
	void OnEndMovie(unsigned char ActiveScene, unsigned char PrevScene);
	void BPE_OnPreFade();
	void OnPreEventBattle();
	void OnEventSkipAll();
	void BPE_BattleStartRequest();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BPE_ShowNowLoading(bool bShow);
	void OnLoadClass(class UClass* InLoadedAssetClass);
	void RequestMapShowOutEvent();
	void OnGoBackTitle();
	void ExecuteUbergraph_BP_EventManager(int EntryPoint);
	void _OnPlayLevelSequence__DelegateSignature(const struct FName& PlayEventLevelName, int StartFrame);
	void EvPlayLevelSequence__DelegateSignature(class ULevelSequence* LevelSequence, class ALevelSequenceActor* LevelSequenceActor, bool Loop);
	void OnEndEvent__DelegateSignature();
	void OnPreEvent__DelegateSignature();
	void EvEventSkipAll__DelegateSignature();
	void EvPreEventBattle__DelegateSignature();
	void WatchScriptProcess__DelegateSignature();
	void EvLevelUnload__DelegateSignature(class UEventComponent* nowCoponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
