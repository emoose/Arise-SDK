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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C
// 0x0199 (0x03A1 - 0x0208)
class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            NormalSizeAnime;                                          // 0x0210(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            KeyboardSizeAnime;                                        // 0x0218(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      BACK;                                                     // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                            DynamicEntryBox_1;                                        // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAriseListBox*                               List;                                                     // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C*> BatleList;                                                // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UListBoxHelper*                              BoxHelper;                                                // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMenuPadProcess*                             PadProsess;                                               // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                MouseEnterRequest;                                        // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MouseSelectRequest;                                       // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OldSelectedIndex;                                         // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChengState;                                             // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      OldPadKeyID;                                              // 0x0265(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0266(0x0002) MISSED OFFSET
	int                                                ChengListIndex;                                           // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventChangeKey;                                           // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C*> FieldList;                                                // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsKeyboard;                                               // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      InputCategory;                                            // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0292(0x0006) MISSED OFFSET
	TArray<unsigned char>                              SearchKeyIdList_Map;                                      // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              SearchKeyIdList_Battle;                                   // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<EKeyboardKeyId>                             SearchKeyIdList;                                          // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventInputDialogOpen;                                     // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventInputDialogClose;                                    // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<EKeyboardChengState>                   KeyboardChengState;                                       // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      AfterKeyboardID;                                          // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReset;                                                  // 0x02EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x02EB(0x0005) MISSED OFFSET
	class AInputExtPlayerController*                   InputExtPlayerControll;                                   // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, int>                            TempSavedKeyID;                                           // 0x02F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                KeyboardTypeChengeState;                                  // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMouseSelect;                                            // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	TMap<struct FName, int>                            TempSavedMouseID;                                         // 0x0350(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsChanged;                                                // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C");
		return ptr;
	}


	void EventChangeCheck();
	void SetInputKeyHelp();
	void RefreshKeyID(class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C* InObject);
	void SetInputDialog(class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C* InObject);
	void GetSelectInputID(class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C* InObject, unsigned char* OutInputSelectID);
	void GetAssingMouseID(TMap<struct FName, int> InAssingMouseList, const struct FName& InName, int* OutMouseID);
	void CB_OnHoveredKeyEvent(int InUniqueID);
	void CB_OnClickedKeyEvent(int InUniqueID);
	void CB_OnHoveredMouseEvent(int InUniqueID);
	void CB_OnClickedMouseEvent(int InUniqueID);
	void Update_ChengeTypeState();
	void RefreshTempSavedKeyID();
	void SetTempSavedKeyID();
	void GetInputExtPlayerControll(class AInputExtPlayerController** OutControll);
	void GetDefoltKeyID(const struct FName& InButtonName, bool* OutResult, unsigned char* OutKeyID);
	void ChengeSelectKeyID();
	void GetText(const struct FString& InStringID, struct FModifiedText* OutText);
	void ChengSelectKeyCheck();
	void Update_ChangeState();
	void KeyboardChange();
	void GetPadInputList(EInputCategory InCategory, TArray<struct FName>* OutName, TMap<struct FName, int>* OutAssingList);
	void StopChangeAnima(bool InIsAll);
	void IsListShowe(int InListIndex, bool* OutIsListShowe);
	void ResetIcon(bool InIsAnima, TArray<class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C*>* InWidgetLists);
	void KeyReset();
	void ShowClickable();
	void CB_MouseCursorEnter(int InCount);
	void CB_MouseSelect(int InIndex);
	void CB_MouseEnter(int InIndex);
	void SetFieldButtonList();
	void RefreshButton();
	void ChengkeyID();
	void ChengSelectKeyImage(unsigned char InPadKeyID, int InSelectIndex);
	void SelectChengKeyPad();
	void PadChange();
	void UpDownCursorMove();
	void GetWidgetList(int InIndex, bool* OutIsResult, class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C** OutWidget);
	void SetBtlButtonList();
	void SetList(EInputCategory InInputCategory);
	void Initialize(bool InIsKeyboard);
	void CreateList(EInputCategory InInPutCategore);
	void PadControl(class AMenuPadProcess* InPadProsess);
	void Construct();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST(int EntryPoint);
	void EventInputDialogClose__DelegateSignature();
	void EventInputDialogOpen__DelegateSignature(const struct FModifiedText& InChengeTitle, const struct FModifiedText& InButtunIMessage_Text, const struct FModifiedText& InButtunID_Text, const struct FModifiedText& InChengeMessage);
	void EventChangeKey__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
