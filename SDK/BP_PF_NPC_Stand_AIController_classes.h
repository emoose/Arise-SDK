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

// BlueprintGeneratedClass BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C
// 0x0073 (0x04AB - 0x0438)
class ABP_PF_NPC_Stand_AIController_C : public ABP_PF_AIController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	bool                                               bOneTopTurn;                                              // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	struct FVector                                     TurnTargetLocation;                                       // 0x0444(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     TurnActionKey;                                            // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	struct FString                                     PlayActionKey;                                            // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	class AActor*                                      LookAtTargetActor;                                        // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLookAtTargetLock;                                        // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EDE_PF_NPC_AIControllerActionType>> ActionCommands;                                           // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                               bActionDefault;                                           // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPartyTopOutsiteTurnDefault;                              // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPartyTopOutsiteLookAtDefault;                            // 0x0492(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0493(0x0001) MISSED OFFSET
	float                                              PartyTopOutsiteDistance;                                  // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PartyTopOutsiteAngle;                                     // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MoveToLocation;                                           // 0x049C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayActionBlend;                                         // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayActionForce;                                         // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPFNpcAnimPlayActionLoop                           PlayActionLoop;                                           // 0x04AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_Stand_AIController.BP_PF_NPC_Stand_AIController_C");
		return ptr;
	}


	void ResetLookAtDefaultOutsite();
	void ResetTurnDefaultOutsite();
	void ResetActionDefault();
	void PlayActionLogic(TEnumAsByte<EDE_PF_NPC_Action> ActionType, const struct FString& ActionKey, bool bActionBlend, bool bActionForce, EPFNpcAnimPlayActionLoop ActionLoop);
	void ActionMoveToDash(const struct FVector& Location);
	void HasAction(bool* Result);
	void Resume();
	void Suspend();
	void PostEventAction(TEnumAsByte<EDE_PF_NPC_AIControllerActionType> Action);
	void ActionMoveToCommand();
	void ActionMoveTo(const struct FVector& Location);
	void IsPartyTopOutsite(bool* bResult);
	void ActionLookAtToDefault();
	void PlayActionToDefault(bool bBlend, bool bForce, EPFNpcAnimPlayActionLoop Loop);
	void ActionTurnToDefault();
	void UpdateAction(bool* bStartLogic);
	void ActionLookAt(class AActor* TargetActor, TEnumAsByte<EDE_PF_NPC_AIController_LookAtType> Type);
	void ActionLookAtCommand();
	void ActionTurnCommand();
	void PlayActionCommand();
	void CharacterUnlock();
	void CharacterLock();
	void IsNeutral(bool* bNeutral);
	void PlayAction(const struct FString& ActionKey, bool bBlend, bool bForce, EPFNpcAnimPlayActionLoop Loop);
	void ActionTurn(const struct FVector& TargetLocation, const struct FString& ActionKey);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnPossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_BP_PF_NPC_Stand_AIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
