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

// Class AriseBattleInternal.BtlAsState_CustomBlowBlend
// 0x0000 (0x0028 - 0x0028)
class UBtlAsState_CustomBlowBlend : public UASState_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsState_CustomBlowBlend");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsState_CustomDamageBlend
// 0x0000 (0x0028 - 0x0028)
class UBtlAsState_CustomDamageBlend : public UASState_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsState_CustomDamageBlend");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsState_CustomLocomotionSpeedBlend
// 0x0000 (0x0028 - 0x0028)
class UBtlAsState_CustomLocomotionSpeedBlend : public UASState_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsState_CustomLocomotionSpeedBlend");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsState_CustomTurnBlend
// 0x0000 (0x0028 - 0x0028)
class UBtlAsState_CustomTurnBlend : public UASState_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsState_CustomTurnBlend");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_ArtsHitted
// 0x0008 (0x0038 - 0x0030)
class UBtlAsTransition_ArtsHitted : public UASTransition_Base
{
public:
	bool                                               IsTargetOnly;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_ArtsHitted");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_ArtsRange
// 0x0008 (0x0038 - 0x0030)
class UBtlAsTransition_ArtsRange : public UASTransition_Base
{
public:
	bool                                               EnableHeight;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_ArtsRange");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_AttackBranch
// 0x0008 (0x0038 - 0x0030)
class UBtlAsTransition_AttackBranch : public UASTransition_Base
{
public:
	int                                                AttackIndex;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_AttackBranch");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_DBufferTransition
// 0x0008 (0x0038 - 0x0030)
class UBtlAsTransition_DBufferTransition : public UASTransition_Base
{
public:
	bool                                               IsMain;                                                   // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_DBufferTransition");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_Faceup
// 0x0000 (0x0030 - 0x0030)
class UBtlAsTransition_Faceup : public UASTransition_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_Faceup");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_Floating
// 0x0008 (0x0038 - 0x0030)
class UBtlAsTransition_Floating : public UASTransition_Base
{
public:
	float                                              Height;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_Floating");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_InCancelFrame
// 0x0000 (0x0030 - 0x0030)
class UBtlAsTransition_InCancelFrame : public UASTransition_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_InCancelFrame");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_IsBackStep
// 0x0000 (0x0030 - 0x0030)
class UBtlAsTransition_IsBackStep : public UASTransition_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_IsBackStep");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_IsBlendType
// 0x0008 (0x0038 - 0x0030)
class UBtlAsTransition_IsBlendType : public UASTransition_Base
{
public:
	EBattleActionState                                 StateType;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EBtlAnimationBlendType                             BlendType;                                                // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_IsBlendType");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_IsMightyBlow
// 0x0000 (0x0030 - 0x0030)
class UBtlAsTransition_IsMightyBlow : public UASTransition_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_IsMightyBlow");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_IsUniqueDown
// 0x0000 (0x0030 - 0x0030)
class UBtlAsTransition_IsUniqueDown : public UASTransition_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_IsUniqueDown");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_Landing
// 0x0008 (0x0038 - 0x0030)
class UBtlAsTransition_Landing : public UASTransition_Base
{
public:
	float                                              Height;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Condition_NegativeVelocityZ;                              // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_Landing");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_ShotMagic
// 0x0000 (0x0030 - 0x0030)
class UBtlAsTransition_ShotMagic : public UASTransition_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_ShotMagic");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_StateTransition
// 0x0008 (0x0038 - 0x0030)
class UBtlAsTransition_StateTransition : public UASTransition_Base
{
public:
	EBattleActionState                                 StateId;                                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_StateTransition");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_TargetDistance
// 0x0008 (0x0038 - 0x0030)
class UBtlAsTransition_TargetDistance : public UASTransition_Base
{
public:
	float                                              InDistance;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_TargetDistance");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlAsTransition_UnuseCrossfadeTransition
// 0x0000 (0x0030 - 0x0030)
class UBtlAsTransition_UnuseCrossfadeTransition : public UASTransition_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlAsTransition_UnuseCrossfadeTransition");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_CameraShake
// 0x0028 (0x0068 - 0x0040)
class UBtlMagicTask_CameraShake : public UBtlMagicTask
{
public:
	class UClass*                                      ShakeClass;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FRotator                                    UserPlaySpaceRot;                                         // 0x0050(0x000C) (Edit, IsPlainOldData)
	bool                                               EnableDistanceAttenuation;                                // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              FarthestDistance;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearestRate;                                              // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_CameraShake");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_CollisionBase
// 0x0050 (0x0090 - 0x0040)
class UBtlMagicTask_CollisionBase : public UBtlMagicTask
{
public:
	struct FAttackSphereParam                          ActualAttackParam;                                        // 0x0040(0x0050) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_CollisionBase");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_AttackSphereCollisionBase
// 0x0070 (0x0100 - 0x0090)
class UBtlMagicTask_AttackSphereCollisionBase : public UBtlMagicTask_CollisionBase
{
public:
	class UClass*                                      GenerateSphereClass;                                      // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x00A0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class UCurveVector*                                AnimLocation;                                             // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBtlSimpleFloatParameter                    Radius;                                                   // 0x00D8(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_AttackSphereCollisionBase");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_AttackCapsuleCollisionBase
// 0x0080 (0x0110 - 0x0090)
class UBtlMagicTask_AttackCapsuleCollisionBase : public UBtlMagicTask_CollisionBase
{
public:
	class UClass*                                      GenerateCapsuleClass;                                     // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x00A0(0x0030) (Edit, IsPlainOldData)
	struct FBtlSimpleFloatParameter                    HalfHeight;                                               // 0x00D0(0x0020) (Edit)
	struct FBtlSimpleFloatParameter                    Radius;                                                   // 0x00F0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_AttackCapsuleCollisionBase");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_AttackSectorCollisionBase
// 0x0018 (0x00A8 - 0x0090)
class UBtlMagicTask_AttackSectorCollisionBase : public UBtlMagicTask_CollisionBase
{
public:
	class UClass*                                      GenerateCapsuleClass;                                     // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SectorRadius;                                             // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_AttackSectorCollisionBase");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_NotifyCollisionBase
// 0x0078 (0x00B8 - 0x0040)
class UBtlMagicTask_NotifyCollisionBase : public UBtlMagicTask
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EObjectTypeQuery>                      InvisibleWallType;                                        // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTraceComplex;                                            // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreSelf;                                              // 0x005B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UCurveVector*                                AnimLocation;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBtlSimpleFloatParameter                    Scale;                                                    // 0x0068(0x0020) (Edit, BlueprintVisible)
	struct FName                                       Identifier;                                               // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IgnoreOwner : 1;                                          // 0x0090(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      IgnoreWorldObject : 1;                                    // 0x0090(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      IgnoreCharacter : 1;                                      // 0x0090(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      IgnoreOwnerGroupCharacter : 1;                            // 0x0090(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      IgnoreTargetGroupCharacter : 1;                           // 0x0090(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      IgnoreOwnerSpellMagic : 1;                                // 0x0090(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      IgnoreFriendsGroupSpellMagic : 1;                         // 0x0090(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      IgnoreRivalGroupSpellMagic : 1;                           // 0x0090(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      IgnoreBattleWall : 1;                                     // 0x0091(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBeginOverlap;                                           // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndOverlap;                                             // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_NotifyCollisionBase");
		return ptr;
	}


