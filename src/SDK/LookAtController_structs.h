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

// Enum LookAtController.ELookAtTargetLine
enum class ELookAtTargetLine : uint8_t
{
	ComponentSpace_Segment1        = 0,
	ComponentSpace_Segment2        = 1,
	BoneSpace_Segment1             = 2,
	BoneSpace_Segment2             = 3,
	ELookAtTargetLine_MAX          = 4
};


// Enum LookAtController.ELookAtClampBase
enum class ELookAtClampBase : uint8_t
{
	NotAnimatedPose                = 0,
	AnimatedPose                   = 1,
	ELookAtClampBase_MAX           = 2
};


// Enum LookAtController.ELookAtBoneType
enum class ELookAtBoneType : uint8_t
{
	None                           = 0,
	Head                           = 1,
	Neck                           = 2,
	Spine                          = 3,
	ELookAtBoneType_MAX            = 4
};


// Enum LookAtController.ELookAtControlFacial
enum class ELookAtControlFacial : uint8_t
{
	Center                         = 0,
	Up                             = 1,
	UpCenter                       = 2,
	UpLeft                         = 3,
	UpRight                        = 4,
	Down                           = 5,
	DownCenter                     = 6,
	DownLeft                       = 7,
	DownRight                      = 8,
	Left                           = 9,
	Right                          = 10,
	ELookAtControlFacial_MAX       = 11
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LookAtController.AnimNode_LookAtControlBones
// 0x0128 (0x0240 - 0x0118)
struct FAnimNode_LookAtControlBones : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0118(0x0018) (Edit)
	struct FBoneReference                              LookAtBone;                                               // 0x0130(0x0018) (Edit)
	struct FName                                       LookAtSocket;                                             // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // 0x0150(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookAtViewAxis;                                           // 0x015C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	float                                              LookAtViewClamp;                                          // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookAtTarget;                                         // 0x0164(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableEyeRotation;                                       // 0x0165(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHeadRotation;                                      // 0x0166(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableNeckRotation;                                      // 0x0167(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSpineRotation;                                     // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	float                                              EyeRotationSpeed;                                         // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeckRotationSpeed;                                        // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadBlendTime;                                            // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeckBlendTime;                                            // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpineBlendTime;                                           // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0180(0x000C) MISSED OFFSET
	float                                              CurrentLookAtViewAngle;                                   // 0x018C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              CurrentLookAtViewAlpha;                                   // 0x0190(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               bEnableFaceToTarget;                                      // 0x0194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELookAtClampBase                                   ClampBase;                                                // 0x0195(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELookAtTargetLine                                  TargetLine;                                               // 0x0196(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0197(0x0001) MISSED OFFSET
	float                                              RotationInterpOutAngle;                                   // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpOutAlpha;                                   // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpOutExp;                                     // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpOutClamp;                                   // 0x01A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x98];                                      // 0x01A8(0x0098) MISSED OFFSET
};

// ScriptStruct LookAtController.AnimNode_SingleAxisLookAt
// 0x0098 (0x01B0 - 0x0118)
struct FAnimNode_SingleAxisLookAt : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0118(0x0098) MISSED OFFSET
};

// ScriptStruct LookAtController.AnimNode_LookAtControlFacial
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_LookAtControlFacial : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAdditiveNode;                                            // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
