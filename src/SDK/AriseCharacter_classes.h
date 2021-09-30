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

// Class AriseCharacter.AchAnimAttacheInstance
// 0x0000 (0x0360 - 0x0360)
class UAchAnimAttacheInstance : public UAnimCustomInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchAnimAttacheInstance");
		return ptr;
	}

};


// Class AriseCharacter.AchAnimInstanceInterface
// 0x0000 (0x0028 - 0x0028)
class UAchAnimInstanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchAnimInstanceInterface");
		return ptr;
	}


	bool NotifyFacialInitialize();
	class UAchCharacterPartial* GetPartialPtr();
};


// Class AriseCharacter.AchCharacterCostumePhysicsDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterCostumePhysicsDatabase : public UXmlDatabaseBase
{
public:
	struct FAchCharacterCostumePhysicsDataCollection   Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterCostumePhysicsDatabase");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchCharacterAttachmentDatabaseObject
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterAttachmentDatabaseObject : public UXmlDatabaseBase
{
public:
	struct FAchCharacterAttachmentDatabase             Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterAttachmentDatabaseObject");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchCharacterBoneMeshComponent
// 0x00D0 (0x0CB0 - 0x0BE0)
class UAchCharacterBoneMeshComponent : public USkeletalMeshComponent
{
public:
	bool                                               bUseDistanceLOD;                                          // 0x0BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0BE1(0x0003) MISSED OFFSET
	int                                                FixedLODLevel;                                            // 0x0BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNearClip;                                                // 0x0BE8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0BE9(0x0007) MISSED OFFSET
	class USceneComponent*                             BoundingAreaComponent;                                    // 0x0BF0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0BF8(0x0058) MISSED OFFSET
	int                                                CharacterLodDatabaseIndex;                                // 0x0C50(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              BoundingRadius;                                           // 0x0C54(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x58];                                      // 0x0C58(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterBoneMeshComponent");
		return ptr;
	}


	bool K2_SetClothingPhysicsProperties(int ActorIndex, const struct FAchCharacterClothingPhysicsProperties& PhysicsProperties);
	void K2_SetChangeLOD(const struct FScriptDelegate& ChangeLOD);
	struct FAchCharacterClothingPhysicsProperties K2_GetClothingPhysicsProperties(int ActorIndex);
};


// Class AriseCharacter.AchCharacterClothingSimulationFactory
// 0x0000 (0x0028 - 0x0028)
class UAchCharacterClothingSimulationFactory : public UClothingSimulationFactoryNv
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterClothingSimulationFactory");
		return ptr;
	}

};


// Class AriseCharacter.AchCharacterSkeletalMeshComponent
// 0x0010 (0x0BF0 - 0x0BE0)
class UAchCharacterSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	class UAchCharacterBuildComponent*                 OwnerBuildComponent;                                      // 0x0BE0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BE8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterSkeletalMeshComponent");
		return ptr;
	}

};


// Class AriseCharacter.AchWeaponSkeletalMeshComponent
// 0x0010 (0x0BF0 - 0x0BE0)
class UAchWeaponSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	class UAchCharacterBuildComponent*                 OwnerBuildComponent;                                      // 0x0BE0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BE8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchWeaponSkeletalMeshComponent");
		return ptr;
	}

};


// Class AriseCharacter.AchCharacterBuildMergeMesh
// 0x0010 (0x0320 - 0x0310)
class UAchCharacterBuildMergeMesh : public USkeletalMesh
{
public:
	TArray<class USkeletalMesh*>                       ReferencedSkelMeshs;                                      // 0x0310(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterBuildMergeMesh");
		return ptr;
	}

};


