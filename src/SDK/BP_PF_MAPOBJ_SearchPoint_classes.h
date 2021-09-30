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

// BlueprintGeneratedClass BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C
// 0x00B2 (0x04E2 - 0x0430)
class ABP_PF_MAPOBJ_SearchPoint_C : public ABP_PF_MAPOBJ_SwitchModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    KiraParticle;                                             // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_SCHOBJ_SearchPoint_C*                    BP_SCHOBJ_SearchPoint;                                    // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPFSearchPointItemID                        ItemID;                                                   // 0x0448(0x0010) (Edit, BlueprintVisible)
	struct FSearchPointItemDatabaseRow                 ItemData;                                                 // 0x0458(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bValidItemData;                                           // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	struct FName                                       DropItemID;                                               // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DropItemNum;                                              // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DropGaldNum;                                              // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESearchItemRarity>                     DropRarity;                                               // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayRarityEffect;                                        // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04B2(0x0006) MISSED OFFSET
	class UClass*                                      InteractEvent;                                            // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPoped;                                                   // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHide;                                                    // 0x04C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04C2(0x0002) MISSED OFFSET
	int                                                LostItemNum;                                              // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LostGaldNum;                                              // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	struct FString                                     GetItemShortChatID;                                       // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAlreadyRequestShortChat;                                 // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStrangeFlag;                                             // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C");
		return ptr;
	}


	void ReceiveSerializeSearchPointParameter(struct FPFPlacementSearchPointDatabaseRow* DestinationParameter);
	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void InitializePlacementData();
	void RequestSC(const struct FString& RequestID, int NewGetItemID, bool IsStrange);
	void GetDebShowInfoMessage(bool* bValid, struct FString* OutMessage, struct FLinearColor* OutColor);
	void GetItem(bool* ShowDialog);
	void OnSetHideModel(bool bVisibility);
	void ApplyStatus();
	void IsPop(bool* bEnable, int* Value);
	void SetDiscover();
	void IsDiscover(bool* bCleared);
	void IsGetItemFlag(bool* Out);
	void CheckItem(bool* GetIt, struct FString* ItemLabel, int* ItemNum, int* GetGald, int* LostGald);
	void StopEffect();
	void PlayEffect();
	void OnSetGatheredModel(bool bVisibility);
	void OnSetBaseModel(bool bVisibility);
	void InitializeDropData();
	void UserConstructionScript();
	void OnFoundTrapIn();
	void ReceiveOnConstruction(const struct FTransform& Transform);
	void SetShowModel();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void On_Build_Completed();
	void On_Receive_Field_Action();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PF_MAPOBJ_SearchPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
