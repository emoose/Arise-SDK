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

// BlueprintGeneratedClass BP_LongChatManager.BP_LongChatManager_C
// 0x0090 (0x03E8 - 0x0358)
class ABP_LongChatManager_C : public ALongChatManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_AriseGamemode_C*                         GameMode;                                                 // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    StopLongChat;                                             // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PauseLongChat;                                            // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ResumeLongChat;                                           // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChangeLongChatList;                                       // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NextCutLongChat;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bNoPlayVoice;                                             // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsShowUI;                                                // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03C2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    ShowLongChatTitle;                                        // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              LongChatQueTimer;                                         // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDelayUpdate;                                             // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	class AActor*                                      LongChatProfiler;                                         // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LongChatManager.BP_LongChatManager_C");
		return ptr;
	}


	void GetNoPlayVoice(bool* bNoPlayVoice);
	void GetLongchatProfiler(class AActor** Profiler);
	void IsHidden(bool* Hidden);
	void HasPlayableChat(bool* Enabled);
	void UpdatePlayRecord();
	void SetShowUIFlag(bool bIsShowUI);
	void IsShowUI(bool* bIsShowUI);
	void SetNoPlayVoice(bool bNoPlayVoice);
	void CanPlayable_(bool* bAble);
	void IsPlayabelLongchatNow_(bool* bAble);
	void GetPlayableChatNum(int* Num);
	void PlayLongChat(bool bDirect, const struct FString& DirectPlayName);
	void UserConstructionScript();
	void AddLongChat(const struct FString& LongchatName, bool WithPlay);
	void Pause();
	void Stop();
	void Resume();
	void Play();
	void DirectPlay(const struct FString& LongchatName);
	void ShowTitle();
	void MapChanged(const struct FString& LocationName);
	void SkipToNextCut();
	void RequestClearQue();
	void ReceiveBeginPlay();
	void SpawnLongChatProfiler(class UClass* InLoadedAssetClass);
	void OnPostPlayLongchat();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnPreMapChange(const struct FString& OldMapName, const struct FString& NewMapName);
	void OnPartyIn(EArisePartyID InPartyID);
	void OnDelayedUpdateLCQue();
	void OnPartyOut(EArisePartyID OutPartyID);
	void OnChangeScene(unsigned char ChangedScene, unsigned char OldScene);
	void OnChangeMainScenario(int counter, int Prev);
	void ExecuteUbergraph_BP_LongChatManager(int EntryPoint);
	void ShowLongChatTitle__DelegateSignature();
	void NextCutLongChat__DelegateSignature();
	void ChangeLongChatList__DelegateSignature();
	void ResumeLongChat__DelegateSignature();
	void PauseLongChat__DelegateSignature();
	void StopLongChat__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
