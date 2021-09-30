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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_ENEMY_BUFF_BAR.TO14_BPI_GUI_BTL_ENEMY_BUFF_BAR_C
// 0x0010 (0x0280 - 0x0270)
class UTO14_BPI_GUI_BTL_ENEMY_BUFF_BAR_C : public UTO14_BPI_GUI_BTL_ABNORMAL_BAR_BASE_C
{
public:
	class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C*           AbnormalIcon0;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C*           AbnormalIcon1;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_ENEMY_BUFF_BAR.TO14_BPI_GUI_BTL_ENEMY_BUFF_BAR_C");
		return ptr;
	}


	void GetAbnormalIconList(TArray<class UTO14_BPI_GUI_BTL_ABNORMAL_ICON_C*>* Array);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
