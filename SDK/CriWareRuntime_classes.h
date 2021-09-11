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

// Class CriWareRuntime.AtomAsrRack
// 0x0008 (0x0030 - 0x0028)
class UAtomAsrRack : public UObject
{
public:
	int                                                RackId;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomAsrRack");
		return ptr;
	}


	void SetEffectBypass(const struct FString& BusName, const struct FString& EffectName, bool Bypasses);
	void SetBusVolumeByName(const struct FString& BusName, float Volume);
	void SetBusSendLevelByName(const struct FString& SourceBusName, const struct FString& DestBusName, float Level);
	class UAtomAsrRack* STATIC_GetDefaultAsrRack();
	bool GetBusAnalyzerInfo(const struct FString& DspBusName, int* num_channels, TArray<float>* rms_levels, TArray<float>* peak_levels, TArray<float>* peak_hold_levels);
	class UAtomAsrRack* STATIC_GetAsrRack(int AsrRackId);
	void DetachDspBusSetting();
	void AttachDspBusSetting(const struct FString& SettingName);
	void ApplyDspBusSnapshot(const struct FString& SnapshotName, int Milliseconds);
};


// Class CriWareRuntime.AtomCategory
// 0x0000 (0x0028 - 0x0028)
class UAtomCategory : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomCategory");
		return ptr;
	}


	void STATIC_StopByName(const struct FString& CategoryName);
	void STATIC_SetVolumeByName(const struct FString& CategoryName, float Volume);
	void STATIC_SetAisacControlByName(const struct FString& CategoryName, const struct FString& AisacName, float Value);
	bool STATIC_ResetAllAisacControlByName(const struct FString& CategoryName);
	bool STATIC_ResetAllAisacControlById(int CategoryID);
	void STATIC_PauseByName(const struct FString& CategoryName, bool bPause);
	bool STATIC_IsPausedByName(const struct FString& CategoryName);
	float STATIC_GetVolumeByName(const struct FString& CategoryName);
	int STATIC_GetNumAttachedAisacsByName(const struct FString& CategoryName);
	int STATIC_GetNumAttachedAisacsById(int CategoryID);
	float STATIC_GetCurrentAisacControlValueByName(const struct FString& CategoryName, const struct FString& AisacControlName);
	float STATIC_GetCurrentAisacControlValueById(int CategoryID, int AisacControlId);
	void STATIC_GetAttachedAisacInfoByName(const struct FString& CategoryName, int AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo);
	void STATIC_GetAttachedAisacInfoById(int CategoryID, int AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo);
};


// Class CriWareRuntime.AtomComponent
// 0x0C60 (0x0EB0 - 0x0250)
class UAtomComponent : public USceneComponent
{
public:
	class USoundAtomCue*                               Sound;                                                    // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoDestroy : 1;                                         // 0x0258(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	bool                                               bPersistAcrossLevelTransition;                            // 0x025C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                              // 0x0260(0x0001)
	unsigned char                                      bIsUISound : 1;                                           // 0x0260(0x0001)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	float                                              DefaultVolume;                                            // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableMultipleSoundPlayback;                             // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePlaylist;                                             // 0x026D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x026E(0x0002) MISSED OFFSET
	class UAtomSoundObject*                            DefaultSoundObject;                                       // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DefaultBlockIndex;                                        // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	TArray<struct FAtomAisacControlParam>              DefaultAisacControl;                                      // 0x0280(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAtomSelectorParam>                  DefaultSelectorLabel;                                     // 0x0290(0x0010) (Edit, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                          // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWorld*                                      PlayWorld;                                                // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGameViewportClient*                         GameViewport;                                             // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x02C0(0x0018) MISSED OFFSET
	unsigned char                                      bOverrideAttenuation : 1;                                 // 0x02D8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData06[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     // 0x02E8(0x02A8) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0x920];                                     // 0x0590(0x0920) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomComponent");
		return ptr;
	}


	void Stop();
	void SetVolume(float Volume);
	void SetSoundObject(class UAtomSoundObject* SoundObject);
	void SetSound(class USoundAtomCue* NewSound);
	void SetSelectorLabel(const struct FString& Selector, const struct FString& Label);
	void SetPitchMultiplier(float NewPitchMultiplier);
	void SetPitch(float Pitch);
	void SetNextBlockIndex(int BlockIndex);
	void STATIC_SetDefaultAttenuationEnable(bool bEnable);
	void SetBusSendLevelOffsetByName(const struct FString& BusName, float LevelOffset);
	void SetBusSendLevelOffset(int BusId, float LevelOffset);
	void SetBusSendLevelByName(const struct FString& BusName, float Level);
	void SetBusSendLevel(int BusId, float Level);
	void SetAsrRackID(int asr_rack_id);
	void SetAisacByName(const struct FString& ControlName, float ControlValue);
	void Play(float StartTime);
	void Pause(bool bPause);
	void OnAudioFinished__DelegateSignature();
	bool IsPlaying();
	bool IsPaused();
	float GetTime();
	EAtomComponentStatus GetStatus();
	float GetSequencePosition();
	int GetNumQueuedSounds();
	bool STATIC_GetDefaultAttenuationEnable();
	struct FString GetCueName();
	int GetAtomComponentID();
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
	void EnqueueSound(class USoundAtomCue* NewSound);
	void STATIC_DestroyComponentByID(int TargetID);
};


