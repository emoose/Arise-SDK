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

// BlueprintGeneratedClass BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C
// 0x0028 (0x0460 - 0x0438)
class ABP_PF_NPC_InteractEvent_FishingTackle_C : public ABP_PF_NPC_InteractEvent_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	class UFishingRewardItemDatabaseObject*            RewardItemDatabase;                                       // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     RewardLabel;                                              // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_AriseGameProcessWithEvent_C*             ScriptProcess;                                            // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_InteractEvent_FishingTackle.BP_PF_NPC_InteractEvent_FishingTackle_C");
		return ptr;
	}


	void SearchNextReward(bool* bFound, struct FFishingRewardItemDatabaseRow* RewardData);
	void SetRewardAcquired(int ID);
	void GetRewardAcquired(int ID, bool* bAcquired);
	void CheckRewardCond(const struct FFishingRewardItemDatabaseRow& FishingRewardItemDatabaseRow, bool* bIsGet);
	void CheckFishBigCount(int Count, bool* bUpdate);
	void CheckFishTypeCount(int Count, bool* bUpdate);
	void SearchTips(TArray<struct FFishingRewardItemTipsData>* Tips);
	void SearchAcquireReward(bool* bFound, struct FFishingRewardItemDatabaseRow* RewardData);
	void UserConstructionScript();
	void MainInteract();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_PF_NPC_InteractEvent_FishingTackle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
