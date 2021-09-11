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

// BlueprintGeneratedClass BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C
// 0x0037 (0x04E8 - 0x04B1)
class UBP_PF_InteractEventScript_FishingTips_C : public UBP_PF_InteractEventScript_FacOneTop_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (Transient, DuplicateTransient)
	bool                                               bCompleted;                                               // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnexplored;                                              // 0x04C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04C2(0x0006) MISSED OFFSET
	class UFishingDatabase*                            FishingDB;                                                // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWorldMapDatabase*                           WorldMapDB;                                               // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_PF_NPC_InteractEvent_FishingTackle_C*    InteractEvent_FishingTackle;                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBP_FishingSaveData_C*                       FishSaveData;                                             // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractEventScript_FishingTips.BP_PF_InteractEventScript_FishingTips_C");
		return ptr;
	}


	void IsVisitedAreaByHint(const struct FString& FishLabel, bool* bVisited, struct FString* AreaStr);
	void SetReplaceMessage_RewardFishTypeCount();
	void SetReplaceMessage_GetFishTypeCount();
	void IsVisitedAreaByLocationID(const struct FString& LocationID, bool* bVisited);
	void IsVisitedAreaByAreaStrID(const struct FString& AreaStrID, bool* bVisited);
	void CollectionUncatchedFish();
	void Selection(int SelectNo, int SelectTextNo);
	void On_Pre_Begin_Talk();
	void On_Post_End_Talk(class UPFOneTopComponent* OneTopComponent);
	void ExecuteUbergraph_BP_PF_InteractEventScript_FishingTips(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