	bool IsOverlapCollision(class ABtlMagicActor* OwnerActor);
	void BtlNotifyCollisionSignature__DelegateSignature();
};


// Class AriseBattleInternal.BtlMagicTask_CreateSkeletalMeshBase
// 0x0060 (0x00B0 - 0x0050)
class UBtlMagicTask_CreateSkeletalMeshBase : public UBtlMagicTask_AddComponentBase
{
public:
	class USkeletalMesh*                               SourceMesh;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             Animation;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimationRate;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AnimationLoop;                                            // 0x0064(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0065(0x000B) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x0070(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       MasterPauseMeshName;                                      // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAdjustment;                                      // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAnimPhysSimSpaceType                              SimulationSpace;                                          // 0x00A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_CreateSkeletalMeshBase");
		return ptr;
	}


	class USkeletalMeshComponent* GetMasterMeshComponent();
};


// Class AriseBattleInternal.BtlMagicTask_SkeletalMeshAnimation
// 0x0010 (0x0060 - 0x0050)
class UBtlMagicTask_SkeletalMeshAnimation : public UBtlMagicTask_FindComponentBase
{
public:
	class UAnimationAsset*                             Animation;                                                // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimationRate;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AnimationLoop;                                            // 0x005C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAdjustment;                                      // 0x005D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAnimPhysSimSpaceType                              SimulationSpace;                                          // 0x005E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x005F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_SkeletalMeshAnimation");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_MovementBase
// 0x0000 (0x0040 - 0x0040)
class UBtlMagicTask_MovementBase : public UBtlMagicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_MovementBase");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_ForwardMovement
// 0x0030 (0x0070 - 0x0040)
class UBtlMagicTask_ForwardMovement : public UBtlMagicTask_MovementBase
{
public:
	float                                              Speed;                                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CurveSpeed;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBtlSimpleFloatParameter                    SpeedParameter;                                           // 0x0050(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_ForwardMovement");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_RightMovement
// 0x0020 (0x0060 - 0x0040)
class UBtlMagicTask_RightMovement : public UBtlMagicTask_MovementBase
{
public:
	struct FBtlSimpleFloatParameter                    Speed;                                                    // 0x0040(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_RightMovement");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_UpMovement
// 0x0020 (0x0060 - 0x0040)
class UBtlMagicTask_UpMovement : public UBtlMagicTask_MovementBase
{
public:
	struct FBtlSimpleFloatParameter                    Speed;                                                    // 0x0040(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_UpMovement");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_MovementDirection
// 0x0030 (0x0070 - 0x0040)
class UBtlMagicTask_MovementDirection : public UBtlMagicTask_MovementBase
{
public:
	struct FBtlSimpleFloatParameter                    Velocity;                                                 // 0x0040(0x0020) (Edit, BlueprintVisible)
	float                                              PitchOffset;                                              // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchRange;                                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawOffset;                                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawRange;                                                 // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_MovementDirection");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_SetGroundPosition
// 0x0010 (0x0050 - 0x0040)
class UBtlMagicTask_SetGroundPosition : public UBtlMagicTask
{
public:
	struct FVector                                     Offset;                                                   // 0x0040(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_SetGroundPosition");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_SetRotationBase
// 0x0008 (0x0048 - 0x0040)
class UBtlMagicTask_SetRotationBase : public UBtlMagicTask
{
public:
	EBtlMagicRotationOrigin                            RotationOrigin;                                           // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              Rotation;                                                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_SetRotationBase");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_SetRotationPitch
// 0x0000 (0x0048 - 0x0048)
class UBtlMagicTask_SetRotationPitch : public UBtlMagicTask_SetRotationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_SetRotationPitch");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_SetRotationYaw
// 0x0000 (0x0048 - 0x0048)
class UBtlMagicTask_SetRotationYaw : public UBtlMagicTask_SetRotationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_SetRotationYaw");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_SetRotationRoll
// 0x0000 (0x0048 - 0x0048)
class UBtlMagicTask_SetRotationRoll : public UBtlMagicTask_SetRotationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_SetRotationRoll");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_RotationBase
// 0x0020 (0x0060 - 0x0040)
class UBtlMagicTask_RotationBase : public UBtlMagicTask
{
public:
	struct FBtlSimpleFloatParameter                    Rotation;                                                 // 0x0040(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_RotationBase");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_RotationPitch
// 0x0000 (0x0060 - 0x0060)
class UBtlMagicTask_RotationPitch : public UBtlMagicTask_RotationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_RotationPitch");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_RotationYaw
// 0x0000 (0x0060 - 0x0060)
class UBtlMagicTask_RotationYaw : public UBtlMagicTask_RotationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_RotationYaw");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlMagicTask_RotationRoll
// 0x0000 (0x0060 - 0x0060)
class UBtlMagicTask_RotationRoll : public UBtlMagicTask_RotationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlMagicTask_RotationRoll");
		return ptr;
	}

};


// Class AriseBattleInternal.AlphaMask_BtlVisualWeakTask
// 0x0008 (0x0048 - 0x0040)
class UAlphaMask_BtlVisualWeakTask : public UAlphaMaskTask
{
public:
	float                                              Alpha;                                                    // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsComplated;                                              // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.AlphaMask_BtlVisualWeakTask");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlVisualTask_AlphaMaskBase
// 0x0038 (0x0070 - 0x0038)
class UBtlVisualTask_AlphaMaskBase : public UBtlVisualTaskBase
{
public:
	TEnumAsByte<EAlphaMask>                            DefaultValue;                                             // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAlphaMask>                            ExecuteValue;                                             // 0x0039(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverlapUsePrevStartAlpha;                                // 0x003A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FAlphaMaskPriorityLabel                     AlphaMaskPriorityLabel;                                   // 0x0040(0x0008) (BlueprintVisible)
	TWeakObjectPtr<class UAlphaMaskComponent>          AlphaMaskComponent;                                       // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAlphaMask_BtlVisualWeakTask*                AlphaMaskTask;                                            // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	EBtlVisualTaskState                                State;                                                    // 0x005C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              StartAlphaValue;                                          // 0x0064(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              EndAlphaValue;                                            // 0x0068(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualTask_AlphaMaskBase");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlVisualTask_AlphaMask
// 0x0028 (0x0098 - 0x0070)
class UBtlVisualTask_AlphaMask : public UBtlVisualTask_AlphaMaskBase
{
public:
	float                                              StartPhaseTime;                                           // 0x0070(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndPhaseTime;                                             // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFinishStartAnim;                                        // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinishEndAnim;                                          // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualTask_AlphaMask");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlVisualTask_AlphaMaskOneWay
// 0x0018 (0x0088 - 0x0070)
class UBtlVisualTask_AlphaMaskOneWay : public UBtlVisualTask_AlphaMaskBase
{
public:
	float                                              StartPhaseTime;                                           // 0x0070(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishAnim;                                             // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualTask_AlphaMaskOneWay");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlVisualTask_MaterialBase
// 0x0048 (0x0080 - 0x0038)
class UBtlVisualTask_MaterialBase : public UBtlVisualTaskBase
{
public:
	struct FName                                       ParameterName;                                            // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            TargetMaterials;                                          // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FBtlVisualTask_MaterialConstructParameter   ConstructParameter;                                       // 0x0050(0x0028) (BlueprintVisible)
	float                                              ElapsedTime;                                              // 0x0078(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	EBtlVisualTaskState                                State;                                                    // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDefaultMaterials;                                      // 0x007D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualTask_MaterialBase");
		return ptr;
	}


