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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C
// 0x0109 (0x0311 - 0x0208)
class UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            ANM_CLOSE;                                                // 0x0210(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            ANM_OPEN;                                                 // 0x0218(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      GRID;                                                     // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                Root;                                                     // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                ROOT_MOVE;                                                // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                ROOT_SCALE;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUMG_LocationMap2_C*                         UMG_LocationMap;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bInitialize;                                              // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnViewOpenEvent;                                          // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewOpenFinishedEvent;                                  // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewCloseEvent;                                         // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewCloseFinishedEvent;                                 // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              Zoom;                                                     // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomSpeed;                                                // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMapLinkEvent;                                           // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFastTravelEvent;                                        // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGotoQuestEvent;                                         // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              DefaultScale;                                             // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	class UBP_MNU_FREE_CURSOR_Base_C*                  FreeCursor;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FString                                     CurrentLocationName;                                      // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     MapLinkStartLocationName;                                 // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRun3D;                                                   // 0x02F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChangedMapFinishedEvent;                                // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bChangedMapToFastTravel;                                  // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C");
		return ptr;
	}


	void DisableInteractionFocusIcons();
	void EnableInteractionFocusIcon(class UUMG_LocamapFocusIcon_C** FocusIcon);
	void IsFreeCursorAdsorbEnable(bool* bEnable);
	void SetFreeCursorAdsorbEnable(bool bEnable, bool* bSuccess);
	void ResetFreeCursor();
	void FreeCusorSetToFastTravelPoint(bool* bSuccess);
	void FreeCusorSetToPlayer();
	void FindQuestWidgetByID(const struct FString& QuestID, class UWidget** Icons);
	void GetQuestAreaIcons(TArray<class UUMG_LayerIconBase_C*>* Icons);
	void FreeCusorSetToMaplink(const struct FString& Location);
	void FreeCusorSetToQuest(const struct FString& QuestID, bool* bSuccess);
	void BindOnChangedMapFinishedEvent(const struct FScriptDelegate& Event);
	void Terminate();
	void BindFreeCursor(class UBP_MNU_FREE_CURSOR_Base_C* FreeCursor);
	void BindOnGotoQuestEvent(const struct FScriptDelegate& OnQuest);
	void Initialize();
	void BindOnFastTravelEvent(const struct FScriptDelegate& OnFastTravel);
	void BindOnMapLinkEvent(const struct FScriptDelegate& OnMapLink);
	void GetFocusIcons(TArray<class UUMG_LocamapFocusIcon_C*>* FocusIcons);
	void ResetZoom();
	void RunZoom(float Axis, float DeltaTime);
	void CheckZoom(class AMenuPadProcess* PadProcess, bool* Input, float* Axis);
	void ExecPad(float Time, class AMenuPadProcess* PadProcess);
	void Exec(float Time, class AMenuPadProcess* PadProcess);
	void Refresh(const struct FMapLocationData& Location);
	void OnGotoQuest_QuestIcon(const struct FString& QuestID);
	void OnFastTravel_FastTravelIcon(const struct FString& LocationName);
	void OnMapLink_MapLinkIcon(const struct FString& LocationName);
	void OnRefreshed_FucusIconLayer();
	void CustomEvent_Refresh(const struct FMapLocationData& Location);
	void OnResetZoom();
	void OnChangedMap(const struct FString& Location);
	void OnChangedDefaultScale(float Scale);
	void OnViewOpen();
	void OnViewOpenFinished();
	void OnViewClose();
	void OnViewCloseFinished();
	void Construct();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAP_LOCA(int EntryPoint);
	void OnChangedMapFinishedEvent__DelegateSignature();
	void OnGotoQuestEvent__DelegateSignature(const struct FString& QuestID);
	void OnFastTravelEvent__DelegateSignature(const struct FString& LocationName);
	void OnMapLinkEvent__DelegateSignature(const struct FString& LocationName);
	void OnViewCloseFinishedEvent__DelegateSignature();
	void OnViewCloseEvent__DelegateSignature();
	void OnViewOpenFinishedEvent__DelegateSignature();
	void OnViewOpenEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
