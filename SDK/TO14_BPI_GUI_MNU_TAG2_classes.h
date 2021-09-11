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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C
// 0x00E0 (0x02E8 - 0x0208)
class UTO14_BPI_GUI_MNU_TAG2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            ANM_CLOSE;                                                // 0x0210(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            ANM_OPEN;                                                 // 0x0218(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_TAG2_ACT_LIST_C*           ACT_LIST;                                                 // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_TAG2_DET_C*                DET;                                                      // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_TAG2_SET_C*                Set;                                                      // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMenuTacticsData>                    TacticsList;                                              // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FinishFlag;                                               // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETO14_BPI_GUI_MNU_TAG2_FLOW>           CurrentFlow;                                              // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETO14_BPI_GUI_MNU_TAG2_FLOW>           NextFlow;                                                 // 0x024A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x024B(0x0001) MISSED OFFSET
	int                                                ActIndex;                                                 // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HCommandIndex;                                            // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InsertOriginalIndex;                                      // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  ActCondLayoutDataTable;                                   // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMenuTacticsData                            StoreTacticsData;                                         // 0x0260(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bFromTop;                                                 // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FMenuTacticsData                            WorkTactics;                                              // 0x0290(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bNameChanged;                                             // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	struct FMenuTacticsData                            DefaultWorkTactics;                                       // 0x02C0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C");
		return ptr;
	}


	void ForceFinalize(bool* IsSuccess);
	void Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess);
	void Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess);
	void ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish);
	void Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish);
	void GetNextScene(struct FString* NextSceneID, bool* SelfRemain);
	void Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue);
	void MakeWorkTacktics(bool* bSuccess);
	void UpdateIsChangePresetWork();
	void Exec_InsertTargetSelectCancel(class AMenuPadProcess* PadProcess);
	void GetActCondLayoutDataTable(const struct FName& RowName, struct FST_TAG2_ACT_COND_LAYOUT* Layout);
	void IsExistImpossibleAct(bool* Result);
	void InitPresetCommand();
	void DebugTacticsDataPrint(const struct FMenuTacticsData& TacticsData);
	void UpdateIsChangePreset();
	void SetTacticsName(int TargetTacticsIndex, const struct FString& TacticsName);
	void Exec_WarningCollisionWindowWait(class AMenuPadProcess* PadProcess);
	void Exec_SaveImpossibleWindowWait(class AMenuPadProcess* PadProcess);
	void Exec_NameChangeWindowWait(class AMenuPadProcess* PadProcess);
	void Exce_CommandDetailSelect(class AMenuPadProcess* PadProcess);
	void Exec_EditCommandWindowWait(class AMenuPadProcess* PadProcess);
	void Exec_InsertTargetSelect(class AMenuPadProcess* PadProcess);
	void ChangeVisilityCommandList(bool Visility);
	void CopyPresetTactics(int TargetTacticsIndex, const struct FString& PresetTacticsLabel);
	void SetDefaultTactics(int Index);
	void Exec_CommandNameSelect(class AMenuPadProcess* PadProcess);
	void Exec_SaveCommandWindowWait(class AMenuPadProcess* PadProcess);
	void Exec_CancelChangeWndowWait(class AMenuPadProcess* PadProcess);
	void Exec_CommandDetailCustomSelect(class AMenuPadProcess* PadProcess);
	void Exec_ActSelect(class AMenuPadProcess* PadProcess);
	void Exec_CopyPresetWindowWait(class AMenuPadProcess* PadProcess);
	void Exec_PresetCommandSelect(class AMenuPadProcess* PadProcess);
	void Exec_CommandSelect(class AMenuPadProcess* PadProcess);
	void InitTacticsData();
	void OnToggleCheckEvent(int ListIndex);
	void OnViewOpen();
	void OnViewClose();
	void Construct();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
