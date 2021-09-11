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

// BlueprintGeneratedClass BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C
// 0x0074 (0x0454 - 0x03E0)
class ABP_PFOwlSearcherBase_C : public APFOwlSearcher
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UBP_PF_AlphaMaskComponent_C*                 BP_PF_AlphaMaskComponent;                                 // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RotationAroundPlayerTime;                                 // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShortChatIndex;                                           // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayTimeForBeginMapChangeAnimation;                      // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	TArray<struct FString>                             NormalFoundVoiceLabels;                                   // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FoundVoiceLabelIndex;                                     // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	TArray<struct FString>                             SeriousFoundVoiceLabels;                                  // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bMapChanged;                                              // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	TArray<struct FString>                             FirstHalfMapChangeShortChatLabels;                        // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             SecondHalfMapChangeShortChatLabels;                       // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SecondHalfStartScenarioCounter;                           // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C");
		return ptr;
	}


	void GetCurrentLevelName(struct FString* LevelName);
	void GetCurrentLocation(struct FString* CurrentMapLocation);
	void GetFoundVoiceLabels(TArray<struct FString>* FoundVoiceLabels);
	void UpdateFoundVoiceLabel();
	void GetFoundVoiceLabel(struct FString* FoundVoiceLabel);
	bool IsInTownOrDungeon();
	void RequestShortChat();
	void SendCommand(const struct FName& Command);
	void UserConstructionScript();
	void ChangeSearchState(EPFOwlSearchState InPrevState, EPFOwlSearchState InNextState);
	void ReceiveBeginPlay();
	void ChangeAvailable(bool bInAvailable);
	void OnStartToFly();
	void OnEndToIdle();
	void OnPostMapChange(const struct FString& NewMapName, const struct FString& OldMapName);
	void OnBuild();
	void ExecuteUbergraph_BP_PFOwlSearcherBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
