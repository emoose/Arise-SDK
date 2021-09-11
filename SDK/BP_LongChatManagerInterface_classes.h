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

// BlueprintGeneratedClass BP_LongChatManagerInterface.BP_LongChatManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_LongChatManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LongChatManagerInterface.BP_LongChatManagerInterface_C");
		return ptr;
	}


	void GetNoPlayVoice(bool* bNoPlayVoice);
	void GetLongchatProfiler(class AActor** Profiler);
	void RequestClearQue();
	void SkipToNextCut();
	void IsHidden(bool* Hidden);
	void ShowTitle();
	void DirectPlay(const struct FString& LongchatName);
	void Play();
	void Resume();
	void Stop();
	void Pause();
	void AddLongChat(const struct FString& LongchatName, bool WithPlay);
	void MapChanged(const struct FString& LocationName);
	void HasPlayableChat(bool* Enabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