// Class CriWareRuntime.AtomCueSheetLoaderComponent
// 0x0080 (0x02D0 - 0x0250)
class UAtomCueSheetLoaderComponent : public USceneComponent
{
public:
	struct FSoftObjectPath                             CueSheetReference;                                        // 0x0250(0x0018) (Edit, BlueprintVisible)
	class UCriFsBinderComponent*                       BinderComponent;                                          // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLoadCompleted;                                          // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoadError;                                              // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0290(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomCueSheetLoaderComponent");
		return ptr;
	}


	void OnLoadError__DelegateSignature();
	void OnLoadCompleted__DelegateSignature();
	void OnAtomCueSheetLoaded__DelegateSignature(class USoundAtomCueSheet* Loaded);
	void STATIC_LoadAtomCueSheet(class UObject* WorldContextObject, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo);
	void Load();
	EAtomCueSheetLoaderComponentStatus GetStatus();
	class USoundAtomCueSheet* GetAtomCueSheet();
};


// Class CriWareRuntime.AtomDeviceWatcher
// 0x0028 (0x0050 - 0x0028)
class UAtomDeviceWatcher : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnDeviceUpdated;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomDeviceWatcher");
		return ptr;
	}


	void OnDeviceUpdated__DelegateSignature();
	struct FString GetDeviceName();
	int GetDeviceChannelCount();
};


// Class CriWareRuntime.AtomDisposer
// 0x0010 (0x0338 - 0x0328)
class AAtomDisposer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomDisposer");
		return ptr;
	}

};


// Class CriWareRuntime.AtomListenerFocusPoint
// 0x0010 (0x0260 - 0x0250)
class UAtomListenerFocusPoint : public USceneComponent
{
public:
	float                                              DistanceFocusLevel;                                       // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DirectionFocusLevel;                                      // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomListenerFocusPoint");
		return ptr;
	}

};


// Class CriWareRuntime.AtomParameterComponent
// 0x0008 (0x0100 - 0x00F8)
class UAtomParameterComponent : public UActorComponent
{
public:
	class UAtomSoundObject*                            SoundObject;                                              // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomParameterComponent");
		return ptr;
	}

};


// Class CriWareRuntime.AtomProfileData
// 0x0000 (0x0028 - 0x0028)
class UAtomProfileData : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomProfileData");
		return ptr;
	}


	TArray<struct FAtomProfileItem> STATIC_CriWareAdx2ProfileDataUpdate(class UObject* WorldContextObject);
	void STATIC_CriWareAdx2ProfileDataSort(TArray<struct FAtomProfileItem> original_item, EAtomProfileSortType sort_type, EAtomSortOrderType order_type, TArray<struct FAtomProfileItem>* sorted_item);
};


// Class CriWareRuntime.AtomSound
// 0x0008 (0x0330 - 0x0328)
class AAtomSound : public AActor
{
public:
	class UAtomComponent*                              AtomComponent;                                            // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSound");
		return ptr;
	}

};


