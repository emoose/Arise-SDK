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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_FOR2_CHANGE.TO14_BPI_GUI_MNU_FOR2_CHANGE_C
// 0x0018 (0x0220 - 0x0208)
class UTO14_BPI_GUI_MNU_FOR2_CHANGE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Change;                                                   // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMaterialInstance*                           Material;                                                 // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_FOR2_CHANGE.TO14_BPI_GUI_MNU_FOR2_CHANGE_C");
		return ptr;
	}


	void ChengeMaterial(EFBtlChangeOrderType InOrderType);
	void Construct();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_FOR2_CHANGE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
