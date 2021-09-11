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

// Class ArisePlayerFree.AnimNotifyState_PFPCMotionBranchLabel
// 0x0058 (0x0088 - 0x0030)
class UAnimNotifyState_PFPCMotionBranchLabel : public UAnimNotifyState
{
public:
	struct FName                                       Label;                                                    // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UPFPCActorComponent*>     ControlledComponents;                                     // 0x0038(0x0050) (ExportObject, BlueprintReadOnly, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.AnimNotifyState_PFPCMotionBranchLabel");
		return ptr;
	}

};


// Class ArisePlayerFree.AnimNotifyState_PFPCTimedWaterParticleEffect
// 0x0088 (0x00B8 - 0x0030)
class UAnimNotifyState_PFPCTimedWaterParticleEffect : public UAnimNotifyState
{
public:
	class UParticleSystem*                             PSTemplate;                                               // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0038(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0044(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	bool                                               bDestroyAtEnd;                                            // 0x0050(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FName                                       ParticleActorParameter;                                   // 0x0058(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TranslucentSortPriority;                                  // 0x0060(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TMap<struct FName, class UParticleSystemComponent*> SpawnParticleComponents;                                  // 0x0068(0x0050) (ExportObject, BlueprintReadOnly, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.AnimNotifyState_PFPCTimedWaterParticleEffect");
		return ptr;
	}

};


// Class ArisePlayerFree.AnimNotify_PFPCPlayWaterParticleEffect
// 0x0040 (0x0078 - 0x0038)
class UAnimNotify_PFPCPlayWaterParticleEffect : public UAnimNotify
{
public:
	class UParticleSystem*                             PSTemplate;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x004C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0058(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      Attached : 1;                                             // 0x0064(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	struct FName                                       ParticleActorParameter;                                   // 0x0068(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TranslucentSortPriority;                                  // 0x0070(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.AnimNotify_PFPCPlayWaterParticleEffect");
		return ptr;
	}

};


// Class ArisePlayerFree.ASTransition_PFPCTransToIdleCommand
// 0x0010 (0x0040 - 0x0030)
class UASTransition_PFPCTransToIdleCommand : public UASTransition_Base
{
public:
	struct FName                                       Command;                                                  // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPFPCTransToIdle>                      TransToIdleType;                                          // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.ASTransition_PFPCTransToIdleCommand");
		return ptr;
	}

};


// Class ArisePlayerFree.PFActionStateBlueprintBase
// 0x0008 (0x0030 - 0x0028)
class UPFActionStateBlueprintBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFActionStateBlueprintBase");
		return ptr;
	}


	struct FPFActionStateTickResult K2_Tick(float DeltaSeconds);
	class UPFActorComponent* K2_GetOwnerComponent();
	class AActor* K2_GetOwnerActor();
	void K2_End(const struct FName& NextState);
	void K2_Begin(const struct FName& PrevState);
};


// Class ArisePlayerFree.PFActionStateID
// 0x0000 (0x0028 - 0x0028)
class UPFActionStateID : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFActionStateID");
		return ptr;
	}


	struct FName STATIC_K2_GetActionStateID_Neutral();
	struct FName STATIC_K2_GetActionStateID_Jump();
	struct FName STATIC_K2_GetActionStateID_Gallop();
	struct FName STATIC_K2_GetActionStateID_Floating();
};


