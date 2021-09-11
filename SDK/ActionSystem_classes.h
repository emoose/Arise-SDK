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

// Class ActionSystem.ASAnimationSet
// 0x0050 (0x0080 - 0x0030)
class UASAnimationSet : public UDataAsset
{
public:
	TArray<class UASAnimationSet*>                     Parents;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UASAnimationSet*                             Parent;                                                   // 0x0040(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<struct FASAnimationSetEntry_Sequence>       Sequences;                                                // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FASAnimationSetEntry_BlendSpace>     BlendSpaces;                                              // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FASAnimationSetEntry_StateMachine>   StateMachines;                                            // 0x0068(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASAnimationSet");
		return ptr;
	}


	class UASStateMachine* GetStateMachine(const struct FName& KeyName);
	class UAnimSequenceBase* GetSequence(const struct FName& KeyName);
	class UBlendSpaceBase* GetBlendSpace(const struct FName& KeyName);
};


// Class ActionSystem.ASAnimInstance
// 0x0110 (0x0470 - 0x0360)
class UASAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0360(0x0108) MISSED OFFSET
	bool                                               bSaveOriginalNotify;                                      // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0469(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASAnimInstance");
		return ptr;
	}


	void SetDynamicSubMachine(const struct FString& AnimNodeName, const struct FString& StateName, class UASStateMachine* StateMachineAsset);
	void SetDynamicSequence(const struct FString& AnimNodeName, const struct FString& StateName, class UAnimSequenceBase* SequenceAsset);
	void SendCommand(const struct FName& Command, bool bForce);
	void ReceiveStateChange(const struct FString& PreviousStateName, const struct FString& NextStateName);
	void JumpMachineState(const struct FString& MachinName, const struct FString& StateName);
	bool IsHitShift();
	bool HasTag(const struct FName& Tag);
	void AnimNotify_StateChange(class UASAnimNotify_StateChange* Notify);
};


// Class ActionSystem.ASAnimNotifyState_Attack
// 0x0030 (0x0060 - 0x0030)
class UASAnimNotifyState_Attack : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HitCount;                                                 // 0x0040(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitInterval;                                              // 0x0044(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AttackScale;                                              // 0x0048(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FASAttackCollision>                  AttackCollisions;                                         // 0x0050(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState_Attack");
		return ptr;
	}

};


// Class ActionSystem.ASAnimNotifyState_Float
// 0x0000 (0x0030 - 0x0030)
class UASAnimNotifyState_Float : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState_Float");
		return ptr;
	}

};


// Class ActionSystem.ASAnimNotifyState_Input
// 0x0020 (0x0050 - 0x0030)
class UASAnimNotifyState_Input : public UAnimNotifyState
{
public:
	float                                              ShiftStartTime;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FName>                               Commands;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState_Input");
		return ptr;
	}

};


// Class ActionSystem.ASAnimNotifyState_Invincible
// 0x0000 (0x0030 - 0x0030)
class UASAnimNotifyState_Invincible : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState_Invincible");
		return ptr;
	}

};


// Class ActionSystem.ASAnimNotifyState_SuperArmor
// 0x0000 (0x0030 - 0x0030)
class UASAnimNotifyState_SuperArmor : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState_SuperArmor");
		return ptr;
	}

};


// Class ActionSystem.ASAnimNotify_EndCancel
// 0x0000 (0x0038 - 0x0038)
class UASAnimNotify_EndCancel : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASAnimNotify_EndCancel");
		return ptr;
	}

};


// Class ActionSystem.ASAnimNotify_HitShift
// 0x0000 (0x0038 - 0x0038)
class UASAnimNotify_HitShift : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASAnimNotify_HitShift");
		return ptr;
	}

};


// Class ActionSystem.ASAnimNotify_StateChange
// 0x0038 (0x0070 - 0x0038)
class UASAnimNotify_StateChange : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASAnimNotify_StateChange");
		return ptr;
	}

};


