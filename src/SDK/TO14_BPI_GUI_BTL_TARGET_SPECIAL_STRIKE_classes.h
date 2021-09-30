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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_TARGET_SPECIAL_STRIKE.TO14_BPI_GUI_BTL_TARGET_SPECIAL_STRIKE_C
// 0x0030 (0x0278 - 0x0248)
class UTO14_BPI_GUI_BTL_TARGET_SPECIAL_STRIKE_C : public UBtlStatusViewBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C*       SpecialSmashGauge;                                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UWidgetAnimation*>                    GaugeAnimArray;                                           // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	int                                                GaugeIndex;                                               // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	class UUserWidget*                                 ParentWidget;                                             // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_BTL_TARGET_SPECIAL_STRIKE.TO14_BPI_GUI_BTL_TARGET_SPECIAL_STRIKE_C");
		return ptr;
	}


	void Destruct();
	void Construct();
	void OnStrikeFinish();
	void UnBindEvent();
	void BindEvent();
	void CancelStrike();
	void PlayStrikeClick();
	void StrikeEnd();
	void ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_SPECIAL_STRIKE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
