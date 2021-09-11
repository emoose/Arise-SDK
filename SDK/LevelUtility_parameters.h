#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function LevelUtility.LevelUtilityBPLibrary.RemoveLevelByNames
struct ULevelUtilityBPLibrary_RemoveLevelByNames_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LevelUtility.LevelUtilityBPLibrary.RemoveLevelByName
struct ULevelUtilityBPLibrary_RemoveLevelByName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function LevelUtility.LevelUtilityBPLibrary.RemoveLevel
struct ULevelUtilityBPLibrary_RemoveLevel_Params
{
	class ULevelStreaming*                             InLevelStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelUtility.LevelUtilityBPLibrary.RebuildNavMesh
struct ULevelUtilityBPLibrary_RebuildNavMesh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelUtility.LevelUtilityBPLibrary.IsValidLevelAsset
struct ULevelUtilityBPLibrary_IsValidLevelAsset_Params
{
	struct FString                                     LevelPathName;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelUtility.LevelUtilityBPLibrary.GetCurrentStreamingLevels
struct ULevelUtilityBPLibrary_GetCurrentStreamingLevels_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelName;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             LevelPath;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function LevelUtility.LevelUtilityBPLibrary.GetCurrentPersistantLevelName
struct ULevelUtilityBPLibrary_GetCurrentPersistantLevelName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShortName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelUtility.LevelUtilityBPLibrary.GetAsyncLoadLevelPercentage
struct ULevelUtilityBPLibrary_GetAsyncLoadLevelPercentage_Params
{
	class ULevelStreaming*                             InLevelStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelUtility.LevelUtilityBPLibrary.GetAssetPackageName
struct ULevelUtilityBPLibrary_GetAssetPackageName_Params
{
	class ULevelStreaming*                             InLevelStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelUtility.LevelUtilityBPLibrary.DumpStreamingLevelName
struct ULevelUtilityBPLibrary_DumpStreamingLevelName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelUtility.LevelUtilityBPLibrary.ApplyLevelTransform
struct ULevelUtilityBPLibrary_ApplyLevelTransform_Params
{
	class ULevelStreaming*                             StreamingLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function LevelUtility.LevelUtilityBPLibrary.AddLevel
struct ULevelUtilityBPLibrary_AddLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LevelPathName;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
