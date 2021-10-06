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

// Enum AriseCommonPlugin.EAreaPriority
enum class EAreaPriority : uint8_t
{
	None                           = 0,
	Encount                        = 1,
	Npc                            = 2,
	Gimmick                        = 3,
	Ladder                         = 4,
	TreasureBox                    = 5,
	MapLink                        = 6,
	Event                          = 7,
	MaxPriority                    = 8,
	EAreaPriority_MAX              = 9
};


// Enum AriseCommonPlugin.EArisePartyID
enum class EArisePartyID : uint8_t
{
	ARI                            = 0,
	SIO                            = 1,
	NNA                            = 2,
	ZGU                            = 3,
	MNK                            = 4,
	YRA                            = 5,
	DLC                            = 6,
	DLC01                          = 7,
	MAX                            = 8,
	INVALID                        = 9,
	DUMMY_ANONYMOUS_               = 10
};


// Enum AriseCommonPlugin.EDLCPresentCategory
enum class EDLCPresentCategory : uint8_t
{
	None                           = 0,
	Visual                         = 1,
	Item                           = 2,
	Material                       = 3,
	Artifact                       = 4,
	Music                          = 5,
	Battle                         = 6,
	Weapon                         = 7,
	EDLCPresentCategory_MAX        = 8
};


// Enum AriseCommonPlugin.EDLCExecutionTiming
enum class EDLCExecutionTiming : uint8_t
{
	Opened                         = 0,
	Loaded                         = 1,
	Activated                      = 2,
	Mounted                        = 3,
	Reopen                         = 4,
	OpenAndLoaded                  = 5,
	EDLCExecutionTiming_MAX        = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AriseCommonPlugin.StrAreaPriorityComponentRef
// 0x0008
struct FStrAreaPriorityComponentRef
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AriseCommonPlugin.DLCExecutionData
// 0x0028
struct FDLCExecutionData
{
	EDLCExecutionTiming                                ExecuteTiming;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ExecuteCommand;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ExecuteParameter;                                         // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCommonPlugin.DLCItemData
// 0x0068
struct FDLCItemData
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Label;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	EDLCPresentCategory                                Category;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     ItemCategory;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ItemIcon;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     CharaCategory;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               Fixed;                                                    // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               Inherit;                                                  // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	TArray<struct FDLCExecutionData>                   ExecuteDatas;                                             // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCommonPlugin.DLCPresentData
// 0x0028
struct FDLCPresentData
{
	struct FString                                     Label;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               Openable;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EDLCPresentCategory                                Category;                                                 // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	TArray<struct FString>                             Items;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCommonPlugin.DLCPackageData
// 0x0020
struct FDLCPackageData
{
	struct FString                                     Label;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FString>                             Presents;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCommonPlugin.DLCPackageDataCollection
// 0x0030
struct FDLCPackageDataCollection
{
	TArray<struct FDLCItemData>                        Items;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FDLCPresentData>                     Presents;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FDLCPackageData>                     Packages;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCommonPlugin.DLCPackagePlatformData
// 0x0030
struct FDLCPackagePlatformData
{
	struct FString                                     Label;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     PackageID;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ExtraUnlockID;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCommonPlugin.DLCPackagePlatformDataCollection
// 0x0010
struct FDLCPackagePlatformDataCollection
{
	TArray<struct FDLCPackagePlatformData>             Packages;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AriseCommonPlugin.StreamLevelInfo
// 0x0020
struct FStreamLevelInfo
{
	int                                                UserCount;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       LevelName;                                                // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     LevelPath;                                                // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AriseCommonPlugin.ScenarioFlagId
// 0x0008
struct FScenarioFlagId
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct AriseCommonPlugin.ScenarioCondition
// 0x0020
struct FScenarioCondition
{
	int                                                BeginChapter;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeginSection;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndChapter;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndSection;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FScenarioFlagId>                     FlagArray;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AriseCommonPlugin.ScenarioFlagNamed
// 0x0018
struct FScenarioFlagNamed
{
	struct FString                                     FlagName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Enable;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AriseCommonPlugin.DatabaseLabel
// 0x0010
struct FDatabaseLabel
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AriseCommonPlugin.ScriptFunction
// 0x0020
struct FScriptFunction
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Arg;                                                      // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AriseCommonPlugin.ScriptCondition
// 0x0010
struct FScriptCondition
{
	TArray<struct FScriptFunction>                     Function;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AriseCommonPlugin.PartyParam
// 0x0004
struct FPartyParam
{
	int                                                Entry;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AriseCommonPlugin.PartyCondition
// 0x0010
struct FPartyCondition
{
	TArray<struct FPartyParam>                         Param;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AriseCommonPlugin.ScenarioConditionNamed
// 0x0020
struct FScenarioConditionNamed
{
	int                                                BeginChapter;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeginSection;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndChapter;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndSection;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FScenarioFlagNamed>                  FlagNameArray;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