	void OnRebuildingMaterials();
};


// Class AriseBattleInternal.BtlVisualTask_LerpBase
// 0x0028 (0x00A8 - 0x0080)
class UBtlVisualTask_LerpBase : public UBtlVisualTask_MaterialBase
{
public:
	float                                              StartPhaseTime;                                           // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndPhaseTime;                                             // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFinishStartAnim;                                        // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinishEndAnim;                                          // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualTask_LerpBase");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlVisualTask_LerpSetScalarMaterial
// 0x0008 (0x00B0 - 0x00A8)
class UBtlVisualTask_LerpSetScalarMaterial : public UBtlVisualTask_LerpBase
{
public:
	float                                              DefaultValue;                                             // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExecuteValue;                                             // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualTask_LerpSetScalarMaterial");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlVisualTask_LerpSetVectorMaterial
// 0x0020 (0x00C8 - 0x00A8)
class UBtlVisualTask_LerpSetVectorMaterial : public UBtlVisualTask_LerpBase
{
public:
	struct FLinearColor                                DefaultValue;                                             // 0x00A8(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ExecuteValue;                                             // 0x00B8(0x0010) (BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualTask_LerpSetVectorMaterial");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlVisualTask_ConstantBase
// 0x0008 (0x0088 - 0x0080)
class UBtlVisualTask_ConstantBase : public UBtlVisualTask_MaterialBase
{
public:
	float                                              EndPhaseTime;                                             // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualTask_ConstantBase");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlVisualTask_ConstantSetScalarMaterial
// 0x0008 (0x0090 - 0x0088)
class UBtlVisualTask_ConstantSetScalarMaterial : public UBtlVisualTask_ConstantBase
{
public:
	float                                              DefaultValue;                                             // 0x0088(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExecuteValue;                                             // 0x008C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualTask_ConstantSetScalarMaterial");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlVisualTask_ConstantSetVectorMaterial
// 0x0020 (0x00A8 - 0x0088)
class UBtlVisualTask_ConstantSetVectorMaterial : public UBtlVisualTask_ConstantBase
{
public:
	struct FLinearColor                                DefaultValue;                                             // 0x0088(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ExecuteValue;                                             // 0x0098(0x0010) (BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualTask_ConstantSetVectorMaterial");
		return ptr;
	}

};


// Class AriseBattleInternal.BtlVisualTask_CommonParticle
// 0x0078 (0x00B0 - 0x0038)
class UBtlVisualTask_CommonParticle : public UBtlVisualTaskBase
{
public:
	class UParticleSystem*                             ExecuteParticleTemplate;                                  // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EndParticleTempalte;                                      // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachName;                                               // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0050(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x005C(0x000C) (BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // 0x0068(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FName                                       SetActorParameterName;                                    // 0x0070(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsIgnoreSlow;                                             // 0x0078(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    ExecuteParticle;                                          // 0x0080(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    EndParticle;                                              // 0x0088(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAttachExecuteParticle;                                  // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAttachEndParticle;                                      // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualTask_CommonParticle");
		return ptr;
	}


