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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C
// 0x0038 (0x0288 - 0x0250)
class UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C : public UClickableWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)
	class UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_C*        Left;                                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_ITM_LIST_000_STR_C*        Right;                                                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnMouseOver;                                              // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseClick;                                             // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP.TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP_C");
		return ptr;
	}


	void CursorVisible(int Index, bool Visible);
	void SetItemData(int Index, const struct FMenuItemData& ItemData, bool ForceNewIcon, bool NumInvisible);
	void CursorSelect(int Index, bool IsSelect);
	void MakeData(struct FListWidgetInitData* InitData);
	void DataConstruct();
	void CB_MouseMove(int UniqueId);
	void CB_MouseEnter(int UniqueId);
	bool OnDeselected();
	void ItemDataChange(const struct FListWidgetInitData& WidgetInitData);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_LIST_000_STR_GROUP(int EntryPoint);
	void OnMouseClick__DelegateSignature(int UniqueId);
	void OnMouseOver__DelegateSignature(int UniqueId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
