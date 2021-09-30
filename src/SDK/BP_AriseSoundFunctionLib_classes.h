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

// BlueprintGeneratedClass BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AriseSoundFunctionLib_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C");
		return ptr;
	}


	void STATIC_ASND_PauseEventVoice(const struct FString& InVoiceName, class UObject* __WorldContext);
	void STATIC_ASND_PlayEventVoice(const struct FString& InVoiceName, class UObject* __WorldContext);
	void STATIC_ASND_GetListenerPosition(const struct FVector& Location, const struct FRotator& Rotation, class UObject* __WorldContext, struct FVector* Out_Location, struct FRotator* Out_Rotation);
	void STATIC_ASND_SetListenerPosition(const struct FVector& Location, const struct FRotator& Rotation, class UObject* __WorldContext);
	void STATIC_ASND_UnlockSoundListener(class UObject* __WorldContext);
	void STATIC_ASND_LockSoundListener(class UObject* __WorldContext);
	void STATIC_ASND_IsSameCurrentPfAndBattleMusic(class UObject* __WorldContext, bool* IsSame);
	void STATIC_ASND_ResetSoundSystem(class UObject* __WorldContext);
	void STATIC_ASND_SetSpatialCondition(bool Flag, class UObject* __WorldContext);
	void STATIC_ASND_ResumeAllSound(class UObject* __WorldContext);
	void STATIC_ASND_PauseAllSound(class UObject* __WorldContext);
	void STATIC_ASND_SetDuckingVolume(int BGM_Volume, int Ambient_Volume, int Gaya_Volume, class UObject* __WorldContext);
	void STATIC_ASND_CheckAreaMapSatisfyCondition(class UObject* __WorldContext);
	void STATIC_ASND_IsBtlEncountGroupBtlMusicNameNull(const struct FName& Label, class UObject* __WorldContext, bool* IsNull);
	void STATIC_ASND_PlayBossBtlBGM(const struct FName& Label, class UObject* __WorldContext);
	void STATIC_ASND_IsCurrentPfMusicNameNull(class UObject* __WorldContext, bool* IsNull);
	void STATIC_ASND_DuckingEnd(bool IsBGM, bool IsAmbientSE, class UObject* __WorldContext);
	void STATIC_ASND_DuckingStart(bool IsBGM, bool IsAmbientSE, class UObject* __WorldContext);
	void STATIC_ASND_RequestEventBGM(const struct FSTR_EventBGMParam& Param, class UObject* __WorldContext);
	void STATIC_ASND_StopEventBGM(EBGMFadeType FadeType, class UObject* __WorldContext);
	void STATIC_ASND_ResumeEventBGM(EBGMFadeType FadeType, class UObject* __WorldContext);
	void STATIC_ASND_PauseEventBGM(EBGMFadeType FadeType, class UObject* __WorldContext);
	void STATIC_ASND_PlayEventBGM(const struct FString& MusicName, class UObject* __WorldContext);
	void STATIC_ASND_IsCrossFadeMapBGM(class UObject* __WorldContext, bool* IsCrossFade);
	void STATIC_ASND_IsSkipPlayMapBtlBGM(class UObject* __WorldContext, bool* IsSkipPlay);
	void STATIC_ASND_StopMapBtlBGM(EBGMFadeType FadeOutType, class UObject* __WorldContext);
	void STATIC_ASND_StopMapPfBGM(EBGMFadeType FadeOutType, class UObject* __WorldContext);
	void STATIC_ASND_ResumeMapPfBGM(EBGMFadeType FadeResumeType, class UObject* __WorldContext);
	void STATIC_ASND_PauseMapPfBGM(EBGMFadeType FadePauseType, class UObject* __WorldContext);
	void STATIC_ASND_PlayCurrentMapBtlBGM(class UObject* __WorldContext);
	void STATIC_ASND_IsPlayingMapPfBGM(class UObject* __WorldContext, bool* IsPlaying);
	void STATIC_ASND_IsSameMapPfBGM(class UObject* __WorldContext, bool* IsSame);
	void STATIC_ASND_PrepareNextLevel(const struct FString& NextLevelName, class UObject* __WorldContext, bool* IsStopBGM);
	void STATIC_ASND_PlayCurrentMapPfBGM(EMapPfBGMPlayType MapPfBGMPlayType, class UObject* __WorldContext);
	void STATIC_ASND_StopBGM(EBGMFadeType FadeOutType, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
