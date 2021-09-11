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

// BlueprintGeneratedClass BP_ShortChatManager.BP_ShortChatManager_C
// 0x0025 (0x053D - 0x0518)
class ABP_ShortChatManager_C : public APFShortChatManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (Transient, DuplicateTransient)
	class UBPAC_SCH_UI_C*                              BPAC_SCH_UI;                                              // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_AriseGamemode_C*                         GameMode;                                                 // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFastTravel;                                              // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWaitOwl;                                                 // 0x0539(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCancelMapChangeSC;                                       // 0x053A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLockMapChangeSC;                                         // 0x053B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLockObjSC;                                               // 0x053C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShortChatManager.BP_ShortChatManager_C");
		return ptr;
	}


	bool IsLockObjSC();
	void MapChangeSC(const struct FString& InNewMapName, const struct FString& InOldMapName);
	void OnChangeStateImpl(EAriseGameState State, bool NewState);
	void ResetFlag();
	void ForcePauseCancel();
	bool IsStandbyState();
	void SCPause(bool InPause, EArisePFSCPauseState InState);
	struct FString GetCurrentLocation();
	void UserConstructionScript();
	void InitCallback();
	void OnMapChangeEnd(const struct FString& NewMapName, const struct FString& OldMapName);
	void OnChangeStateBP(EAriseGameState ChangedState, bool NewState);
	void OnRequestAutoSave();
	void OnAutoSaveComplite();
	void OnEndBattleScene(const struct FBtlResultInfo& ResultInfo);
	void StartShortChat(const struct FString& FaceIcon, const struct FString& Speaker, const struct FText& Text);
	void EndShortChat(bool bAbort);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ResumeShortChat();
	void PauseShortChat();
	void OnReadyEvent();
	void OnInitEvent();
	void ResumeShortChatUI();
	void ExecutePause(EArisePFSCPauseState State);
	void ExecuteReleasePause(EArisePFSCPauseState State);
	void LockMapChangeSC();
	void ExecuteUbergraph_BP_ShortChatManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
