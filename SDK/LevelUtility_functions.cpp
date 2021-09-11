
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function LevelUtility.LevelUtilityBPLibrary.RemoveLevelByNames
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULevelUtilityBPLibrary::STATIC_RemoveLevelByNames(class UObject* WorldContextObject, TArray<struct FName> LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.RemoveLevelByNames");

	ULevelUtilityBPLibrary_RemoveLevelByNames_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelNames = LevelNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelUtility.LevelUtilityBPLibrary.RemoveLevelByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ULevelUtilityBPLibrary::STATIC_RemoveLevelByName(class UObject* WorldContextObject, const struct FName& LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.RemoveLevelByName");

	ULevelUtilityBPLibrary_RemoveLevelByName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelUtility.LevelUtilityBPLibrary.RemoveLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelStreaming*         InLevelStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULevelUtilityBPLibrary::STATIC_RemoveLevel(class ULevelStreaming* InLevelStreaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.RemoveLevel");

	ULevelUtilityBPLibrary_RemoveLevel_Params params;
	params.InLevelStreaming = InLevelStreaming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelUtility.LevelUtilityBPLibrary.RebuildNavMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void ULevelUtilityBPLibrary::STATIC_RebuildNavMesh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.RebuildNavMesh");

	ULevelUtilityBPLibrary_RebuildNavMesh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelUtility.LevelUtilityBPLibrary.IsValidLevelAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 LevelPathName                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULevelUtilityBPLibrary::STATIC_IsValidLevelAsset(const struct FString& LevelPathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.IsValidLevelAsset");

	ULevelUtilityBPLibrary_IsValidLevelAsset_Params params;
	params.LevelPathName = LevelPathName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelUtility.LevelUtilityBPLibrary.GetCurrentStreamingLevels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelName                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         LevelPath                      (Parm, OutParm, ZeroConstructor)

void ULevelUtilityBPLibrary::STATIC_GetCurrentStreamingLevels(class UObject* WorldContextObject, TArray<struct FName>* LevelName, TArray<struct FString>* LevelPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.GetCurrentStreamingLevels");

	ULevelUtilityBPLibrary_GetCurrentStreamingLevels_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
	if (LevelPath != nullptr)
		*LevelPath = params.LevelPath;
}


// Function LevelUtility.LevelUtilityBPLibrary.GetCurrentPersistantLevelName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShortName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ULevelUtilityBPLibrary::STATIC_GetCurrentPersistantLevelName(class UObject* WorldContextObject, bool bShortName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.GetCurrentPersistantLevelName");

	ULevelUtilityBPLibrary_GetCurrentPersistantLevelName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bShortName = bShortName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelUtility.LevelUtilityBPLibrary.GetAsyncLoadLevelPercentage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelStreaming*         InLevelStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULevelUtilityBPLibrary::STATIC_GetAsyncLoadLevelPercentage(class ULevelStreaming* InLevelStreaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.GetAsyncLoadLevelPercentage");

	ULevelUtilityBPLibrary_GetAsyncLoadLevelPercentage_Params params;
	params.InLevelStreaming = InLevelStreaming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelUtility.LevelUtilityBPLibrary.GetAssetPackageName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelStreaming*         InLevelStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ULevelUtilityBPLibrary::STATIC_GetAssetPackageName(class ULevelStreaming* InLevelStreaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.GetAssetPackageName");

	ULevelUtilityBPLibrary_GetAssetPackageName_Params params;
	params.InLevelStreaming = InLevelStreaming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelUtility.LevelUtilityBPLibrary.DumpStreamingLevelName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void ULevelUtilityBPLibrary::STATIC_DumpStreamingLevelName(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.DumpStreamingLevelName");

	ULevelUtilityBPLibrary_DumpStreamingLevelName_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelUtility.LevelUtilityBPLibrary.ApplyLevelTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelStreaming*         StreamingLevel                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULevelUtilityBPLibrary::STATIC_ApplyLevelTransform(class ULevelStreaming* StreamingLevel, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.ApplyLevelTransform");

	ULevelUtilityBPLibrary_ApplyLevelTransform_Params params;
	params.StreamingLevel = StreamingLevel;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelUtility.LevelUtilityBPLibrary.AddLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LevelPathName                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULevelUtilityBPLibrary::STATIC_AddLevel(class UObject* WorldContextObject, const struct FString& LevelPathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelUtility.LevelUtilityBPLibrary.AddLevel");

	ULevelUtilityBPLibrary_AddLevel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelPathName = LevelPathName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
