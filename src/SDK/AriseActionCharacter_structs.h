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

// Enum AriseActionCharacter.EAriseAnimFlags
enum class EAriseAnimFlags : uint8_t
{
	UseFacialAnimation             = 0,
	UseLegIK                       = 1,
	UseLookAt                      = 2,
	NoFlags                        = 3,
	UseAllFlags                    = 4,
	EAriseAnimFlags_MAX            = 5
};


// Enum AriseActionCharacter.EPCBuildParameterFlag
enum class EPCBuildParameterFlag : uint8_t
{
	WEAPON                         = 0,
	ACCESSORY                      = 1,
	EPCBuildParameterFlag_MAX      = 2
};


// Enum AriseActionCharacter.EAriseCinematicCharacterWeaponVisible
enum class EAriseCinematicCharacterWeaponVisible : uint8_t
{
	Hide                           = 0,
	Show_WPN                       = 1,
	Show_MOUNT                     = 2,
	Show                           = 3,
	EAriseCinematicCharacterWeaponVisible_MAX = 4
};


// Enum AriseActionCharacter.EAriseCinematicCharacterBuild
enum class EAriseCinematicCharacterBuild : uint8_t
{
	Parameter                      = 0,
	PC                             = 1,
	EAriseCinematicCharacterBuild_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AriseActionCharacter.AriseCharacterFacialPose
// 0x0020
struct FAriseCharacterFacialPose
{
	bool                                               bCanApplyPose;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnable;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     PoseName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BlendTime;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAdditive;                                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AriseActionCharacter.AriseCharacterFacialLip
// 0x0020
struct FAriseCharacterFacialLip
{
	bool                                               bCanApplyPose;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnable;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAchFacialLipShape>                    Shape;                                                    // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LipPatternName;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipPatternRate;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipPatternBlendTime;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct AriseActionCharacter.AriseCharacterFacialLookAt
// 0x0010
struct FAriseCharacterFacialLookAt
{
	bool                                               bCanApplyPose;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnable;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Angle;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseActionCharacter.AnimNode_LevelSequenceEvaluator
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_LevelSequenceEvaluator : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct AriseActionCharacter.AriseAnimInstanceProxy
// 0x00A0 (0x06B0 - 0x0610)
struct FAriseAnimInstanceProxy : public FASAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0610(0x00A0) MISSED OFFSET
};

// ScriptStruct AriseActionCharacter.AriseCharacterUpdateComponentsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FAriseCharacterUpdateComponentsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct AriseActionCharacter.AriseCinematicCharacterEditableTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FAriseCinematicCharacterEditableTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
