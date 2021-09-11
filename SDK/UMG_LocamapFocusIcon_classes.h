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

// WidgetBlueprintGeneratedClass UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C
// 0x0051 (0x0299 - 0x0248)
class UUMG_LocamapFocusIcon_C : public UUMG_LayerIconBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class UTextBlock*                                  DebugText;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUMG_Locamap_FocusIconImage_C*               FOCUS_ICON_IMAGE;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                Root;                                                     // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLocatorInfo                                LocatorInfo;                                              // 0x0268(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bUnuseFocus;                                              // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C");
		return ptr;
	}


	void IsCanDecide(bool* UnuseFocus);
	void SetCanDecide(bool bCanDecide);
	void SetUnuseFocus(bool bUnuseFocus);
	void IsUnuseFocus(bool* UnuseFocus);
	void GetAdsorbArea(class UBP_MenuFreeCursorAdsorbArea_C** AdsorbArea);
	void GetClickArea(class UBP_MenuFreeCursorClickArea_C** ClickArea);
	void Initialize(const struct FLocatorInfo& LocatorInfo);
	void Construct();
	void OnDecide();
	void OnDeselect(class UWidget* Widget);
	void SetIconIndex(unsigned char Index);
	void OnSelect(class UWidget* Widget);
	void ExecuteUbergraph_UMG_LocamapFocusIcon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
