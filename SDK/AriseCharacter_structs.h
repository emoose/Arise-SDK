#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum AriseCharacter.EAttachmentNum
enum class EAttachmentNum : uint8_t
{
	EAttachmentNum__ATTACHMENT_1ST = 0,
	EAttachmentNum__ATTACHMENT_2ND = 1,
	EAttachmentNum__ATTACHMENT_3RD = 2,
	EAttachmentNum__MAX            = 3
};


// Enum AriseCharacter.EAchCharacterBuildComponent
enum class EAchCharacterBuildComponent : uint8_t
{
	EAchCharacterBuildComponent__Base = 0,
	EAchCharacterBuildComponent__Extension = 1,
	EAchCharacterBuildComponent__Weapon = 2,
	EAchCharacterBuildComponent__Hair = 3,
	EAchCharacterBuildComponent__Effect = 4,
	EAchCharacterBuildComponent__Attachment = 5,
	EAchCharacterBuildComponent__Gadget = 6,
	EAchCharacterBuildComponent__EAchCharacterBuildComponent_MAX = 7
};


// Enum AriseCharacter.EAchCharacterBuildCullHandling
enum class EAchCharacterBuildCullHandling : uint8_t
{
	EAchCharacterBuildCullHandling__Undefined = 0,
	EAchCharacterBuildCullHandling__AlwaysApplyFrustumCull = 1,
	EAchCharacterBuildCullHandling__AlwaysApplyOcclusionCull = 2,
	EAchCharacterBuildCullHandling__EAchCharacterBuildCullHandling_MAX = 3
};


// Enum AriseCharacter.EAchCharacterMeshConnectMethod
enum class EAchCharacterMeshConnectMethod : uint8_t
{
	EAchCharacterMeshConnectMethod__Attach = 0,
	EAchCharacterMeshConnectMethod__MasterPose = 1,
	EAchCharacterMeshConnectMethod__EAchCharacterMeshConnectMethod_MAX = 2
};


// Enum AriseCharacter.EAchGameScene
enum class EAchGameScene : uint8_t
{
	EAchGameScene__ALL             = 0,
	EAchGameScene__PF              = 1,
	EAchGameScene__Battle          = 2,
	EAchGameScene__EAchGameScene_MAX = 3
};


// Enum AriseCharacter.EAchCharacterCapturePose
enum class EAchCharacterCapturePose : uint8_t
{
	EAchCharacterCapturePose__CCP_BasePose = 0,
	EAchCharacterCapturePose__CCP_MAX = 1
};


// Enum AriseCharacter.EFacialFlagOverrideCondition
enum class EFacialFlagOverrideCondition : uint8_t
{
	EFacialFlagOverrideCondition__None = 0,
	EFacialFlagOverrideCondition__Language_Japanese = 1,
	EFacialFlagOverrideCondition__Language_English_US = 2,
	EFacialFlagOverrideCondition__EFacialFlagOverrideCondition_MAX = 3
};


// Enum AriseCharacter.EAriseFakeLipShapeFlags
enum class EAriseFakeLipShapeFlags : uint8_t
{
	EAriseFakeLipShapeFlags__A     = 0,
	EAriseFakeLipShapeFlags__I     = 1,
	EAriseFakeLipShapeFlags__U     = 2,
	EAriseFakeLipShapeFlags__E     = 3,
	EAriseFakeLipShapeFlags__O     = 4,
	EAriseFakeLipShapeFlags__EAriseFakeLipShapeFlags_MAX = 5
};


// Enum AriseCharacter.EAchFacialAutoLip
enum class EAchFacialAutoLip : uint8_t
{
	EAchFacialAutoLip__None        = 0,
	EAchFacialAutoLip__LipSync     = 1,
	EAchFacialAutoLip__Fake        = 2,
	EAchFacialAutoLip__EAchFacialAutoLip_MAX = 3
};


// Enum AriseCharacter.EAchFacialLipShape
enum class EAchFacialLipShape : uint8_t
{
	EAchFacialLipShape__N          = 0,
	EAchFacialLipShape__A          = 1,
	EAchFacialLipShape__I          = 2,
	EAchFacialLipShape__U          = 3,
	EAchFacialLipShape__E          = 4,
	EAchFacialLipShape__O          = 5,
	EAchFacialLipShape__EAchFacialLipShape_MAX = 6
};


