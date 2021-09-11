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

// BlueprintGeneratedClass BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C
// 0x0010 (0x00F8 - 0x00E8)
class UBP_BTL_VoiceHandle_C : public UBtlVoiceHandle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E8(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                DelayVoiceTimerHandle;                                    // 0x00F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C");
		return ptr;
	}


	void OnEndMessageCallback(bool bInterrupted);
	void GetDelayTime(float* Delay_Time);
	void StopVoiceEvent(float InterpTimeSec);
	void Received_PlayVoice();
	void OnPlayVoice();
	void StopVoice(float InterpTimeSec);
	void VirtualPlayVoice();
	void SoundEndCallback(class UPostEventInfoBase* PostEventInfo);
	void PrintVoiceLog(const struct FString& State);
	void OnLosed(float InterpTime);
	void OnVirtualPlayEnd();
	void OnFinalize();
	void ExecuteUbergraph_BP_BTL_VoiceHandle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