// Class CriWareRuntime.AtomSoundData
// 0x0010 (0x0338 - 0x0328)
class AAtomSoundData : public AActor
{
public:
	class USoundAtomCueSheet*                          CueSheet;                                                 // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSoundData");
		return ptr;
	}

};


// Class CriWareRuntime.AtomSoundObject
// 0x0018 (0x0048 - 0x0030)
class UAtomSoundObject : public UDataAsset
{
public:
	bool                                               EnableVoiceLimitScope;                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCategoryCueLimitScope;                              // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0032(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSoundObject");
		return ptr;
	}

};


// Class CriWareRuntime.AtomSpectrumAnalyzer
// 0x0000 (0x0028 - 0x0028)
class UAtomSpectrumAnalyzer : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSpectrumAnalyzer");
		return ptr;
	}


	void STATIC_GetLevelsDB(float display_range, TArray<float>* spectra);
	void STATIC_GetLevels(TArray<float>* spectra);
	void STATIC_CreateDspSpectra(class UAtomAsrRack* asr_rack, const struct FString& bus_name, int num_bands);
};


// Class CriWareRuntime.AtomStatics
// 0x0000 (0x0028 - 0x0028)
class UAtomStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomStatics");
		return ptr;
	}


	void STATIC_StopAllSounds();
	class UAtomComponent* STATIC_SpawnSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	class UAtomComponent* STATIC_SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	class UAtomComponent* STATIC_SpawnSound2D(class UObject* WorldContextObject, class USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	void STATIC_PlaySoundForAnimNotify(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	class UAtomComponent* STATIC_PlaySoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	void STATIC_PauseAudioOutput(bool bPause);
	bool STATIC_LoadAtomConfig(class USoundAtomConfig* AcfObject);
	class UAtomComponent* STATIC_CreateRootedAtomComponent(class UObject* WorldContextObject, bool bAutoDestroy);
};


// Class CriWareRuntime.AtomTriggerTableFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAtomTriggerTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomTriggerTableFunctionLibrary");
		return ptr;
	}


	bool STATIC_GetDataTableRowFromName(class UDataTable* Table, const struct FName& RowName, struct FAtomTriggerRow* OutRow);
};


// Class CriWareRuntime.CriFsBinderComponent
// 0x0060 (0x02B0 - 0x0250)
class UCriFsBinderComponent : public USceneComponent
{
public:
	struct FString                                     FilePath;                                                 // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnBindCompleted;                                          // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBindError;                                              // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0280(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriFsBinderComponent");
		return ptr;
	}


	void Stop();
	void OnBindError__DelegateSignature();
	void OnBindCompleted__DelegateSignature();
	ECriFsBinderStatus GetStatus();
	void Bind();
};


// Class CriWareRuntime.CriFsLoader
// 0x0008 (0x0330 - 0x0328)
class ACriFsLoader : public AActor
{
public:
	class UCriFsLoaderComponent*                       LoaderComponent;                                          // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriFsLoader");
		return ptr;
	}

};


// Class CriWareRuntime.CriFsLoaderComponent
// 0x0080 (0x02D0 - 0x0250)
class UCriFsLoaderComponent : public USceneComponent
{
public:
	struct FString                                     FilePath;                                                 // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnLoadCompleted;                                          // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoadError;                                              // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0280(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriFsLoaderComponent");
		return ptr;
	}


	void OnLoadError__DelegateSignature();
	void OnLoadCompleted__DelegateSignature();
	void Load();
	ECriFsLoaderStatus GetStatus();
	TArray<unsigned char> GetDataArray();
};


// Class CriWareRuntime.CriWareFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCriWareFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriWareFunctionLibrary");
		return ptr;
	}


	void STATIC_SetSpeakerAngleArray(ECriWareSpeakerSystem SpeakerSystem, TArray<float> Angles);
	void STATIC_SetGlobalLabelToSelectorByName(const struct FString& SelectorName, const struct FString& LabelName);
	void STATIC_SetGameVariableByName(const struct FString& GameVariableName, float Value);
};


// Class CriWareRuntime.CriWareInitializer
// 0x0000 (0x0028 - 0x0028)
class UCriWareInitializer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriWareInitializer");
		return ptr;
	}

};


