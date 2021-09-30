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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C
// 0x0290 (0x0498 - 0x0208)
class UTO14_BPI_GUI_MNU_MAP2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            ANM_CLOSE;                                                // 0x0210(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            ANM_OPEN;                                                 // 0x0218(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                CanvasPanel_1;                                            // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                            DYNAMIC_MAPLIST;                                          // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_MNU_MAP2_FOG1_C*                   FOG1;                                                     // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C*       LOCAMAP;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                Root;                                                     // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bFinish;                                                  // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FMapLocationData                            BaseLocation;                                             // 0x0250(0x00E8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMapLocationData                            ViewLocation;                                             // 0x0338(0x00E8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TScriptInterface<class UTO14_BPI_MenuFunction_C>   CurrentSubMenu;                                           // 0x0420(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	struct FString                                     RegionName;                                               // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnRefreshRegionEvent;                                     // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRefreshLocationEvent;                                   // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRefreshQuestEvent;                                      // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C*       MAPLIST;                                                  // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // 0x0480(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPrimary;                                                 // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0482(0x0006) MISSED OFFSET
	struct FString                                     NextMenuID;                                               // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C");
		return ptr;
	}


	void ForceFinalize(bool* IsSuccess);
	void Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess);
	void Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess);
	void ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish);
	void Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish);
	void GetNextScene(struct FString* NextSceneID, bool* SelfRemain);
	void Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue);
	void UnbindToMapListEvent(bool* Success);
	void BindToMapListEvent(bool* Success);
	void UnbindToLocaMapEvent(bool* Success);
	void BindToLocaMapEvent(bool* Success);
	void CheckPrimary();
	void RefreshQuest();
	void RefreshLocation(const struct FMapLocationData& Location);
	void RefreshRegion(const struct FString& RegionName);
	void InitLocationData();
	void InitMapList(bool* bSuccess);
	void InitLocaMap(bool* bSuccess);
	void ChangeSubMenu(TScriptInterface<class UTO14_BPI_MenuFunction_C>* NextSubMenu);
	void InitSequence(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* bSuccess);
	void Close(bool* Success);
	void Open(bool* Success);
	void CustomEvent_OnBackChangeArea(const struct FMapLocationData& Location);
	void CustomEvent_OnChangeToMapList();
	void CustomEvent_OnInitializedLocaMap();
	void CustomEvent_OnGotoQuest_Locamap(const struct FString& QuestID);
	void CustomEvent_OnBack_Locamap();
	void CustomEvent_OnBackToMapList();
	void CustomEvent_OnBackToBase_Locamap();
	void CustomEvent_OnBack_MapList(bool bExit);
	void CustomEvent_OnDecideMapLink_Locamap(const struct FString& Location);
	void CustomEvent_OnChangeArea_MapList(const struct FMapLocationData& Location);
	void CustomEvent_Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData);
	void CustomEvent_OnInitializedMapList();
	void CustomEvent_Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData);
	void CustomEvent_Initialized();
	void OnViewOpen();
	void OnViewClose();
	void OnViewOpenFinished();
	void OnViewCloseFinished();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2(int EntryPoint);
	void OnRefreshQuestEvent__DelegateSignature(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices);
	void OnRefreshLocationEvent__DelegateSignature(const struct FMapLocationData& Location);
	void OnRefreshRegionEvent__DelegateSignature(const struct FString& RegionName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