// Class AriseCharacter.AchCharacterBuildComponent
// 0x04E8 (0x05E0 - 0x00F8)
class UAchCharacterBuildComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00F8(0x00B0) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBuildCharacter;                                         // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x40];                                      // 0x01B8(0x0040) MISSED OFFSET
	EAchGameScene                                      GameScene;                                                // 0x01F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01B8(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EAchCharacterBuildCullHandling                     CullHandling;                                             // 0x01FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCulling;                                           // 0x01FD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x01FE(0x0002) MISSED OFFSET
	int                                                LoadModelPriority;                                        // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LoadFacialPriority;                                       // 0x0204(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableModelMarge;                                        // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseModelMarge;                                           // 0x0209(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x020A(0x0006) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              BaseComponents;                                           // 0x0210(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UMeshComponent*>                      ExtensionComponents;                                      // 0x0220(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FAchCharacterWeaponComponentDesc>    WeaponComponentDescs;                                     // 0x0230(0x0010) (ZeroConstructor)
	TArray<class USkeletalMeshComponent*>              HairComponents;                                           // 0x0240(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UParticleSystemComponent*>            EffectComponents;                                         // 0x0250(0x0010) (ExportObject, ZeroConstructor)
	TArray<class USceneComponent*>                     AttachmentComponents;                                     // 0x0260(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UMeshComponent*>                      GadgetComponents;                                         // 0x0270(0x0010) (ExportObject, ZeroConstructor)
	class UBoxComponent*                               FloorForClothComponent;                                   // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            VariationMaterials;                                       // 0x0288(0x0010) (ZeroConstructor, Transient)
	struct FAchCharacterBuildComponent_CharacterDesc   CharacterDesc;                                            // 0x0298(0x01A0)
	unsigned char                                      UnknownData05[0x88];                                      // 0x0438(0x0088) MISSED OFFSET
	bool                                               bBuilded;                                                 // 0x04C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x11F];                                     // 0x04C1(0x011F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterBuildComponent");
		return ptr;
	}


	void SetCulling(bool bEnable);
	void SetCullHandling(EAchCharacterBuildCullHandling InCullHandling);
	bool SetComponentVisibility(TEnumAsByte<EAchCharacterBuildComponent> InComponentType, const struct FName& ComponentName, bool bVisibility);
	void SetAttachment(EAttachmentNum Num, const struct FString& ModelID);
	void OnBuildEvent__DelegateSignature();
	void K2_SetWeaponVisibility_Mount(bool bNewVisibility);
	void K2_SetWeaponVisibility_Bone(const struct FName& InBoneName, bool bNewVisibility);
	void K2_SetWeaponVisibility(bool bNewVisibility);
	bool K2_SetComponentVisibilityFind(const struct FName& ComponentName, bool bVisibility);
	bool K2_RebuildWeapon2(const struct FString& InNewWeaponID, int InAssetLoadingPriority);
	bool K2_RebuildWeapon(const struct FString& InNewWeaponID);
	bool K2_IsMergingModel();
	bool K2_IsFacialLoadCompleted();
	bool K2_IsBuilded();
	bool K2_GetWeaponVisibility();
	struct FAchCharacterBuildParameters K2_GetBuildParameter();
	void K2_GetBuildComponentBoundingSphere(struct FVector* OutOrigin, float* OutRadius);
	void K2_GetBuildComponentArray(TEnumAsByte<EAchCharacterBuildComponent> InComponentType, TArray<class USceneComponent*>* OutComponentArray);
	class USceneComponent* K2_GetBuildComponentAll(const struct FName& InComponentName);
	class USceneComponent* K2_GetBuildComponent(const struct FName& InComponentName, TEnumAsByte<EAchCharacterBuildComponent> InComponentType);
	bool K2_BuildCharacter(const struct FAchCharacterBuildParameters& Parameters, bool bBlock, bool bTransient, bool bCulling, bool bDelayFacialLoad);
	void GetGadgetComponents(TArray<class UMeshComponent*>* Components);
	void GetAttachmentComponents(TArray<class USceneComponent*>* Components);
	class USceneComponent* GetAttachmentComponent(EAttachmentNum Num);
	void DebugCommand_RebuildWeapon();
	void DebugCommand_RebuildModel();
	void DebugCommand_RebuildHair();
	void DebugCommand_RebuildAttachment();
};


// Class AriseCharacter.AchCharacterComponent
// 0x0018 (0x0110 - 0x00F8)
class UAchCharacterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
	bool                                               bUpdateEnable;                                            // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterComponent");
		return ptr;
	}

};


// Class AriseCharacter.AchCharacterDummyMeshReferenceDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterDummyMeshReferenceDatabase : public UXmlDatabaseBase
{
public:
	struct FAchCharacterDummyMeshReferenceList         Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterDummyMeshReferenceDatabase");
		return ptr;
	}

};


// Class AriseCharacter.AchCharacterEventPosePresetDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterEventPosePresetDatabase : public UXmlDatabaseBase
{
public:
	struct FAchCharacterEventPosePresetDataList        Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterEventPosePresetDatabase");
		return ptr;
	}

};


// Class AriseCharacter.AchCharacterEyeAnimationComponent
// 0x0038 (0x0148 - 0x0110)
class UAchCharacterEyeAnimationComponent : public UAchCharacterComponent
{
public:
	struct FAriseAutoEyeBlinkParameter                 AutoEyeBlinkParameter;                                    // 0x0110(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterEyeAnimationComponent");
		return ptr;
	}


	void StopAutoBlinkEyes();
	void RequestOpenEyes(float TransitionTime);
	void RequestCloseEyes(float TransitionTime);
	void RequestBlinkEyes(float CloseTransitionTime, float OpenTransitionTime);
	void PlayAutoBlinkEyes(bool bOpen);
	void AutoBlinkRestart();
	void AutoBlinkOff();
};


// Class AriseCharacter.AchCharacterFacialAnimationDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterFacialAnimationDatabase : public UXmlDatabaseBase
{
public:
	struct FAchCharacterFacialAnimationDataList        Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterFacialAnimationDatabase");
		return ptr;
	}


	bool IsEnableIndex_Data(int Index);
};


// Class AriseCharacter.AchCharacterFacialComponent
// 0x00D0 (0x01E0 - 0x0110)
class UAchCharacterFacialComponent : public UAchCharacterComponent
{
public:
	bool                                               bEnableFacial;                                            // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLip;                                               // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAchFacialAutoLip>                     AutoLipType;                                              // 0x0112(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFacialFlagOverrideCondition>          EnableFacialOverrideCondition;                            // 0x0113(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFacialOverride;                                    // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFacialFlagOverrideCondition>          EnableLipOverrideCondition;                               // 0x0115(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLipOverride;                                       // 0x0116(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFacialFlagOverrideCondition>          AutoLipTypeOverrideCondition;                             // 0x0117(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAchFacialAutoLip>                     AutoLipTypeOverride;                                      // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceApplyLip;                                           // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	class UAchCharacterBoneMeshComponent*              BoneMesh;                                                 // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAchCharacterPartial>         Partial;                                                  // 0x0128(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAchCharacterVoiceComponent>  VoiceComponent;                                           // 0x0130(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAchCharacterLipAnimationComponent> LipAnimationComponent;                                    // 0x0138(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0140(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterFacialComponent");
		return ptr;
	}


	void K2_SetWeight(TEnumAsByte<EAnimationOperationType> InType, float InWeight);
	void K2_SetPose(TEnumAsByte<EAnimationOperationType> InType, const struct FString& InPoseName, float InBlendTime);
	void K2_SetLipWeightScale(float InWeightScale);
	void K2_SetLipShape(TEnumAsByte<EAchFacialLipShape> InLipShape);
	void K2_SetLipPatternBlendTime(float InBlendTime);
	void K2_SetLipPattern(const struct FName& InLipPattern);
	void K2_SetBlendTime(TEnumAsByte<EAnimationOperationType> InType, float InBlendTime);
	void K2_SetBlendRatio(TEnumAsByte<EAnimationOperationType> InType, float InRatio);
	void K2_SetApplyFlag(TEnumAsByte<EAnimationOperationType> InType, bool bInApply);
	void K2_SetAllowPostFacial(TEnumAsByte<EAnimationOperationType> InType, bool bAllow);
	void K2_SetAdditiveFlag(TEnumAsByte<EAnimationOperationType> InType, bool bInAdditive);
};


