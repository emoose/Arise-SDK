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

// BlueprintGeneratedClass BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C
// 0x0050 (0x0390 - 0x0340)
class ABP_PlatformUserManagerEvent_C : public AArisePlatformUserManagerEvent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AMenuPadProcess*>                     MenuPadProcessArray;                                      // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                ReconnectControllerId;                                    // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayTime;                                                // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOpenLogout;                                              // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOpenReconnect;                                           // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x036A(0x0002) MISSED OFFSET
	int                                                TestCount;                                                // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnReconnectController;                                   // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnLogoutMessaging;                                       // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	int                                                OnLogoutMessagingWait;                                    // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<EAriseGameState>                            UserEventDisableGameState;                                // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AMenuPadProcess*                             SysWindowPadProcessUnder;                                 // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlatformUserManagerEvent.BP_PlatformUserManagerEvent_C");
		return ptr;
	}


	void RemoveSysWindowPadProcessUnderLayer();
	void CreateSysWindowPadProcessUnderLayer();
	void CanUserEvent(bool* ok);
	void CallSystemPause(bool bPause);
	void GotoTitle();
	void CheckReconnectPad(int* ControllerId);
	void CheckPad(TArray<class AMenuPadProcess*>* MenuPadProcessArray, class AMenuPadProcess** MenuPadProcess);
	void OpenLogout();
	void OpenReconnectController();
	void UserConstructionScript();
	void EventReconnectController();
	void EventLogoutMessaging();
	void OnLogoutMessaging();
	void OnReconnectController();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PlatformUserManagerEvent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
