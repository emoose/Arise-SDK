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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C
// 0x0030 (0x0280 - 0x0250)
class UTO14_BPI_GUI_MNU_AFT_CMD_GROUP_C : public UClickableWidgetBase
{
public:
	class UTO14_BPI_GUI_MNU_AFT_CMD_C*                 Left;                                                     // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_AFT_CMD_C*                 Right;                                                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnMouseOver;                                              // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseClick;                                             // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_AFT_CMD_GROUP.TO14_BPI_GUI_MNU_AFT_CMD_GROUP_C");
		return ptr;
	}


	void SwitchItem(bool IsLeft, bool IsActive);
	void SelectItem(bool IsLeft, bool Active);
	void CB_MouseClick(int UniqueId);
	void CB_MouseMove(int UniqueId);
	void SetItemData(int Index, const struct FString& Left, bool LeftFlag, const struct FString& Right, bool RightFlag);
	bool OnDeselected();
	void OnMouseClick__DelegateSignature(int UniqueId);
	void OnMouseOver__DelegateSignature(int UniwueID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
