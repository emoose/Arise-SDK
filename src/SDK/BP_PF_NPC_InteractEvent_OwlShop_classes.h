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

// BlueprintGeneratedClass BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C
// 0x0050 (0x0488 - 0x0438)
class ABP_PF_NPC_InteractEvent_OwlShop_C : public ABP_PF_NPC_InteractEvent_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	bool                                               bPlayEvent;                                               // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	struct FPFNpcDefineID                              NID_OWL_KING;                                             // 0x0448(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPFNpcDefineID                              NID_OWL_QUEEN;                                            // 0x0458(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             SQ_1100_StepName;                                         // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             SQ_1100_StepClearFlags;                                   // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_InteractEvent_OwlShop.BP_PF_NPC_InteractEvent_OwlShop_C");
		return ptr;
	}


	void GetRewardLossItemFromIDs(TArray<int>* InRewardID, TArray<struct FSysWinItemData>* OutItemData);
	void GetRewardLossItemFromID(TArray<struct FSearchOwlRewardItemData>* InRewardItem, TArray<struct FSysWinItemData>* OutLossItem);
	void RewardItemToWinSysItem(TArray<struct FSearchOwlRewardItemData>* InRewardItem, TArray<struct FSysWinItemData>* Out);
	void UserConstructionScript();
	void MainInteract();
	void ExecuteUbergraph_BP_PF_NPC_InteractEvent_OwlShop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
