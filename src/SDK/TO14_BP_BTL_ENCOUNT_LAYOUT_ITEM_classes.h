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

// WidgetBlueprintGeneratedClass TO14_BP_BTL_ENCOUNT_LAYOUT_ITEM.TO14_BP_BTL_ENCOUNT_LAYOUT_ITEM_C
// 0x0008 (0x0210 - 0x0208)
class UTO14_BP_BTL_ENCOUNT_LAYOUT_ITEM_C : public UUserWidget
{
public:
	class UAriseTextWidget*                            EncountName;                                              // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BP_BTL_ENCOUNT_LAYOUT_ITEM.TO14_BP_BTL_ENCOUNT_LAYOUT_ITEM_C");
		return ptr;
	}


	void SetModifiedText(const struct FModifiedText& iModText);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