// Class CriWareRuntime.CriWarePluginSettings
// 0x0268 (0x0290 - 0x0028)
class UCriWarePluginSettings : public UObject
{
public:
	bool                                               bNoExistCriWareIni;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FDirectoryPath                              NonAssetContentDir;                                       // 0x0030(0x0010) (Edit)
	struct FString                                     ContentDir;                                               // 0x0040(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	int                                                NumBinders;                                               // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	int                                                MaxBinds;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	int                                                NumLoaders;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	int                                                MaxPath;                                                  // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	bool                                               OutputsLogFileSystem;                                     // 0x0080(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                PS4_FileAccessThreadAffinityMask;                         // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0088(0x0004) MISSED OFFSET
	int                                                PS4_DataDecompressionThreadAffinityMask;                  // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0090(0x0004) MISSED OFFSET
	int                                                PS4_MemoryFileSystemThreadAffinityMask;                   // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0098(0x0004) MISSED OFFSET
	int                                                PS4_FileAccessThreadPriority;                             // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x00A0(0x0004) MISSED OFFSET
	int                                                PS4_DataDecompressionThreadPriority;                      // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x00A8(0x0004) MISSED OFFSET
	int                                                PS4_MemoryFileSystemThreadPriority;                       // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET
	bool                                               AutomaticallyCreateCueAsset;                              // 0x00B4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               UsesInGamePreview;                                        // 0x00B5(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x00B6(0x0001) MISSED OFFSET
	bool                                               OutputsLogAtom;                                           // 0x00B7(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x00B8(0x0004) MISSED OFFSET
	int                                                MaxVirtualVoices;                                         // 0x00BC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET
	int                                                NumStandardMemoryVoices;                                  // 0x00C4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x00C8(0x0004) MISSED OFFSET
	int                                                StandardMemoryVoiceNumChannels;                           // 0x00CC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET
	int                                                StandardMemoryVoiceSamplingRate;                          // 0x00D4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x00D8(0x0004) MISSED OFFSET
	int                                                NumStandardStreamingVoices;                               // 0x00DC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x00E0(0x0004) MISSED OFFSET
	int                                                StandardStreamingVoiceNumChannels;                        // 0x00E4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x00E8(0x0004) MISSED OFFSET
	int                                                StandardStreamingVoiceSamplingRate;                       // 0x00EC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData21[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	struct FSoftObjectPath                             AtomConfig;                                               // 0x00F8(0x0018) (Edit, Config)
	unsigned char                                      UnknownData22[0x18];                                      // 0x0110(0x0018) MISSED OFFSET
	struct FString                                     AcfFileName;                                              // 0x0128(0x0010) (ZeroConstructor, Config)
	float                                              DistanceFactor;                                           // 0x0138(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	TEnumAsByte<EAtomSoundRendererType>                SoundRendererTypeUI;                                      // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	int                                                SoundRendererType;                                        // 0x0144(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData25[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	TArray<struct FAtomAsrRackConfigUI>                AsrRackConfigUI;                                          // 0x0150(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAtomAsrRackConfig>                  AsrRackConfig;                                            // 0x0160(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData26[0x10];                                      // 0x0170(0x0010) MISSED OFFSET
	struct FString                                     Hardware1;                                                // 0x0180(0x0010) (ZeroConstructor, Config)
	struct FString                                     Hardware2;                                                // 0x0190(0x0010) (ZeroConstructor, Config)
	struct FString                                     Hardware3;                                                // 0x01A0(0x0010) (ZeroConstructor, Config)
	struct FString                                     Hardware4;                                                // 0x01B0(0x0010) (ZeroConstructor, Config)
	int                                                HcaMxVoiceSamplingRate;                                   // 0x01C0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	int                                                NumHcaMxMemoryVoices;                                     // 0x01C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	int                                                HcaMxMemoryVoiceNumChannels;                              // 0x01D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	int                                                NumHcaMxStreamingVoices;                                  // 0x01D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	int                                                HcaMxStreamingVoiceNumChannels;                           // 0x01E0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	bool                                               WASAPI_IsExclusive;                                       // 0x01E8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x01E9(0x0003) MISSED OFFSET
	int                                                WASAPI_BitsPerSample;                                     // 0x01EC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x01F0(0x0004) MISSED OFFSET
	int                                                WASAPI_SamplingRate;                                      // 0x01F4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x01F8(0x0004) MISSED OFFSET
	int                                                WASAPI_NumChannels;                                       // 0x01FC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x0200(0x0004) MISSED OFFSET
	int                                                PS4_ServerThreadAffinityMask;                             // 0x0204(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData36[0x4];                                       // 0x0208(0x0004) MISSED OFFSET
	int                                                PS4_OutputThreadAffinityMask;                             // 0x020C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x0210(0x0004) MISSED OFFSET
	int                                                PS4_ServerThreadPriority;                                 // 0x0214(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x0218(0x0004) MISSED OFFSET
	int                                                PS4_OutputThreadPriority;                                 // 0x021C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData39[0x4];                                       // 0x0220(0x0004) MISSED OFFSET
	bool                                               PS4_UseAudio3d;                                           // 0x0224(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	int                                                PS4_NumberOfAudio3dMemoryVoices;                          // 0x0228(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData41[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	int                                                PS4_SamplingRateOfAudio3dMemoryVoices;                    // 0x0230(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	int                                                PS4_NumberOfAudio3dStreamingVoices;                       // 0x0238(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData43[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	int                                                PS4_SamplingRateOfAudio3dStreamingVoices;                 // 0x0240(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData44[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	bool                                               InitializeMana;                                           // 0x0248(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData45[0x1];                                       // 0x0249(0x0001) MISSED OFFSET
	bool                                               EnableDecodeSkip;                                         // 0x024A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData46[0x1];                                       // 0x024B(0x0001) MISSED OFFSET
	int                                                MaxDecoderHandles;                                        // 0x024C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData47[0x4];                                       // 0x0250(0x0004) MISSED OFFSET
	int                                                MaxManaBPS;                                               // 0x0254(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x0258(0x0004) MISSED OFFSET
	int                                                MaxManaStreams;                                           // 0x025C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x0260(0x0004) MISSED OFFSET
	bool                                               UseH264Decoder;                                           // 0x0264(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData50[0x1];                                       // 0x0265(0x0001) MISSED OFFSET
	bool                                               bUseManaStartupMovies;                                    // 0x0266(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bWaitForMoviesToComplete;                                 // 0x0267(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bMoviesAreSkippable;                                      // 0x0268(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	TArray<struct FString>                             StartupMovies;                                            // 0x0270(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      UnknownData52[0x10];                                      // 0x0280(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriWarePluginSettings");
		return ptr;
	}

};


