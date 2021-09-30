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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C
// 0x0040 (0x0288 - 0x0248)
class UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C : public UBtlStatusViewBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C*       SmashGauge;                                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBattleGaugeViewBase*                        GaugeView;                                                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UWidgetAnimation*>                    GaugeAnimArray;                                           // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	int                                                GaugeIndex;                                               // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	class UUserWidget*                                 ParentWidget;                                             // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C*          RecoilNotifyText;                                         // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C");
		return ptr;
	}


	void ChnageTargetRequest(class UBP_BtlStatusViewModel_C* NewViewModel);
	void SetHpBar(class UUserWidget* ParentWidget, class UBattleGaugeViewBase* GaugeViewArray, class UTO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C* RecoilNotifyText, TArray<class UWidgetAnimation*>* GaugeAnim);
	void OpenHpbar();
	void LoadStatus();
	void EventOnReccoveryHp(int RecoveryValue);
	void OnDamageHp();
	void EventOnOpen();
	void OnChangeSmashConditionRate(float PrevRate, float NewRate);
	void UnBindEvent();
	void Received_ChangeViewModelRequest();
	void BindEvent();
	void OnChangeStrikeSmash();
	void OnBeginSpecialStrike();
	void OnEndSpecialStrike();
	void OnRecoilNotify();
	void OnUseStrike();
	void ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
