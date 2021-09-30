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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C
// 0x0031 (0x0239 - 0x0208)
class UTO14_BPI_GUI_MNU_FIS_LIST_BOX_C : public UUserWidget
{
public:
	class UTO14_BPI_GUI_MNU_FIS_LIST_C*                TO14_BPI_GUI_MNU_FIS_LIST;                                // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_FIS_SET_STR_C*             TO14_BPI_GUI_MNU_FIS_SET_STR;                             // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRodData>                            RodMaster;                                                // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLureData>                           LureMaster;                                               // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSelectRod;                                              // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_FIS_LIST_BOX.TO14_BPI_GUI_MNU_FIS_LIST_BOX_C");
		return ptr;
	}


	void GetSelectLureData(struct FLureData* LureData);
	void GetSelectRodData(struct FRodData* RodData);
	void Input(class AMenuPadProcess* PadProcess);
	void SetLureList();
	void SetRodList();
	void Init();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
