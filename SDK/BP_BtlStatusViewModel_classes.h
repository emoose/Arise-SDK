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

// BlueprintGeneratedClass BP_BtlStatusViewModel.BP_BtlStatusViewModel_C
// 0x0070 (0x03F8 - 0x0388)
class UBP_BtlStatusViewModel_C : public UBP_DEV_BtlStatusViewModelBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	bool                                               IsActiveUniqueSkill;                                      // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	TArray<EBattleHudAbnormalType>                     HudAbnormalList;                                          // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EBattleHudAbnormalType, float>                AbnormalTimePercentMap;                                   // 0x03A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlStatusViewModel.BP_BtlStatusViewModel_C");
		return ptr;
	}


	bool IsReceiveSmashCondition();
	void OnChangeAttributeIcon(bool Enable, bool IsBreak, EBattleHudAbnormalType EnableIconType, EBattleHudAbnormalType BreakIconType);
	void ChangeAbnormalIcon(EBattleHudAbnormalType PrevType, EBattleHudAbnormalType NextType);
	EAbnormalType ConvertHudAbnormal(EBattleHudAbnormalType HudAbnormal);
	float GetAbnormalValue(EBattleHudAbnormalType AbnormalType);
	float GetAbnormalTimePercent(EBattleHudAbnormalType AbnormalType);
	void RemoveAbnormalInfo(EBattleHudAbnormalType InType, bool* removed);
	void AddAbnormalInfo(EBattleHudAbnormalType InType);
	bool IsBreakArmor();
	bool IsBreakSuperAvoid();
	bool IsMomentaryRush();
	void UpdateBuffIcon();
	void SetBuffIcon(EBattleHudAbnormalType Type);
	void EndBuff(EBattleHudAbnormalType HudType);
	void StartBuff(EBattleHudAbnormalType HudType, float BuffValue);
	bool IsEnableFlying();
	bool IsDead();
	int GetLevel();
	float GetSPInternal();
	float GetMaxSPInternal();
	bool IsUseableArts(const struct FName& ArtsLabel);
	int GetUniqueSkillValueMax();
	int GetUniqueSkillValue();
	bool IsUniqueSkillActive();
	void ChangeAbnormalTime(EAbnormalType Abnormal, float AbnormalTimer);
	EBattleHudAbnormalType ConvertAbnormal(EAbnormalType Abnormal);
	struct FDictionaryText GetDName();
	void OnPinch2Normal(class UBtlStatusComponent* SelfComponent);
	void OnNormal2Pinch(class UBtlStatusComponent* SelfComponent);
	float GetStrikeRate();
	bool IsAvailableStrikeAttack();
	bool IsStrikeSmash();
	bool IsMysticLearned();
	bool IsPlayerOperation();
	bool IsAir();
	bool IsOverlimit();
	bool IsBreakRush();
	bool IsBreakFlying();
	bool IsEnableArmor();
	bool IsEnableSuperAvoid();
	EBtlElementType GetElementType();
	struct FVector GetSpellCastLocation();
	TArray<EBattleHudAbnormalType> GetAbnormalType();
	float GetOverlimitRate();
	struct FVector GetPlayerWorldPosition();
	struct FVector GetTargetWorldPosition();
	int GetMaxSP();
	EPCOrder GetPcOrder();
	bool IsStrikeFull();
	struct FVector GetWorldPosition();
	struct FText GetName();
	EArisePartyID GetPartyId();
	int GetSP();
	int GetMaxHp();
	int GetHp();
	void EventOnChangeOverlimitTime(class UBtlStatusComponent* SelfComponent);
	void EventOnBeginAbnormal(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType);
	void EventOnEndAbnormal(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType);
	void OnChangeTarget(class ABtlCharacterBase* SelfCharacter, class UBtlTargetCursorComponent* NewTargetComponent, class ABtlCharacterBase* NewTargetCharacter, class UBtlTargetCursorComponent* PrevTargetComponent);
	void K2_Initialize();
	void OnAirArtsChange(bool IsAir);
	void K2_Fainalize();
	void OnChangePCArts(class ABtlCharacterBase* Character);
	void EventOnMaxStrike(class UBtlStatusComponent* SelfComponent);
	void OnChangeSmashCondition(class ABtlCharacterBase* Striker);
	void EventOnChangeStrike(class UBtlStatusComponent* SelfComponent);
	void OnChangePCOrder();
	void OnAbnormal_RushBreak(class ABtlCharacterBase* SelfCharacter);
	void OnChangeExAbnormal(EBattleHudAbnormalType AbnormalType);
	void OnAbnormal_Armor(class ABtlCharacterBase* SelfCharacter);
	void OnAbnormalFryingBreak(class ABtlCharacterBase* SelfCharacter);
	void OnAbnormal_SuperAvoid(class ABtlCharacterBase* SelfCharacter);
	void OnChangeAbnormalTime(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType, float PrevTime, float Time);
	void BeginUniqueSkill();
	void EndUniqueSkill();
	void EventOnChangeSpInternal(class UBtlStatusComponent* SelfComponent, float PrevSp, float NewSp);
	void OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void OnRaiseDead(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue);
	void EventOnChangeHp(class UBtlStatusComponent* SelfComponent, int PrevHp, int NewHp);
	void EventOnBeginBuff();
	void EventOnEndBuff();
	void OnBeginMomentaryRush(class ABtlCharacterBase* Unit);
	void OnEndMomentaryRush(class ABtlCharacterBase* Unit);
	void OnRecoil(class ABtlCharacterBase* Sender, class ABtlCharacterBase* Attacker);
	void OnAbnormalStateChanged(class UBtlStatusComponent* Sender, EBattleHudAbnormalType IconId, bool Enabled);
	void OnChangeOperationCharacter(class ABtlCharacterBase* PrevOperationUnit, class ABtlCharacterBase* NowOperationUnit);
	void 񣌘򠳾񍯐�0�0_1(const struct FBtlChangeOrderHandle& Handle, bool Add);
	void EventOnChangeTp();
	void OnReserveArtsStrikeSmash(const struct FName& StrikeLabel);
	void EventOnChangeElementType();
	void EventOnOutMaxStrike(class UBtlStatusComponent* SelfComponent);
	void ExecuteUbergraph_BP_BtlStatusViewModel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
