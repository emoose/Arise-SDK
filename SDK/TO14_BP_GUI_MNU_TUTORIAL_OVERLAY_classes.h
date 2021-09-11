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

// WidgetBlueprintGeneratedClass TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C
// 0x007B (0x02A0 - 0x0225)
class UTO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C : public UTO14_BP_MenuTutorialBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                Root;                                                     // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                ROOT_TUT;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_COL_HLP_TUT_C*             HelpWindow;                                               // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Delay;                                                    // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FString                                     HelpLabel;                                                // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Mode;                                                     // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsClosed;                                                // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
	TArray<struct FString>                             HelpLabelList;                                            // 0x0278(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                Index;                                                    // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	TArray<struct FString>                             InputhelpLabel;                                           // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BP_GUI_MNU_TUTORIAL_OVERLAY.TO14_BP_GUI_MNU_TUTORIAL_OVERLAY_C");
		return ptr;
	}


	void IsClosed(bool* IsClosed);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OpenFirst(const struct FString& TutorialLabel);
	void OpenMulti(TArray<struct FString>* TutorialLabelList);
	void ExecuteUbergraph_TO14_BP_GUI_MNU_TUTORIAL_OVERLAY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
