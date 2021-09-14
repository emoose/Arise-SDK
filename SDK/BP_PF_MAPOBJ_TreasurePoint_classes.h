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

// BlueprintGeneratedClass BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C
// 0x00C1 (0x04F1 - 0x0430)
class ABP_PF_MAPOBJ_TreasurePoint_C : public ABP_PF_MAPOBJ_SwitchModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class UBP_SCHOBJ_TreasurePoint_C*                  BP_SCHOBJ_TreasurePoint;                                  // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      InteractEvent;                                            // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FScenarioFlagNamed>                  ItemGetFlagArray;                                         // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTreasurePointItemDatabaseRow               ItemData;                                                 // 0x0458(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bValidItemData;                                           // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	struct FName                                       DropItemID;                                               // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DropItemNum;                                              // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DropGaldNum;                                              // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LostItemNum;                                              // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LostGaldNum;                                              // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlreadyRequestShortChat;                                 // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	struct FString                                     GetItemShortChatID;                                       // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bStrangeFlag;                                             // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C");
		return ptr;
	}


	void ReceiveSerializeTreasurePointParameter(struct FPFPlacementTreasurePointDatabaseRow* DestinationParameter);
	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void RequestSC(const struct FString& RequestID, bool IsStrange);
	void GetItemInternal(int ItemID, int Num);
	void GetDebShowInfoMessage(bool* bValid, struct FString* OutMessage, struct FLinearColor* OutColor);
	void CheckItem(bool* GetIt, struct FString* ItemLabel, int* ItemNum, int* GetGald, int* LostGald);
	void OnSetHideModel(bool bVisibility);
	void SetDiscover();
	void IsDiscover(bool* bCleared);
	void ApplyItemGetFlags();
	float GetIconAngle();
	struct FString GetIconImageDataName();
	struct FVector GetIconLocation();
	void GetItem(bool* bShowDialog);
	void SetOpen();
	void IsOpen(bool* bCleared);
	void OnSetGatheredModel(bool bVisibility);
	void OnSetBaseModel(bool bVisibility);
	void UserConstructionScript();
	void SetShowModel();
	void ReceiveOnConstruction(const struct FTransform& Transform);
	void OnFoundTrapIn();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PF_MAPOBJ_TreasurePoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