// Class ArisePlayerFree.PFActorComponent
// 0x0358 (0x0450 - 0x00F8)
class UPFActorComponent : public UActorComponent
{
public:
	float                                              WalkSpeed;                                                // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DashSpeed;                                                // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnAngle;                                                // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpCollisionHalfHeight;                                  // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bControlEnable;                                           // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x010D(0x0007) MISSED OFFSET
	bool                                               bForceApplyMovement;                                      // 0x0114(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0115(0x0007) MISSED OFFSET
	bool                                               bInteractSender;                                          // 0x011C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInteractReceiver;                                        // 0x011D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInteractLimit;                                           // 0x011E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPFInteractReceiveFlags                            InteractReceiveType;                                      // 0x011F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPFInteractCategory                                InteractReceiveCategory;                                  // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FName                                       InteractReceiveOverrideActInfoLabel;                      // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       InteractIconSocketName;                                   // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InteractIconHeightOffset;                                 // 0x0138(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     InteractIconOffset;                                       // 0x013C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bInteractIconForceDisplay;                                // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	struct FVector                                     InteractLocationOffset;                                   // 0x014C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bLookAtSymbolSender;                                      // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLookAtSymbolReceiver;                                    // 0x0159(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAreaPriority                                      InteractReceiverAreaPriority;                             // 0x015A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPFActorInteractReceiverShape                      InteractReceiverShape;                                    // 0x015B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InteractReceiverCameraInteractEnable;                     // 0x015C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	float                                              InteractReceiverRange;                                    // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractReceiverAngle;                                    // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractReceiverWidth;                                    // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractReceiverHeight;                                   // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractReceiverDepth;                                    // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractReceiverHeightOffset;                             // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InteractReceiverIgnoreSenderAngle;                        // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	class UClass*                                      InteractCondition;                                        // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InteractReceiverInfoType;                                 // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InteractReceiverEvent;                                    // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPFActorInteractState>                 InteractReceiverState;                                    // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
	TArray<class UPFActorEventMetaData*>               InteractReceiverEventMetaData;                            // 0x01A0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	float                                              InteractSenderAngle;                                      // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtSymbolReceiverRange;                                // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtSymbolReceiverAngle;                                // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	struct FName                                       LookAtSymbolReceiverSocketName;                           // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtSymbolReceiverActorOffset;                          // 0x01C8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LookAtSymbolSenderAngle;                                  // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtSymbolSenderLookAtSpeed;                            // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	class UClass*                                      SymbolInfoType;                                           // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShowSymbolInfoDistance;                                   // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFieldActionReceiver;                                     // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x01ED(0x0003) MISSED OFFSET
	class UShapeComponent*                             FieldActionCollisionComponent;                            // 0x01F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FieldActionReceiverCollisionRadius;                       // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FieldActionReceiverCollisionHeight;                       // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FieldActionReceiverEvent;                                 // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoftClassPath                              InteractReceiverEvent_AsyncLoad;                          // 0x0208(0x0018) (Edit, BlueprintVisible)
	struct FSoftClassPath                              InteractReceiverInfoType_AsyncLoad;                       // 0x0220(0x0018) (Edit, BlueprintVisible)
	struct FSoftClassPath                              SymbolInfoType_AsyncLoad;                                 // 0x0238(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnExecuteInteract;                                        // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnableJumpAnalog;                                        // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	float                                              MaxJumpTime;                                              // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxJumpVelocityZ;                                         // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnalogJumpInterpFunc>                 JumpInterpFunc;                                           // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	float                                              PushRadius;                                               // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PushMass;                                                 // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7C];                                      // 0x027C(0x007C) MISSED OFFSET
	TEnumAsByte<EPFActorMovementState>                 CurrentMovementState;                                     // 0x02F8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData13[0x5F];                                      // 0x02F9(0x005F) MISSED OFFSET
	TArray<class AActor*>                              RunningEventProcess;                                      // 0x0358(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData14[0x20];                                      // 0x0368(0x0020) MISSED OFFSET
	class APFInteractInfo*                             SpawnedInteractInfo;                                      // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      LookAtTarget;                                             // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x20];                                      // 0x0398(0x0020) MISSED OFFSET
	class APFInteractInfo*                             SpawnedSymbolInfo;                                        // 0x03B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	float                                              JumpZVelocity[0x4];                                       // 0x03C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x70];                                      // 0x03D8(0x0070) MISSED OFFSET
	struct FName                                       CurrentActionState;                                       // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFActorComponent");
		return ptr;
	}


	void OnExecuteInteractEvent__DelegateSignature(class AActor* InSender, class AActor* InReceiver);
	void K2_SetUpperBodyBlendEnable(bool bEnable);
	void K2_SetInteractSymbolInformation_AsyncLoad(const struct FSoftClassPath& SymbolInfo);
	void K2_SetInteractReceiverWidth(float InNewValue);
	void K2_SetInteractReceiverShape(EPFActorInteractReceiverShape InNewShape);
	void K2_SetInteractReceiverRange(float InNewValue);
	void K2_SetInteractReceiverInformation_AsyncLoad(const struct FSoftClassPath& ActInfo);
	void K2_SetInteractReceiverHeightOffset(float InNewValue);
	void K2_SetInteractReceiverHeight(float InNewValue);
	void K2_SetInteractReceiverEvent_AsyncLoad(const struct FSoftClassPath& EventProcess);
	void K2_SetInteractReceiverEnable(bool bEnable);
	void K2_SetInteractReceiverDepth(float InNewValue);
	void K2_SetInteractReceiverAngle(float InNewValue);
	void K2_SetInteractLocationOffset(const struct FVector& Offset);
	void K2_SetInteractLimitEnable(bool bEnable);
	void K2_SetInteractIconSocketName(const struct FName& Name);
	void K2_SetInteractIconOffset(const struct FVector& Offset);
	void K2_SetInteractIconForceDisplay(bool bEnable);
	void K2_SetInteractEnable(bool bEnable);
	void K2_SetForceApplyMovementTemp(bool bEnable, TEnumAsByte<EPFTempChangeParameterSource> InSource);
	void K2_SetForceApplyMovement(bool bEnable);
	void K2_SetCurrentMovementState(TEnumAsByte<EPFActorMovementState> InState);
	void K2_SetControlEnableTemp(bool bInEnable, TEnumAsByte<EPFTempChangeParameterSource> InSource);
	void K2_SetControlEnable(bool bEnable);
	void K2_SendAnimNotifyCommnad(const struct FName& InCommand);
	bool K2_IsReceiveAnimNotifyCommnad_CheckOnce(const struct FName& InCommand, bool bInOnce);
	bool K2_IsReceiveAnimNotifyCommnad(const struct FName& InCommand);
	bool K2_IsMove();
	bool K2_IsInputMovement();
	bool K2_IsInputJump();
	bool K2_IsInputCharacterAction();
	bool K2_IsControlEnable();
	float K2_GetUpperBodyBlendWeight();
	float K2_GetTurnBlendSpaceValue();
	float K2_GetMovementBlendSpaceValue();
	struct FVector K2_GetLastMoveVector();
	struct FVector K2_GetInteractLocation();
	struct FVector K2_GetInputMovementVector();
	TEnumAsByte<EPFActorMovementState> K2_GetCurrentMovementState();
	float K2_GetCurrentJumpZVelocity();
	struct FName K2_GetActionStateID();
	class APFEventProcessInteraction* K2_ExecuteInteractEvent(class AActor* Target);
	void K2_EndForceApplyMovementTemp(TEnumAsByte<EPFTempChangeParameterSource> InSource);
	void K2_EndControlDisableTemp(TEnumAsByte<EPFTempChangeParameterSource> InSource);
	float K2_ChangeCollisionHalfHeight(float NewHalfHeight);
	void K2_ChangeActionState(const struct FName& InStateID, bool bRestart);
	bool K2_CanInteract();
	void K2_BeginForceApplyMovementTemp(TEnumAsByte<EPFTempChangeParameterSource> InSource);
	void K2_BeginControlDisableTemp(TEnumAsByte<EPFTempChangeParameterSource> InSource);
	void K2_ApplyInputMovement();
	void K2_ApplyInputJump(float InJumpTime);
	void K2_ApplyInputCamera();
	void K2_AddActionState2(class UObject* InDT);
	void K2_AddActionState(const struct FName& InStateID, class UClass* InStateClass);
	void GoBackTitle();
};


