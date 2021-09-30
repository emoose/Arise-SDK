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

// Class TrophyRuntime.TrophyDatabase
// 0x0020 (0x01D8 - 0x01B8)
class UTrophyDatabase : public UXmlDatabaseBase
{
public:
	struct FTrophyCollection                           Database;                                                 // 0x01B8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrophyRuntime.TrophyDatabase");
		return ptr;
	}

};


// Class TrophyRuntime.TrophyRuntimeBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UTrophyRuntimeBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrophyRuntime.TrophyRuntimeBPLibrary");
		return ptr;
	}


	void STATIC_UnlockTrophy(const struct FString& TrophyName);
	bool STATIC_SearchTrophyData(const struct FString& TrophyName, struct FTrophyData* TrohyData);
	void STATIC_ResetAllTrophies();
	bool STATIC_IsUnlockTropy(const struct FString& TrophyName);
};


// Class TrophyRuntime.TrophyRuntimeConfig
// 0x0018 (0x0040 - 0x0028)
class UTrophyRuntimeConfig : public UObject
{
public:
	struct FSoftObjectPath                             Database;                                                 // 0x0028(0x0018) (Edit, Config, NoClear)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrophyRuntime.TrophyRuntimeConfig");
		return ptr;
	}

};


// Class TrophyRuntime.TrophyRuntimeManager
// 0x0010 (0x0038 - 0x0028)
class UTrophyRuntimeManager : public UObject
{
public:
	class UTrophyDatabase*                             Database;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrophyRuntime.TrophyRuntimeManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
