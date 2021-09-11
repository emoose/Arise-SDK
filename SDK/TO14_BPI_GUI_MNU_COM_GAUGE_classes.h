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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C
// 0x0042 (0x024A - 0x0208)
class UTO14_BPI_GUI_MNU_COM_GAUGE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Base;                                                     // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UProgressBar*                                ProgressBar_1;                                            // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              NowParam;                                                 // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxParam;                                                 // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAnimation;                                              // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	float                                              ColorLine;                                                // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sabun;                                                    // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimePlayWait;                                            // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                AnimeColor;                                               // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlus;                                                   // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ConstructFlag;                                            // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_COM_GAUGE.TO14_BPI_GUI_MNU_COM_GAUGE_C");
		return ptr;
	}


	void Reset();
	void SetPreview(int ChangeNum, const struct FLinearColor& Color);
	void AnimationWork(float AddTime);
	void SetStatusAnimation(int ChangeNum, const struct FLinearColor& Color, float WaitTime, float AnimeTime);
	void SetBarStatus(int Now, int Max);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void DataConstruct();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_COM_GAUGE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
