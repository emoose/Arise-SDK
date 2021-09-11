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

// BlueprintGeneratedClass BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C
// 0x0111 (0x0C21 - 0x0B10)
class ABP_AriseGamemodeDevelop_C : public ABP_AriseGamemode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    DoCaptureScene_1;                                         // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DoChangeMapEnvironment_1;                                 // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeWorldTime_1;                                      // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventPostMapChange_1;                                     // 0x0B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventFieldWakeup_1;                                       // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventPreMapChange_1;                                      // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventBattleStart_1;                                       // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventChangeLocation_1;                                    // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventRestartFieldScene_1;                                 // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventOpenFastTravelPoint_1;                               // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ADebugHUD_C*                                 DebugHUD;                                                 // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UUMG_GameDebugHUD_Interface_C> UMGDebugHUD;                                              // 0x0BC0(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UDebMenu_Map_Interface_C>   DebMenuMap;                                               // 0x0BD0(0x0030) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UUMG_DebugMemory_C*                          UMGMemoryHUD;                                             // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               DebugMenu_AssetByIds;                                     // 0x0BE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDebugInputEnable;                                        // 0x0BF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0BF9(0x0007) MISSED OFFSET
	TArray<struct FString>                             DebugMenuTitles;                                          // 0x0C00(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             DebugMenuCommands;                                        // 0x0C10(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bWaitSymbolLoaded;                                        // 0x0C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseGamemodeDevelop.BP_AriseGamemodeDevelop_C");
		return ptr;
	}


	void GetUMGDebugHudInterface(TScriptInterface<class UUMG_GameDebugHUD_Interface_C>* DebugHUD);
	void GetDebugHudInstance(class ADebugHUD_C** DebugHUD);
	void IsWaitSymbolLoaded(const struct FString& UserData, bool* bOut);
	bool IsOpenDebugMenuButtonPressed();
	void IsDebugInputEnable(bool* bOut);
	bool IsDevelopEnabled();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CustomEvent(int Flag, bool bValid);
	void AddLevelDebugMenu(TArray<struct FString>* LevelNames);
	void OnStartSection(unsigned char StartedSection);
	void SetDebugInputEnable(bool bNew);
	void 򹘞򬿾󘍈􉞆�0n0鬴癳();
	void OnToggleDispMapObjInfo();
	void OnToggleDispCameraCollision();
	void OnToggleDispCharacterCollision();
	void OnToggleDispInteractArea();
	void OnChangeDispUELog();
	void OnChangeDispCustomLog();
	void OnToggleDispEncountArea();
	void OnToggleMemoryCulc(const struct FString& UserData);
	void OnDecideWaitSymbolLoaded(const struct FString& UserData);
	void OnSetWaitSymbolLoaded(const struct FString& UserData, bool NewValue);
	void OnMemoryRefresh(const struct FString& UserData);
	void CustomEvent_4(const struct FString& UserData);
	void OnOpenCommandAssetExt(const struct FString& UserData);
	void MakeSendExecuteCommandButton(TArray<struct FString> TitleLists, TArray<struct FString> CommandLists);
	void SendConsoleCommand(const struct FString& UserData);
	void CustomEvent_3(const struct FString& UserData);
	void CustomEvent_2(const struct FString& UserData);
	void On_Toggle_Show_Navigation(const struct FString& UserData);
	void On_Toggle_Show_Collision(const struct FString& UserData);
	void OnToggleMemoryHUD(const struct FString& UserData);
	void OnToggleLoadLog(const struct FString& UserData);
	void OnToggleDebugHUD(const struct FString& UserData);
	void OnGoBackTitle(const struct FString& UserData);
	void OnSetScreenMaskAlpha(const struct FString& UserData, float NewValue);
	void OnBugReport(const struct FString& UserData);
	void OnLevels(const struct FString& UserData);
	void OnFps(const struct FString& UserData);
	void ExecuteUbergraph_BP_AriseGamemodeDevelop(int EntryPoint);
	void EventOpenFastTravelPoint_0__DelegateSignature(const struct FString& LocationName);
	void EventRestartFieldScene_0__DelegateSignature();
	void EventChangeLocation_0__DelegateSignature(const struct FString& NewLocationName);
	void EventBattleStart_0__DelegateSignature();
	void EventPreMapChange_0__DelegateSignature(const struct FString& NewMapName, const struct FString& OldMapName);
	void EventFieldWakeup_0__DelegateSignature(unsigned char PrevScene);
	void EventPostMapChange_0__DelegateSignature(const struct FString& NewMapName, const struct FString& OldMapName);
	void OnChangeWorldTime_0__DelegateSignature(float NewWorldTime);
	void DoChangeMapEnvironment_0__DelegateSignature(const struct FString& EnvName);
	void DoCaptureScene_0__DelegateSignature(const struct FTransform& CaptureTransform, class UCameraComponent* BaseCamera);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