// Class AriseCharacter.AchCharacterFacialPresetDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterFacialPresetDatabase : public UXmlDatabaseBase
{
public:
	struct FAchCharacterFacialPresetDataList           Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterFacialPresetDatabase");
		return ptr;
	}

};


// Class AriseCharacter.AchCharacterFixTeleportComponent
// 0x00B0 (0x01C0 - 0x0110)
class UAchCharacterFixTeleportComponent : public UAchCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0110(0x0040) MISSED OFFSET
	float                                              TeleportDistanceThreshold;                                // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeleportRotationThreshold;                                // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0158(0x0008) MISSED OFFSET
	struct FString                                     SocketNameString;                                         // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	struct FName                                       SocketName;                                               // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      BoundBoneComponent;                                       // 0x0178(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SimulationTimesOnResetForCloth;                           // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SimulationTimesOnResetForAnimDynamics;                    // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleported;                                              // 0x0188(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableCheck;                                             // 0x0189(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetOnTeleport;                                         // 0x018A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTeleport;                                           // 0x018B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceIdleSimulate;                                       // 0x018C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x33];                                      // 0x018D(0x0033) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterFixTeleportComponent");
		return ptr;
	}


	void SetTeleportRotationThreshold(float InThreshold);
	void SetTeleportDistanceThreshold(float InThreshold);
	void SetSocketNameString(const struct FString& InNewName);
	void SetSocketName(const struct FName& InSocketName);
	void SetSimulationTimesOnResetForClothForSkip(int NewSimulationTimesOnReset);
	void SetSimulationTimesOnResetForCloth(int NewSimulationTimesOnReset);
	void SetSimulationTimesOnResetForAnimDynamicsForSkip(int NewSimulationTimesOnReset);
	void SetSimulationTimesOnResetForAnimDynamics(int NewSimulationTimesOnReset);
	void SetForceTeleport(bool InForceTeleport);
	void SetForceIdleSimulate(bool InForceIdleSimulate);
	void ResetClothSimulationAndAnimDynamics();
	void RequestForceTeleport();
	float GetTeleportRotationThreshold();
	float GetTeleportDistanceThreshold();
	struct FName GetSocketName();
	int GetSimulationTimesOnResetForClothForSkipFromDB();
	int GetSimulationTimesOnResetForClothForSkip();
	int GetSimulationTimesOnResetForCloth();
	int GetSimulationTimesOnResetForAnimDynamicsForSkipFromDB();
	int GetSimulationTimesOnResetForAnimDynamicsForSkip();
	int GetSimulationTimesOnResetForAnimDynamics();
};


// Class AriseCharacter.AchCharacterFootIKComponent
// 0x00D0 (0x01E0 - 0x0110)
class UAchCharacterFootIKComponent : public UAchCharacterComponent
{
public:
	float                                              InterpHeightSpeed;                                        // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LimitRoll;                                                // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LimitPitch;                                               // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	float                                              HeightOffsetLimit;                                        // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeelHeight;                                               // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0128(0x00A0) MISSED OFFSET
	float                                              InterpHeightOffset;                                       // 0x01C8(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	class UAchCharacterBoneMeshComponent*              BoneMesh;                                                 // 0x01D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAchCharacterFootTraceComponent*             TraceComponent;                                           // 0x01D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterFootIKComponent");
		return ptr;
	}


	void K2_Update(float DeltaTime, class UAchCharacterBoneMeshComponent* InMesh, class UAchCharacterFootTraceComponent* InTraceComponent);
	void K2_Initialize(const struct FString& InModelID);
	void K2_FindResult(const struct FName& InSocketName, bool* IsFound, struct FAchCharacterFootIKResult* OutResult);
};


// Class AriseCharacter.AchCharacterFootIKDatabaseObject
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterFootIKDatabaseObject : public UXmlDatabaseBase
{
public:
	struct FAchCharacterFootIKDatabase                 Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterFootIKDatabaseObject");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchCharacterFootmarkComponent
// 0x0010 (0x0108 - 0x00F8)
class UAchCharacterFootmarkComponent : public UActorComponent
{
public:
	TArray<struct FAchCharacterSpawnedFootstepParams>  SpawnedFootstepParams;                                    // 0x00F8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterFootmarkComponent");
		return ptr;
	}

};