// Class ActionSystem.ASCharacterBase
// 0x0010 (0x0750 - 0x0740)
class AASCharacterBase : public ACharacter
{
public:
	TArray<int>                                        ReplicateState;                                           // 0x0740(0x0010) (Net, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASCharacterBase");
		return ptr;
	}


	void SendCommand(const struct FName& Command, bool Force);
	void SendAnimCommand(const struct FString& Command, bool Force);
	void ReceiveStateChange(const struct FString& PreviousStateName, const struct FString& NextStateName);
	void OnRep_ReplicateState();
	void JumpMachineState(const struct FString& MachinName, const struct FString& StateName);
	bool HasAnimTag(const struct FName& Tag);
	TArray<struct FName> GetAnimTags();
};


// Class ActionSystem.ASCharacter
// 0x0090 (0x07E0 - 0x0750)
class AASCharacter : public AASCharacterBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0750(0x0010) MISSED OFFSET
	class UASCollisionGroupComponent*                  CollisionGroup;                                           // 0x0760(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UASCollisionComponent*                       DamageCollision;                                          // 0x0768(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0770(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASCharacter");
		return ptr;
	}


	bool IsSuperArmor();
	bool IsHitAttack();
};


// Class ActionSystem.ASCharacterMovementComponent
// 0x0000 (0x0780 - 0x0780)
class UASCharacterMovementComponent : public UCharacterMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASCharacterMovementComponent");
		return ptr;
	}


	void SetImpulse(const struct FVector& Impulse, bool bVelocityChange);
	void SendCommand(const struct FName& Command, bool Force);
	void SendAnimCommand(const struct FString& Command, bool Force);
	bool HasAnimTag(const struct FName& Tag);
};


// Class ActionSystem.ASCollisionCapsuleComponent
// 0x0010 (0x05C0 - 0x05B0)
class UASCollisionCapsuleComponent : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASCollisionCapsuleComponent");
		return ptr;
	}


	void OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class ActionSystem.ASCollisionComponent
// 0x0020 (0x05D0 - 0x05B0)
class UASCollisionComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASCollisionComponent");
		return ptr;
	}


	void OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class ActionSystem.ASCollisionGroupComponent
// 0x0030 (0x0280 - 0x0250)
class UASCollisionGroupComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0250(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASCollisionGroupComponent");
		return ptr;
	}


	void StopAttack();
	void StartAttack(int HitCount, float HitInterval);
	void SetActiveCollision(bool Active);
	void OnAttackEndOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
	void OnAttackBeginOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult);
};


// Class ActionSystem.ASCollisionInterface
// 0x0000 (0x0028 - 0x0028)
class UASCollisionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASCollisionInterface");
		return ptr;
	}


	bool OnAttackOverlapCallback(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult);
};


// Class ActionSystem.ASDamageType
// 0x0018 (0x0058 - 0x0040)
class UASDamageType : public UDamageType
{
public:
	unsigned char                                      bUseDirection : 1;                                        // 0x0040(0x0001) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FVector                                     Direction;                                                // 0x0044(0x000C) (Edit, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              HitStopTimeAttack;                                        // 0x0050(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitStopTimeDamage;                                        // 0x0054(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASDamageType");
		return ptr;
	}

};


// Class ActionSystem.ASSMNode
// 0x0028 (0x0050 - 0x0028)
class UASSMNode : public UObject
{
public:
	struct FString                                     StateName;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<class UASSMNode*>                           LinkedTo;                                                 // 0x0038(0x0010) (ZeroConstructor)
	class UASStateMachine*                             MachineAsset;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASSMNode");
		return ptr;
	}

};


// Class ActionSystem.ASSMStateNode
// 0x0048 (0x0098 - 0x0050)
class UASSMStateNode : public UASSMNode
{
public:
	TArray<struct FName>                               Tags;                                                     // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bAlwaysCanceledCommand : 1;                               // 0x0060(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TArray<class UASState_Base*>                       CustomStates;                                             // 0x0068(0x0010) (Edit, ExportObject, ZeroConstructor)
	int                                                StateIndex;                                               // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<class UASSMTransitionNode*>                 TransitionList;                                           // 0x0080(0x0010) (ZeroConstructor)
	class UASState_Base*                               Custom;                                                   // 0x0090(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASSMStateNode");
		return ptr;
	}

};


