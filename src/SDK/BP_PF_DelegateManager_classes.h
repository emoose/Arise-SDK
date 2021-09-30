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

// BlueprintGeneratedClass BP_PF_DelegateManager.BP_PF_DelegateManager_C
// 0x00B8 (0x0410 - 0x0358)
class ABP_PF_DelegateManager_C : public APFDelegateManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPFDelegateArgs_EnableControl*               DelegateArgs_EnableControl;                               // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBroadcast_ChangeEnableControl;                           // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class UPFDelegateArgs_DisableControl*              DeleagetArgs_DisableControl;                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<EArisePartyID>                              LearnSpArtsPartyID;                                       // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               LearnSpArtsLabel;                                         // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FString>               FishingLC_LongChatNames;                                  // 0x03A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             FishingLC_FishingResultTypes;                             // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FishingLC_FishingPoint;                                   // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_DelegateManager.BP_PF_DelegateManager_C");
		return ptr;
	}


	void IsRequestEvent_EnableControl(EAriseGameState InChangedState, bool bInNextIs, bool bInCheckIs, bool* bOut);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteBroadcast_EnableControl(int InDelegateNum);
	void ExecuteBroadcast_DisableControl(int InDelegateNum);
	void SetFishingResult(const struct FString& InPointName, TArray<struct FString> InTypes);
	void OnChageGameState(EAriseGameState ChangedState, bool NewState);
	void OnChangeDisplayScene(unsigned char ChangedScene, unsigned char OldScene);
	void ExecuteCheckCP(class UPFDelegateArgs_EnableControl* InArgs);
	void OnShowTutorial_PF_PROFICIENCY(class UPFDelegateArgs_EnableControl* InArgs);
	void CustomEvent_1(class UPFDelegateArgs_EnableControl* InArgs);
	void OnLearnSpArts(class UPFDelegateArgs_EnableControl* InArgs);
	void OnPlayFishingLC(class UPFDelegateArgs_EnableControl* InArgs);
	void OnCooking(EArisePartyID InPartyID, int InRecipeID);
	void Event_Check_Item_Rate(class UPFDelegateArgs_EnableControl* InArgs);
	void Event_Check_Monster_Complete_Rate(class UPFDelegateArgs_EnableControl* InArgs);
	void ExecuteUbergraph_BP_PF_DelegateManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
