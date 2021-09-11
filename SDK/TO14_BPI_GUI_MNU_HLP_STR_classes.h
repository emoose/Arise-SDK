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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_HLP_STR.TO14_BPI_GUI_MNU_HLP_STR_C
// 0x0062 (0x02B2 - 0x0250)
class UTO14_BPI_GUI_MNU_HLP_STR_C : public UClickableWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            ANM;                                                      // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAriseClickableArea*                         ClickableArea;                                            // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Select;                                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAriseTextWidget*                            Text;                                                     // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FString                                     Label;                                                    // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       Button;                                                   // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnable;                                                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    GetPadProcess;                                            // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UUserWidget*                                 Parent;                                                   // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bPressed;                                                 // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsToggle;                                                // 0x02B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_HLP_STR.TO14_BPI_GUI_MNU_HLP_STR_C");
		return ptr;
	}


	void Initialize();
	void SetLabel(const struct FString& Label);
	bool OnDeselected();
	bool OnSelected();
	void Activate(bool sw);
	void BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature();
	void OnShow();
	void OnHide();
	void OnActivate(bool sw);
	void SetParent(class UUserWidget* Parent);
	void BndEvt__ClickableArea_K2Node_ComponentBoundEvent_40_OnClickableAreaHoverEvent__DelegateSignature();
	void BndEvt__ClickableArea_K2Node_ComponentBoundEvent_33_OnMouseClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_HLP_STR(int EntryPoint);
	void GetPadProcess__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
