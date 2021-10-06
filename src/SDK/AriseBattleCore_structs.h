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

// Enum AriseBattleCore.EBtlAssetCategory
enum class EBtlAssetCategory : uint8_t
{
	Unknown                        = 0,
	Unit                           = 1,
	Arts                           = 2,
	Magic                          = 3,
	MetaScript                     = 4,
	StrikeFirstCut                 = 5,
	StrikeMainCut                  = 6,
	EncountEffect                  = 7,
	Hud                            = 8,
	Mystic                         = 9,
	SystemEffect                   = 10,
	BuffScript                     = 11,
	SystemManager                  = 12,
	EBtlAssetCategory_MAX          = 13
};


// Enum AriseBattleCore.EBtlAssetBundleCategory
enum class EBtlAssetBundleCategory : uint8_t
{
	Unknown                        = 0,
	Unit                           = 1,
	Encount                        = 2,
	Required                       = 3,
	HUD                            = 4,
	SystemManager                  = 5,
	EBtlAssetBundleCategory_MAX    = 6
};


// Enum AriseBattleCore.EBtlVisualTaskRunDuplicatePolicy
enum class EBtlVisualTaskRunDuplicatePolicy : uint8_t
{
	NotRunNewTask                  = 0,
	Overwrite                      = 1,
	CanBeDuplicated                = 2,
	EBtlVisualTaskRunDuplicatePolicy_MAX = 3
};


// Enum AriseBattleCore.EBtlVisualableCategory
enum class EBtlVisualableCategory : uint8_t
{
	CutScene                       = 0,
	FormationChangeing             = 1,
	Development                    = 2,
	DefaultFlags                   = 3,
	EBtlVisualableCategory_MAX     = 4
};


// Enum AriseBattleCore.EBtlBitFlagCategory
enum class EBtlBitFlagCategory : uint8_t
{
	Default                        = 0,
	Scenario                       = 1,
	CutScene                       = 2,
	Mystic                         = 3,
	StrikeAttack                   = 4,
	StrikeSmash                    = 5,
	BtlCamera                      = 6,
	VanguardMember                 = 7,
	Dead                           = 8,
	Arts                           = 9,
	Semiauto                       = 10,
	FlashRaid                      = 11,
	Runaway                        = 12,
	Animation                      = 13,
	DeathStroke                    = 14,
	Script                         = 15,
	UserInput                      = 16,
	UniqueSkill                    = 17,
	Win                            = 18,
	Lose                           = 19,
	Down                           = 20,
	Freeze                         = 21,
	Inspiration                    = 22,
	AI                             = 23,
	AssignControl                  = 24,
	RaiseDead                      = 25,
	Hidden                         = 26,
	Item                           = 27,
	MysticFade                     = 28,
	ScreenCaptcha                  = 29,
	DevelopmentSimulator           = 30,
	Development                    = 31,
	EBtlBitFlagCategory_MAX        = 32
};


// Enum AriseBattleCore.EBtlAssetLoadState
enum class EBtlAssetLoadState : uint8_t
{
	NonRequest                     = 0,
	Loading                        = 1,
	LoadComplate                   = 2,
	EBtlAssetLoadState_MAX         = 3
};


// Enum AriseBattleCore.EBtlVisualTaskState
enum class EBtlVisualTaskState : uint8_t
{
	None                           = 0,
	Start                          = 1,
	Execute                        = 2,
	End                            = 3,
	Exit                           = 4,
	EBtlVisualTaskState_MAX        = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AriseBattleCore.BtlAssetBundleData
// 0x0050
struct FBtlAssetBundleData
{
	TMap<struct FName, class UBtlAssetBundleBase*>     AssetBundleMap;                                           // 0x0000(0x0050) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
};

// ScriptStruct AriseBattleCore.BtlAssetHandleData
// 0x0050
struct FBtlAssetHandleData
{
	TMap<struct FName, class UBtlAssetHandle*>         AssetHandleMap;                                           // 0x0000(0x0050) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
};

// ScriptStruct AriseBattleCore.BtlBitAnyOfFlags
// 0x0004
struct FBtlBitAnyOfFlags
{
	uint32_t                                           BitFlags;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseBattleCore.BtlBitAllOfFlags
// 0x0004
struct FBtlBitAllOfFlags
{
	uint32_t                                           BitFlags;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseBattleCore.BtlVisualPriorityLoopSwitch
// 0x000C
struct FBtlVisualPriorityLoopSwitch
{
	int                                                TargetPriority;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntervalTime;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timer;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseBattleCore.BtlAssetLoadingInfo
// 0x0018
struct FBtlAssetLoadingInfo
{
	struct FName                                       AssetName;                                                // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LoadCount;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LoadDataNum;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LoadDataMax;                                              // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsLoadComplate;                                           // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
