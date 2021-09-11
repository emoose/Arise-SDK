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

// Class AriseSound.AriseAmbientSound
// 0x0028 (0x0350 - 0x0328)
class AAriseAmbientSound : public AActor
{
public:
	struct FString                                     EventName;                                                // 0x0328(0x0010) (Edit, ZeroConstructor)
	float                                              AttenuationScalingFactor;                                 // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPlay;                                                // 0x033C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	float                                              OcclusionRefreshInterval;                                 // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class UAkComponent*                                AkComponent;                                              // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseAmbientSound");
		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
	void SetSwitch(const struct FString& SwitchGroup, const struct FString& SWITCH);
	void SetRTPCValue(const struct FString& RTPC, float Value, float InterpTimeSec);
	void SetReverbEffect(bool bUseReverb);
	void SetEventName(const struct FString& InEventName, bool bReplayIfPlaying);
	void PostEvent(const struct FString& EventNameString);
	bool IsPlaying();
	struct FString GetEventName();
};


// Class AriseSound.AriseAmbientSoundMapActorBase
// 0x0040 (0x0368 - 0x0328)
class AAriseAmbientSoundMapActorBase : public AActor
{
public:
	bool                                               bAutoSpawn;                                               // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	class UAriseAmbientSoundMap*                       Map;                                                      // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawned;                                                 // 0x0338(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPlay;                                                // 0x0339(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2E];                                      // 0x033A(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseAmbientSoundMapActorBase");
		return ptr;
	}

};


// Class AriseSound.AriseAmbientSoundMap
// 0x0010 (0x0038 - 0x0028)
class UAriseAmbientSoundMap : public UObject
{
public:
	TArray<struct FAriseAmbientSoundPlacementData>     PlacementDataArray;                                       // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseAmbientSoundMap");
		return ptr;
	}

};


// Class AriseSound.AriseSoundSEBase
// 0x0028 (0x0350 - 0x0328)
class AAriseSoundSEBase : public AActor
{
public:
	bool                                               IsPlayOnBeginPlay;                                        // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	struct FString                                     PlayEventName;                                            // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UPostEventInfoBase*                          SEInstance;                                               // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseSoundSEBase");
		return ptr;
	}


	void Stop(float InterpTimeSec);
	void Resume(float InterpTimeSec);
	void PlayByName(const struct FString& EventName);
	void Play();
	void Pause(float InterpTimeSec);
	bool IsPlaying();
	struct FString GetPlayingMusicEventName();
};


// Class AriseSound.AriseSoundAmbientSE
// 0x0008 (0x0358 - 0x0350)
class AAriseSoundAmbientSE : public AAriseSoundSEBase
{
public:
	float                                              AttenuationScalingFactor;                                 // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionRefreshInterval;                                 // 0x0354(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseSoundAmbientSE");
		return ptr;
	}

};


// Class AriseSound.AriseSoundBankDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAriseSoundBankDatabase : public UXmlDatabaseBase
{
public:
	struct FAriseSoundBankDataList                     Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseSoundBankDatabase");
		return ptr;
	}

};


// Class AriseSound.SoundBankDLCDataClass
// 0x0010 (0x01C8 - 0x01B8)
class USoundBankDLCDataClass : public UXmlDatabaseBase
{
public:
	struct FSoundBankDLCDataList                       Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.SoundBankDLCDataClass");
		return ptr;
	}


	bool IsEnableIndex_Data(int Index);
};


// Class AriseSound.AriseSoundBGM
// 0x0000 (0x0350 - 0x0350)
class AAriseSoundBGM : public AAriseSoundSEBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseSoundBGM");
		return ptr;
	}

};


// Class AriseSound.AriseSoundInfoDatabase
// 0x0040 (0x0068 - 0x0028)
class UAriseSoundInfoDatabase : public UObject
{
public:
	TArray<struct FAriseSoundBankInfo>                 BankInfos;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FAriseSoundEventInfo>                EventInfos;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FAriseSoundRTPCInfo>                 RTPCInfos;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FAriseSoundSwitchInfo>               SwitchInfos;                                              // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseSoundInfoDatabase");
		return ptr;
	}


	bool SyncInfo();
};


// Class AriseSound.AriseSoundInterface
// 0x00D8 (0x0100 - 0x0028)
class UAriseSoundInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TMap<int, class UPostEventInfoBase*>               EventInfoMap;                                             // 0x0030(0x0050) (ZeroConstructor)
	TArray<int>                                        PlayEndList;                                              // 0x0080(0x0010) (ZeroConstructor)
	TArray<int>                                        DeleteEventInfoKeyList;                                   // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x00A0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseSoundInterface");
		return ptr;
	}

};