// Class AriseCharacter.AchCharacterFootstepEventInterface
// 0x0000 (0x0028 - 0x0028)
class UAchCharacterFootstepEventInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterFootstepEventInterface");
		return ptr;
	}


	void OnFootstepRideOn(const struct FAchCharacterFootstepEventArgs& EventArgs);
	void OnFootstepRideOff(const struct FAchCharacterFootstepEventArgs& EventArgs);
};


// Class AriseCharacter.AchCharacterFootstepComponent
// 0x0038 (0x0148 - 0x0110)
class UAchCharacterFootstepComponent : public UAchCharacterComponent
{
public:
	float                                              HeelAngle;                                                // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0114(0x0024) MISSED OFFSET
	class UAchCharacterBoneMeshComponent*              BoneMesh;                                                 // 0x0138(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAchCharacterFootTraceComponent*             TraceComponent;                                           // 0x0140(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterFootstepComponent");
		return ptr;
	}


	void K2_Update(class UAchCharacterBoneMeshComponent* InMesh, class UAchCharacterFootTraceComponent* InTraceComponent, class UObject* InEventReceiveObject);
	void K2_Initialize(const struct FString& InModelID);
};


// Class AriseCharacter.AchCharacterFootstepDatabaseObject
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterFootstepDatabaseObject : public UXmlDatabaseBase
{
public:
	struct FAchCharacterFootstepDatabase               Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterFootstepDatabaseObject");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchCharacterFootTraceComponent
// 0x00C0 (0x01D0 - 0x0110)
class UAchCharacterFootTraceComponent : public UAchCharacterComponent
{
public:
	float                                              TopOffset;                                                // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BottomOffset;                                             // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepCollisionRadius;                                     // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class UAchCharacterBoneMeshComponent*              BoneMesh;                                                 // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0128(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterFootTraceComponent");
		return ptr;
	}


	void K2_Update(class UAchCharacterBoneMeshComponent* InMesh);
	void K2_RegisterFromCharacterDatabase(const struct FString& InModelID);
	void K2_FindResult(const struct FName& InSocketName, bool* IsFound, struct FAchCharacterFootTraceResult* OutResult);
};


// Class AriseCharacter.AchCharacterGadgetDatabaseObject
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterGadgetDatabaseObject : public UXmlDatabaseBase
{
public:
	struct FAchCharacterGadgetDatabase                 Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterGadgetDatabaseObject");
		return ptr;
	}

};


// Class AriseCharacter.AchCharacterHairDatabaseObject
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterHairDatabaseObject : public UXmlDatabaseBase
{
public:
	struct FAchCharacterHairDatabase                   Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterHairDatabaseObject");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchCharacterLipAnimationComponent
// 0x0070 (0x0180 - 0x0110)
class UAchCharacterLipAnimationComponent : public UAchCharacterComponent
{
public:
	struct FAriseAutoFakeLipSyncParameter              AutoFakeLipSyncParameter;                                 // 0x0110(0x0058) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterLipAnimationComponent");
		return ptr;
	}


	void StopAutoFaceLipSync();
	void SetLipShape(EAriseFakeLipShapeFlags Flag, bool bEnable, float Weight);
	void SetLipPattern(const struct FName& PatternName, float Weight, float BlendTime);
	void RequestSyncLip(float CloseTransitionTime, float OpenTransitionTime);
	void RequestOpenLip(float TransitionTime, TEnumAsByte<EAchFacialLipShape> Shape, float Weight);
	void RequestCloseLip(float TransitionTime);
	void PlayAutoFaceLipSync(float LimitTime);
};


// Class AriseCharacter.AchCharacterLipAnimationDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterLipAnimationDatabase : public UXmlDatabaseBase
{
public:
	struct FAchCharacterLipAnimationDataList           Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterLipAnimationDatabase");
		return ptr;
	}

};


// Class AriseCharacter.AchCharacterLODDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterLODDatabase : public UXmlDatabaseBase
{
public:
	struct FAchCharacterLODDataCollection              Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterLODDatabase");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchCharacterLookAtComponent
// 0x0170 (0x0280 - 0x0110)
class UAchCharacterLookAtComponent : public UAchCharacterComponent
{
public:
	bool                                               bEnable;                                                  // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookAtTarget;                                         // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableEyeRotation;                                       // 0x0112(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHeadRotation;                                      // 0x0113(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableNeckRotation;                                      // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSpineRotation;                                     // 0x0115(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	float                                              EyeRotationSpeed;                                         // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeckRotationSpeed;                                        // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtViewAngle;                                          // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtViewAlpha;                                          // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtViewBlendTime;                                      // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtHeadBlendTime;                                      // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtNeckBlendTime;                                      // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtSpineBlendTime;                                     // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtViewClamp;                                          // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtInterpolationTime;                                  // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtInterpolationTriggerThreashold;                     // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtInterpolationSpeed;                                 // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LookAtExclusionChainBone;                                 // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               LookAtOverrideUseLookUpAxis;                              // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     LookAtTarget;                                             // 0x0168(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LookAtTargetActor;                                        // 0x0174(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	struct FName                                       LookAtTargetBoneName;                                     // 0x0180(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEnableFaceToTarget;                                      // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELookAtClampBase                                   ClampBase;                                                // 0x0189(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELookAtTargetLine                                  TargetLine;                                               // 0x018A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x018B(0x0001) MISSED OFFSET
	float                                              RotationInterpOutAngle;                                   // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpOutAlpha;                                   // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpOutExp;                                     // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtViewBlendWeight;                                    // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xCC];                                      // 0x019C(0x00CC) MISSED OFFSET
	class UAchCharacterBoneMeshComponent*              BoneMesh;                                                 // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0270(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterLookAtComponent");
		return ptr;
	}


	void SetTargetLine(ELookAtTargetLine InTargetLine);
	void SetRotationInterpOut(float InAngle, float InAlpha, float InExp);
	void SetNeckRotationSpeed(float Speed);
	void SetLookAtViewClamp(float InValue);
	void SetLookAtViewBlendTime(float InBlendTime);
	void SetLookAtSpineNextBlendTime(float InBlendTime);
	void SetLookAtSpineBlendTime(float InBlendTime);
	void SetLookAtNeckNextBlendTime(float InBlendTime);
	void SetLookAtNeckBlendTime(float InBlendTime);
	void SetLookAtHeadNextBlendTime(float InBlendTime);
	void SetLookAtHeadBlendTime(float InBlendTime);
	void SetEyeRotationSpeed(float Speed);
	void SetEnableSpineRotation(bool bInEnable);
	void SetEnableNeckRotation(bool bInEnable);
	void SetEnableHeadRotation(bool bInEnable);
	void SetEnableFaceToTarget(bool bInEnable);
	void SetEnableEyeRotation(bool bInEnable);
	void SetEnable(bool bInEnable);
	void SetClampBase(ELookAtClampBase InClampBase);
	void RequestImmediateLookAtOnlyEye();
	void RequestImmediateLookAt();
	void K2_Update(float DeltaTime, class UAchCharacterBoneMeshComponent* InMesh);
	void K2_SetLookAtLocation(const struct FVector& InLocation);
	void K2_Initialize(const struct FString& InModelID);
};


