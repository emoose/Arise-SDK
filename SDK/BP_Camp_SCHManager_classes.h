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

// BlueprintGeneratedClass BP_Camp_SCHManager.BP_Camp_SCHManager_C
// 0x0030 (0x03B0 - 0x0380)
class ABP_Camp_SCHManager_C : public APFCampShortChatManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	class UBPAC_SCH_CAMP_UI_C*                         BPAC_SCH_CAMP_UI;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               SCPlayed;                                                 // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	TArray<class UWidget*>                             PauseWidgets;                                             // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Camp_SCHManager.BP_Camp_SCHManager_C");
		return ptr;
	}


	void SCPause(bool InPause, EArisePFSCPauseState InState);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void StartShortChat(const struct FString& FaceIcon, const struct FString& Speaker, const struct FText& Text);
	void EndShortChat(bool bAbort);
	void ResumeShortChat();
	void PauseShortChat();
	void ExecutePause(EArisePFSCPauseState State);
	void ExecuteReleasePause(EArisePFSCPauseState State);
	void ExecuteUbergraph_BP_Camp_SCHManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