// Class AriseSound.AriseSoundMapBGMDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAriseSoundMapBGMDatabase : public UXmlDatabaseBase
{
public:
	struct FMapBGMDataCollection                       Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseSoundMapBGMDatabase");
		return ptr;
	}

};


// Class AriseSound.AriseSoundNewStatics
// 0x0000 (0x0028 - 0x0028)
class UAriseSoundNewStatics : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseSoundNewStatics");
		return ptr;
	}


	void STATIC_StopEventByInfo(class UPostEventInfoBase* Info, float InterpTimeSec);
	void STATIC_StopEventByEventName(class AActor* Actor, const struct FString& EventName);
	void STATIC_StopEvent(class AActor* Actor, const struct FString& EventName);
	void STATIC_StopAllEvents(class AActor* Actor);
	bool STATIC_SetSwitch(class AActor* Actor, const struct FString& SwitchGroup, const struct FString& SWITCH);
	bool STATIC_SetState(const struct FString& StateGroup, const struct FString& State);
	void STATIC_SetSoundPauseEventEnable(bool in_IsEnable);
	bool STATIC_SetRTPCValue(class AActor* Actor, const struct FString& RTPCName, float Value, float InterpTimeSec);
	void STATIC_SetReverbEnable(class AActor* Actor, bool IsEnable);
	void STATIC_SeekOnEvent(class AActor* Owner, const struct FString& EventName, int PositionMs);
	void STATIC_ResumeEventByInfo(class UPostEventInfoBase* Info, float InterpTimeSec);
	void STATIC_ResumeEventByEventName(class AActor* Actor, const struct FString& EventName);
	void STATIC_ResumeEvent(class AActor* Actor, const struct FString& EventName);
	class UPostEventInfoBase* STATIC_PlayEventWithParam(const struct FSoundPlayEventParam& Param);
	int STATIC_PlayEventRaw(class AActor* Actor, const struct FString& EventName);
	class UPostEventInfoBase* STATIC_PlayEventByAkComponent(class UAkComponent* AkComponent, const struct FString& EventName);
	class UPostEventInfoBase* STATIC_PlayEventAtLocation(class AActor* Actor, const struct FString& EventName, const struct FVector& Location, bool bAutoDestory, class UObject* WorldContextObject);
	class UPostEventInfoBase* STATIC_PlayEvent(class AActor* Actor, const struct FString& EventName);
	void STATIC_PauseEventByInfo(class UPostEventInfoBase* Info, float InterpTimeSec);
	void STATIC_PauseEventByEventName(class AActor* Actor, const struct FString& EventName);
	void STATIC_PauseEvent(class AActor* Actor, const struct FString& EventName);
	bool STATIC_IsPlayingByID(int PlayingID);
	bool STATIC_IsPlayingByEventName(const struct FString& in_EventName);
	void STATIC_GetSoundEventListByRegex(const struct FString& iPattern, TArray<struct FString>* OutEventList);
	void STATIC_GetLoadedSoundBankList(TArray<struct FString>* OutEventList);
	void STATIC_ExecuteActionOnEventRaw(const struct FString& EventName, EAkActionOnEventType AkActionOnEventType, class AActor* Actor, float InterpTimeSec, int PlayingID);
	void STATIC_ExecuteActionOnEvent(class UPostEventInfoBase* PostEventInfo, EAkActionOnEventType AkActionOnEventType, float InterpTimeSec);
};


// Class AriseSound.PostEventInfoBase
// 0x0058 (0x0080 - 0x0028)
class UPostEventInfoBase : public UObject
{
public:
	EPostEventInfoState                                State;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ERequestEventType                                  EventType;                                                // 0x0029(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                PlayingID;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class AActor*                                      Owner;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UAkComponent*                                AkComponent;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               IsAtLocation;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    EndCallbacks;                                             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.PostEventInfoBase");
		return ptr;
	}


	bool IsPlaying();
	bool IsAkPlaying();
};


// Class AriseSound.AriseSoundSettings
// 0x0070 (0x0098 - 0x0028)
class UAriseSoundSettings : public UObject
{
public:
	struct FSoftObjectPath                             SoundBankDatabaseRef;                                     // 0x0028(0x0018) (Edit, Config)
	struct FSoftObjectPath                             MapBGMDatabaseRef;                                        // 0x0040(0x0018) (Edit, Config)
	struct FSoftObjectPath                             SoundInfoDatabasePath;                                    // 0x0058(0x0018) (Edit, Config)
	struct FSoftObjectPath                             SoundBankDLCDatabaseRef;                                  // 0x0070(0x0018) (Edit, Config)
	float                                              WwiseAudioFrameUpdateDeltaTime_Win;                       // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              WwiseAudioFrameUpdateDeltaTime_PS4;                       // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              WwiseAudioFrameUpdateDeltaTime_XB1;                       // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseSoundSettings");
		return ptr;
	}

};