// Class ArisePlayerFree.PFActorEventMetaData
// 0x0000 (0x0028 - 0x0028)
class UPFActorEventMetaData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFActorEventMetaData");
		return ptr;
	}

};


// Class ArisePlayerFree.PFActorEventMetaScript
// 0x0008 (0x0100 - 0x00F8)
class UPFActorEventMetaScript : public UActorComponent
{
public:
	bool                                               bScriptCompleted;                                         // 0x00F8(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFActorEventMetaScript");
		return ptr;
	}


	void ReceiveEndScript();
	void ReceiveBeginScript();
	void OnEndScript();
	void OnBeginScript();
};


// Class ArisePlayerFree.PFActorManager
// 0x0260 (0x0288 - 0x0028)
class UPFActorManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0028(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFActorManager");
		return ptr;
	}

};


// Class ArisePlayerFree.PFAnimInstance
// 0x0030 (0x0590 - 0x0560)
class UPFAnimInstance : public UAriseAnimInstance
{
public:
	struct FName                                       NextActionStateID;                                        // 0x0560(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              NeutralMoveSpeed;                                         // 0x0568(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MovementBlendSpaceValue;                                  // 0x056C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TurnBlendSpaceValue;                                      // 0x0570(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LookAtTarget;                                             // 0x0574(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              LookAtAlpha;                                              // 0x0580(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRestartAnimState;                                        // 0x0584(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	float                                              LookAtInterpolationSpeed;                                 // 0x0588(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x058C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFAnimInstance");
		return ptr;
	}

};


// Class ArisePlayerFree.PFCharacterBase
// 0x0000 (0x08A0 - 0x08A0)
class APFCharacterBase : public AAriseCharacterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFCharacterBase");
		return ptr;
	}


	void K2_SetUseGroudCollision(bool bNewValue);
	void K2_SetGravityPower(float InNewValue, float InBlendTime);
	void K2_SetEnableSimulateUpperParts(bool bNewValue);
	void K2_SetEnableSimulateLowerParts(bool bNewValue);
	void K2_SetEnableSimulateHairParts(bool bNewValue);
	void K2_SetEnableSimulateExtraParts(bool bNewValue);
	void K2_SetDynamicsWeight(float InNewValue, float InBlendTime);
	void K2_SetDampingPower(float InNewValue, float InBlendTime);
	void K2_SetClothBlendWeight(float InNewValue, float InBlendTime);
	void K2_ResetUseGroudCollision();
	void K2_ResetGravityPower(float InBlendTime);
	void K2_ResetEnableSimulateUpperParts();
	void K2_ResetEnableSimulateLowerParts();
	void K2_ResetEnableSimulateHairParts();
	void K2_ResetEnableSimulateExtraParts();
	void K2_ResetDynamicsWeight(float InBlendTime);
	void K2_ResetDampingPower(float InBlendTime);
	void K2_ResetClothBlendWeight(float InBlendTime);
};


// Class ArisePlayerFree.PFCharacterFadeInterface
// 0x0000 (0x0028 - 0x0028)
class UPFCharacterFadeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFCharacterFadeInterface");
		return ptr;
	}


	void FadeOut(float InTime);
	void FadeIn(float InTime);
};


// Class ArisePlayerFree.PFCullingManager
// 0x0070 (0x0098 - 0x0028)
class UPFCullingManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFCullingManager");
		return ptr;
	}

};


// Class ArisePlayerFree.PFEventProcessFieldAction
// 0x0000 (0x0328 - 0x0328)
class APFEventProcessFieldAction : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFEventProcessFieldAction");
		return ptr;
	}


	void K2_Execute(class AActor* Sender, class AActor* Receiver);
};


// Class ArisePlayerFree.PFEventProcessInteraction
// 0x0000 (0x0328 - 0x0328)
class APFEventProcessInteraction : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFEventProcessInteraction");
		return ptr;
	}


	bool K2_IsExecuteEvent();
	void K2_ExecuteGoBackTitleEvent();
	void K2_Execute(class AActor* Sender, class AActor* Receiver);
};


// Class ArisePlayerFree.PFEventProcessSimpleBase
// 0x0000 (0x0328 - 0x0328)
class APFEventProcessSimpleBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFEventProcessSimpleBase");
		return ptr;
	}


	void ReceiveExecuteProcess();
	void K2_Execute();
};


