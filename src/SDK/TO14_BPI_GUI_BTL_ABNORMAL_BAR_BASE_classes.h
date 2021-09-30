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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C
// 0x0028 (0x0270 - 0x0248)
class UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C : public UBtlStatusViewBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	TArray<class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C*>   AbnormalIconList;                                         // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<EBattleHudAbnormalType>                     IgnoreIcon;                                               // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE.TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C");
		return ptr;
	}


	void RefreshIcons();
	void GetPlayingBuffArrowAnimationTime(float* CurrentTime);
	void ClearIcons();
	void FindIcon(EBattleHudAbnormalType Type, class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C** IconWidget);
	void GetAbnormalIconList(TArray<class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C*>* Array);
	void BindEvent();
	void OnBeginAbnormal(EBattleHudAbnormalType AbnormalType);
	void UnBindEvent();
	void OnEndAbnormal(EBattleHudAbnormalType AbnormalType);
	void Construct();
	void Destruct();
	void OnChangeTimeAbnormal_(EBattleHudAbnormalType AbnormalType, float Percent);
	void OnBeginBuff(EBattleHudAbnormalType BuffType, float BuffValue);
	void OnEndBuff(EBattleHudAbnormalType BuffType, float BuffValue);
	void OnChangeAttribute(EBattleHudAbnormalType PrevType, EBattleHudAbnormalType NextType);
	void OnPostBeginBattle();
	void ExecuteUbergraph_TO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
