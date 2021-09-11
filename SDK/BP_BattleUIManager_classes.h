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

// BlueprintGeneratedClass BP_BattleUIManager.BP_BattleUIManager_C
// 0x0058 (0x05D0 - 0x0578)
class ABP_BattleUIManager_C : public ABP_DEV_BattleUIManager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0578(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0580(0x0028) UNKNOWN PROPERTY: SoftClassProperty BP_BattleUIManager.BP_BattleUIManager_C.TutorialWidgetPath
	unsigned char                                      UnknownData01[0x28];                                      // 0x05A8(0x0028) UNKNOWN PROPERTY: SoftClassProperty BP_BattleUIManager.BP_BattleUIManager_C.BossWidgetPath

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleUIManager.BP_BattleUIManager_C");
		return ptr;
	}


	bool IsUse();
	void ShowBtlLock();
	void HiddenBtlLock();
	void PlayBtlTarget();
	void PlayBtlLock();
	void UserConstructionScript();
	void ShowLockon();
	void OnHeal_Event(class ABtlCharacterBase* Target, int Value);
	void EventEndStrikeSmash();
	void HideLockon();
	void OnBeginSpellCastDelegate(class UBtlStatusViewModelBase* ViewModel);
	void CreatePostStatusViewModel(class UBtlStatusViewModelBase* ViewModel);
	void EventBeginStrikeSmash();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlHeelSignature__DelegateSignature(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlHeelSignature__DelegateSignature(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue);
	void OnHealEvent(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlComboSignature__DelegateSignature(class ABtlCharacterBase* DamageCharacter, class ABtlCharacterBase* Attacker, int HitCount, int TotalDamage);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature();
	void OnViewStart();
	void ReceiveBeginPlay();
	void OnViewEnd();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void OpenPoisonDamage(int Number, bool IsEnemy, const struct FVector& Position);
	void OpenHeal(int Number, const struct FVector& Position);
	void OpenDamage(int Number, bool IsEnemy, bool IsCritical, bool IsWeak, bool IsResist, bool IsCore, bool IsCoreBreak, bool IsBoostBreak, const struct FVector& Position);
	void ExecuteUbergraph_BP_BattleUIManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