// Enum AriseCharacter.EAchCharacterUpdateRateOptimization
enum class EAchCharacterUpdateRateOptimization : uint8_t
{
	EAchCharacterUpdateRateOptimization__Default = 0,
	EAchCharacterUpdateRateOptimization__Distance = 1,
	EAchCharacterUpdateRateOptimization__LOD = 2,
	EAchCharacterUpdateRateOptimization__EAchCharacterUpdateRateOptimization_MAX = 3
};


// Enum AriseCharacter.EAchScenarioCharacterGadgetMode
enum class EAchScenarioCharacterGadgetMode : uint8_t
{
	EAchScenarioCharacterGadgetMode__Unmount = 0,
	EAchScenarioCharacterGadgetMode__Mount = 1,
	EAchScenarioCharacterGadgetMode__Hide = 2,
	EAchScenarioCharacterGadgetMode__Show = 3,
	EAchScenarioCharacterGadgetMode__NumMax = 4,
	EAchScenarioCharacterGadgetMode__EAchScenarioCharacterGadgetMode_MAX = 5
};


// Enum AriseCharacter.EAchCharacterAttachment
enum class EAchCharacterAttachment : uint8_t
{
	EAchCharacterAttachment__SkeletalMesh = 0,
	EAchCharacterAttachment__StaticMesh = 1,
	EAchCharacterAttachment__Effect = 2,
	EAchCharacterAttachment__EAchCharacterAttachment_MAX = 3
};


// Enum AriseCharacter.EAchCharacterFootmark
enum class EAchCharacterFootmark : uint8_t
{
	EAchCharacterFootmark__MEN_00  = 0,
	EAchCharacterFootmark__FEMALE_00 = 1,
	EAchCharacterFootmark__MEN_01  = 2,
	EAchCharacterFootmark__FEMALE_01 = 3,
	EAchCharacterFootmark__MAX     = 4
};


// Enum AriseCharacter.EAchCharacterModelCategory
enum class EAchCharacterModelCategory : uint8_t
{
	EAchCharacterModelCategory__ENPC = 0,
	EAchCharacterModelCategory__MON = 1,
	EAchCharacterModelCategory__NPC = 2,
	EAchCharacterModelCategory__PC = 3,
	EAchCharacterModelCategory__ANIMAL = 4,
	EAchCharacterModelCategory__Unknown = 5,
	EAchCharacterModelCategory__EAchCharacterModelCategory_MAX = 6
};


// Enum AriseCharacter.EAchDataCategory
enum class EAchDataCategory : uint8_t
{
	EAchDataCategory__Release      = 0,
	EAchDataCategory__Debug        = 1,
	EAchDataCategory__DLC          = 2,
	EAchDataCategory__EAchDataCategory_MAX = 3
};


// Enum AriseCharacter.EAchCharacterModelBase
enum class EAchCharacterModelBase : uint8_t
{
	EAchCharacterModelBase__Body   = 0,
	EAchCharacterModelBase__Face   = 1,
	EAchCharacterModelBase__Hair   = 2,
	EAchCharacterModelBase__Max    = 3
};


// Enum AriseCharacter.EAchScenarioCharAgeType
enum class EAchScenarioCharAgeType : uint8_t
{
	EAchScenarioCharAgeType__Child = 0,
	EAchScenarioCharAgeType__Young = 1,
	EAchScenarioCharAgeType__Adult = 2,
	EAchScenarioCharAgeType__Aged  = 3,
	EAchScenarioCharAgeType__Unknown = 4,
	EAchScenarioCharAgeType__EAchScenarioCharAgeType_MAX = 5
};


