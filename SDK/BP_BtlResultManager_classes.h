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

// BlueprintGeneratedClass BP_BtlResultManager.BP_BtlResultManager_C
// 0x0020 (0x0608 - 0x05E8)
class ABP_BtlResultManager_C : public ABtlResultManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E8(0x0008) (Transient, DuplicateTransient)
	class UPFDelegateArgs_EnableControl*               PfComingBackHandle;                                       // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              OpenWaitTime;                                             // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class UPFDelegateArgs_EnableControl*               OpenResultArgs;                                           // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlResultManager.BP_BtlResultManager_C");
		return ptr;
	}


	void ClearOpenWaitParams();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlAttackArtsSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void OnGoBackTitle();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlDecideWinSignature__DelegateSignature();
	void OnEndLoadSaveData(EAriseSaveResult iResult);
	void OnOpenTpItemWindow(class UPFDelegateArgs_EnableControl* InArgs);
	void ShowTpITemWindow();
	void OnPlayShortCatAnim();
	void OnOpenBattleResult(class UPFDelegateArgs_EnableControl* InArgs);
	void OnPostBattleResutlHud();
	void OnDisableResultWindow(class UPFDelegateArgs_DisableControl* InArgs);
	void OnShowGigantTutorial(class UPFDelegateArgs_EnableControl* InArgs);
	void Event_Show_Character_Change_Tutorial(class UPFDelegateArgs_EnableControl* InArgs);
	void ExecuteUbergraph_BP_BtlResultManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