// Class ArisePlayerFree.PFFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPFFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFFunctionLibrary");
		return ptr;
	}


	void STATIC_UpdateInputDevicePressedState(class AActor* Actor, bool bInGamepad, bool bInKeyboard, bool bInMouseButton);
	void STATIC_UnregisterSpawnedActor(class AActor* InActor);
	void STATIC_StoreSpawnedActors();
	void STATIC_SetViewTargetWithBlend(class AActor* ViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
	void STATIC_SetViewTargetFromPlayer(class AActor* Actor);
	void STATIC_SetPlayerActor(class AActor* InActor);
	void STATIC_SetOwlActorsVisibility(bool bNewVisible);
	void STATIC_SetInteractReceiverEnable(class AActor* Actor, bool bEnable);
	void STATIC_SetInteractInfoVisible(class AActor* Actor, bool bVisible);
	void STATIC_SetInteractEnable(class AActor* Actor, bool bEnable);
	void STATIC_SetCullingPause(bool bPause);
	void STATIC_SetControlEnable(class AActor* Actor, bool bEnable);
	void STATIC_SetActorVisibilityAll(bool bVisible);
	void STATIC_SetActorPauseAll(bool bPause);
	void STATIC_SendAnimNotifyCommnad(class AActor* InActor, const struct FName& InCommand);
	void STATIC_RestoreSpawnedActors();
	void STATIC_ResetPlayerCameraAngle(class AActor* Actor);
	void STATIC_RemoveOwlPoint(const struct FString& InPointName);
	void STATIC_RemoveOwlActor(const struct FString& InPointName);
	void STATIC_RemoveGimmickObject(class AActor* InActor, const struct FString& InLabel);
	void STATIC_RemoveActorMap(const struct FString& InName);
	void STATIC_RegisterSpawnedActor(class AActor* InActor);
	bool STATIC_IsToggleInputDash(class AActor* Actor);
	bool STATIC_IsReceiveAnimNotifyCommnad_CheckOnce(class AActor* InActor, const struct FName& InCommand, bool bInOnce);
	bool STATIC_IsReceiveAnimNotifyCommnad(class AActor* InActor, const struct FName& InCommand);
	bool STATIC_IsInteractReceiverEnable(class AActor* Actor);
	bool STATIC_IsInteractForbade(class AActor* Actor);
	bool STATIC_IsInputMovementForward(class AActor* Actor);
	bool STATIC_IsInputMovementBackward(class AActor* Actor);
	bool STATIC_IsInputInteraction_Hold(class AActor* Actor);
	bool STATIC_IsInputDash(class AActor* Actor);
	bool STATIC_IsControlEnable(class AActor* Actor);
	void STATIC_InputToggleWalk(class AActor* Actor);
	void STATIC_InputToggleDash(class AActor* Actor);
	void STATIC_InputResetPlayerCameraAngle(class AActor* Actor);
	void STATIC_InputMovement(class AActor* Actor, const struct FVector& WorldDirection);
	void STATIC_InputJump(class AActor* Actor, bool bTrigger);
	void STATIC_InputInteraction(class AActor* Actor, bool bTrigger);
	void STATIC_InputGallop(class AActor* Actor);
	void STATIC_InputDash(class AActor* Actor);
	void STATIC_InputCharacterAction(class AActor* Actor);
	void STATIC_InputChangeCameraDistance(class AActor* Actor);
	void STATIC_InputCameraRotation(class AActor* Actor, const struct FRotator& InputRotation);
	int STATIC_GetSplineNumberOfSplinePointAtInputKey(class USplineComponent* Target, float InputKey);
	float STATIC_GetSplineDistanceAlongSplineAtInputKey(class USplineComponent* Target, float InputKey);
	class APFPlayerCamera* STATIC_GetPlayerViewCamera(class AActor* Actor);
	class AActor* STATIC_GetPlayerActor();
	class UPFActorComponent* STATIC_GetPFActorComponent(class AActor* Actor);
	class UObject* STATIC_GetGimmickObject(class AActor* InActor, const struct FString& InLabel);
	class AActor* STATIC_FindOwlPoint(const struct FString& InPointName);
	class AActor* STATIC_FindActorMap(const struct FString& InName);
	void STATIC_ChangeActionState(class AActor* Actor, const struct FName& InActionName, bool bRestart);
	void STATIC_AddOwlPoint(const struct FString& InPointName, class AActor* InPointActor);
	void STATIC_AddOwlActor(const struct FString& InPointName, class AActor* InActor);
	void STATIC_AddGimmickObject(class AActor* InActor, const struct FString& InLabel, class UObject* InObject);
	void STATIC_AddFieldActionCollisionCylinder(class AActor* InOwner, const struct FVector& InCylinderCenter, float InCylinderRadius, float InCylinderHeight);
	void STATIC_AddFieldActionCollisionBox(class AActor* InOwner, const struct FVector& InBoxCenter, float InBoxYaw, const struct FVector& InBoxSize);
	void STATIC_AddActorMap(const struct FString& InName, class AActor* InActor);
};


// Class ArisePlayerFree.MapGimmickInterface
// 0x0000 (0x0028 - 0x0028)
class UMapGimmickInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.MapGimmickInterface");
		return ptr;
	}


	void SetVisible(bool bVisible);
	void SetTick(bool bEnable);
	void SetCollision(bool bEnable);
};


// Class ArisePlayerFree.PFGimmickManager
// 0x0060 (0x0388 - 0x0328)
class APFGimmickManager : public AActor
{
public:
	TArray<class AActor*>                              Gimmicks;                                                 // 0x0328(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TMap<struct FString, struct FPFGimmickLevelLoadInfo> Infos;                                                    // 0x0338(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFGimmickManager");
		return ptr;
	}


	void UnregisterAll();
	void Unregister(class AActor* Actor);
	void SetVisible(bool bVisible);
	void SetTick(bool bEnable);
	void SetCollision(bool bEnable);
	void RegisterMapOrderInfo(const struct FString& actorId, const struct FString& InCurrentMapName, const struct FString& InLoadMapName);
	void Register(class AActor* Actor);
	void GetExcludeLoadMapLevelNames(const struct FString& actorId, TArray<struct FName>* Result);
	void GetExcludeCurrentMapLevelNames(const struct FString& actorId, TArray<struct FName>* Result);
	void ClearLevelStreamInfo();
	void BPE_UnloadLevel(const struct FString& actorId);
};


// Class ArisePlayerFree.PFInputProcessBase
// 0x0000 (0x0338 - 0x0338)
class APFInputProcessBase : public AInputExtInputProcessBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFInputProcessBase");
		return ptr;
	}

};


// Class ArisePlayerFree.PFInteractCondition
// 0x0008 (0x0030 - 0x0028)
class UPFInteractCondition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFInteractCondition");
		return ptr;
	}

};


// Class ArisePlayerFree.PFInteractCondition_BlueprintBase
// 0x0000 (0x0030 - 0x0030)
class UPFInteractCondition_BlueprintBase : public UPFInteractCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFInteractCondition_BlueprintBase");
		return ptr;
	}


	bool K2_CanEnter(class AActor* InReceiveActor);
};


// Class ArisePlayerFree.PFInteractInfo
// 0x0020 (0x0348 - 0x0328)
class APFInteractInfo : public AActor
{
public:
	float                                              IconHeightOffset;                                         // 0x0328(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     IconOffset;                                               // 0x032C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       IconSocketName;                                           // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       TargetActor;                                              // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFInteractInfo");
		return ptr;
	}


	void K2_ShowInformation();
	void K2_ShowActInformation();
	void K2_SetActInformationLabel(const struct FName& Label);
	void K2_HideInformationForce();
	void K2_HideInformation();
	void K2_HideActInformation();
	class UPFActorComponent* K2_GetTargetComponent();
	class AActor* K2_GetTargetActor();
	class UPFActorComponent* K2_GetOwnerComponent();
	class AActor* K2_GetOwnerActor();
};


