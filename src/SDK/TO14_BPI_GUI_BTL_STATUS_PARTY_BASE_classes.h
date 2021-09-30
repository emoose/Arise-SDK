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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C
// 0x000C (0x0254 - 0x0248)
class UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C : public UBtlStatusViewBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	bool                                               IsPlayOpenAnim;                                           // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayCharaNameStartAnim;                                // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSkipAnim;                                               // 0x0252(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpened;                                                 // 0x0253(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C");
		return ptr;
	}


	void ApplyHpBar();
	void ReceivedOnRecoveryHp(int RecoveryValue);
	void ReceivedOnDamageHp();
	void PlayHealAnim(int HealValue);
	void OnChangePreset(const struct FName& Preset);
	void SetHpNumberText();
	void GetHpNumber(class UTO14_BPI_GUI_BTL_RUNE_NUMBER_C** Number);
	void GetOpenAnim(class UWidgetAnimation** Anim);
	void GetEndChangeAnim(class UWidgetAnimation** Anim);
	void GetBeginChangeAnim(class UWidgetAnimation** Anim);
	void GetSubStatusViewList(TArray<class UBtlStatusViewBase*>* View);
	void GetCharaName(class UTO14_BPI_GUI_BTL_RUNE_FONT_C** NameWidget);
	void GetHpBar(class UBattleGaugeViewBase** HpBar);
	void OnOpen();
	void OnDamageHp();
	void OnRecoveryHp(int RecoveryValue);
	void BindEvent();
	void UnBindEvent();
	void Received_ChangeViewModelRequest();
	void OnApplyViewModel();
	void OnHpBonusChanged(int HandleIndex, float OldValue, float NewValue);
	void ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
