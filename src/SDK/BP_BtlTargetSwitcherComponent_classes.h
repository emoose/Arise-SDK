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

// BlueprintGeneratedClass BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C
// 0x001C (0x011C - 0x0100)
class UBP_BtlTargetSwitcherComponent_C : public UBtlTargetSwitcherComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (Transient, DuplicateTransient)
	TArray<class UBtlTargetCursorComponent*>           SelectableTargets;                                        // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TargetIndex;                                              // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C");
		return ptr;
	}


	void CanTargetClearOnStateChanged(bool* Result);
	void QuickTarget();
	void DistanceOrderPredicate(class ABtlCharacterBase* Lhs, class ABtlCharacterBase* Rhs, bool* Result);
	TArray<class ABtlCharacterBase*> GetDistanceOrderTargets();
	class ABtlCharacterBase* GetFirstTarget();
	bool CanChangeTarget();
	void GetSelectableTargets(bool UseCache, int* TargetIndex, TArray<class UBtlTargetCursorComponent*>* SelectableTargets);
	class UBtlTargetCursorComponent* GetTargetComponent(bool IgnoreTemporary);
	void SetTargetCompoent(class UBtlTargetCursorComponent* TargetComponent, bool Temporary);
	void GetRelativeTargetIndex(int Vector, int* TargetIndex);
	void UpdateMagicTarget();
	void GetMagicTarget(int ArtsIndex, class ABtlCharacterBase** Target);
	bool CanAssistable(EBattleActionState NowState);
	void OnSwappedParty();
	void OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void OnDeadPartyUnit();
	void OnDeadEnemyUnit();
	void OnRootMagicSpawned(const struct FBtlArtsData& ArtsData);
	void OnStateChanged(EBattleActionState NowState, EBattleActionState PreState);
	void OnBeginMagicState();
	void OnInitializeComponent();
	void OnBreakCore(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, class UBtlDamageSphereComponent* DmgCollision);
	void ChangeRelativeTarget(int Vector);
	void OnTargetSelectionPauseChanged(bool Paused);
	void OnTargetLost(class ABtlCharacterBase* Character);
	void OnCursorTargetableChanged(class UBtlTargetCursorComponent* CursorComponent, bool Enabled);
	void OnTryRefresh(EBtlBitFlagCategory Cause);
	void OnFakeDeadEvent(class ABtlCharacterBase* FakeDeadUnit);
	void ExecuteUbergraph_BP_BtlTargetSwitcherComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
