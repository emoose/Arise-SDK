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

// BlueprintGeneratedClass BP_LocationMapManager.BP_LocationMapManager_C
// 0x01A0 (0x06F0 - 0x0550)
class ABP_LocationMapManager_C : public ALocationMapManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     MapCenter;                                                // 0x0560(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x056C(0x0004) MISSED OFFSET
	struct FString                                     LocationMapStatus;                                        // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              WorldWidth;                                               // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0584(0x0004) MISSED OFFSET
	struct FString                                     CurrentLocationName;                                      // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_AriseGamemode_C*                         GameMode;                                                 // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventLoadNewLocationMap;                                  // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bShowUI;                                                  // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05B1(0x0007) MISSED OFFSET
	struct FString                                     TestLocatorName;                                          // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventCollectionLocator;                                   // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UQuestDatabase*                              QuestDatabase;                                            // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventPostCollectionLocator;                               // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventUpdateQuestLocator;                                  // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     CurrentLevelName;                                         // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     MenuLocationName;                                         // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventOnMenuLocationChanged;                               // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UUserWidget*                                 TestUI;                                                   // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<EMapIconType, bool>                           MapIconData;                                              // 0x0638(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     OldLocation;                                              // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     MapInPosition;                                            // 0x0698(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    MapInRotation;                                            // 0x06A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerMoved;                                            // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     RecentLocationName;                                       // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventPostLocationChange;                                  // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     MapInLocation;                                            // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LocationMapManager.BP_LocationMapManager_C");
		return ptr;
	}


	void SetPlayerPosition(const struct FTransform& ActorTransform);
	void GetLocationName(const struct FString& LevelName, const struct FString& LocationName, bool* LocationChanged);
	void SetForceAllOpen(const struct FString& UserData, bool sw);
	void IsForceAllOpen(const struct FString& UserData, bool* IsOpened);
	void ShowDummyUI(bool IsShow);
	void GetLocationData(const struct FString& LocationName, struct FMapLocationData* LocationData, bool* found);
	void ShowDebug();
	void LoadDatabase(const struct FString& Key);
	void LoadLocationMap(const struct FString& MapName);
	void UserConstructionScript();
	void OnMapChange(const struct FString& NewMapName, const struct FString& OldMapName);
	void CustomEvent_1(const struct FString& NewLocationName);
	void DoCollectLocators();
	void CustomEvent_3(const struct FString& LocationName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LocationMapManager(int EntryPoint);
	void EventPostLocationChange__DelegateSignature(const struct FString& NewLocationName, const struct FString& OldLocationName);
	void OnPlayerMoved__DelegateSignature();
	void EventOnMenuLocationChanged__DelegateSignature(const struct FString& LocationName);
	void EventUpdateQuestLocator__DelegateSignature();
	void EventPostCollectionLocator__DelegateSignature();
	void EventCollectionLocator__DelegateSignature();
	void EventLoadNewLocationMap__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
