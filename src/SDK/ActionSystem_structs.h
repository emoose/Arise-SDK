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

// Enum ActionSystem.EASSMStateType
enum class EASSMStateType : uint8_t
{
	Sequence                       = 0,
	BlendSpace                     = 1,
	AimOffset                      = 2,
	StateMachine                   = 3,
	Slot                           = 4,
	EASSMStateType_MAX             = 5
};


// Enum ActionSystem.EAnimCommandState
enum class EAnimCommandState : uint8_t
{
	ACS_Failed                     = 0,
	ACS_Precede                    = 1,
	ASC_Just                       = 2,
	EAnimCommandState_MAX          = 3
};


// Enum ActionSystem.EASAlphaBlendOption
enum class EASAlphaBlendOption : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	HermiteCubic                   = 2,
	Sinusoidal                     = 3,
	QuadraticInOut                 = 4,
	CubicInOut                     = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	Custom                         = 14,
	Inertial                       = 15,
	EASAlphaBlendOption_MAX        = 16
};


// Enum ActionSystem.ENextStateType
enum class ENextStateType : uint8_t
{
	NST_Invalid                    = 0,
	NST_Sequence                   = 1,
	NST_BlendSpace                 = 2,
	NST_StateMachine               = 3,
	NST_Conduit                    = 4,
	NST_Terminate                  = 5,
	NST_Through                    = 6,
	NST_Slot                       = 7,
	NST_MAX                        = 8
};


// Enum ActionSystem.ETransitionRule
enum class ETransitionRule : uint8_t
{
	TR_PlayEnd                     = 0,
	TR_Command                     = 1,
	TR_MovementMode                = 2,
	TR_Blueprint                   = 3,
	TR_Custom                      = 4,
	TR_MAX                         = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ActionSystem.ASAnimationSetEntry
// 0x0008
struct FASAnimationSetEntry
{
	struct FName                                       EntryName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionSystem.ASPlayRateSection
// 0x0008
struct FASPlayRateSection
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionSystem.ASAnimationSetEntry_Sequence
// 0x0018 (0x0020 - 0x0008)
struct FASAnimationSetEntry_Sequence : public FASAnimationSetEntry
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FASPlayRateSection>                  PlayRate;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ActionSystem.ASAnimationSetEntry_BlendSpace
// 0x0008 (0x0010 - 0x0008)
struct FASAnimationSetEntry_BlendSpace : public FASAnimationSetEntry
{
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionSystem.ASAnimationSetEntry_StateMachine
// 0x0008 (0x0010 - 0x0008)
struct FASAnimationSetEntry_StateMachine : public FASAnimationSetEntry
{
	class UASStateMachine*                             StateMachine;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionSystem.ASAttackCollision
// 0x0028
struct FASAttackCollision
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0008(0x000C) (Edit, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DelayTime;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct ActionSystem.ASAnimInstanceProxy
// 0x00A0 (0x0610 - 0x0570)
struct FASAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0570(0x00A0) MISSED OFFSET
};

// ScriptStruct ActionSystem.ASAnimNode_StateMachine
// 0x0260 (0x0290 - 0x0030)
struct FASAnimNode_StateMachine : public FAnimNode_Base
{
	struct FString                                     NodeName;                                                 // 0x0030(0x0010) (ZeroConstructor)
	class UASStateMachine*                             StateMachine;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UASAnimationSet*                             AnimationSet;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxTransitionsPerFrame;                                   // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             BlendSpaceName;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendSpaceValue;                                          // 0x0068(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<class UASAnimNotify_StateChange*>           StateChangeNotifies;                                      // 0x0078(0x0010) (ZeroConstructor)
	struct FPoseLink                                   BasePose;                                                 // 0x0088(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x00A0(0x01F0) MISSED OFFSET
};

// ScriptStruct ActionSystem.ASEquipWeapon
// 0x0028
struct FASEquipWeapon
{
	int                                                InventoryIndex;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C) (IsPlainOldData)
	struct FVector                                     Scale3D;                                                  // 0x001C(0x000C) (IsPlainOldData)
};

// ScriptStruct ActionSystem.ASStateInstance
// 0x0030
struct FASStateInstance
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ActionSystem.ASStateInstance_BlendSpace
// 0x00C8 (0x00F8 - 0x0030)
struct FASStateInstance_BlendSpace : public FASStateInstance
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0030(0x00C8) MISSED OFFSET
};

// ScriptStruct ActionSystem.ASStateInstance_AimOffset
// 0x0000 (0x00F8 - 0x00F8)
struct FASStateInstance_AimOffset : public FASStateInstance_BlendSpace
{

};

// ScriptStruct ActionSystem.ASStateInstance_Conduit
// 0x0008 (0x0038 - 0x0030)
struct FASStateInstance_Conduit : public FASStateInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct ActionSystem.ASStateInstance_Sequence
// 0x0020 (0x0050 - 0x0030)
struct FASStateInstance_Sequence : public FASStateInstance
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
};

// ScriptStruct ActionSystem.ASStateInstance_Slot
// 0x00B8 (0x00E8 - 0x0030)
struct FASStateInstance_Slot : public FASStateInstance
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET
};

// ScriptStruct ActionSystem.ASStateInstance_StateMachine
// 0x00F0 (0x0120 - 0x0030)
struct FASStateInstance_StateMachine : public FASStateInstance
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET
};

// ScriptStruct ActionSystem.ASActiveTransition
// 0x0098
struct FASActiveTransition
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct ActionSystem.ASStateInstance_Through
// 0x0000 (0x0030 - 0x0030)
struct FASStateInstance_Through : public FASStateInstance
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