// Class CriWareRuntime.ManaComponent
// 0x0178 (0x0270 - 0x00F8)
class UManaComponent : public UActorComponent
{
public:
	class UManaTexture*                                Movie;                                                    // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEventPoint;                                             // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0110(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSubtitleChanged;                                        // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0138(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStatusChanged;                                          // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0160(0x0018) MISSED OFFSET
	struct FScriptDelegate                             OnRequestData;                                            // 0x0178(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData03[0x40];                                      // 0x0188(0x0040) MISSED OFFSET
	class UManaPlaylist*                               Playlist;                                                 // 0x01C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PlaylistIndex;                                            // 0x01D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x01D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	int                                                AudioTrack;                                               // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SubAudioTrack;                                            // 0x01DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExtraAudioTrack;                                          // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSubtitlesEnabled;                                        // 0x01E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01E5(0x0003) MISSED OFFSET
	int                                                SubtitlesChannel;                                         // 0x01E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EManaSubtitlesEncoding                             SubtitlesEncoding;                                        // 0x01EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EManaFrameAction                                   EndFrameAction;                                           // 0x01ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EManaPlaybackTimer                                 PlaybackTimer;                                            // 0x01EE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x81];                                      // 0x01EF(0x0081) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaComponent");
		return ptr;
	}


	bool ToIndex(int Index);
	void StopAndWaitCompletion();
	void Stop();
	void SetVolume(float Volume);
	void SetTexture(class UManaTexture* Texture);
	void SetSubVolume(float Volume);
	void SetSubAudioTrack(int Track);
	void SetPlaybackTimer(EManaPlaybackTimer InPlaybackTimer);
	void SetFile(const struct FString& MovieFilePath);
	void SetExtraVolume(float Volume);
	void SetExtraAudioTrack(int Track);
	void SetCachedData(TArray<unsigned char> DataArray);
	void SetAudioTrack(int Track);
	void SeekToPosition(int FrameNumber);
	void ResetCachedData();
	bool Previous();
	void PreparePlaylistIndex(int Index);
	void Prepare();
	void Play();
	void Pause(bool bPause);
	void OnSubtitleChanged__DelegateSignature(const struct FText& Subtitle);
	void OnStatusChanged__DelegateSignature(EManaComponentStatus Status, class UManaComponent* ManaComponent);
	void OnRequestData__DelegateSignature(class UManaComponent* ManaComponent);
	void OnEventPoint__DelegateSignature(const struct FManaEventPointInfo& EventPointInfo);
	bool Next();
	void Loop(bool bInLoop);
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	float GetVolume();
	float GetTime();
	class UManaTexture* GetTexture();
	float GetSubVolume();
	EManaComponentStatus GetStatus();
	class UManaMovie* GetSource();
	int GetFrameNumber();
	float GetExtraVolume();
	void EnableSubtitles(bool bEnable);
	void EnableSeamless(bool bEnable);
	void ChangeSubtitlesEncoding(EManaSubtitlesEncoding Encoding);
	void ChangeSubtitlesChannel(int Channel);
};