// Class ArisePlayerFree.PFLookAtComponent
// 0x0020 (0x02A8 - 0x0288)
class UPFLookAtComponent : public UAriseCharacterLookAtComponent
{
public:
	bool                                               bEnableUnlookTargetFromCache;                             // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0289(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFLookAtComponent");
		return ptr;
	}


	void ResetImmediateLookAt();
};


// Class ArisePlayerFree.PFOwlPointInterface
// 0x0000 (0x0028 - 0x0028)
class UPFOwlPointInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFOwlPointInterface");
		return ptr;
	}


	class AActor* GetSpawnedActor();
	struct FVector GetPointLocation();
	float GetCameraInteractDistance();
	void DiscoverOwlPoint();
};


// Class ArisePlayerFree.PFOwlSearcher
// 0x00B8 (0x03E0 - 0x0328)
class APFOwlSearcher : public AActor
{
public:
	float                                              SearchRadiusLong;                                         // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchRadiusShort;                                        // 0x032C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchHeight;                                             // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchAngle;                                              // 0x0334(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffsetFromPC[0x8];                                // 0x0338(0x000C) (Edit, IsPlainOldData)
	float                                              CurrentNearestDistance;                                   // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class UAchCharacterBoneMeshComponent*              BoneMeshComponent;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAriseCharacterBuildComponent*               CharacterBuildComponent;                                  // 0x03A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPFOwlSearchState                                  CurrentSearchState;                                       // 0x03B0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x03B1(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFOwlSearcher");
		return ptr;
	}


	void StartRotationAroundPlayer(float Duration);
	void OnBuild();
	EPFOwlSearchState K2_GetCurrentSearchState();
	bool IsExistOwlPoint();
	bool IsCameraLookAtOwl();
	void EndMapChangeAnimation();
	void ChangeSearchState(EPFOwlSearchState InPrevState, EPFOwlSearchState InNextState);
	void ChangeAvailable(bool bInAvailable);
	void BeginMapChangeAnimation();
};


// Class ArisePlayerFree.PFPCActionControlTrap
// 0x0018 (0x0340 - 0x0328)
class APFPCActionControlTrap : public AActor
{
public:
	class UBoxComponent*                               BoxComponent;                                             // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TrapSize;                                                 // 0x0330(0x000C) (Edit, IsPlainOldData)
	bool                                               bCanJump;                                                 // 0x033C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanDash;                                                 // 0x033D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x033E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFPCActionControlTrap");
		return ptr;
	}

};


