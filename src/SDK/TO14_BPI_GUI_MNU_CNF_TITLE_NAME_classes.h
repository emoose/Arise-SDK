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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_CNF_TITLE_NAME.TO14_BPI_GUI_MNU_CNF_TITLE_NAME_C
// 0x0008 (0x0210 - 0x0208)
class UTO14_BPI_GUI_MNU_CNF_TITLE_NAME_C : public UUserWidget
{
public:
	class UAriseTextWidget*                            Title_Name;                                               // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_CNF_TITLE_NAME.TO14_BPI_GUI_MNU_CNF_TITLE_NAME_C");
		return ptr;
	}


	void SetText(const struct FName& InTextLabel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