// Class CriWareRuntime.ManaComponentTexture
// 0x0020 (0x00D8 - 0x00B8)
class UManaComponentTexture : public UTexture
{
public:
	int                                                SizeX;                                                    // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeY;                                                    // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EPixelFormat>                          Format;                                                   // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EManaComponentTextureType                          ComponentType;                                            // 0x00C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x00C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x00C3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x00C4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaComponentTexture");
		return ptr;
	}

};


// Class CriWareRuntime.ManaSource
// 0x0000 (0x0028 - 0x0028)
class UManaSource : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaSource");
		return ptr;
	}

};


// Class CriWareRuntime.ManaMovie
// 0x0040 (0x0068 - 0x0028)
class UManaMovie : public UManaSource
{
public:
	TArray<struct FManaVideoTrackInfo>                 VideoTracks;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FManaAudioTrackInfo>                 AudioTracks;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FManaEventPointInfo>                 EventPoints;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                NumSubtitleChannels;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxSubtitleSize;                                          // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bIsAlpha : 1;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaMovie");
		return ptr;
	}

};


// Class CriWareRuntime.FileManaMovie
// 0x0018 (0x0080 - 0x0068)
class UFileManaMovie : public UManaMovie
{
public:
	bool                                               bPrecacheFile;                                            // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     FilePath;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.FileManaMovie");
		return ptr;
	}


	void SetFilePath(const struct FString& Path);
};


// Class CriWareRuntime.DataManaMovie
// 0x0008 (0x0070 - 0x0068)
class UDataManaMovie : public UManaMovie
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.DataManaMovie");
		return ptr;
	}


	void SetDataArray(TArray<unsigned char>* InDataArray);
	TArray<unsigned char> GetDataArray();
};


// Class CriWareRuntime.ManaPlaylist
// 0x0018 (0x0040 - 0x0028)
class UManaPlaylist : public UManaSource
{
public:
	TArray<class UManaMovie*>                          Movies;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)
	bool                                               bIsAlpha;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsMixedTypes;                                            // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsSeamless;                                              // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaPlaylist");
		return ptr;
	}


	void RemoveAt(int Index);
	void Remove(class UManaMovie* ManaMovie);
	int Num();
	bool IsSeamless();
	bool IsMixedTypes();
	bool IsAlpha();
	void Insert(class UManaMovie* ManaMovie, int Index);
	class UManaMovie* GetRandom(int* InOutIndex);
	class UManaMovie* GetPrevious(int* InOutIndex);
	class UManaMovie* GetNext(int* InOutIndex);
	class UManaMovie* Get(int Index);
	void Add(class UManaMovie* ManaMovie);
};


