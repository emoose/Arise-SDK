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

// BlueprintGeneratedClass BP_PF_GimmickBase.BP_PF_GimmickBase_C
// 0x00A0 (0x04A1 - 0x0401)
class ABP_PF_GimmickBase_C : public ABP_PF_MAPOBJ_BaseObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	TArray<struct FScenarioFlagNamed>                  ChangeFlags;                                              // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ABP_AriseGamemode_C*                         GameMode;                                                 // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      InteractActor;                                            // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	struct FRotator                                    SavedPCRotation;                                          // 0x0434(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SavedCameraTransform;                                     // 0x0440(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FMapGimmickQuest>                    QuestFlag;                                                // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScenarioConditionNamed                     QuestContinueCondition;                                   // 0x0480(0x0020) (Edit, BlueprintVisible)
	bool                                               bQuestContinuePostFadeOut;                                // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_GimmickBase.BP_PF_GimmickBase_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void SetVisible(bool bVisible);
	void SetCollision(bool bEnable);
	void SetTick(bool bEnable);
	void IsQuestContinue(bool* bContinue);
	void UpdateQuest();
	void IsSleeping(bool* bIsSleeping);
	void GetInteractActor(class AActor** InteractActor);
	void SetInteractActor(class AActor* Actor);
	void GetDefaultPlayer(class ACharacter** DefaultPlayer);
	void ResetPlayerRotate();
	void ResetPlayerCamera();
	void ResetDefaultPlayer();
	void GetPartyOrder(class UArisePartyOrder** PartyOrder);
	void ShowPlayer(bool Visible);
	void GetFieldController(class UBP_GSC_Field_C** FieldController);
	void ApplyChangeFlags();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void On_Receive_Field_Action(class AActor* InSener);
	void On_Receive_Interact(class AActor* InSender);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void On_Receive_Command(const struct FString& Command);
	void SleepInGame();
	void WakeupInGame();
	void OnFoundTrapIn();
	void ExecuteUbergraph_BP_PF_GimmickBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
