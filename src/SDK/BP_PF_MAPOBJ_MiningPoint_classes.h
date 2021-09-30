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

// BlueprintGeneratedClass BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C
// 0x009D (0x0510 - 0x0473)
class ABP_PF_MAPOBJ_MiningPoint_C : public ABP_PF_MAPOBJ_BreakBase_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0473(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class UBP_SCHOBJ_MiningPoint_C*                    BP_SCHOBJ_MiningPoint;                                    // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPFMiningPointItemID                        MiningPointItemID;                                        // 0x0488(0x0010) (Edit, BlueprintVisible)
	struct FPFSearchPointItemID                        SearchPointItemID_DEPRECATED;                             // 0x0498(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAriseMiningPointSaveInfo                   MiningData;                                               // 0x04A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bValidItemData;                                           // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    KiraParticleComponent;                                    // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                Reality;                                                  // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SCItemID;                                                 // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSysWinLogGetItem>                   LogGetItems;                                              // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bFinishGetMiningItems;                                    // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	TArray<struct FAriseMiningItemSaveInfo>            ListGetItems;                                             // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_MiningPoint.BP_PF_MAPOBJ_MiningPoint_C");
		return ptr;
	}


	void ReceiveSerializeBreakPointParameter(struct FPFPlacementBreakPointDatabaseRow* DestinationParameter);
	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void InitializePlacementData();
	void CollectGetItems();
	void PopGetItemLog();
	void PushGetItemLog(const struct FString& ItemID, int Num, EOption LogOption);
	void GetItem(int ItemID, TArray<int> AbilityID, bool* GetIt, bool* ShowDialog);
	void StopEffect();
	void PlayEffect();
	void AcquiredMiningData();
	void CreateMiningData();
	void ApplyStatus();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Break();
	void OnSetBaseModel(bool bVisibility);
	void OnSetGatheredModel(bool bVisibility);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnSetHideModel(bool bVisibility);
	void Event_Get_Mining_Items(TArray<struct FAriseMiningItemSaveInfo> Items);
	void ExecuteUbergraph_BP_PF_MAPOBJ_MiningPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