// Class ArisePlayerFree.PFPCActorComponent
// 0x0440 (0x0890 - 0x0450)
class UPFPCActorComponent : public UPFActorComponent
{
public:
	struct FIntPoint                                   CameraInteractViewRectSize;                               // 0x0450(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CameraInteractAngle;                                      // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractInterpMoveDistance;                               // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractInterpMoveAngle;                                  // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractInterpMoveTime;                                   // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayInputJudgmentTime;                                   // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSwimMotionBS;                                            // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	float                                              SwimSlowSpeed;                                            // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwimEarlySpeed;                                           // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterDepthWalk;                                           // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightOfWaterFromFeetOnSwimming;                          // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Buoyancy;                                                 // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetTime;                                                  // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SwimStartControlWhenAscending;                            // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	float                                              UTurnInputAngle;                                          // 0x048C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UTurnRotationSpeed;                                       // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RestoreRotationSpeedTime;                                 // 0x0498(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SwimRotationSpeed;                                        // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetKeepTime;                                              // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetToDryTime;                                             // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetKeepHeightRatio;                                       // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetSpecularOffDepthRate;                                  // 0x04AC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              WetSpecularSwitchTime;                                    // 0x04B0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              WetEffectPlayBorder[0x3];                                 // 0x04B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PlayingWetEffect[0x3];                                    // 0x04C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            WaitDestroyWetEffect;                                     // 0x04D8(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UParticleSystemComponent*                    WeterRipplePSC;                                           // 0x04E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              LandingRunFailedHeight;                                   // 0x04F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LandingHighHeight;                                        // 0x04F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LandingDamageHeight;                                      // 0x04F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleFreeTimeFix;                                          // 0x04FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleFreeTimeRandom;                                       // 0x0500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleFreeColdTime;                                         // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IdleTransitionableFootHeightDifference;                   // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NotWalkableTimeFromIK;                                    // 0x050C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LockMoveBrakeMotionTime;                                  // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WalkRunInputThreshold;                                    // 0x0514(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StopInputThreshold;                                       // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RunActionTime;                                            // 0x051C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BurnArmTime;                                              // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BurnArmRateMax;                                           // 0x0524(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WallHitNotifyDistance;                                    // 0x0528(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WallHitNotifyPitchAngle;                                  // 0x052C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WallHitNotifyYawAngle;                                    // 0x0530(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BsInverpTime_MovementRatio;                               // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BsInterpTime_BodyTiltRatio;                               // 0x0538(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BsStart_BodyTiltRatio;                                    // 0x053C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BodyTilt_WaitRotationTime;                                // 0x0540(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaterTraceOffset;                                         // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              WaterTraceObjects;                                        // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UDataTable*                                  PhysicsControlParameterTable;                             // 0x0558(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  PhysicsControlParameterNameTable;                         // 0x0560(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsParamterBlendTime;                                 // 0x0568(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawWaterTrace;                                          // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStickLadderUpEnable;                                     // 0x056D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bControlRotationEnableForJump;                            // 0x056E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartSwimIdle;                                           // 0x056F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WaterPhysMaterialName;                                    // 0x0570(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0578(0x0004) MISSED OFFSET
	float                                              WaterDepth;                                               // 0x057C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              WaterSinkHeight;                                          // 0x0580(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5C];                                      // 0x0584(0x005C) MISSED OFFSET
	struct FName                                       LadderPhysMaterialName;                                   // 0x05E0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	int                                                LadderBeginStepNum;                                       // 0x05E8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	int                                                LadderTotalStepNum;                                       // 0x05EC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	int                                                LadderCurrentStepNum;                                     // 0x05F0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x28];                                      // 0x05F4(0x0028) MISSED OFFSET
	float                                              CurrentVelocityLength;                                    // 0x061C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0620(0x0020) MISSED OFFSET
	float                                              BsCurrentValue_MovementRatio;                             // 0x0640(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              BsTargetValue_BodyTiltRatio;                              // 0x0644(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              BsCurrentValue_BodyTiltRatio;                             // 0x0648(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x064C(0x0004) MISSED OFFSET
	struct FPFPhysicsControlParameterTableRow          CurrentPhysicsControlParameter;                           // 0x0650(0x0020) (Edit, DisableEditOnTemplate, Transient, EditConst)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0670(0x0008) MISSED OFFSET
	float                                              LockMoveBrakeMotionTimer;                                 // 0x0678(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData08[0x20];                                      // 0x067C(0x0020) MISSED OFFSET
	struct FRotator                                    UTurnCurrentRotation;                                     // 0x069C(0x000C) (Edit, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData09[0x10];                                      // 0x06A8(0x0010) MISSED OFFSET
	float                                              FloatingTime;                                             // 0x06B8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         CurrentMovementMode;                                      // 0x06BC(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2F];                                      // 0x06BD(0x002F) MISSED OFFSET
	float                                              DelayInputJudgmentTimer;                                  // 0x06EC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              MaxWetHeightRate;                                         // 0x06F0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              NextWetHeightRate;                                        // 0x06F4(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              CurrentWetHeightRate;                                     // 0x06F8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              WetRate;                                                  // 0x06FC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              WetKeepTimer;                                             // 0x0700(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              WetSpecularRate;                                          // 0x0704(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData11[0x164];                                     // 0x0708(0x0164) MISSED OFFSET
	bool                                               bInteractableAction;                                      // 0x086C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x23];                                      // 0x086D(0x0023) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFPCActorComponent");
		return ptr;
	}


	void K2_UpdateInputDevicePressedState(bool bInGamepad, bool bInKeyboard, bool bInMouseButton);
	void K2_UnlockMoveBrakeMotion();
	class UParticleSystemComponent* K2_SpawnWaterEffect2(class UParticleSystem* InEffect, const struct FVector& InLocation);
	class UParticleSystemComponent* K2_SpawnWaterEffect(const struct FName& InName, const struct FVector& InLocation);
	void K2_SetWallHitNotifyEnable(bool bInValue);
	void K2_SetupLadderAction(int InBeginStepNum, int InTotalStepNum, const struct FName& InPhysMaterialName);
	void K2_SetUpdateMovementBsValueEnable(bool bInNew, bool bInUpdateTiltBsValueEnable);
	void K2_SetTransToIdleType(TEnumAsByte<EPFPCTransToIdle> InType);
	void K2_SetRestoreRotationSpeed();
	void K2_SetLadderStepNum(int NewValue);
	void K2_SetJumpEnableInControlDisableTemp(bool bEnable, TEnumAsByte<EPFTempChangeParameterSource> InSource);
	void K2_SetJumpEnableInControlDisable(bool bEnable);
	void K2_SetInputUTurnEnbale(bool bNew, bool bWalkTurn);
	void K2_SetInputDelayEnbale(bool bNew);
	void K2_SetIKEnable(TEnumAsByte<EPFPCEnableIKSlot> InSlot, bool bEnable);
	void K2_SetIdleFreeHotTrap(class AActor* InTrap);
	void K2_SetIdleFreeColdEnable(bool bInEnable);
	void K2_SetFallingLandingDamageEnable(bool bInEnable);
	void K2_SetControlRotationEnableTemp(bool bEnable, TEnumAsByte<EPFTempChangeParameterSource> InSource);
	void K2_SetControlRotationEnable(bool bEnable);
	void K2_SetBsValue_MovementRatio(float InNew);
	void K2_SetBsValue_BodyTiltRatio(float InNew);
	void K2_SetApplyMaxSpeedEnable(TEnumAsByte<EPFActorMovementState> InApplyMovementState);
	void K2_ResetToggleWalk();
	void K2_ResetToggleDash();
	void K2_ResetRestoreRotationSpeed();
	void K2_ResetLadderCurrentStepNum();
	void K2_ResetIdleFreeColdTimer();
	void K2_ResetApplyMaxSpeedEnable();
	void K2_RemoveIdleFreeHotTrap(class AActor* InTrap);
	void K2_RemoveIdleFreeHighPlaceTrap(class AActor* InTrap);
	void K2_NotifyEndSwim();
	void K2_NotifyEndLadder();
	void K2_NotifyEndFloating();
	void K2_NotifyBeginSwim();
	void K2_NotifyBeginLadder();
	void K2_NotifyBeginFloating();
	bool K2_IsWaterWalk();
	bool K2_IsWallHitNotifyEnable();
	bool K2_IsWalk();
	bool K2_IsUpdateMovementBsValueEnable();
	bool K2_IsSwimOut();
	bool K2_IsSwimIn();
	bool K2_IsSwim();
	bool K2_IsRunUTurn();
	bool K2_IsRunStop();
	bool K2_IsRun();
	bool K2_IsMovementWalkOnlyWaterDepth();
	bool K2_IsMovementWalkOnly();
	bool K2_IsLockedMoveTransMotion();
	bool K2_IsLockedMoveBrakeMotion();
	bool K2_IsLadder();
	bool K2_IsJumpEnableInControlDisable();
	bool K2_IsInWater();
	bool K2_IsInputUTurn(bool* bOutWalkTurn);
	bool K2_IsIdleFreeCold();
	bool K2_IsIdleFreeBattle();
	bool K2_IsFallingLandingRunFailed();
	bool K2_IsFallingLandingHigh();
	bool K2_IsFallingLandingDamage();
	bool K2_IsControlRotationEnable();
	bool K2_IsBoredomTimerFinished();
	void K2_InputToggleWalk();
	void K2_InputToggleDash();
	float K2_GetWaterSinkHeight();
	float K2_GetWaterDepth();
	TEnumAsByte<EPFActorMovementState> k2_GetVelocityMovementState();
	TEnumAsByte<EPFActorMovementState> k2_GetPrevMovementState();
	struct FVector K2_GetLastFloatingMovementVector();
	int K2_GetLadderTotalStepNum();
	int K2_GetLadderStepNum();
	int K2_GetLadderCurrentStepNum();
	int K2_GetLadderBeginStepNum();
	void K2_GetIdleFreeHotTraps(TArray<class AActor*>* OutTraps);
	class AActor* K2_GetIdleFreeHotTrap();
	void K2_GetIdleFreeHighPlaceTraps(TArray<class AActor*>* OutTrap);
	float K2_GetFloatingTime();
	float K2_GetFallingHeight();
	float K2_GetBsValue_MovementRatio();
	float K2_GetBsValue_BodyTiltRatio();
	void K2_ExitInteractableAction();
	void K2_ExecuteControlRotation(const struct FVector& InRotationVector, float InDeltaSeconds);
	void K2_EnterInteractableAction();
	void K2_EndJumpEnableInControlDisableTemp(TEnumAsByte<EPFTempChangeParameterSource> InSource);
	void K2_EndControlRotationEnableTemp(TEnumAsByte<EPFTempChangeParameterSource> InSource);
	void K2_EndControlDisableTemp_PC(TEnumAsByte<EPFTempChangeParameterSource> InSource, bool bInForceApplyMovement, bool bInJumpEnableInControlDisable, bool bInControlRotationEnable);
	void K2_EndBoredomTimer();
	bool K2_CheckTransToIdleType(TEnumAsByte<EPFPCTransToIdle> InType);
	bool K2_CheckMotionBranch(const struct FName& InLabel);
	float K2_CalcWarpingValue();
	void K2_BurnArm(bool bInLeftArm, bool bInRightArm);
	void K2_BeginJumpEnableInControlDisableTemp(TEnumAsByte<EPFTempChangeParameterSource> InSource);
	void K2_BeginControlRotationEnableTemp(TEnumAsByte<EPFTempChangeParameterSource> InSource);
	void K2_BeginControlDisableTemp_PC(TEnumAsByte<EPFTempChangeParameterSource> InSource, bool bInForceApplyMovement, bool bInJumpEnableInControlDisable, bool bInControlRotationEnable, bool bInControlRotationUTurn);
	void K2_BeginBoredomTimer();
	void K2_AddLadderCurrentStepNum(int InNum);
	void K2_AddIdleFreeHotTrap(class AActor* InTrap);
	void K2_AddIdleFreeHighPlaceTrap(class AActor* InTrap);
};