// Class AriseCharacter.AchCharacterLookAtDatabaseObject
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterLookAtDatabaseObject : public UXmlDatabaseBase
{
public:
	struct FAchCharacterLookAtDatabase                 Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterLookAtDatabaseObject");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchCharacterModelDatabaseObject
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterModelDatabaseObject : public UXmlDatabaseBase
{
public:
	struct FAchCharacterModelDatabase                  Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterModelDatabaseObject");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchCharacterPartial
// 0x0180 (0x01A8 - 0x0028)
class UAchCharacterPartial : public UObject
{
public:
	struct FAchFacialAnimParam                         FacialAnimParam;                                          // 0x0028(0x0098) (Edit)
	struct FAriseAnimProperty_LegIK                    LegIK;                                                    // 0x00C0(0x0058) (Edit)
	struct FAriseAnimProperty_LookAt                   LookAt;                                                   // 0x0118(0x002C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	struct FAriseAnimProperty_Pose                     Pose;                                                     // 0x0148(0x0058) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterPartial");
		return ptr;
	}


	void SetLookAtLocation(const struct FVector& InLocation);
	void SetLipWeightScale(float InWeightScale);
	void SetLegIKTranslation(const struct FName& IKBoneName, const struct FVector& InTranslation);
	void SetLegIKRotation(const struct FName& IKBoneName, const struct FRotator& InRotation);
	void SetFacialWeight(TEnumAsByte<EAnimationOperationType> InType, float InWeight);
	void SetFacialPoseBlendTime(TEnumAsByte<EAnimationOperationType> InType, float InPoseBlendTime);
	void SetFacialPose(TEnumAsByte<EAnimationOperationType> InType, const struct FString& InPoseName, float InBlendTime);
	void SetFacialLipShape(TEnumAsByte<EAchFacialLipShape> InLipShape);
	void SetFacialLipPatternBlendTime(float InBlendTime);
	void SetFacialLipPattern(const struct FName& InPattern);
	void SetFacialBlendTime(TEnumAsByte<EAnimationOperationType> InType, float InBlendTime);
	void SetFacialBlendRatio(TEnumAsByte<EAnimationOperationType> InType, float InRatio);
	void SetFacialApplyFlag(TEnumAsByte<EAnimationOperationType> InType, bool bInApply);
	void SetFacialAdditiveFlag(TEnumAsByte<EAnimationOperationType> InType, bool bInAdditive);
	void SetAllowPostFacial(TEnumAsByte<EAnimationOperationType> InType, bool bAllow);
	bool GetLegIKTransform(const struct FName& IKBoneName, struct FTransform* Result);
};


// Class AriseCharacter.AchCharacterPhysicsDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterPhysicsDatabase : public UXmlDatabaseBase
{
public:
	struct FAchCharacterPhysicsDataCollection          Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterPhysicsDatabase");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchCharacterPoseComponent
// 0x0028 (0x0138 - 0x0110)
class UAchCharacterPoseComponent : public UAchCharacterComponent
{
public:
	bool                                               bEnable;                                                  // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<struct FAchCharacterPose_BoneRotator>       BoneRotators;                                             // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUpdateAlways;                                            // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	class UAchCharacterBoneMeshComponent*              BoneMesh;                                                 // 0x0130(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterPoseComponent");
		return ptr;
	}

};


// Class AriseCharacter.AchCharacterTearsDatabaseObject
// 0x0010 (0x01C8 - 0x01B8)
class UAchCharacterTearsDatabaseObject : public UXmlDatabaseBase
{
public:
	struct FAchCharacterTearsDatabase                  Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterTearsDatabaseObject");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchCharacterVoiceComponent
// 0x0100 (0x0210 - 0x0110)
class UAchCharacterVoiceComponent : public UAchCharacterComponent
{
public:
	float                                              LipWeight;                                                // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET
	class UCurveFloat*                                 LipCurve;                                                 // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC8];                                      // 0x0148(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchCharacterVoiceComponent");
		return ptr;
	}


	void StopVoice();
	void SetLipSync(bool bInLipSyncUsed);
	void SeekVoice(int PositionMs);
	void ResumeVoice();
	bool PlayVoice(const struct FString& Label);
	void PauseVoice();
	bool IsPlaying();
	bool IsLipSyncUsed();
	struct FString GetVoiceLabel();
};


// Class AriseCharacter.AchDatabaseLibrary
// 0x0000 (0x0028 - 0x0028)
class UAchDatabaseLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchDatabaseLibrary");
		return ptr;
	}


	class UAchWeaponModelDatabaseObject* STATIC_GetWeaponModelDatabaseObject_Debug();
	class UAchWeaponModelDatabaseObject* STATIC_GetWeaponModelDatabaseObject();
	class UAchCharacterTearsDatabaseObject* STATIC_GetTearsModelDatabaseObject_Debug();
	class UAchCharacterTearsDatabaseObject* STATIC_GetTearsModelDatabaseObject();
	class UStringDictionaryDatabase* STATIC_GetScenarioCharacterStringDictionaryObject_Debug();
	class UStringDictionaryDatabase* STATIC_GetScenarioCharacterStringDictionaryObject();
	class UAchScenarioCharacterDatabaseObject* STATIC_GetScenarioCharacterDatabaseObject_Debug();
	class UAchScenarioCharacterDatabaseObject* STATIC_GetScenarioCharacterDatabaseObject();
	class UAchCharacterHairDatabaseObject* STATIC_GetHairModelDatabaseObject_Debug();
	class UAchCharacterHairDatabaseObject* STATIC_GetHairModelDatabaseObject();
	class UAchCharacterGadgetDatabaseObject* STATIC_GetGadgetModelDatabaseObject_Debug2();
	class UDataTable* STATIC_GetGadgetModelDatabaseObject_Debug();
	class UAchCharacterGadgetDatabaseObject* STATIC_GetGadgetModelDatabaseObject2();
	class UDataTable* STATIC_GetGadgetModelDatabaseObject();
	class UAchEffectModelDatabaseObject* STATIC_GetEffectModelDatabaseObject_Debug();
	class UAchEffectModelDatabaseObject* STATIC_GetEffectModelDatabaseObject();
	class UAchCharacterPhysicsDatabase* STATIC_GetCharacterPhysicsDatabaseObject();
	class UAchCharacterPhysicsDatabase* STATIC_GetCharacterPhysicsDatabaseForSkipInEventObject();
	class UAchCharacterModelDatabaseObject* STATIC_GetCharacterModelDatabaseObject_Debug();
	class UAchCharacterModelDatabaseObject* STATIC_GetCharacterModelDatabaseObject();
	class UAchCharacterLookAtDatabaseObject* STATIC_GetCharacterLookAtDatabaseObject_Debug();
	class UAchCharacterLookAtDatabaseObject* STATIC_GetCharacterLookAtDatabaseObject();
	class UAchCharacterLODDatabase* STATIC_GetCharacterLODDatabase();
	class UDataTable* STATIC_GetCharacterLipPatternIndexDatabaseObject();
	class UAchCharacterLipAnimationDatabase* STATIC_GetCharacterLipAnimationDatabase();
	class UAchCharacterFootstepDatabaseObject* STATIC_GetCharacterFootstepDatabaseObject_Debug();
	class UAchCharacterFootstepDatabaseObject* STATIC_GetCharacterFootstepDatabaseObject();
	class UAchCharacterFootIKDatabaseObject* STATIC_GetCharacterFootIKDatabaseObject_Debug();
	class UAchCharacterFootIKDatabaseObject* STATIC_GetCharacterFootIKDatabaseObject();
	class UDataTable* STATIC_GetCharacterFacialInfluenceBoneNamesDatabaseObject();
	class UDataTable* STATIC_GetCharacterFacialAnimationWithoutPoseAssetDatabase();
	class UAchCharacterFacialAnimationDatabase* STATIC_GetCharacterFacialAnimationDatabase();
	class UAchCharacterDummyMeshReferenceDatabase* STATIC_GetCharacterDummyMeshReferenceDatabase();
	class UAchCharacterCostumePhysicsDatabase* STATIC_GetCharacterCostumePhysicsDatabaseObject();
	class UAchCharacterAttachmentDatabaseObject* STATIC_GetAttachmentModelDatabaseObject_Debug();
	class UAchCharacterAttachmentDatabaseObject* STATIC_GetAttachmentModelDatabaseObject();
	bool STATIC_FindScenarioCharacterDatabase(const struct FString& InCharacterID, struct FAchScenarioCharacterData* OutData);
};


