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

// WidgetBlueprintGeneratedClass IconLayer_FocusIcon.IconLayer_FocusIcon_C
// 0x0130 (0x0338 - 0x0208)
class UIconLayer_FocusIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                LayerCanvas;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UUMG_LocamapFocusIcon_C*>             IconImages;                                               // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EIconDataUsage                                     Usage;                                                    // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UIconLayerData_C*                            LayerCommonData;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IconCulling;                                              // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	int                                                MaxIconNum;                                               // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     actorId;                                                  // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UUMG_LayerIconBase_C*, EMapIconType>    IconMap;                                                  // 0x0250(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EMapIconType, struct FST_LocamapFocusLayoutDatas> IconLayoutMap;                                            // 0x02A0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    DecideMapLinkDelegate;                                    // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRefreshedEvent;                                         // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UUMG_LocamapText_C*>                  MapLinkTexts;                                             // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLocatorInfo>                        LocatorInfos;                                             // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPanelWidget*                                MapLinkTextAttachTo;                                      // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconLayer_FocusIcon.IconLayer_FocusIcon_C");
		return ptr;
	}


	void UpdateAsIcon_ForDebug();
	void GetMapLinkAttachTo(class UPanelWidget** MapLinkTextAttachTo);
	void SetMapLinkAttachTo(class UPanelWidget* MapLinkTextAttachTo);
	void RefreshGigant(struct FString* LocationName);
	void RefreshFastTravelPoint(struct FString* LocationName);
	void RefreshMapLink(struct FString* LocationName);
	void RefreshFocusable();
	void GetSpritLocatorName(const struct FString& SourceString, unsigned char Both, EMapIconType Override, struct FString* OutString);
	void UpdateAsText();
	void UpdateAsIcon();
	void CheckContainLocatorInfo(const struct FLocatorInfo& LocatorInfo, bool* Contain);
	void ClearMapLinkText();
	void AddMapLinkText(int Index, const struct FMapLinkInfo& Info, const struct FString& LocationName, bool* Success, class UUMG_LocamapText_C** Text);
	void FindMapLinkLocator(const struct FString& LocatorName, TArray<struct FLocatorInfo>* LocatorInfos, bool* Valid, struct FLocatorInfo* Locator);
	void BindOnRefreshedEvent(const struct FScriptDelegate& OnRefreshed);
	void BindDecideMapLinkDelegate(const struct FScriptDelegate& OnDecideMapLink);
	void GetIconsFromTypes(TArray<EMapIconType>* IconTypes, TArray<class UUMG_LayerIconBase_C*>* Icons);
	void CheckIconType(class UUMG_LayerIconBase_C* Icon, EMapIconType* Type);
	void GetIconsFromType(EMapIconType IconType, TArray<class UUMG_LayerIconBase_C*>* Icons);
	void Refresh(const struct FString& LocationName);
	void Update();
	void EventUpdate();
	void EventInitialize(class UIconLayerData_C* LayerData);
	void OnDiscoverOwl(const struct FString& InActorID);
	void OnDiscoverBreak(const struct FString& actorId);
	void OnDiscoverSearchPoint(const struct FString& actorId);
	void OnDiscoverTreasure(const struct FString& actorId);
	void OnDiscoverGimmick(const struct FString& actorId);
	void CustomEvent_1(const struct FString& actorId);
	void Construct();
	void ExecuteUbergraph_IconLayer_FocusIcon(int EntryPoint);
	void OnRefreshedEvent__DelegateSignature();
	void DecideMapLinkDelegate__DelegateSignature(const struct FString& NextLocationName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
