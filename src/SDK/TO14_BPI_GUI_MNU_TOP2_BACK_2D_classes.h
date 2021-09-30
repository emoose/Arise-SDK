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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP2_BACK_2D.TO14_BPI_GUI_MNU_TOP2_BACK_2D_C
// 0x0030 (0x0238 - 0x0208)
class UTO14_BPI_GUI_MNU_TOP2_BACK_2D_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                Root;                                                     // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                             PreLoadDatas;                                             // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             PreLoadClass;                                             // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP2_BACK_2D.TO14_BPI_GUI_MNU_TOP2_BACK_2D_C");
		return ptr;
	}


	void RunUnloadPreLoadedClass();
	void RunPreLoadClass();
	void Construct();
	void OnShowTopBG(bool bShow, EMenuTopCharaType ShowCharaType, float BackDarkness);
	void OnCloseStart();
	void Destruct();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_BACK_2D(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
