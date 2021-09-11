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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C
// 0x00D5 (0x02DD - 0x0208)
class UTO14_BPI_GUI_MNU_TOP3_TMP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UTO14_BPI_GUI_MNU_TOP3_CMD_C*                Cmd;                                                      // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_TOP_GALD_C*                Gald;                                                     // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                Size;                                                     // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_TOP2_STA_C*                Status;                                                   // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_TOP_TP_C*                  TP;                                                       // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               HealListOpen;                                             // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x023A(0x0006) MISSED OFFSET
	TMap<EArisePartyID, int>                           PreviewHealHPMap;                                         // 0x0240(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bOpen;                                                    // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClosedEvent;                                            // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bEnableFor;                                               // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableSta;                                               // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x02AA(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChangeMenuForEvent;                                     // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeMenuStaEvent;                                     // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AMenuPadProcess*                             PadProcess;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                RequestMovePFFlag;                                        // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableRequestMovePFFlag;                                 // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C");
		return ptr;
	}


	void InitEnableRequestMovePFFlag(bool* Success);
	void IsHealListOpen(bool* IsHealListOpen);
	void BindChangeMenuStaEvent(const struct FScriptDelegate& Event);
	void BindChangeMenuForEvent(const struct FScriptDelegate& Event);
	void CheckInputOpenSta(class AMenuPadProcess* PadData, bool* Input);
	void CheckInputOpenFor(class AMenuPadProcess* PadData, bool* Input);
	void InitEnableSta(bool* Success);
	void InitEnableFor(bool* Success);
	void BindClosedEvent(const struct FScriptDelegate& Event);
	void BindDecideEvent(const struct FScriptDelegate& Event);
	void PlayAnimClose();
	void PlayAnimOpen();
	void UpdateHelpText(bool IsHeal);
	void HealSelectWork(class AMenuPadProcess* PadProcess);
	void IconPadWork(class AMenuPadProcess* PadProcess, bool* IsSelect);
	void Terminate();
	void Execute(class AMenuPadProcess* PadProcess, bool* InHeal);
	void Initialize();
	void OnRequestMovePFFlag(int Move);
	void OnClosedFromCmd();
	void OnViewOpen();
	void OnInit();
	void OnHealIconClick(int Num);
	void OnPreviewFromTP(TMap<EArisePartyID, int> HealHPMap, int UseTP);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_TMP(int EntryPoint);
	void OnChangeMenuStaEvent__DelegateSignature();
	void OnChangeMenuForEvent__DelegateSignature();
	void OnClosedEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
