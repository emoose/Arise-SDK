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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP_BG.TO14_BPI_GUI_MNU_TOP_BG_C
// 0x001B (0x0240 - 0x0225)
class UTO14_BPI_GUI_MNU_TOP_BG_C : public UTO14_BP_MenuBGBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            AnimTest;                                                 // 0x0230(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      BACK;                                                     // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP_BG.TO14_BPI_GUI_MNU_TOP_BG_C");
		return ptr;
	}


	void PlayOutAnimation();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void PlayInAnimation();
	void EventInitialize();
	void Construct();
	void CustomEvent_1();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_BG(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