// Class AriseSound.AriseSoundStatics
// 0x0000 (0x0028 - 0x0028)
class UAriseSoundStatics : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseSound.AriseSoundStatics");
		return ptr;
	}


	void STATIC_UnloadSceneBank(TEnumAsByte<ESoundBankLoadScene> InType);
	void STATIC_UnloadBankAsync(const struct FString& BankName);
	void STATIC_UnloadBank(const struct FString& BankName);
	void STATIC_StopSoundEvent(const struct FString& EventName, class AActor* Owner);
	void STATIC_StopSound(class AActor* Owner);
	void STATIC_SpawnAmbientSoundActors();
	void STATIC_SetVolume_VOICE(int Value);
	void STATIC_SetVolume_SE(int Value);
	void STATIC_SetVolume_BGM(int Value);
	void STATIC_SetSwitch(class AActor* Owner, const struct FString& SwitchGroup, const struct FString& SWITCH);
	void STATIC_SetState(const struct FString& StateGroup, const struct FString& State);
	void STATIC_SetRTPCValueGlobal(const struct FString& RTPC, float Value, float InterpTimeSec);
	void STATIC_SetRTPCValue(class AActor* Owner, const struct FString& RTPC, float Value, float InterpTimeSec);
	void STATIC_SetReverbEffect(class AActor* Owner, bool bUseReverb);
	void STATIC_SetListenerOverridePosition(const struct FVector& Location, const struct FRotator& Rotation);
	void STATIC_SetListenerOverride();
	void STATIC_SeekSoundEvent(class AActor* Owner, const struct FString& EventName, int PositionMs);
	void STATIC_ResumeSoundEvent(const struct FString& EventName, class AActor* Owner);
	void STATIC_RemoveCustomListener(const struct FString& ListenerName, class UObject* WorldContextObject);
	void STATIC_QueueEventAtLocation(const struct FString& EventName, const struct FVector& Location, class UObject* WorldContextObject, bool bAutoDestory);
	void STATIC_QueueEvent(class AActor* Owner, const struct FString& EventName);
	int STATIC_PostVoiceEvent(const struct FString& EventName, class AActor* SpeakerActor);
	void STATIC_PostEventWithParam(class AActor* Owner, const struct FPostEventParam& Param);
	int STATIC_PostEventWithCallback(class AActor* Owner, const struct FString& EventName);
	void STATIC_PostEventAtLocationWithParam(const struct FVector& Location, const struct FPostEventParam& Param, class UObject* WorldContextObject);
	void STATIC_PostEventAtLocation(const struct FString& EventName, const struct FVector& Location, class UObject* WorldContextObject, bool bAutoDestory);
	void STATIC_PostEvent(class AActor* Owner, const struct FString& EventName);
	void STATIC_PauseSoundEvent(const struct FString& EventName, class AActor* Owner);
	void STATIC_LoadSceneBank(TEnumAsByte<ESoundBankLoadScene> InType);
	void STATIC_LoadDLCBank();
	void STATIC_LoadBankAsync(const struct FString& BankName);
	void STATIC_LoadBank(const struct FString& BankName);
	bool STATIC_IsSetVoiceLanguageLoadFinished();
	bool STATIC_IsPlayingByID(int PlayingID);
	bool STATIC_IsPlaying(class AActor* Owner);
	bool STATIC_IsLoadedSceneBanks(TEnumAsByte<ESoundBankLoadScene> InType);
	bool STATIC_IsExistBank(const struct FString& BankName);
	bool STATIC_IsAvailableBank(const struct FString& BankName);
	bool STATIC_GetSoundEventPlayPosition(int PlayingID, float* PlayPosition);
	struct FString STATIC_GetPersonaPreviewListenerName();
	bool STATIC_GetListenerOverridePosition(struct FVector* OutLocation, struct FRotator* OutRotation);
	struct FString STATIC_GetCascadePreviewListenerName();
	class AAriseAmbientSound* STATIC_GetBGMActor();
	class AAriseAmbientSoundMapActorBase* STATIC_GetAmbientSoundActor();
	void STATIC_FlushEvents();
	class USceneComponent* STATIC_FindCustomListener(const struct FString& ListenerName, class UObject* WorldContextObject);
	void STATIC_ClearListenerOverride();
	void STATIC_AddCustomListener(const struct FString& ListenerName, class USceneComponent* Listener);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
