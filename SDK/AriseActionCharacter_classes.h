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

// Class AriseActionCharacter.AriseActionCharacterFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAriseActionCharacterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseActionCharacterFunctionLibrary");
		return ptr;
	}


	void STATIC_SetCharacterVisibility(class AActor* InActor, bool bInNewVisibility);
	void STATIC_SetCharacterTickEnable(class AActor* InActor, bool bInNewEnable);
};


// Class AriseActionCharacter.AriseAnimInstance
// 0x00F0 (0x0560 - 0x0470)
class UAriseAnimInstance : public UASAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET
	int                                                AnimFlags;                                                // 0x0478(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AnimSysFlags;                                             // 0x047C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseKeyFrameAnim;                                         // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              DynamicsWeight;                                           // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityPower;                                             // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingPower;                                             // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAnimPhysSimSpaceType                              SimulationSpace;                                          // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpperParts;                                              // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLowerParts;                                              // 0x0492(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHairParts;                                               // 0x0493(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExtraParts;                                              // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGroudCollision;                                          // 0x0495(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x72];                                      // 0x0496(0x0072) MISSED OFFSET
	class UAchCharacterPartial*                        Partial;                                                  // 0x0508(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0510(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseAnimInstance");
		return ptr;
	}


	bool SetRootMotionSequence(const struct FName& KeyName, bool bEnable);
	bool SetRootMotionBlendspace(const struct FName& KeyName, bool bEnable);
	void SetGravityPowerWithInterpolation(float NewGravityPower, float InterpolationTime);
	void SetDynamicsWeightWithInterpolation(float NewDynamicsWeight, float InterpolationTime);
	void SetDampingPowerWithInterpolation(float NewDampingPower, float InterpolationTime);
	bool K2_IsCurrentState(const struct FString& InMachineName, const struct FString& InStateName);
	bool IsLevelSequenceControl();
	float GetLookAtViewAngle();
	float GetLookAtViewAlpha();
};


// Class AriseActionCharacter.AriseCharacterBase
// 0x0150 (0x08A0 - 0x0750)
class AAriseCharacterBase : public AASCharacterBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0750(0x0008) MISSED OFFSET
	class UAchCharacterFootTraceComponent*             FootTraceComponent;                                       // 0x0758(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAchCharacterFootstepComponent*              FootstepComponent;                                        // 0x0760(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAchCharacterFootIKComponent*                FootIKComponent;                                          // 0x0768(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAchCharacterLookAtComponent*                LookAtComponent;                                          // 0x0770(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAchCharacterFacialComponent*                FacialComponent;                                          // 0x0778(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAchCharacterVoiceComponent*                 VoiceComponent;                                           // 0x0780(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAchCharacterPoseComponent*                  PoseComponent;                                            // 0x0788(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAchCharacterEyeAnimationComponent*          EyeAnimationComponent;                                    // 0x0790(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAchCharacterLipAnimationComponent*          LipAnimationComponent;                                    // 0x0798(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAriseCharacterPhysicsComponent*             PhysicsComponent;                                         // 0x07A0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMapEnvBreathEmitterComponent*               BreathEmitterComponent;                                   // 0x07A8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAchCharacterFixTeleportComponent*           FixTeleportComponent;                                     // 0x07B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAdjustMeshToCapsule;                                     // 0x07B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07B9(0x0003) MISSED OFFSET
	float                                              bAdjustMeshToCapsuleHeightOffset;                         // 0x07BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      TearsComponent;                                           // 0x07C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSoftObjectPath                             TearsAsset;                                               // 0x07C8(0x0018)
	TMap<struct FString, struct FString>               TearsData;                                                // 0x07E0(0x0050) (ZeroConstructor)
	class UAchCharacterBuildComponent*                 CacheBuildComponent;                                      // 0x0830(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x68];                                      // 0x0838(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseCharacterBase");
		return ptr;
	}


	void SetTears(const struct FString& Type);
	void SetScalarParameterValueOnMaterials(const struct FName& ParameterName, float ParameterValue);
	void SetForceLOD(int InLevel);
	void SetCharacterVisibility(bool bInValue);
	void SetCharacterTickEnabled(bool bInValue);
	void ResetForceLOD();
	void RemoveTears();
	void ReceiveOnAnimInitialized();
	void OnUnbuildCharacter();
	void OnRebuildCharacterModel();
	void OnGetUserLoadAsset(TArray<struct FSoftObjectPath>* OutAssetReference);
	void OnBuildCharacterModelComplete();
	void OnBuildCharacter();
	void K2_SetFootComponentsEnabled(bool bEnable);
	void K2_SetAdjustMeshToCapsuleEnabled(bool bEnable);
	bool K2_IsAnimCurrentState(const struct FString& InMahcineName, const struct FString& InStateName);
	void K2_InitializeFootComponents(const struct FString& InModelID);
	struct FAchCharacterFootIKResult K2_GetFootIK(const struct FName& InSocketName);
	void K2_AdjustMeshToCapsule();
	bool IsVisibleCharacter();
	bool IsCharacterTickEnabled();
	void GetWetRatio(bool* bOutResult, float* OutRate);
	void GetWeaponID(struct FString* WeaponID);
	void GetTearsType(TArray<struct FString>* OutTypes);
	void GetModelID(struct FString* ModelID);
	struct FName GetGroundPhysicalMaterialName();
	void GetFootMaterial(struct FName* SurfaceName);
	class UAchCharacterBuildComponent* GetCachedBuildComponent();
	class UAchCharacterBoneMeshComponent* GetBoneMeshComponnt();
	TArray<struct FName> CollectAvailableLipPatternNames();
};


