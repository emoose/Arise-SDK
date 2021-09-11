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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_ICN_RETICLE2.TO14_BPI_GUI_ICN_RETICLE2_C
// 0x0050 (0x0258 - 0x0208)
class UTO14_BPI_GUI_ICN_RETICLE2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            IDLE;                                                     // 0x0210(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      TO14_M_GUI_ICN_RETICLE_IDLE;                              // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      TO14_M_GUI_ICN_RETICLE_ON_HOVER;                          // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              HoverTime;                                                // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	struct FTimerHandle                                HoverAnimTickHandle;                                      // 0x0230(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHover;                                                   // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClick;                                                   // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x023A(0x0006) MISSED OFFSET
	struct FTimerHandle                                UnhoverAnimHandle;                                        // 0x0240(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                HoverAnimHandle;                                          // 0x0248(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HoverAnimSpeed;                                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnoverAnimSpeed;                                          // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_ICN_RETICLE2.TO14_BPI_GUI_ICN_RETICLE2_C");
		return ptr;
	}


	void PlayAnimUnhover();
	void PlayAnimHover();
	void PlayAnimClick();
	void OnAnimClickStart();
	void OnAnimClickFinished();
	void OnAnimHoverStart();
	void OnAnimHoverFinished();
	void Construct();
	void ExecuteUbergraph_TO14_BPI_GUI_ICN_RETICLE2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
