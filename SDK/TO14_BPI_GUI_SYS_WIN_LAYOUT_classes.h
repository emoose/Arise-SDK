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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C
// 0x009A (0x02A2 - 0x0208)
class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UTO14_BPI_GUI_SYS_WIN_INFO_C*                INFO_GALD;                                                // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_SYS_WIN_INFO_C*                INFO_RP;                                                  // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_SYS_WIN_ITM_C*                 ITEM_EXP;                                                 // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_53;                                              // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_SYS_WIN_00_C*                  WIN;                                                      // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AMenuPadProcess*                             PadProcess;                                               // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableCancel;                                            // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsOpen;                                                  // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0242(0x0002) MISSED OFFSET
	int                                                ReturnValue;                                              // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnOpened;                                                // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHoldMouse;                                              // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x024A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnOpenEvent;                                              // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCloseEvent;                                             // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EAriseUIOrder                                      Z_Order;                                                  // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	int                                                Z_Order_Offset;                                           // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAbort;                                                  // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsForceDecide;                                            // 0x0279(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableDecideSE;                                          // 0x027A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x027B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnOpenStartEvent;                                         // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FName>                               ButtonNames_MenuSystemWindow;                             // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDecided;                                                 // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanceled;                                                // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C");
		return ptr;
	}


	void CloseImmidiate();
	void SetEnableDecideSE(bool bEnable);
	void SetArtsMulti(TArray<struct FName>* ArtsLabels);
	void RemoveItems();
	void ForceDecide();
	void Abort();
	void SetItemStructMulti(TArray<struct FSysWinItemData>* ItemDataArray);
	void SetRisePoint(int Value);
	void SetGald(int Value);
	void OnOpened();
	void CloseRisePoint();
	void CloseGald();
	void OpenRisePoint();
	void OpenGald();
	void OnClosed();
	void Decide(int UniqueId);
	void GetLastResult(int* Result);
	void IsClose(bool* NewParam);
	void Close();
	void UpdatePad();
	void PadTerm();
	void PadInit();
	void Open();
	void HideTitle();
	void HideText();
	void HideRisePoint();
	void HideGald();
	void RemoveSelection();
	void HideItem();
	void HideEnemy();
	void AddRisePoint(int AddRP);
	void AddGald(int AddGald);
	void SetSelection(int DefaultIndex, bool EnableCancel, int NumberPerPage, TArray<struct FModifiedText>* SelectList);
	void SetText(const struct FModifiedText& Text);
	void SetItem(const struct FString& ItemID, int Num);
	void SetEnemy(const struct FString& QuestID);
	void SetTitle(const struct FModifiedText& Title);
	void HideAll();
	void Construct();
	void UpdateTick(float TickData);
	void SetupDelegate();
	void CloseFinished();
	void EventCancel();
	void ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT(int EntryPoint);
	void OnOpenStartEvent__DelegateSignature();
	void OnCloseEvent__DelegateSignature();
	void OnOpenEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
