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

// Enum ArisePlayerFree.EPFTempChangeParameterSource
enum class EPFTempChangeParameterSource : uint8_t
{
	CustomState                    = 0,
	AnimNotify                     = 1,
	EPFTempChangeParameterSource_MAX = 2
};


// Enum ArisePlayerFree.EPFActorMovementState
enum class EPFActorMovementState : uint8_t
{
	IDLE                           = 0,
	WALK                           = 1,
	RUN                            = 2,
	DASH                           = 3,
	TYPE_MAX                       = 4,
	EPFActorMovementState_MAX      = 5
};


// Enum ArisePlayerFree.EPFActorInteractReceiverShape
enum class EPFActorInteractReceiverShape : uint8_t
{
	Cylinder                       = 0,
	Box                            = 1,
	Primitive                      = 2,
	EPFActorInteractReceiverShape_MAX = 3
};


// Enum ArisePlayerFree.EAnalogJumpInterpFunc
enum class EAnalogJumpInterpFunc : uint8_t
{
	None                           = 0,
	SinIn                          = 1,
	SinOut                         = 2,
	SinInOut                       = 3,
	ExpoIn                         = 4,
	ExpoOut                        = 5,
	ExpoInOut                      = 6,
	CircularIn                     = 7,
	CircularOut                    = 8,
	CircularInOut                  = 9,
	EAnalogJumpInterpFunc_MAX      = 10
};


// Enum ArisePlayerFree.EPFActorInteractState
enum class EPFActorInteractState : uint8_t
{
	Neutral                        = 0,
	Disable                        = 1,
	Enable                         = 2,
	EPFActorInteractState_MAX      = 3
};


// Enum ArisePlayerFree.EPFInteractCategory
enum class EPFInteractCategory : uint8_t
{
	Search                         = 0,
	MapLink                        = 1,
	Treasure                       = 2,
	Movement                       = 3,
	EPFInteractCategory_MAX        = 4
};


// Enum ArisePlayerFree.EPFInteractReceiveFlags
enum class EPFInteractReceiveFlags : uint8_t
{
	Search                         = 0,
	CharaAction                    = 1,
	EPFInteractReceiveFlags_MAX    = 2
};


// Enum ArisePlayerFree.EPFPlayerCameraLookAtActionMode
enum class EPFPlayerCameraLookAtActionMode : uint8_t
{
	NoAction                       = 0,
	WalkOnly                       = 1,
	MoveOnly                       = 2,
	AutoMove                       = 3,
	AutoMoveWaitInteract           = 4,
	AutoWalk                       = 5,
	AutoWalkWaitInteract           = 6,
	EPFPlayerCameraLookAtActionMode_MAX = 7
};


// Enum ArisePlayerFree.EPFCullingType
enum class EPFCullingType : uint8_t
{
	Object                         = 0,
	Actor                          = 1,
	Character                      = 2,
	EPFCullingType_MAX             = 3
};


// Enum ArisePlayerFree.EPFFieldActionCollisionShape
enum class EPFFieldActionCollisionShape : uint8_t
{
	Box                            = 0,
	Cylinder                       = 1,
	EPFFieldActionCollisionShape_MAX = 2
};


// Enum ArisePlayerFree.EPFOwlSearchState
enum class EPFOwlSearchState : uint8_t
{
	NotFound                       = 0,
	Long                           = 1,
	Short                          = 2,
	EPFOwlSearchState_MAX          = 3
};


// Enum ArisePlayerFree.EPFPCTransToIdle
enum class EPFPCTransToIdle : uint8_t
{
	Unknown                        = 0,
	WalkTransIdle                  = 1,
	RunBrake                       = 2,
	DashBrake                      = 3,
	Landing                        = 4,
	ResetPose                      = 5,
	Annoying                       = 6,
	EPFPCTransToIdle_MAX           = 7
};


// Enum ArisePlayerFree.EPFPCEnableIKSlot
enum class EPFPCEnableIKSlot : uint8_t
{
	ActionState                    = 0,
	AnimationState                 = 1,
	AnimNotify                     = 2,
	EPFPCEnableIKSlot_MAX          = 3
};


// Enum ArisePlayerFree.EPFPlayerActionLockModeSlot
enum class EPFPlayerActionLockModeSlot : uint8_t
{
	LookAtMode                     = 0,
	Max                            = 1
};


