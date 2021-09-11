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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C
// 0x00D8 (0x0328 - 0x0250)
class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C : public UClickableWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_1;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                            DYNAMIC_SKL_ICON;                                         // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_MenuFreeCursorAdsorbArea_C*              FREE_CUROSR_ADSORB_AREA;                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScaleBox*                                   SKL_CHECKER_ROOT;                                         // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_TIT2_SKL_CLICK_AREA_C*     SKL_CLICK_AREA;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              PauseTime;                                                // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          OwnerPanel;                                               // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnUnhoveredEvent;                                         // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                AliasID;                                                  // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArisePartyID                                      CharaID;                                                  // 0x02A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSkillLearn;                                             // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpenedLeanDialog;                                       // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpenedAnyDialog;                                        // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClosedAnyDialog;                                        // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpenedShortDialog;                                      // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C*           SKL_ICON;                                                 // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SkillNo;                                                  // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnClosedLearnDialog;                                      // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClosedShortDialog;                                      // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C");
		return ptr;
	}


	void BindClosedShortDialogEvent(const struct FScriptDelegate& OnClosedShortDialog);
	void BindClosedLearnDialogEvent(const struct FScriptDelegate& OnClosedLearnDialog);
	void GetOwnerPanel(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C** NewParam);
	void GetCharaID(EArisePartyID* CharaID);
	void GetSkillID(int* SkillID);
	void GetAliasID(int* AliasID);
	void CheckSkillLearnable(bool* bLearnable);
	void BindSkillLearnEvent(const struct FScriptDelegate& OnSkillLernNew);
	void GetClickableArea(class UTO14_BPI_GUI_MNU_TIT2_SKL_CLICK_AREA_C** ClickableArea);
	void BindOpenedShortDialogEvent(const struct FScriptDelegate& OnOpenedShortDialog);
	void OpenShortDialog(bool* Success);
	void BindClosedAnyDialogEvent(const struct FScriptDelegate& OnClosedAnyDialog);
	void BindOpenedAnyDialogEvent(const struct FScriptDelegate& OnOpenedAnyDialog);
	void BindOpenedLeanDialogEvent(const struct FScriptDelegate& OnOpenedLeanDialog);
	void RunSkillLern(bool* Success);
	void OpenLernDialog(bool* Success);
	void CheckHaveSkillLearnRisePoint(bool* IsHave);
	void CheckSkillLearn(bool* IsLean);
	void GetAdsorbArea(class UBP_MenuFreeCursorAdsorbArea_C** AdsorbArea);
	void ActivateBP(bool sw);
	void Restruct(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* OwnerPanel, EArisePartyID CharaID, int AliasID, int SkillNo, int SkillID);
	void Initialize(EArisePartyID CharaID, int AliasID, int Index, const struct FScriptDelegate& OnHovered, const struct FScriptDelegate& OnUnhovered);
	bool OnDeselected();
	bool OnSelected();
	void OnPanelCompleted();
	void CustomEvent_OnFreeCursorHovered_SKL_CLICK_AREA(class UWidget* Widget);
	void CustomEvent_OnDecide();
	void CustomEvent_OnOpenedLeanDialog();
	void CustomEvent_OnOpenedShortDialog();
	void CustomEvent_OnFreeCursorUnovered_SKL_CLICK_AREA(class UWidget* Widget);
	void CustomEvent_OnFreeCursorDecided_SKL_CLICK_AREA(class UWidget* Widget);
	void BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature();
	void BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_10_OnClickableAreaHoverEvent__DelegateSignature();
	void Activate(bool sw);
	void BndEvt__SKL_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR(int EntryPoint);
	void OnClosedShortDialog__DelegateSignature();
	void OnClosedLearnDialog__DelegateSignature();
	void OnOpenedShortDialog__DelegateSignature();
	void OnClosedAnyDialog__DelegateSignature();
	void OnOpenedAnyDialog__DelegateSignature();
	void OnOpenedLeanDialog__DelegateSignature();
	void OnSkillLearn__DelegateSignature(int UniqueId);
	void OnUnhoveredEvent__DelegateSignature(int UniqueId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