// Class AriseActionCharacter.AriseBuildCharacter
// 0x0060 (0x0900 - 0x08A0)
class AAriseBuildCharacter : public AAriseCharacterBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x08A0(0x0058) MISSED OFFSET
	class UAriseCharacterBuildComponent*               CharacterBuildComponent;                                  // 0x08F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseBuildCharacter");
		return ptr;
	}


	bool K2_IsBuildCharacter();
};


// Class AriseActionCharacter.AriseBuildCharacterFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAriseBuildCharacterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseBuildCharacterFunctionLibrary");
		return ptr;
	}


	struct FAchCharacterBuildParameters STATIC_MakePCBuildParameter2(EArisePartyID InPartyID, int InFlags);
	struct FAchCharacterBuildParameters STATIC_MakePCBuildParameter(EArisePartyID InPartyID);
};


// Class AriseActionCharacter.AriseBuildCharacterPawnMovementComponent
// 0x0000 (0x01A8 - 0x01A8)
class UAriseBuildCharacterPawnMovementComponent : public UFloatingPawnMovement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseBuildCharacterPawnMovementComponent");
		return ptr;
	}

};


// Class AriseActionCharacter.AriseBuildCharacterPawnBuildComponent
// 0x0000 (0x05E8 - 0x05E8)
class UAriseBuildCharacterPawnBuildComponent : public UAchScenarioCharacterBuildComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseBuildCharacterPawnBuildComponent");
		return ptr;
	}

};


// Class AriseActionCharacter.AriseBuildCharacterPawn
// 0x0028 (0x03B0 - 0x0388)
class AAriseBuildCharacterPawn : public APawn
{
public:
	class UAchCharacterBoneMeshComponent*              Mesh;                                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPawnMovementComponent*                      PawnMovement;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAriseBuildCharacterPawnBuildComponent*      CharacterBuildComponent;                                  // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseBuildCharacterPawn");
		return ptr;
	}


	void SetCollisionEnable(bool bEnable);
	void SendAnimCommand(const struct FString& Command, bool bForce);
	void OnUnbuildCharacter();
	void OnGetUserLoadAsset(TArray<struct FSoftObjectPath>* OutAssetReference);
	void OnBuildCharacter();
};


// Class AriseActionCharacter.AriseCharacterBuildComponent
// 0x0000 (0x05E0 - 0x05E0)
class UAriseCharacterBuildComponent : public UAchCharacterBuildComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseCharacterBuildComponent");
		return ptr;
	}

};


// Class AriseActionCharacter.AriseScenarioCharacterBuildComponent
// 0x0000 (0x05E8 - 0x05E8)
class UAriseScenarioCharacterBuildComponent : public UAchScenarioCharacterBuildComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseScenarioCharacterBuildComponent");
		return ptr;
	}

};


// Class AriseActionCharacter.AriseCharacterFootIKComponent
// 0x0000 (0x01E0 - 0x01E0)
class UAriseCharacterFootIKComponent : public UAchCharacterFootIKComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseCharacterFootIKComponent");
		return ptr;
	}

};


// Class AriseActionCharacter.AriseCharacterFallenShadowComponent
// 0x0020 (0x02B0 - 0x0290)
class UAriseCharacterFallenShadowComponent : public UDecalComponent
{
public:
	float                                              RangeScale;                                               // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShadowHalfSize;                                           // 0x0294(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              OffsetZ;                                                  // 0x029C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseCharacterFallenShadowComponent");
		return ptr;
	}

};