// Class CriWareRuntime.ManaTexture
// 0x0070 (0x0128 - 0x00B8)
class UManaTexture : public UTexture
{
public:
	class UManaSource*                                 MovieSource;                                              // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     MovieFilePath;                                            // 0x00C0(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      bRenderToTexture : 1;                                     // 0x00D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              TargetGamma;                                              // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHDR : 1;                                                 // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x00DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00DE(0x0002) MISSED OFFSET
	struct FLinearColor                                ClearColor;                                               // 0x00E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EPixelFormat>                          OverrideFormat;                                           // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<class UManaComponentTexture*>               ComponentTextures;                                        // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0108(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaTexture");
		return ptr;
	}


	void SetMovieSource(class UManaSource* InSource);
};


// Class CriWareRuntime.MaterialExpressionManaColorSpaceConverter
// 0x00F8 (0x0138 - 0x0040)
class UMaterialExpressionManaColorSpaceConverter : public UMaterialExpression
{
public:
	struct FExpressionInput                            Luma;                                                     // 0x0040(0x0030)
	struct FExpressionInput                            ChromaB;                                                  // 0x0070(0x0030)
	struct FExpressionInput                            ChromaR;                                                  // 0x00A0(0x0030)
	struct FExpressionInput                            Alpha;                                                    // 0x00D0(0x0030)
	struct FExpressionInput                            Gamma;                                                    // 0x0100(0x0030)
	bool                                               bH264;                                                    // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EManaColorSpace                                    ColorSpace;                                               // 0x0131(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGammaExponent;                                        // 0x0132(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0133(0x0001) MISSED OFFSET
	float                                              ConstGamma;                                               // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MaterialExpressionManaColorSpaceConverter");
		return ptr;
	}

};


// Class CriWareRuntime.MaterialExpressionManaMovieFormatSwitch
// 0x0090 (0x00D0 - 0x0040)
class UMaterialExpressionManaMovieFormatSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            Inputs[0x3];                                              // 0x0040(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MaterialExpressionManaMovieFormatSwitch");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomFloatBase
// 0x0000 (0x0090 - 0x0090)
class UMatineeTrackAtomFloatBase : public UInterpTrackFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomFloatBase");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAisacControlName
// 0x0000 (0x0090 - 0x0090)
class UMatineeTrackAisacControlName : public UMatineeTrackAtomFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAisacControlName");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomBase
// 0x0000 (0x0070 - 0x0070)
class UMatineeTrackAtomBase : public UInterpTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomBase");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomSoundBase
// 0x0008 (0x0078 - 0x0070)
class UMatineeTrackAtomSoundBase : public UMatineeTrackAtomBase
{
public:
	bool                                               bContinueSoundOnMatineeEnd;                               // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomSoundBase");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtom
// 0x0030 (0x00A8 - 0x0078)
class UMatineeTrackAtom : public UMatineeTrackAtomSoundBase
{
public:
	TArray<struct FString>                             AisacList;                                                // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             SelectorList;                                             // 0x0088(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAtomTrackKeyframe>                  KeyframeList;                                             // 0x0098(0x0010) (Edit, EditFixedSize, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtom");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomCategoryName
// 0x0018 (0x0088 - 0x0070)
class UMatineeTrackAtomCategoryName : public UMatineeTrackAtomBase
{
public:
	struct FString                                     CategoryName;                                             // 0x0070(0x0010) (Edit, ZeroConstructor)
	bool                                               bEnableVolumeTrack;                                       // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomCategoryName");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomCategoryVolume
// 0x0000 (0x0090 - 0x0090)
class UMatineeTrackAtomCategoryVolume : public UMatineeTrackAtomFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomCategoryVolume");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomCueId
// 0x0038 (0x00B0 - 0x0078)
class UMatineeTrackAtomCueId : public UMatineeTrackAtomSoundBase
{
public:
	TArray<struct FString>                             AisacList;                                                // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             SelectorList;                                             // 0x0088(0x0010) (Edit, ZeroConstructor)
	class USoundAtomCueSheet*                          CueSheet;                                                 // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAtomCueIdTrackKeyframe>             KeyframeList;                                             // 0x00A0(0x0010) (Edit, EditFixedSize, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomCueId");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomCueName
// 0x0038 (0x00B0 - 0x0078)
class UMatineeTrackAtomCueName : public UMatineeTrackAtomSoundBase
{
public:
	TArray<struct FString>                             AisacList;                                                // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             SelectorList;                                             // 0x0088(0x0010) (Edit, ZeroConstructor)
	class USoundAtomCueSheet*                          CueSheet;                                                 // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAtomCueNameTrackKeyframe>           KeyframeList;                                             // 0x00A0(0x0010) (Edit, EditFixedSize, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomCueName");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomSelector
// 0x0010 (0x0080 - 0x0070)
class UMatineeTrackAtomSelector : public UInterpTrack
{
public:
	TArray<struct FAtomSelectorTrackKeyframe>          KeyframeList;                                             // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomSelector");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackInstAtom
// 0x0020 (0x0048 - 0x0028)
class UMatineeTrackInstAtom : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UAtomComponent*                              AtomComponent;                                            // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMatineeTrackAtomSoundBase*                  AtomTrack;                                                // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackInstAtom");
		return ptr;
	}

};


// Class CriWareRuntime.MovieSceneAtomSection
// 0x0158 (0x0238 - 0x00E0)
class UMovieSceneAtomSection : public UMovieSceneSection
{
public:
	class USoundAtomCue*                               Sound;                                                    // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FMovieSceneFloatChannel                     SoundVolume;                                              // 0x00F0(0x00A0)
	struct FMovieSceneFloatChannel                     PitchMultiplier;                                          // 0x0190(0x00A0)
	bool                                               bSuppressSubtitles;                                       // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0231(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MovieSceneAtomSection");
		return ptr;
	}

};


// Class CriWareRuntime.MovieSceneAtomTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneAtomTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AtomSections;                                             // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MovieSceneAtomTrack");
		return ptr;
	}

};


// Class CriWareRuntime.SoundAtomConfig
// 0x0080 (0x00A8 - 0x0028)
class USoundAtomConfig : public UObject
{
public:
	struct FString                                     AcfFilePath;                                              // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.SoundAtomConfig");
		return ptr;
	}

};