// Class ActionSystem.ASSMState_BlendSpace
// 0x0020 (0x00B8 - 0x0098)
class UASSMState_BlendSpace : public UASSMStateNode
{
public:
	float                                              PlayRate;                                                 // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              RootMotionScale;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FName                                       BlendSpaceName;                                           // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GroupIndex;                                               // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASSMState_BlendSpace");
		return ptr;
	}

};


// Class ActionSystem.ASSMState_AimOffset
// 0x0000 (0x00B8 - 0x00B8)
class UASSMState_AimOffset : public UASSMState_BlendSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASSMState_AimOffset");
		return ptr;
	}

};


// Class ActionSystem.ASSMState_Conduit
// 0x0000 (0x0098 - 0x0098)
class UASSMState_Conduit : public UASSMStateNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASSMState_Conduit");
		return ptr;
	}

};


// Class ActionSystem.ASSMState_Sequence
// 0x0020 (0x00B8 - 0x0098)
class UASSMState_Sequence : public UASSMStateNode
{
public:
	float                                              PlayRate;                                                 // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              RootMotionScale;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FName                                       SequenceName;                                             // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GroupIndex;                                               // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASSMState_Sequence");
		return ptr;
	}

};


// Class ActionSystem.ASSMState_Slot
// 0x0010 (0x00A8 - 0x0098)
class UASSMState_Slot : public UASSMStateNode
{
public:
	struct FName                                       SlotName;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInertialBlend : 1;                                       // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASSMState_Slot");
		return ptr;
	}

};


// Class ActionSystem.ASSMState_StateMachine
// 0x0018 (0x00B0 - 0x0098)
class UASSMState_StateMachine : public UASSMStateNode
{
public:
	float                                              PlayRate;                                                 // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FName                                       StateMachineName;                                         // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDisableChildMachinePlayEnd : 1;                          // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASSMState_StateMachine");
		return ptr;
	}

};


// Class ActionSystem.ASSMState_Through
// 0x0000 (0x0098 - 0x0098)
class UASSMState_Through : public UASSMStateNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASSMState_Through");
		return ptr;
	}

};


// Class ActionSystem.ASSMTransitionNode
// 0x00B8 (0x0108 - 0x0050)
class UASSMTransitionNode : public UASSMNode
{
public:
	TArray<class UASTransition_Base*>                  TransitionRules;                                          // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor)
	int                                                PriorityOrder;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnable : 1;                                              // 0x0064(0x0001) (Edit)
	bool                                               Bidirectional;                                            // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAuthorityOnly : 1;                                       // 0x0066(0x0001) (Edit)
	unsigned char                                      bLocallyControlledOnly : 1;                               // 0x0066(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
	float                                              CrossfadeDuration;                                        // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EASAlphaBlendOption                                BlendOption;                                              // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRootMotionBlend : 1;                                     // 0x0078(0x0001) (Edit)
	unsigned char                                      bSyncTime : 1;                                            // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     StartStateName;                                           // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAnimNotifyEvent>                    InterruptNotifyEvents;                                    // 0x0090(0x0010) (Edit, ZeroConstructor)
	class UASSMStateNode*                              PreviousState;                                            // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UASSMStateNode*                              NextState;                                                // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENextStateType>                        NextStateType;                                            // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETransitionRule>                       TransitionRule;                                           // 0x00B1(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	struct FString                                     Command;                                                  // 0x00B8(0x0010) (ZeroConstructor, Deprecated)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x00C8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      CustomMovementMode;                                       // 0x00C9(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
	class UASTransition_BlueprintBase*                 Blueprint;                                                // 0x00D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UASTransition_Base*                          Custom;                                                   // 0x00D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UASTransition_Base*                          Transition;                                               // 0x00E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimNotify*                                 InterruptNotify;                                          // 0x00E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UAnimNotify*>                         InterruptNotifies;                                        // 0x00F0(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      bNotEqual : 1;                                            // 0x0100(0x0001) (Deprecated)
	EAlphaBlendOption                                  BlendMode;                                                // 0x0101(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0102(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASSMTransitionNode");
		return ptr;
	}

};


