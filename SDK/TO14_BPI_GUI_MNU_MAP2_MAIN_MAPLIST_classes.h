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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C
// 0x00F8 (0x0300 - 0x0208)
class UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            ANM_CLOSE;                                                // 0x0210(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            ANM_OPEN;                                                 // 0x0218(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C*     AREA_LIST;                                                // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                FOG_ROOT_2;                                               // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_MAP2_IMG_LOCA_C*           LOCA_IMAGE;                                               // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C* LOCA_LIST;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_MAP2_TAB_REGION_C*         REGION_TAB;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnViewOpenEvent;                                          // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewCloseEvent;                                         // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bInitialized;                                             // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInitializedEvent;                                       // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewOpenFinishedEvent;                                  // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewCloseFinishedEvent;                                 // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bInputEnable;                                             // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinish;                                                  // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02A2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBackEvent;                                              // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRefreshRegionEvent;                                     // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRefreshLocationEvent;                                   // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeAreaEvent;                                        // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRefreshQuestEvent;                                      // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_Cache_C*    LocaCache;                                                // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C");
		return ptr;
	}


	void ForceFinalize(bool* IsSuccess);
	void Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess);
	void Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess);
	void ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish);
	void Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish);
	void GetNextScene(struct FString* NextSceneID, bool* SelfRemain);
	void Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue);
	void Term();
	void BindRefreshRegionEvent(const struct FScriptDelegate& Event);
	void FogAttach(class UWidget* FOG1);
	void RefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices);
	void BindChnageAreaEvent(const struct FScriptDelegate& OnChangeArea);
	void ChangeArea(const struct FMapLocationData& Location, bool* Success);
	void InitLocaList();
	void InitAreaList();
	void ExecLocaList(class AMenuPadProcess* PadData);
	void ExecAreaList(class AMenuPadProcess* PadData);
	void RefreshLocation(const struct FMapLocationData& Location);
	void RefreshRegion(const struct FString& RegionName);
	void InitRegionTab();
	void ExecRegionTab(class AMenuPadProcess* PadData);
	void BindBackEvent(const struct FScriptDelegate& OnBack);
	void RunBack(bool Exit, bool* Success);
	void CheckBack(class AMenuPadProcess* PadData, bool* Input, bool* IsExit);
	void ExecPad(class AMenuPadProcess* PadData);
	void Close();
	void Open();
	void InitEvent(bool* bSuccess);
	void BindInitializedEvent(const struct FScriptDelegate& OnInitialized);
	void IsInitialized(bool* Initialized);
	void CustomEvent_OnDecide_LocaList(const struct FMapLocationData& Location, bool bHasHierarchy);
	void CustomEvent_OnDecide_AreaList(const struct FMapLocationData& Location, bool bHasHierarchy);
	void CustomEvent_OnSelect_AreaList(const struct FMapLocationData& Location, bool bHasHierarchy);
	void CustomEvent_OnRefreshRegion(const struct FString& RegionName);
	void CustomEvent_OnRefreshLocation(const struct FMapLocationData& Location);
	void CustomEvent_OnRefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices);
	void CustomEvent_OnBack(bool Exit);
	void CustomEvent_OnChangedSelect_RegionTab(const struct FString& RegionName);
	void CustomEvent_Exec(float Time, class AMenuPadProcess* PadData);
	void CustomEvent_Init();
	void CustomEvent_OnInitialized();
	void OnViewOpen();
	void OnViewClose();
	void OnViewOpenFinished();
	void OnViewCloseFinished();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void Destruct();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST(int EntryPoint);
	void OnRefreshQuestEvent__DelegateSignature(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices);
	void OnChangeAreaEvent__DelegateSignature(const struct FMapLocationData& Location);
	void OnRefreshLocationEvent__DelegateSignature(const struct FMapLocationData& Location);
	void OnRefreshRegionEvent__DelegateSignature(const struct FString& RegionName);
	void OnBackEvent__DelegateSignature(bool Exit);
	void OnViewCloseFinishedEvent__DelegateSignature();
	void OnViewOpenFinishedEvent__DelegateSignature();
	void OnInitializedEvent__DelegateSignature();
	void OnViewCloseEvent__DelegateSignature();
	void OnViewOpenEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
