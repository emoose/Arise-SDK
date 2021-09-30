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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER.TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C
// 0x0010 (0x0218 - 0x0208)
class UTO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C : public UUserWidget
{
public:
	class UImage*                                      Icon;                                                     // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C*      PanelStr;                                                 // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER.TO14_BPI_GUI_MNU_TIT2_SKL_CHECKER_C");
		return ptr;
	}


	void Clear(bool* bChanged);
	void Refresh(bool* bChanged);
	void BindPanelStr(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C* PanelStr);
	void Restruct(bool* Success);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
