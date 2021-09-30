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

// BlueprintGeneratedClass BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AriseSoundSystemInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseSoundSystemInterface.BP_AriseSoundSystemInterface_C");
		return ptr;
	}


	void PauseEventVoice(const struct FString& InVoiceName);
	void PlayEventVoice(const struct FString& InVoiceName);
	void IsSameCurrentPfAndBattleMusic(bool* IsSame);
	void GetCurrentPfMusicEventName(struct FString* Result);
	void SetPauseMapPfMusicFlag(bool NewFlag);
	void StopBGM(EBGMFadeType FadeType);
	void PlayPreparedAreaMapPfMusic();
	void IsPauseMapPfMusic(bool* IsPause);
	void PrepareNextAreaMapBGM(const struct FString& NextLevelName, bool* IsNoPlayPfMusic);
	void IsSamePrevAndCurrentPfMusic(bool* IsSame);
	void IsPlayingPfBGM(bool* IsPlaying);
	void PlayPreparedAreaMapBtlMusic();
	void PlayPreparedMapBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec);
	void PauseMapPfBGM(EBGMFadeType FadeType);
	void ResumeMapPfBGM(EBGMFadeType FadeType);
	void StopMapPfBGM(EBGMFadeType FadeType);
	void StopMapBtlBGM(EBGMFadeType FadeType);
	void IsSkipPlayMapBtlMusic(bool* IsSkipPlay);
	void IsCrossFadeMapBGM(bool* IsCrossFade);
	void PauseEventBGM(EBGMFadeType FadeType);
	void ResumeEventBGM(EBGMFadeType FadeType);
	void StopEventBGM(EBGMFadeType FadeType);
	void PlayEventBGM(const struct FString& MusicName);
	void IsCurrentPfMusicNameNull(bool* IsNull);
	void PlayBossBtlBGMCrossFade(EBGMCrossFadeType PlayMainType, float InterpTimeSec, const struct FName& Label);
	void PlayBossBtlBGM(const struct FName& Label);
	void IsBtlEncountGroupBtlMusicNameNull(const struct FName& Label, bool* IsNull);
	void CheckAreaMapSatisfyCondition();
	void SetDuckingVolume(int BGM_Volume, int Ambient_Volume, int Gaya_Volume);
	void PauseAllSound();
	void ResumeAllSound();
	void SetSpatialCondition(bool Flag);
	void ResetSoundSystem();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
