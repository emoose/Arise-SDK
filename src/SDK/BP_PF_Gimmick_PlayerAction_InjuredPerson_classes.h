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

// BlueprintGeneratedClass BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C
// 0x00BE (0x05B8 - 0x04FA)
class ABP_PF_Gimmick_PlayerAction_InjuredPerson_C : public ABP_PF_Gimmick_PlayerAction_Base_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x04FA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               bLock;                                                    // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Overlap;                                                  // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        InteractActor00;                                          // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_PF_Gimmick_InteractActorBase_C*          Interact00;                                               // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0528(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C.NPC
	bool                                               Initialized;                                              // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0551(0x0007) MISSED OFFSET
	class ABP_PF_NpcObject_C*                          NPCObject;                                                // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Interactioned;                                            // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	struct FString                                     ItemLabel;                                                // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemNum;                                                  // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	class ABP_PFG_InfluenceMap_C*                      InfluenceMap;                                             // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      SavedInteractSender;                                      // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScenarioFlagNamed                          PostInteractChangeFlag;                                   // 0x0590(0x0018) (Edit, BlueprintVisible)
	bool                                               PostInteractFadeOutAndCheckCondition;                     // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	struct FRotator                                    SavedNPCRotation;                                         // 0x05AC(0x000C) (Edit, BlueprintVisible, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_Gimmick_PlayerAction_InjuredPerson.BP_PF_Gimmick_PlayerAction_InjuredPerson_C");
		return ptr;
	}


	void CreateInfluenceMap();
	void SetNPCRotation(const struct FRotator& NewRotation);
	void SetNPCRotation_Recovery_();
	void ApplyPostInteractChangeFlag();
	void DestroyInfluenceMap();
	void ChangeActInfo();
	void ChangeOneTop();
	void GetNPCPawn(class APFNpcCharacterBase** Result);
	void AttachNPC();
	void SetNPCInteraction(bool Enable, bool bInjured);
	void GetNPCObject();
	void SetDebugItemPos();
	void UserConstructionScript();
	void WakeupInGame();
	void SleepInGame();
	void On_Receive_Interact(class AActor* InSender);
	void Wakeup();
	void Sleep();
	void OnLockInteraction();
	void OnUnlockInteraction();
	void Play_Gimmick_Event();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnChangedScenarioCondition();
	void InitJustBeforePlaySequencer();
	void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ChangeNPCAction();
	void PostInteraction();
	void Unlocked();
	void RunPostEvent();
	void UnlockProcess();
	void Turn_NPC_To_Player();
	void SpawnInfluenceMap();
	void ExecuteUbergraph_BP_PF_Gimmick_PlayerAction_InjuredPerson(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