// Enum AriseCharacter.EAchScenarioCharSexType
enum class EAchScenarioCharSexType : uint8_t
{
	EAchScenarioCharSexType__Male  = 0,
	EAchScenarioCharSexType__Female = 1,
	EAchScenarioCharSexType__Other = 2,
	EAchScenarioCharSexType__EAchScenarioCharSexType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AriseCharacter.AchCharacterCostumePhysicsTimelineData
// 0x0024
struct FAchCharacterCostumePhysicsTimelineData
{
	float                                              StartTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              InterpTime;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ClothBlendWeight;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DampingPower;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DynamicsWeight;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              GravityPower;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               GroundCollision;                                          // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               HairParts;                                                // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               LowerParts;                                               // 0x001E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               UpperParts;                                               // 0x001F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               ExtraParts;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterCostumePhysicsData
// 0x0028
struct FAchCharacterCostumePhysicsData
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FName                                       DlcName;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FAchCharacterCostumePhysicsTimelineData> Timeline;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterCostumePhysicsDataCollection
// 0x0010
struct FAchCharacterCostumePhysicsDataCollection
{
	TArray<struct FAchCharacterCostumePhysicsData>     Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterAttachmentData
// 0x0048
struct FAchCharacterAttachmentData
{
	struct FString                                     Asset;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FName                                       ComponentName;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0020(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x002C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0038(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	int                                                Type;                                                     // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchCharacterAttachmentDatabaseRow
// 0x0068
struct FAchCharacterAttachmentDatabaseRow
{
	struct FString                                     AttachmentID;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FAchCharacterAttachmentData                 Data;                                                     // 0x0020(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterAttachmentDatabase
// 0x0010
struct FAchCharacterAttachmentDatabase
{
	TArray<struct FAchCharacterAttachmentDatabaseRow>  Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterClothingPhysicsProperties
// 0x0004
struct FAchCharacterClothingPhysicsProperties
{
	float                                              GravityScale;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchCharacterWeaponComponentDesc
// 0x0010
struct FAchCharacterWeaponComponentDesc
{
	class UMeshComponent*                              MeshComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EAchCharacterMeshConnectMethod>        ConnectMethod;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMount;                                                   // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bVisibility;                                              // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterBuildParameters
// 0x0060
struct FAchCharacterBuildParameters
{
	struct FString                                     ModelID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     HairID;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     WeaponID;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EffectID;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             AttachmentID;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             GadgetID;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AriseCharacter.AchCharacterBuildComponent_CharacterDesc
// 0x01A0
struct FAchCharacterBuildComponent_CharacterDesc
{
	struct FAchCharacterBuildParameters                BuildParameter;                                           // 0x0000(0x0060)
	struct FAchCharacterBuildParameters                RequestBuildParameter;                                    // 0x0060(0x0060)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x00C0(0x00E0) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterDummyMeshReference
// 0x0020
struct FAchCharacterDummyMeshReference
{
	struct FString                                     MeshName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DummyMeshName;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterDummyMeshReferenceList
// 0x0010
struct FAchCharacterDummyMeshReferenceList
{
	TArray<struct FAchCharacterDummyMeshReference>     Data;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterEventPosePresetData
// 0x0068
struct FAchCharacterEventPosePresetData
{
	struct FString                                     PresetName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     BodyPoseName;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     FacialName;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              BodyYaw;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              NeckYaw;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              NeckPitch;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              NeckRoll;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     LookAtType;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              LookAtAngle;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LookAtAlpha;                                              // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     EyeBlink;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterEventPosePresetDataList
// 0x0010
struct FAchCharacterEventPosePresetDataList
{
	TArray<struct FAchCharacterEventPosePresetData>    Data;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AriseAutoEyeBlinkParameter
// 0x0020
struct FAriseAutoEyeBlinkParameter
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHuman;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableEditCountPerMinutes;                               // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                CountPerMinutes;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCorrectValue;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpenTransitionTime;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseTransitionTime;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlinkOff;                                                // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0015(0x000B) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterFacePoseData
// 0x0028
struct FAchCharacterFacePoseData
{
	struct FString                                     PoseName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FSoftObjectPath                             AnimAssetRef;                                             // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterFacialAnimationData
// 0x0040
struct FAchCharacterFacialAnimationData
{
	struct FString                                     DummyMeshName;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     PoseAssetRef;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FAchCharacterFacePoseData>           FacePoseData;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterFacialAnimationDataList
// 0x0010
struct FAchCharacterFacialAnimationDataList
{
	TArray<struct FAchCharacterFacialAnimationData>    Data;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterFacialPresetData
// 0x00F8
struct FAchCharacterFacialPresetData
{
	struct FString                                     PresetName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Comment;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     EyePoseName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     MouthPoseName;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     EyelidPoseName;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     EyeHighlightPoseName;                                     // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     IrisPoseName;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     HelpTex1Name;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     HelpTex2Name;                                             // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     HelpTex3Name;                                             // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     HelpTex4Name;                                             // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     LipPatternName;                                           // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              LookAtAngle;                                              // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EyePoseRate;                                              // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MouthPoseRate;                                            // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EyelidPoseRate;                                           // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EyeHighlightPoseRate;                                     // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LookAtRate;                                               // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              IrisPoseRate;                                             // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HelpTex1Rate;                                             // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HelpTex2Rate;                                             // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HelpTex3Rate;                                             // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HelpTex4Rate;                                             // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LipPatternRate;                                           // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               AutoBlinkOff;                                             // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterFacialPresetDataList
// 0x0010
struct FAchCharacterFacialPresetDataList
{
	TArray<struct FAchCharacterFacialPresetData>       Data;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterFootIKResult
// 0x0024
struct FAchCharacterFootIKResult
{
	struct FVector                                     Translation;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, Transient, IsPlainOldData)
	bool                                               bTraceGround;                                             // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              HeightOffset;                                             // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGround;                                                  // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterFootIKLegData
// 0x0030
struct FAchCharacterFootIKLegData
{
	struct FName                                       IKSocketName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       FKSocketName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumBones;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ForwardAxis;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableRotationLimit;                                     // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              MinRotationAngle;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableKneeTwistCorrection;                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FName                                       TraceSocketName;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchCharacterFootIKData
// 0x0028
struct FAchCharacterFootIKData
{
	float                                              AnkleLimitPitch;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AnkleLimitRoll;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ReachPrecision;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HeelHeight;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FAchCharacterFootIKLegData>          LegsData;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterFootIKDatabaseRow
// 0x0048
struct FAchCharacterFootIKDatabaseRow
{
	struct FString                                     ModelID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FAchCharacterFootIKData                     FootIKData;                                               // 0x0020(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterFootIKDatabase
// 0x0010
struct FAchCharacterFootIKDatabase
{
	TArray<struct FAchCharacterFootIKDatabaseRow>      Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterSpawnedFootstepParams
// 0x0020
struct FAchCharacterSpawnedFootstepParams
{
	class UDecalComponent*                             DecalComponent;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstanceDynamic;                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTimer;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterFootstepEventArgs
// 0x0050
struct FAchCharacterFootstepEventArgs
{
	struct FVector                                     GroundLocation;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     GroundNormal;                                             // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       GroundSurface;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FootmarkType;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootmarkDirection;                                        // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FootmarkScale;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bWater;                                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FVector                                     WaterLocation;                                            // 0x0034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     WaterNormal;                                              // 0x0040(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterFootstepItemData
// 0x0028
struct FAchCharacterFootstepItemData
{
	struct FName                                       TraceSocketName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       BallSocketName;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       HeelSocketName;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FootmarkLocationOffsetX;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FootmarkLocationOffsetY;                                  // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FootmarkScaleX;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FootmarkScaleY;                                           // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchCharacterFootstepData
// 0x0018
struct FAchCharacterFootstepData
{
	float                                              HeightOffset;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                FootmarkType;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FAchCharacterFootstepItemData>       FootstepItem;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterFootstepDatabaseRow
// 0x0038
struct FAchCharacterFootstepDatabaseRow
{
	struct FString                                     ModelID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FAchCharacterFootstepData                   FootstepData;                                             // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterFootstepDatabase
// 0x0010
struct FAchCharacterFootstepDatabase
{
	TArray<struct FAchCharacterFootstepDatabaseRow>    Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterFootTraceResult
// 0x0028
struct FAchCharacterFootTraceResult
{
	bool                                               bGround;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     GroundLocation;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     GroundNormal;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       GroundSurface;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchCharacterGadgetDatabaseRow
// 0x0060
struct FAchCharacterGadgetDatabaseRow
{
	struct FString                                     GadgetID;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     AssetPath;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterGadgetDatabase
// 0x0010
struct FAchCharacterGadgetDatabase
{
	TArray<struct FAchCharacterGadgetDatabaseRow>      Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterHairData
// 0x0018
struct FAchCharacterHairData
{
	struct FSoftObjectPath                             MeshAssetReference;                                       // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterHairDatabaseRow
// 0x0038
struct FAchCharacterHairDatabaseRow
{
	struct FString                                     HairID;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FAchCharacterHairData                       Data;                                                     // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterHairDatabase
// 0x0010
struct FAchCharacterHairDatabase
{
	TArray<struct FAchCharacterHairDatabaseRow>        Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AriseAutoFakeLipSyncParameter
// 0x0058
struct FAriseAutoFakeLipSyncParameter
{
	int                                                LipShapeFlags;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       LipPatternName;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipPatternWeight;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipPatternBlendTime;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipA_Weight;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipI_Weight;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipU_Weight;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipE_Weight;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipO_Weight;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LimitTime;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                CountPerMinutes;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCorrectValue;                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpenTransitionTime;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseTransitionTime;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0044(0x0014) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterLipAnimationData
// 0x0038
struct FAchCharacterLipAnimationData
{
	struct FString                                     ModelID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FSoftObjectPath                             PoseAssetPath;                                            // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	TArray<struct FSoftObjectPath>                     LipAnimPaths;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterLipAnimationDataList
// 0x0010
struct FAchCharacterLipAnimationDataList
{
	TArray<struct FAchCharacterLipAnimationData>       Data;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterLODData
// 0x0050
struct FAchCharacterLODData
{
	struct FString                                     Label;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                Scene;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     ModelID;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<float>                                      LODDistances;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              FarClipDistance;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterLODDataCollection
// 0x0010
struct FAchCharacterLODDataCollection
{
	TArray<struct FAchCharacterLODData>                Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterLookAtBoneData
// 0x0020
struct FAchCharacterLookAtBoneData
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LookAtAxis;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LookUpAxis;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     LookAtClamp3D;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	bool                                               bUseLookUpAxis;                                           // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterLookAtData
// 0x0020
struct FAchCharacterLookAtData
{
	struct FName                                       LookAtSocketName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LookAtViewAxis;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LookAtViewClamp;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FAchCharacterLookAtBoneData>         Bones;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterLookAtDatabaseRow
// 0x0040
struct FAchCharacterLookAtDatabaseRow
{
	struct FString                                     ModelID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FAchCharacterLookAtData                     LookAtData;                                               // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterLookAtDatabase
// 0x0010
struct FAchCharacterLookAtDatabase
{
	TArray<struct FAchCharacterLookAtDatabaseRow>      Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterModelBoneData
// 0x0040
struct FAchCharacterModelBoneData
{
	struct FSoftObjectPath                             MeshAssetReference;                                       // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FSoftObjectPath                             PhysicalABPAssetReference;                                // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FString                                     SkeletonPath;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchNPCMaterialData
// 0x00B8
struct FAchNPCMaterialData
{
	struct FString                                     SlotName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     MatName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FLinearColor                                BaseColor0;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FLinearColor                                BaseColor1;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FLinearColor                                BaseColor2;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FLinearColor                                BaseColor3;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FSoftObjectPath                             ColorExchangeMask;                                        // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FLinearColor                                ShadowColor0;                                             // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FLinearColor                                ShadowColor1;                                             // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FLinearColor                                ShadowColor2;                                             // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FLinearColor                                ShadowColor3;                                             // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchCharacterModelBaseData
// 0x0028
struct FAchCharacterModelBaseData
{
	struct FSoftObjectPath                             MeshAssetReference;                                       // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	TArray<struct FAchNPCMaterialData>                 NPCMaterialData;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterModelExtensionData
// 0x0070
struct FAchCharacterModelExtensionData
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FSoftObjectPath                             MeshAssetReference;                                       // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      ConnectMethod;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     RelativeScale;                                            // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FAchNPCMaterialData>                 NPCMaterialData;                                          // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               Visibility;                                               // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterModelData
// 0x0070
struct FAchCharacterModelData
{
	unsigned char                                      ModelCategory;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BoundingRadius;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               NotMerge;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FAchCharacterModelBoneData                  Bone;                                                     // 0x0010(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	TArray<struct FAchCharacterModelBaseData>          Base;                                                     // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FAchCharacterModelExtensionData>     Extension;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterModelDatabaseRow
// 0x0090
struct FAchCharacterModelDatabaseRow
{
	struct FString                                     ModelID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FAchCharacterModelData                      ModelData;                                                // 0x0020(0x0070) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterModelDatabase
// 0x0010
struct FAchCharacterModelDatabase
{
	TArray<struct FAchCharacterModelDatabaseRow>       Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchFacialPoseParam
// 0x0028
struct FAchFacialPoseParam
{
	TEnumAsByte<EAnimationOperationType>               OpType;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApply;                                                   // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAdditive;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPostFacial;                                         // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PoseName;                                                 // 0x0008(0x0010) (ZeroConstructor)
	float                                              Weight;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendRatio;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PoseBlendTime;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchFacialLookAtParam
// 0x0048
struct FAchFacialLookAtParam
{
	bool                                               bApply;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableEyeRotation;                                       // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookAtTarget;                                         // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     LookAtLocation;                                           // 0x0004(0x000C) (IsPlainOldData)
	float                                              LookAtViewClamp;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FBoneReference                              BoneToModify;                                             // 0x0018(0x0018)
	TEnumAsByte<EAxisOption>                           LookAtViewAxis;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Angle;                                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PoseBlendTime;                                            // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldImmediate;                                         // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchFacialLipParam
// 0x0028
struct FAchFacialLipParam
{
	bool                                               bApply;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAdditive;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePostFacial;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAchFacialLipShape>                    Shape;                                                    // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Pattern;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeightScale;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendRatio;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShapeBlendTime;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PatternBlendTime;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchFacialEyeBlinkParam
// 0x000C
struct FAchFacialEyeBlinkParam
{
	bool                                               bApply;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCloseFlag;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              OpenTransitionTime;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CloseTransitionTime;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchFacialAnimParam
// 0x0098
struct FAchFacialAnimParam
{
	bool                                               bApply;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FAchFacialPoseParam>                 PoseParams;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FAchFacialLookAtParam                       LookAtParam;                                              // 0x0018(0x0048) (Edit)
	struct FAchFacialLipParam                          LipParam;                                                 // 0x0060(0x0028) (Edit)
	struct FAchFacialEyeBlinkParam                     EyeBlinkParam;                                            // 0x0088(0x000C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AriseAnimProperty_LegIK
// 0x0058
struct FAriseAnimProperty_LegIK
{
	bool                                               bApply;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TMap<struct FName, struct FTransform>              LegsTransform;                                            // 0x0008(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct AriseCharacter.AriseAnimProperty_LookAt
// 0x002C
struct FAriseAnimProperty_LookAt
{
	bool                                               bApply;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     LookAtLocation;                                           // 0x0004(0x000C) (Transient, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseTarget;                                               // 0x0014(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              ViewAngle;                                                // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ViewAlpha;                                                // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEnableEyeRotation;                                       // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AriseAnimProperty_Pose
// 0x0058
struct FAriseAnimProperty_Pose
{
	bool                                               bApply;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TMap<struct FName, struct FRotator>                BoneRotator;                                              // 0x0008(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct AriseCharacter.AchCharacterPhysicsData
// 0x0030
struct FAchCharacterPhysicsData
{
	struct FString                                     ModelID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                SimulationTimesOnResetForCloth;                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SimulationTimesOnResetForAnimDynamics;                    // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TeleportDistanceThreshold;                                // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TeleportRotationThreshold;                                // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchCharacterPhysicsDataCollection
// 0x0010
struct FAchCharacterPhysicsDataCollection
{
	TArray<struct FAchCharacterPhysicsData>            Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterPose_BoneRotator
// 0x0018
struct FAchCharacterPose_BoneRotator
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterTearsDatabaseRow
// 0x0070
struct FAchCharacterTearsDatabaseRow
{
	struct FString                                     TearsID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TMap<struct FString, struct FString>               Tears;                                                    // 0x0020(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterTearsDatabase
// 0x0010
struct FAchCharacterTearsDatabase
{
	TArray<struct FAchCharacterTearsDatabaseRow>       Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchScenarioCharacterData
// 0x0060
struct FAchScenarioCharacterData
{
	struct FString                                     ModelID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                PartyId;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     WeaponID;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bMount;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FString>                             GadgetIDs;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FName                                       IconSocketName;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     IconOffset;                                               // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              DrawScale;                                                // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EAchScenarioCharSexType                            SexType;                                                  // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EAchScenarioCharAgeType                            AgeType;                                                  // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchEffectModelEffectData
// 0x0080
struct FAchEffectModelEffectData
{
	struct FName                                       Parent;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ComponentName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             Asset;                                                    // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	bool                                               ResetOnDetach;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              SecondsBeforeInactive;                                    // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              CustomTimeDilation;                                       // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               AllowRecycling;                                           // 0x005C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               AutoManageAttachment;                                     // 0x005D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	struct FName                                       AutoAttachSocketName;                                     // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EAttachmentRule                                    AutoAttachLocationRule;                                   // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EAttachmentRule                                    AutoAttachRotationRule;                                   // 0x0069(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EAttachmentRule                                    AutoAttachScaleRule;                                      // 0x006A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x006B(0x0005) MISSED OFFSET
	TArray<struct FParticleSysParam>                   InstanceParameters;                                       // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchEffectModelData
// 0x0090
struct FAchEffectModelData
{
	struct FAchEffectModelEffectData                   Data;                                                     // 0x0000(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	TArray<struct FAchEffectModelEffectData>           Childlen;                                                 // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchEffectModelDatabaseRow
// 0x0030
struct FAchEffectModelDatabaseRow
{
	struct FString                                     EffectID;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FAchEffectModelData>                 Effects;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchEffectModelDatabase
// 0x0010
struct FAchEffectModelDatabase
{
	TArray<struct FAchEffectModelDatabaseRow>          Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterBuildLoadRequestHandle
// 0x0078
struct FAchCharacterBuildLoadRequestHandle
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterLODInfo
// 0x0018
struct FAchCharacterLODInfo
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DrawCullDistance;                                         // 0x0004(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<float>                                      DistanceLevels;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AriseCharacter.AchDefaultCharacterLOD
// 0x0030
struct FAchDefaultCharacterLOD
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FColor                                      Color;                                                    // 0x0010(0x0004) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FAchCharacterLODInfo                        LODInfo;                                                  // 0x0018(0x0018) (Edit)
};

// ScriptStruct AriseCharacter.AchCharacterUpdateRateOptimizationDistance
// 0x0008
struct FAchCharacterUpdateRateOptimizationDistance
{
	float                                              DistanceFactorThreadhold;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FrameSkip;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchCharacterUpdateRateOptimizationLOD
// 0x0008
struct FAchCharacterUpdateRateOptimizationLOD
{
	int                                                LODLevel;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FrameSkip;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchScenarioCharacterBuildParameters
// 0x0030
struct FAchScenarioCharacterBuildParameters
{
	struct FString                                     CharacterID;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             AddGudgetID;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             AddAttachmentID;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AriseCharacter.AchScenarioCharacterDatabaseRow
// 0x0080
struct FAchScenarioCharacterDatabaseRow
{
	struct FString                                     CharacterID;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FAchScenarioCharacterData                   CharacterData;                                            // 0x0020(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct AriseCharacter.AchScenarioCharacterDatabase
// 0x0010
struct FAchScenarioCharacterDatabase
{
	TArray<struct FAchScenarioCharacterDatabaseRow>    Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchWeaponModelWeaponData
// 0x0050
struct FAchWeaponModelWeaponData
{
	struct FSoftObjectPath                             MeshAssetReference;                                       // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FString                                     Parent;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ComponentName;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      ConnectMethod;                                            // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bMount;                                                   // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               Visibility;                                               // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchWeaponModelData
// 0x0060
struct FAchWeaponModelData
{
	struct FAchWeaponModelWeaponData                   Weapon;                                                   // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	TArray<struct FAchWeaponModelWeaponData>           Child;                                                    // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchWeaponModelDatabaseRow
// 0x0040
struct FAchWeaponModelDatabaseRow
{
	struct FString                                     WeaponID;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     DlcName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FAchWeaponModelData>                 Weapon;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FAchWeaponModelData>                 Mount;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchWeaponModelDatabase
// 0x0010
struct FAchWeaponModelDatabase
{
	TArray<struct FAchWeaponModelDatabaseRow>          Record;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCharacter.AchCharacterBuildOptions
// 0x0010
struct FAchCharacterBuildOptions
{
	bool                                               bTransient;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCulling;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayFacialLoad;                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                LoadModelPriority;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LoadFacialPriority;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableModelMarge;                                        // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStepBuild;                                               // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetPhysics;                                            // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrecacheMaterialParameterNameIndices;                    // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AnimationOverrideSource
// 0x0088
struct FAnimationOverrideSource
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchAnimAttacheInstanceProxy
// 0x00F0 (0x0660 - 0x0570)
struct FAchAnimAttacheInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0570(0x00F0) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterFacialAnimationWithoutPoseAssetDatabaseRow
// 0x0038 (0x0040 - 0x0008)
struct FAchCharacterFacialAnimationWithoutPoseAssetDatabaseRow : public FTableRowBase
{
	struct FString                                     DummyMeshName;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSoftObjectPath                             StandardPoseAssetRef;                                     // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FAchCharacterFacePoseData>           FacePoseData;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AriseCharacter.AchCharacterFacialInfluenceBoneNames
// 0x0010
struct FAchCharacterFacialInfluenceBoneNames
{
	TArray<struct FString>                             BoneNames;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AriseCharacter.AchCharacterFacialInfluenceBoneNamesDatabaseRow
// 0x0070 (0x0078 - 0x0008)
struct FAchCharacterFacialInfluenceBoneNamesDatabaseRow : public FTableRowBase
{
	TMap<TEnumAsByte<EAnimationOperationType>, struct FAchCharacterFacialInfluenceBoneNames> InfluenceBoneNamesMap;                                    // 0x0008(0x0050) (Edit, ZeroConstructor)
	TArray<struct FString>                             RightBlinkInfluenceBoneNames;                             // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             LeftBlinkInfluenceBoneNames;                              // 0x0068(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AriseCharacter.AchCharacterFootstepResult
// 0x0028
struct FAchCharacterFootstepResult
{
	bool                                               bGround;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     GroundLocation;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     GroundNormal;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       GroundSurface;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchCharacterLipPatternIndexDatabaseRow
// 0x0008 (0x0010 - 0x0008)
struct FAchCharacterLipPatternIndexDatabaseRow : public FTableRowBase
{
	int                                                Index;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterLookAtComponentUpdateTargetTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FAchCharacterLookAtComponentUpdateTargetTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchCharacterPhysicsDatabaseRow
// 0x0010 (0x0018 - 0x0008)
struct FAchCharacterPhysicsDatabaseRow : public FTableRowBase
{
	int                                                SimulationTimesOnResetForCloth;                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimulationTimesOnResetForAnimDynamics;                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TeleportDistanceThreshold;                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TeleportRotationThreshold;                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AchPoseAnimGraph
// 0x0258
struct FAchPoseAnimGraph
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FAnimNode_ApplyAdditive                     AdditiveNode;                                             // 0x0008(0x0118)
	struct FAnimNode_PoseBlendNode                     PoseBlendNode;                                            // 0x0120(0x00C8)
	struct FAnimNode_SequenceEvaluator                 StandardPoseEvaluator;                                    // 0x01E8(0x0070) (Transient)
};

// ScriptStruct AriseCharacter.AchFacialAnimGraphBase
// 0x0398
struct FAchFacialAnimGraphBase
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
	struct FAchPoseAnimGraph                           PoseAnimGraph;                                            // 0x0068(0x0258)
	TArray<struct FAnimNode_SequenceEvaluator>         SequenceEvaluators;                                       // 0x02C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x58];                                      // 0x02D0(0x0058) MISSED OFFSET
	struct FAnimNode_SequenceEvaluator                 StandardPoseEvaluator;                                    // 0x0328(0x0070) (Transient)
};

// ScriptStruct AriseCharacter.AchFacialLipAnimGraph
// 0x00E8 (0x0480 - 0x0398)
struct FAchFacialLipAnimGraph : public FAchFacialAnimGraphBase
{
	struct FAnimNode_BlendListByInt                    BlendListNode;                                            // 0x0398(0x00D0)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0468(0x0018) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchFacialLookAtAnimGraph
// 0x0058 (0x03F0 - 0x0398)
struct FAchFacialLookAtAnimGraph : public FAchFacialAnimGraphBase
{
	struct FAnimNode_LookAtControlFacial               LookAtNode;                                               // 0x0398(0x0058)
};

// ScriptStruct AriseCharacter.AchFacialPoseAnimGraph
// 0x00E8 (0x0480 - 0x0398)
struct FAchFacialPoseAnimGraph : public FAchFacialAnimGraphBase
{
	struct FAnimNode_BlendListByInt                    BlendListNode;                                            // 0x0398(0x00D0)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0468(0x0018) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AchGadgetDatabaseRow
// 0x0058 (0x0060 - 0x0008)
struct FAchGadgetDatabaseRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AriseCharacter.AchGadgetDatabaseRow.MeshAsset
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct AriseCharacter.AnimNode_AchCharacterCapturePose
// 0x0010 (0x0128 - 0x0118)
struct FAnimNode_AchCharacterCapturePose : public FAnimNode_SkeletalControlBase
{
	TEnumAsByte<EAchCharacterCapturePose>              CapturePose;                                              // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0119(0x000F) MISSED OFFSET
};

// ScriptStruct AriseCharacter.AnimNode_AchFinalAnimationPose
// 0x0050 (0x0080 - 0x0030)
struct FAnimNode_AchFinalAnimationPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
