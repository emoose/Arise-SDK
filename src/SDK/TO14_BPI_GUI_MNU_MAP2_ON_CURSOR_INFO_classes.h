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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C
// 0x0090 (0x0298 - 0x0208)
class UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C : public UUserWidget
{
public:
	class UImage*                                      Base;                                                     // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    DELAY_VISIBLE;                                            // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                Root;                                                     // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAriseTextWidget*                            TEXT_INFO;                                                // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidget*                                     PositionWidget;                                           // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            WidgetComponent;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector2D                                   OnCursorInfoOffset;                                       // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TMap<class UWidget*, struct FLocatorInfo>          ShowLocatorInfoMap;                                       // 0x0240(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWidget*                                     ShowKey;                                                  // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C");
		return ptr;
	}


	void UpdateShow(class UWidget** Instigator, bool* bSuccess, bool* bChanged, class UWidget** ShowKey);
	void IsShow(bool* bShow);
	void Hide(class UWidget* Key, bool* bSuccess);
	void Show(class UWidget* Key, const struct FLocatorInfo& Value, class UWidget** Instigator, bool* bSuccess, class UWidget** ShowKey);
	void SetWidgetComponent(class UWidgetComponent* WidgetComponent);
	void UpdatePosition();
	void SetPositionWidget(class UWidget* PositionWidget);
	void Refresh(const struct FLocatorInfo& LocatorInfo);
	void RefreshAsGigant();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
