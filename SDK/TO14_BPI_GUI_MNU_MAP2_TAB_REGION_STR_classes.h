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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C
// 0x0038 (0x0288 - 0x0250)
class UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C : public UClickableWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)
	class UAriseClickableArea*                         CLICK_AREA;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_MAP2_TAB_ICON_C*           Icon;                                                     // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnSelectEvent;                                            // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeselectEvent;                                          // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR.TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR_C");
		return ptr;
	}


	void Refresh(int UniqueId, const struct FMapLocationData& Location);
	void BindDeselectEvent(const struct FScriptDelegate& OnDeselect);
	void BindSelectEvent(const struct FScriptDelegate& OnSelect);
	void Deselect();
	void Select();
	void CustomEvent_Select();
	void CustomEvent_Deselect();
	void BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature();
	void BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_TAB_REGION_STR(int EntryPoint);
	void OnDeselectEvent__DelegateSignature(int UniqueId);
	void OnSelectEvent__DelegateSignature(int UniqueId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
