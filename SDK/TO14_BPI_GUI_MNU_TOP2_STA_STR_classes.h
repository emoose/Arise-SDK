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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP2_STA_STR.TO14_BPI_GUI_MNU_TOP2_STA_STR_C
// 0x0018 (0x0268 - 0x0250)
class UTO14_BPI_GUI_MNU_TOP2_STA_STR_C : public UClickableWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)
	class UAriseClickableArea*                         CLICK_AREA;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_BTL_RESULT_EXP_PANEL_C*        TO14_BPI_GUI_BTL_RESULT_EXP_PANEL;                        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP2_STA_STR.TO14_BPI_GUI_MNU_TOP2_STA_STR_C");
		return ptr;
	}


	void SetClickable(bool sw);
	void BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature();
	void BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature();
	void BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_STA_STR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
