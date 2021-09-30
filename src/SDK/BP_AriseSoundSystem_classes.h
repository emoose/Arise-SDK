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

// BlueprintGeneratedClass BP_AriseSoundSystem.BP_AriseSoundSystem_C
// 0x0280 (0x0698 - 0x0418)
class ABP_AriseSoundSystem_C : public AAriseSoundSystem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     CurrentPfMusicName;                                       // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FMapBGMData                                 CurrentMapBGMData;                                        // 0x0438(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     CurrentPfMusicEventName;                                  // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FMapBGMScenarioCondition                    CurrentUseMapBGMCondition;                                // 0x0468(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsUsingMapBGMCondition;                                   // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	struct FMapBGMData                                 PrevMapBGMData;                                           // 0x0500(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMapBGMScenarioCondition                    PrevUseMapBGMCondition;                                   // 0x0520(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     PrevPfMusicName;                                          // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PrevPfMusicEventName;                                     // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsNoPlayCurrentPfMusic;                                   // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05D1(0x0007) MISSED OFFSET
	struct FString                                     CurrentBtlMusicEventName;                                 // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CurrentBtlMusicName;                                      // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsNoPlayCurrentBtlMusic;                                  // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPauseMapPfMusicFlag;                                    // 0x05F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSkipPlayMapBtlMusicFlag;                                // 0x05FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrossFadeMapBGMFlag;                                    // 0x05FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class UPostEventInfoBase*                          TestTempSEInstance;                                       // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TestPlayingID_2;                                          // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TestPlayingID_3;                                          // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CurrentEventMusicName;                                    // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CurrentEventMusicEventName;                               // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ConstBattleBusName;                                       // 0x0630(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ConstLocationBusName;                                     // 0x0640(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ConstSystemBusName;                                       // 0x0650(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ConstMasterBusName;                                       // 0x0660(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                ConfigBGMPlayIdx;                                         // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ListnerLoc;                                               // 0x0674(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     EventBattleBGMName;                                       // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AAriseSoundBGM*                              pfVoiceActor;                                             // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseSoundSystem.BP_AriseSoundSystem_C");
		return ptr;
	}


	void IsSameCurrentPfAndBattleMusic(bool* IsSame);
	void GetCurrentPfMusicEventName(struct FString* Result);
	void IsBtlEncountGroupBtlMusicNameNull(const struct FName& Label, bool* IsNull);
	void IsCurrentPfMusicNameNull(bool* IsNull);
	void IsCrossFadeMapBGM(bool* IsCrossFade);
	void IsSkipPlayMapBtlMusic(bool* IsSkipPlay);
	void IsPlayingPfBGM(bool* IsPlaying);
	void IsSamePrevAndCurrentPfMusic(bool* IsSame);
	void PrepareNextAreaMapBGM(const struct FString& NextLevelName, bool* IsNoPlayPfMusic);
	void IsPauseMapPfMusic(bool* IsPause);
	void @PauseEventVoice(const struct FString& InVoiceName);
	void @PlayEventVoice(const struct FString& InVoiceName);
	void @ResetSoundSystem();
	void SetCurrentPfMusicName(const struct FString& CurrentPFName);
	void @SetSpatialCondition(bool Flag);
	void PlayConfigBtlBGM();
	void @ResumeAllSound();
	void @PauseAllSound();
	void SetGayaCondition(const struct FString& GayaCondition);
	void SetAmbientCondition(const struct FString& AmbientCondition);
	void @SetDuckingVolume(int BGM_Volume, int Ambient_Volume, int Gaya_Volume);
	void @CheckAreaMapSatisfyCondition();
	void IsSamePlayingAndDefaultPfMusic(bool* IsSame);
	void @PlayBossBtlBGM(const struct FName& Label);
	void @PlayBossBtlBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec, const struct FName& Label);
	void IsSameEventMusicAndBossBtlMusic(const struct FName& Label, bool* IsSame);
	void GetBtlEncountGroupBtlMusicName(const struct FName& Label, struct FString* BGMLabel);
	void ResumeBGM(EBGMFadeType FadeType);
	void PauseBGM(EBGMFadeType FadeType);
	void GetBusNameByType(ESoundBusType BusType, struct FString* ReturnBusName);
	void MakeBusFadeEventName(ESoundBusType BusType, EBGMFadeType FadeType, EAkActionOnEventType EventType, struct FString* ReturnEventName);
	void @StopEventBGM(EBGMFadeType FadeType);
	void @ResumeEventBGM(EBGMFadeType FadeType);
	void @PauseEventBGM(EBGMFadeType FadeType);
	void @PlayEventBGM(const struct FString& MusicName);
	void @PlayPreparedMapBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec);
	void TestPlayEvent(const struct FString& MusicName);
	void @StopMapBtlBGM(EBGMFadeType FadeType);
	void @StopMapPfBGM(EBGMFadeType FadeType);
	void @ResumeMapPfBGM(EBGMFadeType FadeType);
	void @PauseMapPfBGM(EBGMFadeType FadeType);
	void GetAreaMapConditionBtlMusicName(const struct FMapBGMScenarioCondition& Condition, struct FString* BtlMusicName);
	void @PlayPreparedAreaMapBtlMusic();
	void IsNoPlayCurrentPfMusicName(bool* IsNoPlay);
	void @PlayPreparedAreaMapPfMusic();
	void MakeAreaName(const struct FString& LevelName, struct FString* AreaName);
	void @PrepareNextAreaMapBGM(const struct FString& NextLevelName, bool* IsNoPlayPfMusic);
	void MakePlayEventString(struct FString* MusicName, struct FString* ReturnEventName);
	void GetAreaMapConditionMusicName(struct FMapBGMScenarioCondition* Condition, struct FString* PfMusicName, struct FString* BtlMusicName, struct FString* Ambient_Condition, struct FString* Gaya_Condition);
	void GetAreaMapSatisfyCondition(struct FMapBGMData* MapBGMData, int* idx, struct FMapBGMScenarioCondition* Condition);
	void GetAreaConditionSatisfyIdx(struct FMapBGMData* MapBGMData, int* ArrayIdx);
	void DispCurrentPlayPfMusicName();
	void @StopBGM(EBGMFadeType FadeType);
	void DispCurrentAreaName();
	void GetCurrentAreaMapBGMData(struct FMapBGMData* Data);
	void MakeCurrentAreaName(struct FString* CurrentAreaName);
	void GetAreaMapBtlMusicName(const struct FString& AreaName, struct FString* BtlMusicName);
	void GetAreaMapPfMusicName(const struct FString& AreaName, struct FString* PfMusicName);
	void GetAreaMapBGMData(const struct FString& AreaName, struct FMapBGMData* MapBGMData);
	void UserConstructionScript();
	void PauseAllSound();
	void ResumeAllSound();
	void CheckAreaMapSatisfyCondition();
	void PlayPreparedMapBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec);
	void SetSpatialCondition(bool Flag);
	void StopEventBGM(EBGMFadeType FadeType);
	void ResumeEventBGM(EBGMFadeType FadeType);
	void ResetSoundSystem();
	void PauseEventBGM(EBGMFadeType FadeType);
	void PlayEventBGM(const struct FString& MusicName);
	void ResumeMapPfBGM(EBGMFadeType FadeType);
	void SetPauseMapPfMusicFlag(bool NewFlag);
	void SetDuckingVolume(int BGM_Volume, int Ambient_Volume, int Gaya_Volume);
	void Test_SEEndCallbackEvent(class UPostEventInfoBase* PostEventInfo);
	void PlayEventVoice(const struct FString& InVoiceName);
	void PlayBossBtlBGM(const struct FName& Label);
	void PauseEventVoice(const struct FString& InVoiceName);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void PlayBossBtlBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec, const struct FName& Label);
	void StopMapBtlBGM(EBGMFadeType FadeType);
	void PlayPreparedAreaMapPfMusic();
	void StopMapPfBGM(EBGMFadeType FadeType);
	void PauseMapPfBGM(EBGMFadeType FadeType);
	void PlayPreparedAreaMapBtlMusic();
	void StopBGM(EBGMFadeType FadeType);
	void ExecuteUbergraph_BP_AriseSoundSystem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
