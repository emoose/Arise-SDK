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

// WidgetBlueprintGeneratedClass DUMG_TextWidget.DUMG_TextWidget_C
// 0x0068 (0x0270 - 0x0208)
class UDUMG_TextWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_53;                                             // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Text;                                                     // 0x0220(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 TextColor;                                                // 0x0238(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                BgColor;                                                  // 0x0260(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DUMG_TextWidget.DUMG_TextWidget_C");
		return ptr;
	}


	struct FLinearColor GetBgColorAndOpacity();
	struct FSlateColor GetTextColorAndOpacity();
	struct FText GetText();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetText(const struct FText& NewText);
	void SetTextColor(const struct FSlateColor& NewColor);
	void SetBgColor(const struct FLinearColor& NewColor);
	void ExecuteUbergraph_DUMG_TextWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
