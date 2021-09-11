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

// BlueprintGeneratedClass BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C
// 0x00C3 (0x07B4 - 0x06F1)
class ABP_MapLinkSelectorBase_C : public ABP_MapLinkBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (Transient, DuplicateTransient)
	TArray<struct FSMapLinkSelectSet>                  SelectDefine;                                             // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TitleMessageId;                                           // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     InfoMessageId;                                            // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CancelMessageId;                                          // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bOnMapChange;                                             // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0741(0x0007) MISSED OFFSET
	struct FString                                     SelectDisableMsg;                                         // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bHideUnselectable;                                        // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0759(0x0007) MISSED OFFSET
	TArray<struct FModifiedText>                       SelectNameList;                                           // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSMapLinkSelectSet>                  SelectDefineList;                                         // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        SelectIndexList;                                          // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SelectLinkMapName;                                        // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SelectLinkLocatorName;                                    // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SelectIndex;                                              // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C");
		return ptr;
	}


	void GetLinkedLocatorName(struct FString* LocatorName);
	void GetLinkedMapName(struct FString* MapName);
	void _UpdateInteractionActInfo(bool* bValid);
	void CollectionSelectList();
	void OnMapJump();
	void UserConstructionScript();
	void Finish_DoMapLink__Dialog_(const struct FString& ID);
	void On_Error_Msg();
	void On_Elevator_Event();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MapLinkSelectorBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