// Class AriseActionCharacter.AriseCharacterFacialComponent
// 0x0180 (0x0360 - 0x01E0)
class UAriseCharacterFacialComponent : public UAchCharacterFacialComponent
{
public:
	float                                              PoseBlendTime;                                            // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	struct FAriseCharacterFacialPose                   Eye;                                                      // 0x01E8(0x0020) (Edit, BlueprintVisible)
	struct FAriseCharacterFacialPose                   Eyelid;                                                   // 0x0208(0x0020) (Edit, BlueprintVisible)
	struct FAriseCharacterFacialPose                   Mouth;                                                    // 0x0228(0x0020) (Edit, BlueprintVisible)
	struct FAriseCharacterFacialLip                    Lip;                                                      // 0x0248(0x0020) (Edit, BlueprintVisible)
	struct FAriseCharacterFacialLookAt                 LookAt;                                                   // 0x0268(0x0010) (Edit, BlueprintVisible)
	struct FAriseCharacterFacialPose                   Eye_Highlight;                                            // 0x0278(0x0020) (Edit, BlueprintVisible)
	struct FAriseCharacterFacialPose                   IrisSize;                                                 // 0x0298(0x0020) (Edit, BlueprintVisible)
	struct FAriseCharacterFacialPose                   Emotion0;                                                 // 0x02B8(0x0020) (Edit, BlueprintVisible)
	struct FAriseCharacterFacialPose                   Emotion1;                                                 // 0x02D8(0x0020) (Edit, BlueprintVisible)
	struct FAriseCharacterFacialPose                   Wrinkle0;                                                 // 0x02F8(0x0020) (Edit, BlueprintVisible)
	struct FAriseCharacterFacialPose                   Wrinkle1;                                                 // 0x0318(0x0020) (Edit, BlueprintVisible)
	float                                              Eye_Weight;                                               // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Eyelid_Weight;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mouth_Weight;                                             // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Eye_Highlight_Weight;                                     // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IrisSize_Weight;                                          // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Emotion0_Weight;                                          // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Emotion1_Weight;                                          // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Wrinkle0_Weight;                                          // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Wrinkle1_Weight;                                          // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseCharacterFacialComponent");
		return ptr;
	}


	void SetPoseWrinkle1(int Value, float Weight);
	void SetPoseWrinkle0(int Value, float Weight);
	void SetPoseIris(int Value, float Weight);
	bool SetPoseFacialPreset(const struct FString& ID, const struct FString& Name);
	void SetPoseFacialDefault();
	void SetPoseEyelid(int Value, float Weight);
	void SetPoseEye_LookAt(float Angle, float Rate);
	void SetPoseEye_Highlight(int Value, float Weight);
	void SetPoseEmotion1(int Value, float Weight);
	void SetPoseEmotion0(int Value, float Weight);
	void SetEnableLip(bool bEnable);
};


// Class AriseActionCharacter.AriseCharacterLookAtComponent
// 0x0008 (0x0288 - 0x0280)
class UAriseCharacterLookAtComponent : public UAchCharacterLookAtComponent
{
public:
	class UAriseCharacterFacialComponent*              FacialComponent;                                          // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseCharacterLookAtComponent");
		return ptr;
	}

};


// Class AriseActionCharacter.AriseCharacterPhysicsComponent
// 0x00B8 (0x01C8 - 0x0110)
class UAriseCharacterPhysicsComponent : public UAchCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0110(0x0020) MISSED OFFSET
	bool                                               bUseKeyFrameAnim;                                         // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              DynamicsWeight;                                           // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityPower;                                             // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingPower;                                             // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAnimPhysSimSpaceType                              SimulationSpace;                                          // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0141(0x001F) MISSED OFFSET
	bool                                               bCancelTeleportMoveByBone;                                // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpperParts;                                              // 0x0161(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLowerParts;                                              // 0x0162(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHairParts;                                               // 0x0163(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExtraParts;                                              // 0x0164(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGroundCollision;                                         // 0x0165(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0166(0x0002) MISSED OFFSET
	float                                              ClothBlendWeight;                                         // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5C];                                      // 0x016C(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseCharacterPhysicsComponent");
		return ptr;
	}


	void SetUseKeyFrameAnim(bool InUseKeyFrameAnim);
	void SetUseGroudCollision(bool InGroudCollision);
	void SetSimulationSpace(EAnimPhysSimSpaceType InSimulationSpace);
	void SetGravityPowerWithInterpolation(float InGravityPower, float InterpolationTime);
	void SetGravityPower(float InGravityPower);
	void SetEnableSimulateUpperParts(bool InEnableSimulateUpperParts);
	void SetEnableSimulateLowerParts(bool InEnableSimulateLowerParts);
	void SetEnableSimulateHairParts(bool InEnableSimulateHairParts);
	void SetEnableSimulateExtraParts(bool InEnableSimulateExtraParts);
	void SetDynamicsWeightWithInterpolation(float InDynamicsWeight, float InterpolationTime);
	void SetDynamicsWeight(float InDynamicsWeight);
	void SetDampingPowerWithInterpolation(float InDampingPower, float InterpolationTime);
	void SetDampingPower(float InDampingPower);
	void SetClothBlendWeightWithInterpolation(float InClothBlendWeight, float InterpolationTime);
	void SetClothBlendWeight(float InClothBlendWeight);
	void SetCancelTeleportMoveByBone(bool bInCancelTeleportMoveByBone);
	bool IsUseKeyFrameAnim();
	bool IsUseGroudCollision();
	bool IsCancelTeleportMoveByBone();
	EAnimPhysSimSpaceType GetSimulationSpace();
	float GetGravityPower();
	float GetDynamicsWeight();
	float GetDampingPower();
	float GetClothBlendWeight();
	bool EnableSimulateUpperParts();
	bool EnableSimulateLowerParts();
	bool EnableSimulateHairParts();
	bool EnableSimulateExtraParts();
};


