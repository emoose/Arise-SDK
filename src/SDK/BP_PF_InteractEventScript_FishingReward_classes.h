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

// BlueprintGeneratedClass BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C
// 0x0081 (0x04A2 - 0x0421)
class UBP_PF_InteractEventScript_FishingReward_C : public UBP_GP_Script2_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	struct FAchScenarioCharacterID                     MNK;                                                      // 0x0430(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     SelectTalkNo;                                             // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FishNum;                                                  // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FFishingRewardItemDatabaseRow               RewardData;                                               // 0x0458(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasReward;                                               // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCompleted;                                               // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractEventScript_FishingReward.BP_PF_InteractEventScript_FishingReward_C");
		return ptr;
	}


	void CheckTrophy();
	void SetReward(const struct FString& Label);
	void SaveGetReward(int ID);
	void GetRewardData(const struct FString& Key, bool* bValid, struct FFishingRewardItemDatabaseRow* RewardData, bool* bComplete);
	void Main(const struct FString& String);
	void On_Pre_Begin_Talk();
	void ExecuteUbergraph_BP_PF_InteractEventScript_FishingReward(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
