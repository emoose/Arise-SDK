
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSameCurrentPfAndBattleMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsSame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::IsSameCurrentPfAndBattleMusic(bool* IsSame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSameCurrentPfAndBattleMusic");

	ABP_AriseSoundSystem_C_IsSameCurrentPfAndBattleMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSame != nullptr)
		*IsSame = params.IsSame;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetCurrentPfMusicEventName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void ABP_AriseSoundSystem_C::GetCurrentPfMusicEventName(struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetCurrentPfMusicEventName");

	ABP_AriseSoundSystem_C_GetCurrentPfMusicEventName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsBtlEncountGroupBtlMusicNameNull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNull                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::IsBtlEncountGroupBtlMusicNameNull(const struct FName& Label, bool* IsNull)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsBtlEncountGroupBtlMusicNameNull");

	ABP_AriseSoundSystem_C_IsBtlEncountGroupBtlMusicNameNull_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNull != nullptr)
		*IsNull = params.IsNull;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsCurrentPfMusicNameNull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsNull                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::IsCurrentPfMusicNameNull(bool* IsNull)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsCurrentPfMusicNameNull");

	ABP_AriseSoundSystem_C_IsCurrentPfMusicNameNull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNull != nullptr)
		*IsNull = params.IsNull;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsCrossFadeMapBGM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsCrossFade                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::IsCrossFadeMapBGM(bool* IsCrossFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsCrossFadeMapBGM");

	ABP_AriseSoundSystem_C_IsCrossFadeMapBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCrossFade != nullptr)
		*IsCrossFade = params.IsCrossFade;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSkipPlayMapBtlMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsSkipPlay                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::IsSkipPlayMapBtlMusic(bool* IsSkipPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSkipPlayMapBtlMusic");

	ABP_AriseSoundSystem_C_IsSkipPlayMapBtlMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSkipPlay != nullptr)
		*IsSkipPlay = params.IsSkipPlay;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsPlayingPfBGM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::IsPlayingPfBGM(bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsPlayingPfBGM");

	ABP_AriseSoundSystem_C_IsPlayingPfBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSamePrevAndCurrentPfMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsSame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::IsSamePrevAndCurrentPfMusic(bool* IsSame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSamePrevAndCurrentPfMusic");

	ABP_AriseSoundSystem_C_IsSamePrevAndCurrentPfMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSame != nullptr)
		*IsSame = params.IsSame;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PrepareNextAreaMapBGM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextLevelName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsNoPlayPfMusic                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::PrepareNextAreaMapBGM(const struct FString& NextLevelName, bool* IsNoPlayPfMusic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PrepareNextAreaMapBGM");

	ABP_AriseSoundSystem_C_PrepareNextAreaMapBGM_Params params;
	params.NextLevelName = NextLevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNoPlayPfMusic != nullptr)
		*IsNoPlayPfMusic = params.IsNoPlayPfMusic;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsPauseMapPfMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsPause                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::IsPauseMapPfMusic(bool* IsPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsPauseMapPfMusic");

	ABP_AriseSoundSystem_C_IsPauseMapPfMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPause != nullptr)
		*IsPause = params.IsPause;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseEventVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InVoiceName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseSoundSystem_C::@PauseEventVoice(const struct FString& InVoiceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseEventVoice");

	ABP_AriseSoundSystem_C_@PauseEventVoice_Params params;
	params.InVoiceName = InVoiceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayEventVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InVoiceName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseSoundSystem_C::@PlayEventVoice(const struct FString& InVoiceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayEventVoice");

	ABP_AriseSoundSystem_C_@PlayEventVoice_Params params;
	params.InVoiceName = InVoiceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResetSoundSystem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::@ResetSoundSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResetSoundSystem");

	ABP_AriseSoundSystem_C_@ResetSoundSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetCurrentPfMusicName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CurrentPFName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseSoundSystem_C::SetCurrentPfMusicName(const struct FString& CurrentPFName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetCurrentPfMusicName");

	ABP_AriseSoundSystem_C_SetCurrentPfMusicName_Params params;
	params.CurrentPFName = CurrentPFName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@SetSpatialCondition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@SetSpatialCondition(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@SetSpatialCondition");

	ABP_AriseSoundSystem_C_@SetSpatialCondition_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayConfigBtlBGM
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::PlayConfigBtlBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayConfigBtlBGM");

	ABP_AriseSoundSystem_C_PlayConfigBtlBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResumeAllSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::@ResumeAllSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResumeAllSound");

	ABP_AriseSoundSystem_C_@ResumeAllSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseAllSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::@PauseAllSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseAllSound");

	ABP_AriseSoundSystem_C_@PauseAllSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetGayaCondition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 GayaCondition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseSoundSystem_C::SetGayaCondition(const struct FString& GayaCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetGayaCondition");

	ABP_AriseSoundSystem_C_SetGayaCondition_Params params;
	params.GayaCondition = GayaCondition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetAmbientCondition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AmbientCondition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseSoundSystem_C::SetAmbientCondition(const struct FString& AmbientCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetAmbientCondition");

	ABP_AriseSoundSystem_C_SetAmbientCondition_Params params;
	params.AmbientCondition = AmbientCondition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@SetDuckingVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BGM_Volume                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Ambient_Volume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Gaya_Volume                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@SetDuckingVolume(int BGM_Volume, int Ambient_Volume, int Gaya_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@SetDuckingVolume");

	ABP_AriseSoundSystem_C_@SetDuckingVolume_Params params;
	params.BGM_Volume = BGM_Volume;
	params.Ambient_Volume = Ambient_Volume;
	params.Gaya_Volume = Gaya_Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@CheckAreaMapSatisfyCondition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::@CheckAreaMapSatisfyCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@CheckAreaMapSatisfyCondition");

	ABP_AriseSoundSystem_C_@CheckAreaMapSatisfyCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSamePlayingAndDefaultPfMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::IsSamePlayingAndDefaultPfMusic(bool* IsSame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSamePlayingAndDefaultPfMusic");

	ABP_AriseSoundSystem_C_IsSamePlayingAndDefaultPfMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSame != nullptr)
		*IsSame = params.IsSame;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayBossBtlBGM
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@PlayBossBtlBGM(const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayBossBtlBGM");

	ABP_AriseSoundSystem_C_@PlayBossBtlBGM_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayBossBtlBGMCrossFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMCrossFadeType              PlayMainType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@PlayBossBtlBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec, const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayBossBtlBGMCrossFade");

	ABP_AriseSoundSystem_C_@PlayBossBtlBGMCrossFade_Params params;
	params.PlayMainType = PlayMainType;
	params.InterpTimeSec = InterpTimeSec;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSameEventMusicAndBossBtlMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::IsSameEventMusicAndBossBtlMusic(const struct FName& Label, bool* IsSame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsSameEventMusicAndBossBtlMusic");

	ABP_AriseSoundSystem_C_IsSameEventMusicAndBossBtlMusic_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSame != nullptr)
		*IsSame = params.IsSame;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetBtlEncountGroupBtlMusicName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BGMLabel                       (Parm, OutParm, ZeroConstructor)

void ABP_AriseSoundSystem_C::GetBtlEncountGroupBtlMusicName(const struct FName& Label, struct FString* BGMLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetBtlEncountGroupBtlMusicName");

	ABP_AriseSoundSystem_C_GetBtlEncountGroupBtlMusicName_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BGMLabel != nullptr)
		*BGMLabel = params.BGMLabel;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::ResumeBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeBGM");

	ABP_AriseSoundSystem_C_ResumeBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::PauseBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseBGM");

	ABP_AriseSoundSystem_C_PauseBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetBusNameByType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESoundBusType                  BusType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnBusName                  (Parm, OutParm, ZeroConstructor)

void ABP_AriseSoundSystem_C::GetBusNameByType(ESoundBusType BusType, struct FString* ReturnBusName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetBusNameByType");

	ABP_AriseSoundSystem_C_GetBusNameByType_Params params;
	params.BusType = BusType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnBusName != nullptr)
		*ReturnBusName = params.ReturnBusName;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakeBusFadeEventName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESoundBusType                  BusType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAkActionOnEventType           EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnEventName                (Parm, OutParm, ZeroConstructor)

void ABP_AriseSoundSystem_C::MakeBusFadeEventName(ESoundBusType BusType, EBGMFadeType FadeType, EAkActionOnEventType EventType, struct FString* ReturnEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakeBusFadeEventName");

	ABP_AriseSoundSystem_C_MakeBusFadeEventName_Params params;
	params.BusType = BusType;
	params.FadeType = FadeType;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnEventName != nullptr)
		*ReturnEventName = params.ReturnEventName;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@StopEventBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopEventBGM");

	ABP_AriseSoundSystem_C_@StopEventBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResumeEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@ResumeEventBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResumeEventBGM");

	ABP_AriseSoundSystem_C_@ResumeEventBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@PauseEventBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseEventBGM");

	ABP_AriseSoundSystem_C_@PauseEventBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MusicName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseSoundSystem_C::@PlayEventBGM(const struct FString& MusicName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayEventBGM");

	ABP_AriseSoundSystem_C_@PlayEventBGM_Params params;
	params.MusicName = MusicName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayPreparedMapBGMCrossFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMCrossFadeType              PlayMainType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@PlayPreparedMapBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayPreparedMapBGMCrossFade");

	ABP_AriseSoundSystem_C_@PlayPreparedMapBGMCrossFade_Params params;
	params.PlayMainType = PlayMainType;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.TestPlayEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MusicName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseSoundSystem_C::TestPlayEvent(const struct FString& MusicName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.TestPlayEvent");

	ABP_AriseSoundSystem_C_TestPlayEvent_Params params;
	params.MusicName = MusicName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopMapBtlBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@StopMapBtlBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopMapBtlBGM");

	ABP_AriseSoundSystem_C_@StopMapBtlBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopMapPfBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@StopMapPfBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopMapPfBGM");

	ABP_AriseSoundSystem_C_@StopMapPfBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResumeMapPfBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@ResumeMapPfBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@ResumeMapPfBGM");

	ABP_AriseSoundSystem_C_@ResumeMapPfBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseMapPfBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@PauseMapPfBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PauseMapPfBGM");

	ABP_AriseSoundSystem_C_@PauseMapPfBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapConditionBtlMusicName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapBGMScenarioCondition Condition                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 BtlMusicName                   (Parm, OutParm, ZeroConstructor)

void ABP_AriseSoundSystem_C::GetAreaMapConditionBtlMusicName(const struct FMapBGMScenarioCondition& Condition, struct FString* BtlMusicName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapConditionBtlMusicName");

	ABP_AriseSoundSystem_C_GetAreaMapConditionBtlMusicName_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BtlMusicName != nullptr)
		*BtlMusicName = params.BtlMusicName;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayPreparedAreaMapBtlMusic
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::@PlayPreparedAreaMapBtlMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayPreparedAreaMapBtlMusic");

	ABP_AriseSoundSystem_C_@PlayPreparedAreaMapBtlMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsNoPlayCurrentPfMusicName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNoPlay                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::IsNoPlayCurrentPfMusicName(bool* IsNoPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.IsNoPlayCurrentPfMusicName");

	ABP_AriseSoundSystem_C_IsNoPlayCurrentPfMusicName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNoPlay != nullptr)
		*IsNoPlay = params.IsNoPlay;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayPreparedAreaMapPfMusic
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::@PlayPreparedAreaMapPfMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PlayPreparedAreaMapPfMusic");

	ABP_AriseSoundSystem_C_@PlayPreparedAreaMapPfMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakeAreaName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 AreaName                       (Parm, OutParm, ZeroConstructor)

void ABP_AriseSoundSystem_C::MakeAreaName(const struct FString& LevelName, struct FString* AreaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakeAreaName");

	ABP_AriseSoundSystem_C_MakeAreaName_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AreaName != nullptr)
		*AreaName = params.AreaName;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PrepareNextAreaMapBGM
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextLevelName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsNoPlayPfMusic                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@PrepareNextAreaMapBGM(const struct FString& NextLevelName, bool* IsNoPlayPfMusic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@PrepareNextAreaMapBGM");

	ABP_AriseSoundSystem_C_@PrepareNextAreaMapBGM_Params params;
	params.NextLevelName = NextLevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNoPlayPfMusic != nullptr)
		*IsNoPlayPfMusic = params.IsNoPlayPfMusic;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakePlayEventString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MusicName                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnEventName                (Parm, OutParm, ZeroConstructor)

void ABP_AriseSoundSystem_C::MakePlayEventString(struct FString* MusicName, struct FString* ReturnEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakePlayEventString");

	ABP_AriseSoundSystem_C_MakePlayEventString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MusicName != nullptr)
		*MusicName = params.MusicName;
	if (ReturnEventName != nullptr)
		*ReturnEventName = params.ReturnEventName;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapConditionMusicName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapBGMScenarioCondition Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString                 PfMusicName                    (Parm, OutParm, ZeroConstructor)
// struct FString                 BtlMusicName                   (Parm, OutParm, ZeroConstructor)
// struct FString                 Ambient_Condition              (Parm, OutParm, ZeroConstructor)
// struct FString                 Gaya_Condition                 (Parm, OutParm, ZeroConstructor)

void ABP_AriseSoundSystem_C::GetAreaMapConditionMusicName(struct FMapBGMScenarioCondition* Condition, struct FString* PfMusicName, struct FString* BtlMusicName, struct FString* Ambient_Condition, struct FString* Gaya_Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapConditionMusicName");

	ABP_AriseSoundSystem_C_GetAreaMapConditionMusicName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Condition != nullptr)
		*Condition = params.Condition;
	if (PfMusicName != nullptr)
		*PfMusicName = params.PfMusicName;
	if (BtlMusicName != nullptr)
		*BtlMusicName = params.BtlMusicName;
	if (Ambient_Condition != nullptr)
		*Ambient_Condition = params.Ambient_Condition;
	if (Gaya_Condition != nullptr)
		*Gaya_Condition = params.Gaya_Condition;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapSatisfyCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapBGMData             MapBGMData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            idx                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FMapBGMScenarioCondition Condition                      (Parm, OutParm)

void ABP_AriseSoundSystem_C::GetAreaMapSatisfyCondition(struct FMapBGMData* MapBGMData, int* idx, struct FMapBGMScenarioCondition* Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapSatisfyCondition");

	ABP_AriseSoundSystem_C_GetAreaMapSatisfyCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapBGMData != nullptr)
		*MapBGMData = params.MapBGMData;
	if (idx != nullptr)
		*idx = params.idx;
	if (Condition != nullptr)
		*Condition = params.Condition;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaConditionSatisfyIdx
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapBGMData             MapBGMData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ArrayIdx                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::GetAreaConditionSatisfyIdx(struct FMapBGMData* MapBGMData, int* ArrayIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaConditionSatisfyIdx");

	ABP_AriseSoundSystem_C_GetAreaConditionSatisfyIdx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapBGMData != nullptr)
		*MapBGMData = params.MapBGMData;
	if (ArrayIdx != nullptr)
		*ArrayIdx = params.ArrayIdx;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.DispCurrentPlayPfMusicName
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::DispCurrentPlayPfMusicName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.DispCurrentPlayPfMusicName");

	ABP_AriseSoundSystem_C_DispCurrentPlayPfMusicName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::@StopBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.@StopBGM");

	ABP_AriseSoundSystem_C_@StopBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.DispCurrentAreaName
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::DispCurrentAreaName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.DispCurrentAreaName");

	ABP_AriseSoundSystem_C_DispCurrentAreaName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetCurrentAreaMapBGMData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapBGMData             Data                           (Parm, OutParm)

void ABP_AriseSoundSystem_C::GetCurrentAreaMapBGMData(struct FMapBGMData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetCurrentAreaMapBGMData");

	ABP_AriseSoundSystem_C_GetCurrentAreaMapBGMData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakeCurrentAreaName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CurrentAreaName                (Parm, OutParm, ZeroConstructor)

void ABP_AriseSoundSystem_C::MakeCurrentAreaName(struct FString* CurrentAreaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.MakeCurrentAreaName");

	ABP_AriseSoundSystem_C_MakeCurrentAreaName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAreaName != nullptr)
		*CurrentAreaName = params.CurrentAreaName;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapBtlMusicName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AreaName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 BtlMusicName                   (Parm, OutParm, ZeroConstructor)

void ABP_AriseSoundSystem_C::GetAreaMapBtlMusicName(const struct FString& AreaName, struct FString* BtlMusicName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapBtlMusicName");

	ABP_AriseSoundSystem_C_GetAreaMapBtlMusicName_Params params;
	params.AreaName = AreaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BtlMusicName != nullptr)
		*BtlMusicName = params.BtlMusicName;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapPfMusicName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AreaName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 PfMusicName                    (Parm, OutParm, ZeroConstructor)

void ABP_AriseSoundSystem_C::GetAreaMapPfMusicName(const struct FString& AreaName, struct FString* PfMusicName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapPfMusicName");

	ABP_AriseSoundSystem_C_GetAreaMapPfMusicName_Params params;
	params.AreaName = AreaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PfMusicName != nullptr)
		*PfMusicName = params.PfMusicName;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapBGMData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AreaName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FMapBGMData             MapBGMData                     (Parm, OutParm)

void ABP_AriseSoundSystem_C::GetAreaMapBGMData(const struct FString& AreaName, struct FMapBGMData* MapBGMData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.GetAreaMapBGMData");

	ABP_AriseSoundSystem_C_GetAreaMapBGMData_Params params;
	params.AreaName = AreaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapBGMData != nullptr)
		*MapBGMData = params.MapBGMData;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.UserConstructionScript");

	ABP_AriseSoundSystem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseAllSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::PauseAllSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseAllSound");

	ABP_AriseSoundSystem_C_PauseAllSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeAllSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::ResumeAllSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeAllSound");

	ABP_AriseSoundSystem_C_ResumeAllSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.CheckAreaMapSatisfyCondition
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::CheckAreaMapSatisfyCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.CheckAreaMapSatisfyCondition");

	ABP_AriseSoundSystem_C_CheckAreaMapSatisfyCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayPreparedMapBGMCrossFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMCrossFadeType              PlayMainType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::PlayPreparedMapBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayPreparedMapBGMCrossFade");

	ABP_AriseSoundSystem_C_PlayPreparedMapBGMCrossFade_Params params;
	params.PlayMainType = PlayMainType;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetSpatialCondition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::SetSpatialCondition(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetSpatialCondition");

	ABP_AriseSoundSystem_C_SetSpatialCondition_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::StopEventBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopEventBGM");

	ABP_AriseSoundSystem_C_StopEventBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::ResumeEventBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeEventBGM");

	ABP_AriseSoundSystem_C_ResumeEventBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResetSoundSystem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::ResetSoundSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResetSoundSystem");

	ABP_AriseSoundSystem_C_ResetSoundSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::PauseEventBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseEventBGM");

	ABP_AriseSoundSystem_C_PauseEventBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MusicName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseSoundSystem_C::PlayEventBGM(const struct FString& MusicName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayEventBGM");

	ABP_AriseSoundSystem_C_PlayEventBGM_Params params;
	params.MusicName = MusicName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeMapPfBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::ResumeMapPfBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ResumeMapPfBGM");

	ABP_AriseSoundSystem_C_ResumeMapPfBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetPauseMapPfMusicFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewFlag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::SetPauseMapPfMusicFlag(bool NewFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetPauseMapPfMusicFlag");

	ABP_AriseSoundSystem_C_SetPauseMapPfMusicFlag_Params params;
	params.NewFlag = NewFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetDuckingVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BGM_Volume                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Ambient_Volume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Gaya_Volume                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::SetDuckingVolume(int BGM_Volume, int Ambient_Volume, int Gaya_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.SetDuckingVolume");

	ABP_AriseSoundSystem_C_SetDuckingVolume_Params params;
	params.BGM_Volume = BGM_Volume;
	params.Ambient_Volume = Ambient_Volume;
	params.Gaya_Volume = Gaya_Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.Test_SEEndCallbackEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPostEventInfoBase*      PostEventInfo                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::Test_SEEndCallbackEvent(class UPostEventInfoBase* PostEventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.Test_SEEndCallbackEvent");

	ABP_AriseSoundSystem_C_Test_SEEndCallbackEvent_Params params;
	params.PostEventInfo = PostEventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayEventVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InVoiceName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseSoundSystem_C::PlayEventVoice(const struct FString& InVoiceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayEventVoice");

	ABP_AriseSoundSystem_C_PlayEventVoice_Params params;
	params.InVoiceName = InVoiceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayBossBtlBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::PlayBossBtlBGM(const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayBossBtlBGM");

	ABP_AriseSoundSystem_C_PlayBossBtlBGM_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseEventVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InVoiceName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseSoundSystem_C::PauseEventVoice(const struct FString& InVoiceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseEventVoice");

	ABP_AriseSoundSystem_C_PauseEventVoice_Params params;
	params.InVoiceName = InVoiceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AriseSoundSystem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ReceiveBeginPlay");

	ABP_AriseSoundSystem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ReceiveTick");

	ABP_AriseSoundSystem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayBossBtlBGMCrossFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMCrossFadeType              PlayMainType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::PlayBossBtlBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec, const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayBossBtlBGMCrossFade");

	ABP_AriseSoundSystem_C_PlayBossBtlBGMCrossFade_Params params;
	params.PlayMainType = PlayMainType;
	params.InterpTimeSec = InterpTimeSec;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopMapBtlBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::StopMapBtlBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopMapBtlBGM");

	ABP_AriseSoundSystem_C_StopMapBtlBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayPreparedAreaMapPfMusic
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::PlayPreparedAreaMapPfMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayPreparedAreaMapPfMusic");

	ABP_AriseSoundSystem_C_PlayPreparedAreaMapPfMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopMapPfBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::StopMapPfBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopMapPfBGM");

	ABP_AriseSoundSystem_C_StopMapPfBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseMapPfBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::PauseMapPfBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PauseMapPfBGM");

	ABP_AriseSoundSystem_C_PauseMapPfBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayPreparedAreaMapBtlMusic
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseSoundSystem_C::PlayPreparedAreaMapBtlMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.PlayPreparedAreaMapBtlMusic");

	ABP_AriseSoundSystem_C_PlayPreparedAreaMapBtlMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::StopBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.StopBGM");

	ABP_AriseSoundSystem_C_StopBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ExecuteUbergraph_BP_AriseSoundSystem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseSoundSystem_C::ExecuteUbergraph_BP_AriseSoundSystem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystem.BP_AriseSoundSystem_C.ExecuteUbergraph_BP_AriseSoundSystem");

	ABP_AriseSoundSystem_C_ExecuteUbergraph_BP_AriseSoundSystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