// Class ArisePlayerFree.PFPCAnimInstance
// 0x0010 (0x05A0 - 0x0590)
class UPFPCAnimInstance : public UPFAnimInstance
{
public:
	float                                              BodyTiltBlendSpaceValue;                                  // 0x0590(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BodyTiltAlpha;                                            // 0x0594(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0598(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFPCAnimInstance");
		return ptr;
	}

};


// Class ArisePlayerFree.PFPlayerAnimInstance
// 0x0000 (0x0590 - 0x0590)
class UPFPlayerAnimInstance : public UPFAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFPlayerAnimInstance");
		return ptr;
	}

};


// Class ArisePlayerFree.PFPlayerCamera
// 0x0220 (0x0548 - 0x0328)
class APFPlayerCamera : public AActor
{
public:
	class UCameraComponent*                            CameraComponent;                                          // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CameraCollision;                                          // 0x0330(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData)
	TArray<struct FPFPlayerCameraPreset>               Presets;                                                  // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PresetInterpTime;                                         // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlur_Amount;                                        // 0x034C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlur_Max;                                           // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlur_PerObjectSize;                                 // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PitchLimitMin;                                            // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchLimitMax;                                            // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRotationSpeedYaw;                                      // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRotationSpeedPitch;                                    // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpValue;                                      // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationConfigValue;                                      // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraLocationBlendRate;                                  // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraLocationOffset_Z;                                   // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingHeightOffsetInterpInTime;                         // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingHeightOffsetInterpOutTime;                        // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LadderModeInterpTime;                                     // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LadderModeYawAngleLimit;                                  // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentPresetIndex;                                       // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     TargetLocationOffset;                                     // 0x0390(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<float>                                      DistanceToTargets;                                        // 0x03A0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	float                                              ChangeDistanceInterpTime;                                 // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResetInterpTime;                                          // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResetAnglePitch;                                          // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoTrackingInterpSpeed;                                  // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalDistanceInterpSpeed;                                 // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTargetPitchHeight;                                     // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetHeightCollectStartPitch;                            // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxTargetLocationBuffers;                                 // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTargetLocationFillter;                                   // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              HeightInterpDistLimit;                                    // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightInterpMinSpeed;                                     // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightInterpTime;                                         // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IndoorCameraDistance;                                     // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IndoorCameraInterpTime;                                   // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x160];                                     // 0x03E8(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFPlayerCamera");
		return ptr;
	}


	void SetMotionBlurParams(float Amount, float Max, float PerObjectSize);
	void SetLookAtMode(const struct FVector& InLookAtLocation, float InBlendTime, TEnumAsByte<EPFPlayerCameraLookAtActionMode> InActionMode, int InPreset, const struct FScriptDelegate& InIsInteractEnable, bool bInLocationEnable, bool bInIgnoreResetCamera);
	void SetLadderMode(class AActor* InLadderActor);
	void RunLookAtEventProcess(class APFEventProcessSimpleBase* InEventProcess);
	void ResetLookAtModeWithChangeAngle(float InBlendTime, float InNextAngleX, float InNextAngleZ, int InCameraPresetIndex);
	void ResetLookAtMode(float InBlendTime, int InCameraPresetIndex);
	void ResetLadderMode();
	void ResetCameraCurrentPreset(float InPitchAngle);
	void ResetCamera(int InCameraPreset, float InPitchAngle);
	void OnApplyMotionBlurParams();
	void K2_ChangeDistance(float InDistance, float InTime);
	bool IsLookAtModeSwitching();
	bool IsLookAtMode();
	void IsLookAtInteractEnableDelegate__DelegateSignature(bool* Out);
	void ChangePresetTime(int Index, float InTime);
	void ChangePreset(int Index);
	void ChangePitchSlideParams(int InIndex, float InTime);
	void ChangeLocationOffset(float InOffsetY, float InOffsetZ, float InTime);
	void ChangeFov(float InTarget, float InTime);
	void ChangeDistanceDirect(int distId, float newDistace);
};


