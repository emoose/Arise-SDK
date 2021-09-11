
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

// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseEventVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InVoiceName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_AriseSoundSystemInterface_C::PauseEventVoice(const struct FString& InVoiceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseEventVoice");

	UBP_AriseSoundSystemInterface_C_PauseEventVoice_Params params;
	params.InVoiceName = InVoiceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayEventVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InVoiceName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_AriseSoundSystemInterface_C::PlayEventVoice(const struct FString& InVoiceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayEventVoice");

	UBP_AriseSoundSystemInterface_C_PlayEventVoice_Params params;
	params.InVoiceName = InVoiceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsSameCurrentPfAndBattleMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsSame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::IsSameCurrentPfAndBattleMusic(bool* IsSame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsSameCurrentPfAndBattleMusic");

	UBP_AriseSoundSystemInterface_C_IsSameCurrentPfAndBattleMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSame != nullptr)
		*IsSame = params.IsSame;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.GetCurrentPfMusicEventName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void UBP_AriseSoundSystemInterface_C::GetCurrentPfMusicEventName(struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.GetCurrentPfMusicEventName");

	UBP_AriseSoundSystemInterface_C_GetCurrentPfMusicEventName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.SetPauseMapPfMusicFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewFlag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::SetPauseMapPfMusicFlag(bool NewFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.SetPauseMapPfMusicFlag");

	UBP_AriseSoundSystemInterface_C_SetPauseMapPfMusicFlag_Params params;
	params.NewFlag = NewFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::StopBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopBGM");

	UBP_AriseSoundSystemInterface_C_StopBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayPreparedAreaMapPfMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseSoundSystemInterface_C::PlayPreparedAreaMapPfMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayPreparedAreaMapPfMusic");

	UBP_AriseSoundSystemInterface_C_PlayPreparedAreaMapPfMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsPauseMapPfMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsPause                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::IsPauseMapPfMusic(bool* IsPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsPauseMapPfMusic");

	UBP_AriseSoundSystemInterface_C_IsPauseMapPfMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPause != nullptr)
		*IsPause = params.IsPause;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PrepareNextAreaMapBGM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextLevelName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsNoPlayPfMusic                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::PrepareNextAreaMapBGM(const struct FString& NextLevelName, bool* IsNoPlayPfMusic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PrepareNextAreaMapBGM");

	UBP_AriseSoundSystemInterface_C_PrepareNextAreaMapBGM_Params params;
	params.NextLevelName = NextLevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNoPlayPfMusic != nullptr)
		*IsNoPlayPfMusic = params.IsNoPlayPfMusic;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsSamePrevAndCurrentPfMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsSame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::IsSamePrevAndCurrentPfMusic(bool* IsSame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsSamePrevAndCurrentPfMusic");

	UBP_AriseSoundSystemInterface_C_IsSamePrevAndCurrentPfMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSame != nullptr)
		*IsSame = params.IsSame;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsPlayingPfBGM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::IsPlayingPfBGM(bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsPlayingPfBGM");

	UBP_AriseSoundSystemInterface_C_IsPlayingPfBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayPreparedAreaMapBtlMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseSoundSystemInterface_C::PlayPreparedAreaMapBtlMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayPreparedAreaMapBtlMusic");

	UBP_AriseSoundSystemInterface_C_PlayPreparedAreaMapBtlMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayPreparedMapBGMCrossFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMCrossFadeType              PlayMainType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::PlayPreparedMapBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayPreparedMapBGMCrossFade");

	UBP_AriseSoundSystemInterface_C_PlayPreparedMapBGMCrossFade_Params params;
	params.PlayMainType = PlayMainType;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseMapPfBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::PauseMapPfBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseMapPfBGM");

	UBP_AriseSoundSystemInterface_C_PauseMapPfBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResumeMapPfBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::ResumeMapPfBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResumeMapPfBGM");

	UBP_AriseSoundSystemInterface_C_ResumeMapPfBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopMapPfBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::StopMapPfBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopMapPfBGM");

	UBP_AriseSoundSystemInterface_C_StopMapPfBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopMapBtlBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::StopMapBtlBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopMapBtlBGM");

	UBP_AriseSoundSystemInterface_C_StopMapBtlBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsSkipPlayMapBtlMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsSkipPlay                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::IsSkipPlayMapBtlMusic(bool* IsSkipPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsSkipPlayMapBtlMusic");

	UBP_AriseSoundSystemInterface_C_IsSkipPlayMapBtlMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSkipPlay != nullptr)
		*IsSkipPlay = params.IsSkipPlay;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsCrossFadeMapBGM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsCrossFade                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::IsCrossFadeMapBGM(bool* IsCrossFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsCrossFadeMapBGM");

	UBP_AriseSoundSystemInterface_C_IsCrossFadeMapBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCrossFade != nullptr)
		*IsCrossFade = params.IsCrossFade;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::PauseEventBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseEventBGM");

	UBP_AriseSoundSystemInterface_C_PauseEventBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResumeEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::ResumeEventBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResumeEventBGM");

	UBP_AriseSoundSystemInterface_C_ResumeEventBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::StopEventBGM(EBGMFadeType FadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.StopEventBGM");

	UBP_AriseSoundSystemInterface_C_StopEventBGM_Params params;
	params.FadeType = FadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayEventBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MusicName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_AriseSoundSystemInterface_C::PlayEventBGM(const struct FString& MusicName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayEventBGM");

	UBP_AriseSoundSystemInterface_C_PlayEventBGM_Params params;
	params.MusicName = MusicName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsCurrentPfMusicNameNull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsNull                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::IsCurrentPfMusicNameNull(bool* IsNull)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsCurrentPfMusicNameNull");

	UBP_AriseSoundSystemInterface_C_IsCurrentPfMusicNameNull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNull != nullptr)
		*IsNull = params.IsNull;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayBossBtlBGMCrossFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMCrossFadeType              PlayMainType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::PlayBossBtlBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec, const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayBossBtlBGMCrossFade");

	UBP_AriseSoundSystemInterface_C_PlayBossBtlBGMCrossFade_Params params;
	params.PlayMainType = PlayMainType;
	params.InterpTimeSec = InterpTimeSec;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayBossBtlBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::PlayBossBtlBGM(const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PlayBossBtlBGM");

	UBP_AriseSoundSystemInterface_C_PlayBossBtlBGM_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsBtlEncountGroupBtlMusicNameNull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNull                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::IsBtlEncountGroupBtlMusicNameNull(const struct FName& Label, bool* IsNull)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.IsBtlEncountGroupBtlMusicNameNull");

	UBP_AriseSoundSystemInterface_C_IsBtlEncountGroupBtlMusicNameNull_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNull != nullptr)
		*IsNull = params.IsNull;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.CheckAreaMapSatisfyCondition
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseSoundSystemInterface_C::CheckAreaMapSatisfyCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.CheckAreaMapSatisfyCondition");

	UBP_AriseSoundSystemInterface_C_CheckAreaMapSatisfyCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.SetDuckingVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BGM_Volume                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Ambient_Volume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Gaya_Volume                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::SetDuckingVolume(int BGM_Volume, int Ambient_Volume, int Gaya_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.SetDuckingVolume");

	UBP_AriseSoundSystemInterface_C_SetDuckingVolume_Params params;
	params.BGM_Volume = BGM_Volume;
	params.Ambient_Volume = Ambient_Volume;
	params.Gaya_Volume = Gaya_Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseAllSound
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseSoundSystemInterface_C::PauseAllSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.PauseAllSound");

	UBP_AriseSoundSystemInterface_C_PauseAllSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResumeAllSound
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseSoundSystemInterface_C::ResumeAllSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResumeAllSound");

	UBP_AriseSoundSystemInterface_C_ResumeAllSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.SetSpatialCondition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundSystemInterface_C::SetSpatialCondition(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.SetSpatialCondition");

	UBP_AriseSoundSystemInterface_C_SetSpatialCondition_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResetSoundSystem
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AriseSoundSystemInterface_C::ResetSoundSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C.ResetSoundSystem");

	UBP_AriseSoundSystemInterface_C_ResetSoundSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