// Class AriseCharacter.AchEffectModelDatabaseObject
// 0x0010 (0x01C8 - 0x01B8)
class UAchEffectModelDatabaseObject : public UXmlDatabaseBase
{
public:
	struct FAchEffectModelDatabase                     Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchEffectModelDatabaseObject");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchEventPosePresetFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAchEventPosePresetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchEventPosePresetFunctionLibrary");
		return ptr;
	}


	void STATIC_GetPoseNameList(const struct FString& charcterID, TArray<struct FString>* PresetList);
	bool STATIC_GetEventPose(const struct FString& charcterID, const struct FString& PresetName, struct FAchCharacterEventPosePresetData* PosePresetData);
};


// Class AriseCharacter.AchFacialPresetFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAchFacialPresetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchFacialPresetFunctionLibrary");
		return ptr;
	}


	bool STATIC_GetFacialPoseFull(const struct FString& charcterID, const struct FString& FacialName, struct FAchCharacterFacialPresetData* oFacial);
	bool STATIC_GetFacialPose(const struct FString& charcterID, const struct FString& FacialName, struct FString* oEyePose, struct FString* oMouthPose);
	void STATIC_GetFacialNameList(const struct FString& charcterID, TArray<struct FString>* PresetList);
};


// Class AriseCharacter.FacialPresetDataCache
// 0x0020 (0x0048 - 0x0028)
class UFacialPresetDataCache : public UObject
{
public:
	TArray<struct FString>                             FacialPresetNames;                                        // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<class UObject*>                             pFacialPresetDatabases;                                   // 0x0038(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.FacialPresetDataCache");
		return ptr;
	}

};


