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

// BlueprintGeneratedClass BP_MapLinkBase.BP_MapLinkBase_C
// 0x0351 (0x06F1 - 0x03A0)
class ABP_MapLinkBase_C : public AMapLink
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               PreOverlap;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Icon;                                                     // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_QuestComponent_C*                        BP_QuestComponent;                                        // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Interaction;                                              // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProceduralMeshComponent*                    PreLoadLineMesh;                                          // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAreaPriorityComponent*                      AreaPriority;                                             // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DebugAreaPrimitive;                                       // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               MapLinkCollison;                                          // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UBP_GSC_Field_Interface_C>  FieldSceneController;                                     // 0x0400(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreload;                                                 // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnload;                                                  // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0412(0x0002) MISSED OFFSET
	struct FVector                                     PlayerLocation;                                           // 0x0414(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerForwardLocation;                                    // 0x0420(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LinkAreaSize;                                             // 0x042C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FVector>                             PreloadAreaVers;                                          // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        PreloadAreaIds;                                           // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PreloadAreaFanDiv;                                        // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    DoMapJump;                                                // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bDoingMapJump;                                            // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	class UBP_DebugWindow_C*                           MyDebugWindow;                                            // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPDebWid_InstLog_C*                         LogWindow;                                                // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DPKey_MapLinkInfo;                                        // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinalizing;                                              // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinalizeCompleted;                                       // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0492(0x0006) MISSED OFFSET
	class UMapLinkDatabase*                            RefMapLinkDatabase;                                       // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMapLinkData                                MapLinkData;                                              // 0x04A0(0x00E8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ENM_MapLinkBehavior>                   LinkBehavior;                                             // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	TArray<struct FScenarioConditionNamed>             ScenarioConditions;                                       // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bValidScenario;                                           // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x05A1(0x0003) MISSED OFFSET
	float                                              LoadDelayDefalut;                                         // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoadDelay;                                                // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DispNameDistanceH;                                        // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DispNameDistanceV;                                        // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestinationSetuped;                                      // 0x05B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInteraction;                                          // 0x05B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x05B6(0x0002) MISSED OFFSET
	class ABP_MapLinkInteraction_C*                    InteractionActor;                                         // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreAngle;                                             // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	class UClass*                                      InteractionIcon;                                          // 0x05C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionIconOffset;                                    // 0x05D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	class UClass*                                      InteractionActorClass;                                    // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowNextMapName;                                         // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x05E9(0x0003) MISSED OFFSET
	float                                              ShowNextMapDistance;                                      // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HideNextMapDistance;                                      // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextMapDisplayTime;                                       // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NextMapDisplayCounter;                                    // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class UMapLocatorDatabase*                         MapLocatorDatabase;                                       // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MapNameShowCheckDistanceFront;                            // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MapNameShowCheckDistanceSide;                             // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAriseActInfoStringID                       InteractionActInfo;                                       // 0x0610(0x0010) (Edit, BlueprintVisible)
	class UClass*                                      InteractionPreScript;                                     // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     InteractionPreScriptUseString;                            // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FAriseActInfoStringID                       UnavailableInteractionActInfo;                            // 0x0638(0x0010) (Edit, BlueprintVisible)
	struct FString                                     UnavailableMessageId;                                     // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DispNextMapOffsetZ;                                       // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x065C(0x0004) MISSED OFFSET
	class AAriseGameProcess*                           ScriptProcess;                                            // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    RunPreMapJumpScript;                                      // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      LocalGameProcessClass;                                    // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAriseGameProcess*                           GameProcess;                                              // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunningScript;                                           // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScriptResultYes;                                         // 0x0689(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x068A(0x0006) MISSED OFFSET
	class UAriseGameProcessComponent*                  RunProceesComp;                                           // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bMapJumpConfirm;                                          // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMapJumpCanceld;                                          // 0x0699(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x6];                                       // 0x069A(0x0006) MISSED OFFSET
	struct FScenarioConditionNamed                     ScriptRunCondition;                                       // 0x06A0(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      UnavailableInteractionIcon;                               // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    RunPreMapJumpEvent;                                       // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bRunningPreMapJumpEvent;                                  // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreMapJumpEventResult;                                   // 0x06D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsedPreMapJumpEvent;                                     // 0x06DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x06DB(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHotLink;                                                 // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMakedHotlink;                                            // 0x06E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x06E2(0x0002) MISSED OFFSET
	float                                              OverlapOffset;                                            // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLinkCollisionIn;                                         // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x06E9(0x0003) MISSED OFFSET
	float                                              EncountLockDistance;                                      // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bManualCollisionOffset;                                   // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapLinkBase.BP_MapLinkBase_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void SetNearMapLink(bool bEnable);
	void MapUnload();
	void _GetAreaNameEX(struct FString* AreaName);
	void _FinishPreMapJumpEvent();
	void _CancelPreMapJumpEvent();
	void _RunPreJumpEvent();
	void _UpdateInteractionIcon(bool* bValid);
	void _UpdateInteractionActInfo(bool* bValid);
	void _IsMapChangeCanceld(bool* bCanceled);
	void _LoadScript();
	void _RunPreJumpScript(bool* bRunScript);
	void _CrossDirCheck(bool bValid, bool bNeedCheck, const struct FVector& Vec1, const struct FVector& Vec2, bool* CrossDirOrValid);
	void _OpendMap_(const struct FString& MapName, bool* bOpen);
	void _GetForwardLocation(struct FVector* Location);
	void _IsScriptEnd_(bool* bEndOrNothing);
	void _RunSubScript(class UClass* ScriptClass, const struct FString& ScriptArgs);
	float GetIconAngle();
	struct FString GetIconImageDataName();
	struct FVector GetIconLocation();
	void ShowNextMapName();
	void IsCollisionActive(bool* bActive);
	void NextMapNameDispManagement(float Tick);
	void SetMapLinkCollisionEnable(bool bEnable);
	void DispDestinationName();
	void LoadDelayTimerManagement(float Tick);
	void OnChangeScenarioCondition();
	void CheckDoMapChange();
	void DebugInfoManagement();
	void GetLinkedLocatorName(struct FString* LocatorName);
	void GetMaplinkData();
	void GetAreaName(struct FString* AreaName);
	void GetLinkedMapName(struct FString* MapName);
	struct FString RefreshText();
	void Finalizing();
	void Finalize();
	void InFanCharacter(class ACharacter* Charcter, const struct FVector& FanCenter, float FanRadius, float FanAngle, const struct FVector& FanVector, bool* bin);
	void DebugDrawFanLine(const struct FVector& Center, float Radius, float Angle, const struct FLinearColor& Color, int Divs, struct FVector* OuterPos);
	void DrawDebugInfo();
	void CollisionDebug(bool bDrawDebugInfo);
	void GetPlayerPosition();
	void MapUnloadDistance();
	void MapPreload();
	void GetFieldSceneController();
	void IsCollisionPlaneVsLine(const struct FVector& PlaneNormal, const struct FVector& PlanePoint, const struct FVector& pointA, const struct FVector& pointB, bool* bCollid, struct FVector* IntersectionPoint, bool* bPlusDir);
	void UserConstructionScript();
	void OnMapChange(const struct FString& NewMapName, const struct FString& OldMapName);
	void ReceiveBeginPlay();
	void BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnScenarioCounter(int counter, int Prev);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnChangeScenarioFlag(int Flag, bool bValid);
	void OnDoMapJump(class UClass* PreMapJumpScript, const struct FString& ScriptArgs);
	void OnRunPreMapJumpScript();
	void BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PreOverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PreOverlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_MapLinkBase(int EntryPoint);
	void RunPreMapJumpEvent__DelegateSignature();
	void RunPreMapJumpScript__DelegateSignature();
	void DoMapJump__DelegateSignature(class UClass* PreMapJumpScript, const struct FString& ScriptArgs);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