	void VisualTaskParticleSignature__DelegateSignature(class UParticleSystemComponent* NewPsCmp);
	void OnSystemEnd(class UParticleSystemComponent* PsComp);
};


// Class AriseBattleInternal.BtlVisualRootTaskBlueprintBase
// 0x0000 (0x0090 - 0x0090)
class UBtlVisualRootTaskBlueprintBase : public UBtlVisualRootTaskBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleInternal.BtlVisualRootTaskBlueprintBase");
		return ptr;
	}


	class UBtlVisualTaskBase* RunVisualTask(class UClass* VisualTaskType);
	void Received_OnReceiveMessage(const struct FString& UserMessage, class UObject* UserData);
	void Received_EndPlay();
	void Received_Begin();
	class AActor* K2_GetOwnerActor();
	bool IsMonsterModel();
	TArray<class UMaterialInstanceDynamic*> GetOwnerMaterials(TArray<TEnumAsByte<EAchCharacterBuildComponent>> BuildTypeArray);
	class ABtlCharacterBase* GetOwnerCharacter();
	class UAchCharacterBuildComponent* GetOwnerBuildComponent();
	TArray<class UMaterialInstanceDynamic*> GetOwnerAllMaterials(bool bIsBuildComponentOnly);
	EBtlEffectSizeType GetBattleUnitEffectSize();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