// Class ArisePlayerFree.PFPCMovementComponent
// 0x0030 (0x07B0 - 0x0780)
class UPFPCMovementComponent : public UCharacterMovementComponent
{
public:
	struct FVector                                     LastMovementVector;                                       // 0x0780(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x078C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFPCMovementComponent");
		return ptr;
	}


	void SetGravityEnable(bool bNewValue);
	bool IsGravityEnable();
};


// Class ArisePlayerFree.PFPCFootIKComponent
// 0x0008 (0x01E8 - 0x01E0)
class UPFPCFootIKComponent : public UAriseCharacterFootIKComponent
{
public:
	TEnumAsByte<EPFPCFootIKMode>                       Mode;                                                     // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFPCFootIKComponent");
		return ptr;
	}

};


// Class ArisePlayerFree.PFPlayerCharacter
// 0x02D0 (0x0B70 - 0x08A0)
class APFPlayerCharacter : public APFCharacterBase
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x08A0(0x0138) MISSED OFFSET
	class UClass*                                      PlayerCameraClass;                                        // 0x09D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OwlSearcherClass;                                         // 0x09E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               RootMotionKeys_Sequence;                                  // 0x09E8(0x0010) (Edit, ZeroConstructor)
	bool                                               RequestKeepBurnArmForResetPose;                           // 0x09F8(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x09F9(0x0007) MISSED OFFSET
	class UAriseCharacterBuildComponent*               CharacterBuildComponent;                                  // 0x0A00(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPFPlayerCrowdAgentComponent*                CrowdAgentComponent;                                      // 0x0A08(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAchCharacterFootmarkComponent*              FootmarkComponent;                                        // 0x0A10(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APFPlayerCamera*                             PlayerCamera;                                             // 0x0A18(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APFOwlSearcher*                              OwlSearcher;                                              // 0x0A20(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x110];                                     // 0x0A28(0x0110) MISSED OFFSET
	float                                              CurrentFootHeightDiffernce;                               // 0x0B38(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	bool                                               bWalkableFromFootIK;                                      // 0x0B3C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B3D(0x0003) MISSED OFFSET
	float                                              NotWalkableTimerFromFootIK;                               // 0x0B40(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1C];                                      // 0x0B44(0x001C) MISSED OFFSET
	class UPFPCActorComponent*                         PFPCActorComponent;                                       // 0x0B60(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0B68(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFPlayerCharacter");
		return ptr;
	}


	void StopAutoMove();
	void OnResetCharacter(bool bInIndoorMode);
	void OnMoveBlockedBy(const struct FHitResult& Impact);
	void OnHitCapsuleComponent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& HIT);
	void K2_UpdateFloor();
	void K2_SwitchSystemFreezeState(bool bInFreeze);
	void K2_SwitchFreezeState(bool bInFreeze);
	void K2_SwitchDebugFreezeState(bool bInFreeze);
	void K2_SetDebugForceMovementState(TEnumAsByte<EPFActorMovementState> InMovementState);
	void K2_ResetWetState();
	void K2_ResetFacial(float InBlendTime);
	void K2_ResetDebugForceMovementState();
	void K2_ResetCharacter_KeepIndoorMode();
	void K2_ResetCharacter(bool bInIndoorMode);
	void K2_Reconstruct(EArisePartyID InPartyID, bool bBlock);
	void K2_OnEndFlyMode();
	void K2_OnBeginFlyMode();
	void K2_KillEmitEffects();
	bool K2_IsTransitionEnable_NeutralTo();
	bool K2_IsTransitionEnable_Floating();
	bool K2_IsMoving();
	bool K2_IsLoadingModel();
	bool K2_IsFreeze();
	bool K2_IsBuilded();
	bool K2_IsAutoMoving();
	EArisePartyID K2_GetPartyID();
	bool K2_GetDebugFreezeState();
	void K2_EnableBurnArm(bool bInLeftArm, bool bInRightArm);
	void K2_ChangeFacial(const struct FString& InPresetName, float InBlendTime, float InWeight);
	void K2_BurnArm(bool bInLeftArm, bool bInRightArm);
	bool IsPlayVibration();
	void AutoMoveToDirection(const struct FRotator& MoveDirection, float MoveTime, EPFPlayerCharacterAutoMoveType MoveType);
	void AutoMoveTo(const struct FVector& NewLocation, const struct FRotator& NewRotation, const struct FScriptDelegate& OnCompleted, float InTimeOut, EPFPlayerCharacterAutoMoveType MoveType);
};


// Class ArisePlayerFree.PFPlayerCrowdAgentComponent
// 0x0008 (0x0100 - 0x00F8)
class UPFPlayerCrowdAgentComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArisePlayerFree.PFPlayerCrowdAgentComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
