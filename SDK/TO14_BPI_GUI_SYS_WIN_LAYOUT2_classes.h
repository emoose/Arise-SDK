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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C
// 0x0070 (0x0278 - 0x0208)
class UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class USafeZone*                                   SafeZone_53;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_SYS_WIN_00_C*                  WIN;                                                      // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AMenuPadProcess*                             PadProcess;                                               // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableCancel;                                            // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsOpen;                                                  // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x022A(0x0002) MISSED OFFSET
	int                                                ReturnValue;                                              // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnOpened;                                                // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHoldMouse;                                              // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0232(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnOpenEvent;                                              // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCloseEvent;                                             // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EAriseUIOrder                                      Z_Order;                                                  // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	int                                                Z_Order_Offset;                                           // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAbort;                                                  // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsForceDecide;                                            // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0262(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnOpenStartEvent;                                         // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C");
		return ptr;
	}


	void ForceDecide();
	void Abort();
	void OnOpened();
	void OnClosed();
	void Decide(int UniqueId);
	void GetLastResult(int* Result);
	void IsClose(bool* NewParam);
	void Close();
	void UpdatePad();
	void PadTerm();
	void PadInit(int InputLayer);
	void Open(int InputLayer);
	void HideTitle();
	void HideText();
	void RemoveSelection();
	void SetSelection(int DefaultIndex, bool EnableCancel, int NumberPerPage, TArray<struct FModifiedText>* SelectList);
	void SetText(const struct FModifiedText& Text);
	void SetTitle(const struct FModifiedText& Title);
	void HideAll();
	void Construct();
	void UpdateTick(float TickData);
	void SetupDelegate();
	void ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT2(int EntryPoint);
	void OnOpenStartEvent__DelegateSignature();
	void OnCloseEvent__DelegateSignature();
	void OnOpenEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
