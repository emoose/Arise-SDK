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

// BlueprintGeneratedClass BP_BtlCommonViewModel.BP_BtlCommonViewModel_C
// 0x000A (0x041A - 0x0410)
class UBP_BtlCommonViewModel_C : public UBP_DEV_BtlCommonViewModelBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	bool                                               IsBattleMenuUpdateRequest;                                // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingTextAnimation;                                   // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlCommonViewModel.BP_BtlCommonViewModel_C");
		return ptr;
	}


	void CheckCrisis();
	bool IsPlayingTutorialSuccessAnimation();
	bool BattleChangeCharacterTopNext();
	bool BattleChangeCharacterTopPrev();
	float GetItemIntervalRate();
	float GetEscapeRate();
	TArray<class UBtlStatusViewModelBase*> GetBoss();
	int GetMaxTp();
	int GetTp();
	class UBtlStatusViewModelBase* GetPlayer();
	class UBtlStatusViewModelBase* GetTarget();
	void OnSuccessEscape();
	void EventOnCancelEspace();
	void OnReusableItem();
	void OnUseItem(int ItemID, EArisePartyID PartyId, bool UseItem);
	void Dev_2_OnInspiration_Arts(class ABtlCharacterBase* Unit, const struct FName& Arts, const struct FName& InspirationArts);
	void OnChangeOperatoionCharacter(class ABtlCharacterBase* PrevOperationUnit, class ABtlCharacterBase* NowOperationUnit);
	void EventOnBeginEspace();
	void OnChangePCOrder();
	void DevBattleChangeCharacterTopNext();
	void DevBattleChangeCharacterTopPrev();
	void EventOnChangeTp();
	void EventOnBeginTutorial();
	void EventOnSuccessTutorial();
	void Fainalize();
	void EventOnFinihsedTutorialStartAnimation();
	void EventOnStartedTutorialTextAnimation();
	void EventOnFinihsedSuccessAnimation();
	void EventOnBeginArtsMystic(const struct FBtlMysticBeginParam& Param);
	void Initialize();
	void EventOnBeginArtsSpecialStrike(const struct FBtlSpecialStrikeBeginParam& Param);
	void ExecuteUbergraph_BP_BtlCommonViewModel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