// Class AriseActionCharacter.AriseCharacterPoseComponent
// 0x0000 (0x0138 - 0x0138)
class UAriseCharacterPoseComponent : public UAchCharacterPoseComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseCharacterPoseComponent");
		return ptr;
	}

};


// Class AriseActionCharacter.AriseCinematicCharacter
// 0x0100 (0x09A0 - 0x08A0)
class AAriseCinematicCharacter : public AAriseCharacterBase
{
public:
	bool                                               bUseWeaponVisibilityAnimation;                            // 0x08A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAriseCinematicCharacterWeaponVisible> WeaponVisibility;                                         // 0x08A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x08A2(0x0006) MISSED OFFSET
	TArray<struct FName>                               HideWeaponBoneNames;                                      // 0x08A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FAchCharacterBuildParameters                BuildParameter;                                           // 0x08B8(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly)
	EArisePartyID                                      BuildPartyID;                                             // 0x0918(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideParameters;                                      // 0x0919(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideParameters_Weapon;                               // 0x091A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWeaponVisibilityPFPC;                                 // 0x091B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFootIK;                                            // 0x091C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceLOD0;                                               // 0x091D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableModelMarge;                                        // 0x091E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCastShadow;                                              // 0x091F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLightweight;                                             // 0x0920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateFootEnable;                                        // 0x0921(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetPhysicsOnBuild;                                     // 0x0922(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrecacheMaterialParameterNameIndices;                    // 0x0923(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStepBuild;                                               // 0x0924(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5B];                                      // 0x0925(0x005B) MISSED OFFSET
	class UAriseCharacterBuildComponent*               CharacterBuildComponent;                                  // 0x0980(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0988(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseCinematicCharacter");
		return ptr;
	}


	void SetEnableUpdateDynamics(bool bEnable);
	void STATIC_GetAllSpawnedCharacters(TArray<class AAriseCinematicCharacter*>* OutSpawnedCharacters);
};


// Class AriseActionCharacter.AriseCinematicCharacterLookAtComponent
// 0x0008 (0x0290 - 0x0288)
class UAriseCinematicCharacterLookAtComponent : public UAriseCharacterLookAtComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseCinematicCharacterLookAtComponent");
		return ptr;
	}

};


// Class AriseActionCharacter.AriseLodPreviewBoneMeshComponent
// 0x0050 (0x0D00 - 0x0CB0)
class UAriseLodPreviewBoneMeshComponent : public UAchCharacterBoneMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0CB0(0x0008) MISSED OFFSET
	int                                                CurrentRadius;                                            // 0x0CB8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	int                                                CurrentLOD;                                               // 0x0CBC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	bool                                               bShowLODInfo;                                             // 0x0CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0CC1(0x0007) MISSED OFFSET
	struct FString                                     Label;                                                    // 0x0CC8(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DefaultLodName;                                           // 0x0CD8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	float                                              DefaultLodRadius;                                         // 0x0CE8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0CEC(0x0004) MISSED OFFSET
	TArray<float>                                      DefaultLodDistance;                                       // 0x0CF0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseLodPreviewBoneMeshComponent");
		return ptr;
	}


	struct FAchCharacterLODInfo GetCurrentLODInfo(struct FColor* Color, struct FString* Name);
};


// Class AriseActionCharacter.AriseLodPreviewCharacter
// 0x0050 (0x0950 - 0x0900)
class AAriseLodPreviewCharacter : public AAriseBuildCharacter
{
public:
	TMap<struct FName, bool>                           ModelVisibility;                                          // 0x0900(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.AriseLodPreviewCharacter");
		return ptr;
	}


	void ImportFromDatabase();
	TArray<struct FString> GetModelList();
	void BuildModel(const struct FString& ModelID);
};


// Class AriseActionCharacter.ArisePhysicsAnimInstance
// 0x0000 (0x0560 - 0x0560)
class UArisePhysicsAnimInstance : public UAriseAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseActionCharacter.ArisePhysicsAnimInstance");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
