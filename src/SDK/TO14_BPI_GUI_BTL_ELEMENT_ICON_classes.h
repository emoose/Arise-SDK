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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_ELEMENT_ICON.TO14_BPI_GUI_BTL_ELEMENT_ICON_C
// 0x0008 (0x0228 - 0x0220)
class UTO14_BPI_GUI_BTL_ELEMENT_ICON_C : public UBtlIconWidget
{
public:
	class UImage*                                      ElementIcon;                                              // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_ELEMENT_ICON.TO14_BPI_GUI_BTL_ELEMENT_ICON_C");
		return ptr;
	}


	void SetEelementIcon(EBtlElementType Element);
	class UImage* GetTargetImage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