// Enum ArisePlayerFree.EPFPlayerCharacterAutoMoveType
enum class EPFPlayerCharacterAutoMoveType : uint8_t
{
	Default                        = 0,
	WalkOnly                       = 1,
	EPFPlayerCharacterAutoMoveType_MAX = 2
};


// Enum ArisePlayerFree.EPFPCFootIKMode
enum class EPFPCFootIKMode : uint8_t
{
	Off                            = 0,
	On                             = 1,
	Auto                           = 2,
	EPFPCFootIKMode_MAX            = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ArisePlayerFree.PFActionStateTickResult
// 0x0010
struct FPFActionStateTickResult
{
	struct FName                                       NextState;                                                // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRestart;                                                 // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ArisePlayerFree.PFGimmickLevelLoadInfo
// 0x0040
struct FPFGimmickLevelLoadInfo
{
	struct FString                                     CurrentMapName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LoadMapName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct ArisePlayerFree.PFPhysicsControlParameterTableRow
// 0x0018 (0x0020 - 0x0008)
struct FPFPhysicsControlParameterTableRow : public FTableRowBase
{
	float                                              DynamicsWeight;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClothBlendWeight;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityPower;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingPower;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableGroundCollision;                                   // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableUpperParts;                                        // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLowerParts;                                        // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHairParts;                                         // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ArisePlayerFree.PFPlayerCameraPreset
// 0x001C
struct FPFPlayerCameraPreset
{
	float                                              Distance;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LocationOffset_Y;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LocationOffset_Z;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchSlideMaxDistance_Y;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchSlideMaxDistance_Z;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchSlideInterpValue;                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ArisePlayerFree.PFPCCharacterDesc
// 0x0028
struct FPFPCCharacterDesc
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty ArisePlayerFree.PFPCCharacterDesc.ABP
};

// ScriptStruct ArisePlayerFree.PFBlueprintActionStateTableRow
// 0x0008 (0x0010 - 0x0008)
struct FPFBlueprintActionStateTableRow : public FTableRowBase
{
	class UClass*                                      Class;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ArisePlayerFree.PFActorManagerTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FPFActorManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct ArisePlayerFree.PFCullingData
// 0x0038
struct FPFCullingData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ArisePlayerFree.PFCullingManagerTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FPFCullingManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct ArisePlayerFree.PFFieldActionCharacterData
// 0x0018 (0x0020 - 0x0008)
struct FPFFieldActionCharacterData : public FTableRowBase
{
	TEnumAsByte<EPFFieldActionCollisionShape>          CollisionShape;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<float>                                      CollisionParams;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor)
};

// ScriptStruct ArisePlayerFree.PFInteractInfoTableRow
// 0x0030 (0x0038 - 0x0008)
struct FPFInteractInfoTableRow : public FTableRowBase
{
	struct FSoftClassPath                              ActInfo;                                                  // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSoftClassPath                              SymbolInfo;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ArisePlayerFree.PFPhysicsControlParameterNameTableRow
// 0x0008 (0x0010 - 0x0008)
struct FPFPhysicsControlParameterNameTableRow : public FTableRowBase
{
	struct FName                                       PhysicsParameterName;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ArisePlayerFree.PFPlayerCharacterAutoMoveToDirectionTickFunction
// 0x0020 (0x0070 - 0x0050)
struct FPFPlayerCharacterAutoMoveToDirectionTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET
};

// ScriptStruct ArisePlayerFree.PFPlayerCharacterAutoMoveToTickFunction
// 0x0040 (0x0090 - 0x0050)
struct FPFPlayerCharacterAutoMoveToTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET
};

// ScriptStruct ArisePlayerFree.PFPCBurnArmArgs
// 0x0002
struct FPFPCBurnArmArgs
{
	bool                                               bBurnLeft;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBurnRight;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ArisePlayerFree.PFPCChangeWetArgs
// 0x0008
struct FPFPCChangeWetArgs
{
	float                                              HeightRate;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ArisePlayerFree.PFPCChangeFacialArgs
// 0x0018
struct FPFPCChangeFacialArgs
{
	struct FString                                     FacialName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              BlendTime;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
