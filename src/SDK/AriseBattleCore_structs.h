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
	EBtlAssetCategory__Unknown     = 0,
	EBtlAssetCategory__Unit        = 1,
	EBtlAssetCategory__Arts        = 2,
	EBtlAssetCategory__Magic       = 3,
	EBtlAssetCategory__MetaScript  = 4,
	EBtlAssetCategory__StrikeFirstCut = 5,
	EBtlAssetCategory__StrikeMainCut = 6,
	EBtlAssetCategory__EncountEffect = 7,
	EBtlAssetCategory__Hud         = 8,
	EBtlAssetCategory__Mystic      = 9,
	EBtlAssetCategory__SystemEffect = 10,
	EBtlAssetCategory__BuffScript  = 11,
	EBtlAssetCategory__SystemManager = 12,
	EBtlAssetCategory__EBtlAssetCategory_MAX = 13
};


// Enum AriseBattleCore.EBtlAssetBundleCategory
enum class EBtlAssetBundleCategory : uint8_t
{
	EBtlAssetBundleCategory__Unknown = 0,
	EBtlAssetBundleCategory__Unit  = 1,
	EBtlAssetBundleCategory__Encount = 2,
	EBtlAssetBundleCategory__Required = 3,
	EBtlAssetBundleCategory__HUD   = 4,
	EBtlAssetBundleCategory__SystemManager = 5,
	EBtlAssetBundleCategory__EBtlAssetBundleCategory_MAX = 6
};


// Enum AriseBattleCore.EBtlVisualTaskRunDuplicatePolicy
enum class EBtlVisualTaskRunDuplicatePolicy : uint8_t
{
	EBtlVisualTaskRunDuplicatePolicy__NotRunNewTask = 0,
	EBtlVisualTaskRunDuplicatePolicy__Overwrite = 1,
	EBtlVisualTaskRunDuplicatePolicy__CanBeDuplicated = 2,
	EBtlVisualTaskRunDuplicatePolicy__EBtlVisualTaskRunDuplicatePolicy_MAX = 3
};


// Enum AriseBattleCore.EBtlVisualableCategory
enum class EBtlVisualableCategory : uint8_t
{
	EBtlVisualableCategory__CutScene = 0,
	EBtlVisualableCategory__FormationChangeing = 1,
	EBtlVisualableCategory__Development = 2,
	EBtlVisualableCategory__DefaultFlags = 3,
	EBtlVisualableCategory__EBtlVisualableCategory_MAX = 4
};


// Enum AriseBattleCore.EBtlBitFlagCategory
enum class EBtlBitFlagCategory : uint8_t
{
	EBtlBitFlagCategory__Default   = 0,
	EBtlBitFlagCategory__Scenario  = 1,
	EBtlBitFlagCategory__CutScene  = 2,
	EBtlBitFlagCategory__Mystic    = 3,
	EBtlBitFlagCategory__StrikeAttack = 4,
	EBtlBitFlagCategory__StrikeSmash = 5,
	EBtlBitFlagCategory__BtlCamera = 6,
	EBtlBitFlagCategory__VanguardMember = 7,
	EBtlBitFlagCategory__Dead      = 8,
	EBtlBitFlagCategory__Arts      = 9,
	EBtlBitFlagCategory__Semiauto  = 10,
	EBtlBitFlagCategory__FlashRaid = 11,
	EBtlBitFlagCategory__Runaway   = 12,
	EBtlBitFlagCategory__Animation = 13,
	EBtlBitFlagCategory__DeathStroke = 14,
	EBtlBitFlagCategory__Script    = 15,
	EBtlBitFlagCategory__UserInput = 16,
	EBtlBitFlagCategory__UniqueSkill = 17,
	EBtlBitFlagCategory__Win       = 18,
	EBtlBitFlagCategory__Lose      = 19,
	EBtlBitFlagCategory__Down      = 20,
	EBtlBitFlagCategory__Freeze    = 21,
	EBtlBitFlagCategory__Inspiration = 22,
	EBtlBitFlagCategory__AI        = 23,
	EBtlBitFlagCategory__AssignControl = 24,
	EBtlBitFlagCategory__RaiseDead = 25,
	EBtlBitFlagCategory__Hidden    = 26,
	EBtlBitFlagCategory__Item      = 27,
	EBtlBitFlagCategory__MysticFade = 28,
	EBtlBitFlagCategory__ScreenCaptcha = 29,
	EBtlBitFlagCategory__DevelopmentSimulator = 30,
	EBtlBitFlagCategory__Development = 31,
	EBtlBitFlagCategory__EBtlBitFlagCategory_MAX = 32
};


// Enum AriseBattleCore.EBtlAssetLoadState
enum class EBtlAssetLoadState : uint8_t
{
	EBtlAssetLoadState__NonRequest = 0,
	EBtlAssetLoadState__Loading    = 1,
	EBtlAssetLoadState__LoadComplate = 2,
	EBtlAssetLoadState__EBtlAssetLoadState_MAX = 3
};


// Enum AriseBattleCore.EBtlVisualTaskState
enum class EBtlVisualTaskState : uint8_t
{
	EBtlVisualTaskState__None      = 0,
	EBtlVisualTaskState__Start     = 1,
	EBtlVisualTaskState__Execute   = 2,
	EBtlVisualTaskState__End       = 3,
	EBtlVisualTaskState__Exit      = 4,
	EBtlVisualTaskState__EBtlVisualTaskState_MAX = 5
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
