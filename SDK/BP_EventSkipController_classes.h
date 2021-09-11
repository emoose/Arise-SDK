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

// BlueprintGeneratedClass BP_EventSkipController.BP_EventSkipController_C
// 0x002D (0x0355 - 0x0328)
class ABP_EventSkipController_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AAriseGameMode*                              AriseGameMode;                                            // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SkipUIShowDelay;                                          // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class UTO14_BPI_GUI_SYS_EVENT_C*                   UMG_EventSkip;                                            // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bOldPause;                                                // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCurPause;                                                // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInputDisable;                                            // 0x0352(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCurPauseState;                                           // 0x0353(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOldPauseState;                                           // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventSkipController.BP_EventSkipController_C");
		return ptr;
	}


	void IF_EventSkipMangement(float Tick, bool* DoEventSkip);
	void IF_PauseManagement(bool* OnPause, bool* OffPause, bool* Skipped);
	void SetInputEnable(bool NewEnable);
	void Finalize();
	void _DisplayEndSkipGuide();
	void EventSkipManagement(float Tick, bool* bDoEventSkip);
	void _GetInputPause(bool* bPressed);
	void PauseManagement(bool* bOnPause, bool* bOffPause, bool* bSkiped);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void IF_DisplayEndSkipGuide();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_EventSkipController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
