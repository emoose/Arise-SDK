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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C
// 0x013B (0x0343 - 0x0208)
class UTO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C : public UUserWidget
{
public:
	class UDynamicEntryBox*                            DynamicEntryBox_1;                                        // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAriseListBox*                               List;                                                     // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      WIN;                                                      // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UListBoxHelper*                              BoxHelper;                                                // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MouseEnterRequest;                                        // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MouseSelectRequest;                                       // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FConfigData>                         ConfigDataList;                                           // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                OldSelectedIndex;                                         // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class AMenuPadProcess*                             PadProsess;                                               // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    UpdateInformation;                                        // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsChangedAny;                                             // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChangeItem;                                               // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<EConfigKey, int>                              AfterSaveData;                                            // 0x0278(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    DialogOpen;                                               // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsListCreate;                                             // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	struct FString                                     State;                                                    // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EConfigKey, int>                              BeforeSaveData;                                           // 0x02F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSave;                                                   // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDialogState>                          DialogState;                                              // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChangedMenuTextureQuarity;                              // 0x0342(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST.TO14_BPI_GUI_MNU_CNF_GRAPHIC_LIST_C");
		return ptr;
	}


	void UpdateMenuTextureQuarityDialog();
	void ChangeScreenModeWindow();
	void ApplySaveData(TMap<EConfigKey, int> SaveData, bool IsSaveSetting);
	void GetCustomResolution(struct FIntPoint* Resolution);
	void UpdateScreen();
	void EventChangeCheck();
	void StopChangeAnima(bool InIsAll);
	void ScreenCheck();
	void SetDialog(const struct FString& InDialogType, const struct FString& InMessage, const struct FString& InSelection0, const struct FString& InSelection1);
	void UpdateSaveConfigDialog(bool* OutIsEnd);
	void UpdateGameSaveData();
	void SetCursorTop();
	void ScenChangeCheck(const struct FName& InTitleLavel, TEnumAsByte<EConfigState>* OutState);
	void IsListShowe(int InListIndex, bool* OutIsListShowe);
	void SetDefaultValue();
	void GetText(const struct FString& InStringID, struct FModifiedText* OutText);
	void CB_MouseChangeCliked(ESetting InSetting);
	void OnInfomation();
	void CB_MouseCursorEnter_R(ESetting InSetting);
	void CB_MouseCursorEnter_L(ESetting InSetting);
	void UpDownCursorMove();
	void GetWidgetList(int InIndex, bool* OutIsResult, class UTO14_BPI_GUI_MNU_CNF_GROUP_C** OutWidget);
	void PadControl(class AMenuPadProcess* InPadProsess, bool* OutIsEnd);
	void CreateListWidget();
	void DataConstruct(TArray<struct FConfigData>* InConfigDatas);
	void CB_MouseSelect(int InIndex);
	void CB_MouseEnter(int InIndex);
	void Initialize();
	void DialogOpen__DelegateSignature();
	void ChangeItem__DelegateSignature(bool InIsChanged);
	void UpdateInformation__DelegateSignature(const struct FConfigData& InConfigDatat, int InCursorIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
