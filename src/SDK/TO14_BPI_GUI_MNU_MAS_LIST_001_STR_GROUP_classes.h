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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C
// 0x0048 (0x0298 - 0x0250)
class UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C : public UClickableWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)
	class UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C*        Left;                                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C*        Right;                                                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C*> WidgetList;                                               // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    SelectLineDelegate;                                       // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DeselectLineDelegate;                                     // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP.TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP_C");
		return ptr;
	}


	void Init();
	bool OnDeselected();
	bool OnSelected();
	void GetWidget(int Index, class UTO14_BPI_GUI_MNU_MAS_LIST_001_STR_C** Widget);
	void SetUniqueID(int Index, int ID);
	void SetItemVisible(int Index, bool Visible);
	void SetArtsLabel(int Index, const struct FName& Label, int CharacterID, bool BattleMode);
	void Construct();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_001_STR_GROUP(int EntryPoint);
	void DeselectLineDelegate__DelegateSignature(int Line);
	void SelectLineDelegate__DelegateSignature(int Line);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
