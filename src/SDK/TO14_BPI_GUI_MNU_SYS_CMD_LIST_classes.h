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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C
// 0x00D0 (0x02D8 - 0x0208)
class UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UAriseListBox*                               List;                                                     // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UListBoxHelper*                              ListBoxHelper;                                            // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SelectIndex;                                              // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxSelctNum;                                              // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMenuPadProcess*                             PadProcess;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     NextName;                                                 // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsMoveScene;                                             // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	TArray<struct FString>                             MenuIDs;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             VisibleMenuIDs;                                           // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTO14_BPI_GUI_MNU_COL_CMD_C*>         CMDs;                                                     // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CmdClass;                                                 // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FAriseScenarioFlag_DatabaseLabel> MenuHiddenScenarioFlagMap;                                // 0x0280(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       CursorLabel;                                              // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C");
		return ptr;
	}


	void GetDLPListDisplayNewIcon(bool* IsDisplayNewIcon);
	void CheckDisable(const struct FString& MenuID, bool* IsDisabled);
	void IsMoveScene(bool* bIsMoveScene);
	void GetNextName(struct FString* Index);
	void GetSelectedIndex(int* Index);
	void RestructCmds(bool* Success);
	void CreateListBoxHelper(bool* Success);
	void Up(struct FName* NewParam);
	void Down();
	void SetupCMD(class UTO14_BPI_GUI_MNU_COL_CMD_C* TargetCMD, const struct FDictionaryText& InText, bool IsSelect, int UniqueId, const struct FString& MenuID);
	void Init();
	void Decide(int SelectNum);
	void InputPad(class AMenuPadProcess* PadProces);
	void Select(int NewSelectNum);
	void OnViewOpen();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_SYS_CMD_LIST(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
