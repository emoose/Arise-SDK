#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class LevelUtility.LevelUtilityBPLibrary
// 0x0000 (0x0028 - 0x0028)
class ULevelUtilityBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelUtility.LevelUtilityBPLibrary");
		return ptr;
	}


	void STATIC_RemoveLevelByNames(class UObject* WorldContextObject, TArray<struct FName> LevelNames);
	void STATIC_RemoveLevelByName(class UObject* WorldContextObject, const struct FName& LevelName);
	bool STATIC_RemoveLevel(class ULevelStreaming* InLevelStreaming);
	void STATIC_RebuildNavMesh(class UObject* WorldContextObject);
	bool STATIC_IsValidLevelAsset(const struct FString& LevelPathName);
	void STATIC_GetCurrentStreamingLevels(class UObject* WorldContextObject, TArray<struct FName>* LevelName, TArray<struct FString>* LevelPath);
	struct FName STATIC_GetCurrentPersistantLevelName(class UObject* WorldContextObject, bool bShortName);
	float STATIC_GetAsyncLoadLevelPercentage(class ULevelStreaming* InLevelStreaming);
	struct FName STATIC_GetAssetPackageName(class ULevelStreaming* InLevelStreaming);
	void STATIC_DumpStreamingLevelName(class UObject* WorldContextObject);
	void STATIC_ApplyLevelTransform(class ULevelStreaming* StreamingLevel, const struct FTransform& Transform);
	bool STATIC_AddLevel(class UObject* WorldContextObject, const struct FString& LevelPathName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