// Class ActionSystem.ASStateMachine
// 0x0028 (0x0050 - 0x0028)
class UASStateMachine : public UObject
{
public:
	class UASSMStateNode*                              RootNode;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UASSMStateNode*>                      StateTable;                                               // 0x0030(0x0010) (ZeroConstructor)
	class UASAnimationSet*                             AnimationSetAsset;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               DisableAnimationSetOverride;                              // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInertialBlend;                                           // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASStateMachine");
		return ptr;
	}

};


// Class ActionSystem.ASState_Base
// 0x0000 (0x0028 - 0x0028)
class UASState_Base : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASState_Base");
		return ptr;
	}

};


// Class ActionSystem.ASState_BlueprintBase
// 0x0010 (0x0038 - 0x0028)
class UASState_BlueprintBase : public UASState_Base
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASState_BlueprintBase");
		return ptr;
	}


	void StopSlotAnimation(float BlendTime);
	void SetRootMotionScale(float NewScale);
	void SetPlayRate(float NewRate);
	void SetBlendSpaceInput(const struct FVector& NewBlendInput);
	void SetAnimTimeRatio(float TimeRatio);
	void SetAnimTime(float Time);
	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
	void ReceiveFinishedTick(class UAnimInstance* AnimInstance);
	void ReceiveEndPlay(class UAnimInstance* AnimInstance);
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
	void PlaySlotAnimation(class UAnimSequenceBase* AnimSequence, float BlendTime, bool bLoop);
	bool HasCommand(const struct FName& Command, bool bAlwaysCanceledCommand, bool bOnce);
	TArray<struct FName> GetStateTags();
	struct FString GetStateName();
	float GetAnimTimeLength();
	float GetAnimTime();
};


// Class ActionSystem.ASTransition_Base
// 0x0008 (0x0030 - 0x0028)
class UASTransition_Base : public UObject
{
public:
	unsigned char                                      bNotEqual : 1;                                            // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASTransition_Base");
		return ptr;
	}

};


// Class ActionSystem.ASTransition_BlueprintBase
// 0x0020 (0x0050 - 0x0030)
class UASTransition_BlueprintBase : public UASTransition_Base
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASTransition_BlueprintBase");
		return ptr;
	}


	bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
	void OutputLog(const struct FString& Value);
	bool IsPlayEnd();
	bool IsInTransition();
	bool HasCommand(const struct FName& Command, bool bOnce);
	float GetElapsedTime();
	float GetAnimTimeLength();
	float GetAnimTime();
	TEnumAsByte<EAnimCommandState> CheckCommandState(const struct FName& Command, bool bOnce);
	bool CheckCommand(const struct FString& Command, bool bOnce);
};


// Class ActionSystem.ASTransition_Command
// 0x0008 (0x0038 - 0x0030)
class UASTransition_Command : public UASTransition_Base
{
public:
	struct FName                                       Command;                                                  // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASTransition_Command");
		return ptr;
	}

};


// Class ActionSystem.ASTransition_MovementMode
// 0x0008 (0x0038 - 0x0030)
class UASTransition_MovementMode : public UASTransition_Base
{
public:
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomMovementMode;                                       // 0x0031(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASTransition_MovementMode");
		return ptr;
	}

};


// Class ActionSystem.ASTransition_PlayEnd
// 0x0008 (0x0038 - 0x0030)
class UASTransition_PlayEnd : public UASTransition_Base
{
public:
	unsigned char                                      bIgnoreEndCancel : 1;                                     // 0x0030(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASTransition_PlayEnd");
		return ptr;
	}

};


// Class ActionSystem.ASTransition_PlayTime
// 0x0008 (0x0038 - 0x0030)
class UASTransition_PlayTime : public UASTransition_Base
{
public:
	float                                              Time;                                                     // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionSystem.ASTransition_PlayTime");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
