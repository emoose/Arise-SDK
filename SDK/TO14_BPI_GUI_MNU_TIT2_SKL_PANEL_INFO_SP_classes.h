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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_SP.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_SP_C
// 0x0080 (0x0288 - 0x0208)
class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_SP_C : public UUserWidget
{
public:
	class UCanvasPanel*                                Root;                                                     // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAriseTextWidget*                            RP_TEXT;                                                  // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    ActivateDelegate;                                         // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DecideDelegate;                                           // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SelectDelegate;                                           // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DeselectDelegate;                                         // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CompletedDelegate;                                        // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EnabledDelegate;                                          // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChangedVisibleDelegate;                                   // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_SP.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_SP_C");
		return ptr;
	}


	void Restruct(int SP, class UMaterial* FontMaterial);
	void ChangedVisibleDelegate__DelegateSignature(class UWidget* Widget);
	void EnabledDelegate__DelegateSignature();
	void CompletedDelegate__DelegateSignature();
	void DeselectDelegate__DelegateSignature(int AliasID, int Index);
	void SelectDelegate__DelegateSignature(int AliasID, int Index);
	void DecideDelegate__DelegateSignature(const struct FString& Result, int AliasID, int Index);
	void ActivateDelegate__DelegateSignature(bool sw);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