// Class AriseCharacter.AchBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAchBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_UnloadAssetsForCharacterBuild(const struct FAchCharacterBuildLoadRequestHandle& Handle);
	struct FAchCharacterBuildLoadRequestHandle STATIC_LoadAssetsForCharacterBuild(const struct FAchCharacterBuildParameters& Parameters);
	bool STATIC_IsLoadedAssetsForCharacterBuild(const struct FAchCharacterBuildLoadRequestHandle& Handle);
};


// Class AriseCharacter.AchProjectSettings
// 0x0450 (0x0478 - 0x0028)
class UAchProjectSettings : public UObject
{
public:
	struct FSoftObjectPath                             CharacterModelDatabaseAssetReference;                     // 0x0028(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterModelDatabaseAssetReference_Debug;               // 0x0040(0x0018) (Edit, Config)
	struct FSoftObjectPath                             WeaponModelDatabaseAssetReference;                        // 0x0058(0x0018) (Edit, Config)
	struct FSoftObjectPath                             WeaponModelDatabaseAssetReference_Debug;                  // 0x0070(0x0018) (Edit, Config)
	struct FSoftObjectPath                             EffectModelDatabaseAssetReference;                        // 0x0088(0x0018) (Edit, Config)
	struct FSoftObjectPath                             EffectModelDatabaseAssetReference_Debug;                  // 0x00A0(0x0018) (Edit, Config)
	struct FSoftObjectPath                             HairModelDatabaseAssetReference;                          // 0x00B8(0x0018) (Edit, Config)
	struct FSoftObjectPath                             HairModelDatabaseAssetReference_Debug;                    // 0x00D0(0x0018) (Edit, Config)
	struct FSoftObjectPath                             TearsModelDatabaseAssetReference;                         // 0x00E8(0x0018) (Edit, Config)
	struct FSoftObjectPath                             TearsModelDatabaseAssetReference_Debug;                   // 0x0100(0x0018) (Edit, Config)
	struct FSoftObjectPath                             AttachmentModelDatabaseAssetReference;                    // 0x0118(0x0018) (Edit, Config)
	struct FSoftObjectPath                             AttachmentModelDatabaseAssetReference_Debug;              // 0x0130(0x0018) (Edit, Config)
	struct FSoftObjectPath                             GadgetModelDatabaseAssetReference;                        // 0x0148(0x0018) (Edit, Config)
	struct FSoftObjectPath                             GadgetModelDatabaseAssetReference_Debug;                  // 0x0160(0x0018) (Edit, Config)
	struct FSoftObjectPath                             GadgetModelDatabaseAssetReference2;                       // 0x0178(0x0018) (Edit, Config)
	struct FSoftObjectPath                             GadgetModelDatabaseAssetReference_Debug2;                 // 0x0190(0x0018) (Edit, Config)
	struct FSoftObjectPath                             ScenarioCharacterDatabaseAssetReference;                  // 0x01A8(0x0018) (Edit, Config)
	struct FSoftObjectPath                             ScenarioCharacterDatabaseAssetReference_Debug;            // 0x01C0(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterFootstepDatabaseAssetReference;                  // 0x01D8(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterFootstepDatabaseAssetReference_Debug;            // 0x01F0(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterFootIKDatabaseAssetReference;                    // 0x0208(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterFootIKDatabaseAssetReference_Debug;              // 0x0220(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterLookAtDatabaseAssetReference;                    // 0x0238(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterLookAtDatabaseAssetReference_Debug;              // 0x0250(0x0018) (Edit, Config)
	struct FString                                     CharacterFacialAnimationXmlDBPath;                        // 0x0268(0x0010) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             CharacterFacialAnimationDatabaseAssetReference;           // 0x0278(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterFacialAnimationWithoutPoseAssetDatabaseAssetReference;// 0x0290(0x0018) (Edit, Config)
	struct FString                                     CharacterFacialPresetDatabaseRootPath;                    // 0x02A8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             CharacterFacialPresetDatabaseResidentCharacterIDs;        // 0x02B8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     CharacterEventPosePresetDatabaseRootPath;                 // 0x02C8(0x0010) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             CharacterLipAnimationDatabaseAssetReference;              // 0x02D8(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterDummyMeshReferenceDatabaseAssetReference;        // 0x02F0(0x0018) (Edit, Config)
	struct FSoftObjectPath                             ScenarioCharacterStringDictionaryAssetReference;          // 0x0308(0x0018) (Edit, Config)
	struct FSoftObjectPath                             ScenarioCharacterStringDictionaryAssetReference_Debug;    // 0x0320(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterFacialInfluenceBoneNamesDatabaseAssetReference;  // 0x0338(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterPhysicsDatabaseAssetReference;                   // 0x0350(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterPhysicsDatabaseForSkipInEventAssetReference;     // 0x0368(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterCostumePhysicsDatabaseAssetReference;            // 0x0380(0x0018) (Edit, Config)
	struct FSoftObjectPath                             CharacterLipPatternIndexDatabaseAssetReference;           // 0x0398(0x0018) (Edit, Config)
	TArray<struct FString>                             LookAtAnimSequenceIndex;                                  // 0x03B0(0x0010) (Edit, ZeroConstructor, Config)
	float                                              DefaultLookAtBodyBlendTime;                               // 0x03C0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	TArray<struct FString>                             LipAnimSequenceIndex;                                     // 0x03C8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     LipCurveDirectoryPath;                                    // 0x03D8(0x0010) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             CharacterLODDatabasePath;                                 // 0x03E8(0x0018) (Edit, Config)
	TArray<struct FAchDefaultCharacterLOD>             DefaultCharacterLODs;                                     // 0x0400(0x0010) (Edit, ZeroConstructor, Config)
	TEnumAsByte<EAchCharacterUpdateRateOptimization>   UpdateRateOptimizationMode;                               // 0x0410(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	TArray<struct FAchCharacterUpdateRateOptimizationDistance> UpdateRateOptimizationDistanceTable;                      // 0x0418(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FAchCharacterUpdateRateOptimizationLOD> UpdateRateOptimizationLODTable;                           // 0x0428(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bEnableMiniMapDrawSymbol;                                 // 0x0438(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableEncountSymbol_URO;                                 // 0x0439(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x043A(0x0006) MISSED OFFSET
	TArray<struct FAchCharacterUpdateRateOptimizationDistance> EncountSymbol_UROTable;                                   // 0x0440(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bEnableDrawSymbolEffect;                                  // 0x0450(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	float                                              DrawSymbolEffectHorizon;                                  // 0x0454(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DrawSymbolEffectVertical;                                 // 0x0458(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             FallenShadowMaterialPath;                                 // 0x0460(0x0018) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchProjectSettings");
		return ptr;
	}

};


