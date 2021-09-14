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

// WidgetBlueprintGeneratedClass BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C
// 0x0030 (0x0270 - 0x0240)
class UBPI_BTL_LAYOUT_STRIKE_ROOT_C : public UBtlCommonViewBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UTO14_BPI_GUI_BTL_STRIKE_BTN_ROOT_C*         STRIKE;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C*> MainPartyViewList;                                        // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<class UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C*> SubPartyViewList;                                         // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C");
		return ptr;
	}


	void EventOnClose();
	void UnBindEvent();
	void BindEvent();
	void OnPreOpen();
	void OnChangePreset(const struct FName& Preset);
	void ExecuteUbergraph_BPI_BTL_LAYOUT_STRIKE_ROOT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
