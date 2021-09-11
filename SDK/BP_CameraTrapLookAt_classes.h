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

// BlueprintGeneratedClass BP_CameraTrapLookAt.BP_CameraTrapLookAt_C
// 0x0149 (0x0471 - 0x0328)
class ABP_CameraTrapLookAt_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBP_QuestComponent_C*                        QuestComponent;                                           // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEventComponent*                             EventComponent;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAreaPriorityComponent*                      AreaPriority;                                             // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Collision;                                                // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TrapSize;                                                 // 0x0360(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class ABP_PFPlayerCharacter_C*                     OverlappedCharacter;                                      // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScenarioConditionNamed                     Condition;                                                // 0x0378(0x0020) (Edit, BlueprintVisible)
	class ATargetPoint*                                LookAtPoint;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<EPFPlayerCameraLookAtActionMode>       ActionMode;                                               // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class ATargetPoint*                                AutoMovePoint;                                            // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                Preset;                                                   // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              keepTime;                                                 // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	struct FString                                     OnceFlag;                                                 // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScenarioCondition                          ConditionCache;                                           // 0x03D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                OnceFlagCache;                                            // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LimitAngle;                                               // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ShortChatID;                                              // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bPlayLockOnShortChat;                                     // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayEvent;                                               // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayQuest;                                               // 0x040A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bQuestStartWithFade;                                      // 0x040B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	struct FString                                     CampMapName;                                              // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CampLocatorName;                                          // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CampActorID;                                              // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LongchatName;                                             // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NextScenarioChapter;                                      // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NextScenarioSection;                                      // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExEndTime;                                                // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExEndAngleX;                                              // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExEndAngleZ;                                              // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class ABP_PF_EventProcess_CameraLookAt_C*          RunningProcess;                                           // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitUnlockPlayerFree;                                     // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraTrapLookAt.BP_CameraTrapLookAt_C");
		return ptr;
	}


	void EndOverlapCheck();
	void CanPlayEvents(bool* bPlayEvent, bool* bPlayQuest, bool* bPlayCamp, bool* bPlayLongChat);
	bool IsScenarioSatisfyCondition();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_CameraTrapLookAt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
