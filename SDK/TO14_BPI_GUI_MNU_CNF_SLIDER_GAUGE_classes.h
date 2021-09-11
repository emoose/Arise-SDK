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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C
// 0x0028 (0x0230 - 0x0208)
class UTO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UAriseSlider*                                AriseSlider_1;                                            // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAriseTextWidget*                            ValueText;                                                // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              Value;                                                    // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE.TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE_C");
		return ptr;
	}


	void GetSaveValue(int* OutSaveValue);
	void ChengeValue(float InPercent, float* OutValue);
	void ChengeGaugePercent(float InValue, float* OutPercent);
	void SetUpdate(int InValue);
	void AddGaugePercent(float InPercent, bool* OutIsResult);
	void MouseCaptureEnd();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_SLIDER_GAUGE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