// Class CriWareRuntime.SoundAtomCue
// 0x0070 (0x0098 - 0x0028)
class USoundAtomCue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class USoundAtomCueSheet*                          CueSheet;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     CueName;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bApplyAtomParameter;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	unsigned char                                      bOverrideConcurrency : 1;                                 // 0x0054(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	class USoundConcurrency*                           SoundConcurrencySettings;                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoundConcurrencySettings                   ConcurrencyOverrides;                                     // 0x0060(0x0010) (Edit, BlueprintVisible)
	float                                              Priority;                                                 // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	class USoundAttenuation*                           DefaultAttenuation;                                       // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.SoundAtomCue");
		return ptr;
	}


	struct FString GetUserData();
	int GetLength();
};


// Class CriWareRuntime.SoundAtomCueSheet
// 0x00D8 (0x0100 - 0x0028)
class USoundAtomCueSheet : public UObject
{
public:
	bool                                               Contains;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     AcbFilePath;                                              // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0040(0x0070) MISSED OFFSET
	bool                                               bOverrideAwbDirectory;                                    // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	struct FDirectoryPath                              AwbDirectory;                                             // 0x00B8(0x0010) (Edit)
	struct FString                                     CueSheetName;                                             // 0x00C8(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                NumSlots;                                                 // 0x00D8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	class UCriFsBinderComponent*                       BinderComponent;                                          // 0x00E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x00E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.SoundAtomCueSheet");
		return ptr;
	}


	void STATIC_ReleaseAcb(const struct FName& AcbName);
	class USoundAtomCueSheet* STATIC_LoadAtomCueSheet(class USoundAtomCueSheet* CueSheet);
	class USoundAtomCueSheet* STATIC_LoadAcb(const struct FName& AcbName);
	bool IsLoaded();
	class USoundAtomCue* GetAtomCueByName(const struct FString& CueName);
	class USoundAtomCue* GetAtomCueByIndex(int CueIndex);
	class USoundAtomCue* GetAtomCueById(int CueId);
	void STATIC_DetachDspBusSetting();
	void STATIC_AttachDspBusSetting(const struct FString& SettingName);
	void STATIC_ApplyDspBusSnapshot(const struct FString& SnapshotName, int Milliseconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