// Class AriseCharacter.AchScenarioCharacterBuildComponent
// 0x0008 (0x05E8 - 0x05E0)
class UAchScenarioCharacterBuildComponent : public UAchCharacterBuildComponent
{
public:
	TEnumAsByte<EAchScenarioCharacterGadgetMode>       GadgetMode;                                               // 0x05E0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchScenarioCharacterBuildComponent");
		return ptr;
	}


	void K2_SetGadgetMode(TEnumAsByte<EAchScenarioCharacterGadgetMode> InGadgetMode);
	bool K2_BuildScenarioCharacter(const struct FAchScenarioCharacterBuildParameters& Parameters, bool bBlock, bool bTransient, bool bCulling, bool bDelayFacialLoad, int AssetLoadPriority);
};


// Class AriseCharacter.AchScenarioCharacterDatabaseObject
// 0x0010 (0x01C8 - 0x01B8)
class UAchScenarioCharacterDatabaseObject : public UXmlDatabaseBase
{
public:
	struct FAchScenarioCharacterDatabase               Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchScenarioCharacterDatabaseObject");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AchWeaponModelDatabaseObject
// 0x0010 (0x01C8 - 0x01B8)
class UAchWeaponModelDatabaseObject : public UXmlDatabaseBase
{
public:
	struct FAchWeaponModelDatabase                     Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AchWeaponModelDatabaseObject");
		return ptr;
	}


	bool IsEnableIndex_Record(int Index);
};


// Class AriseCharacter.AriseAnimNotifyStateOnTeleport
// 0x0000 (0x0030 - 0x0030)
class UAriseAnimNotifyStateOnTeleport : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AriseAnimNotifyStateOnTeleport");
		return ptr;
	}

};


// Class AriseCharacter.AriseAnimNotifyState_LookAtDisableHeadRotation
// 0x0010 (0x0040 - 0x0030)
class UAriseAnimNotifyState_LookAtDisableHeadRotation : public UAnimNotifyState
{
public:
	float                                              BeginBlendTime;                                           // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndBlendTime;                                             // 0x0034(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AriseAnimNotifyState_LookAtDisableHeadRotation");
		return ptr;
	}

};


// Class AriseCharacter.AriseAnimNotifyState_LookAtDisableNeckRotation
// 0x0010 (0x0040 - 0x0030)
class UAriseAnimNotifyState_LookAtDisableNeckRotation : public UAnimNotifyState
{
public:
	float                                              BeginBlendTime;                                           // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndBlendTime;                                             // 0x0034(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AriseAnimNotifyState_LookAtDisableNeckRotation");
		return ptr;
	}

};


// Class AriseCharacter.AriseAnimNotifyState_LookAtDisableSpineRotation
// 0x0010 (0x0040 - 0x0030)
class UAriseAnimNotifyState_LookAtDisableSpineRotation : public UAnimNotifyState
{
public:
	float                                              BeginBlendTime;                                           // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndBlendTime;                                             // 0x0034(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AriseAnimNotifyState_LookAtDisableSpineRotation");
		return ptr;
	}

};


// Class AriseCharacter.AriseAnimNotifyState_OverrideMaterialScalarParameter
// 0x0068 (0x0098 - 0x0030)
class UAriseAnimNotifyState_OverrideMaterialScalarParameter : public UAnimNotifyState
{
public:
	struct FName                                       MeshComponentName;                                        // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialParameterName;                                    // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BeginBlendTime;                                           // 0x0040(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndBlendTime;                                             // 0x0044(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseCharacter.AriseAnimNotifyState_OverrideMaterialScalarParameter");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
