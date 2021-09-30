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

// Class XmlDatabase.XmlDatabaseBase
// 0x0190 (0x01B8 - 0x0028)
class UXmlDatabaseBase : public UObject
{
public:
	TMap<struct FString, struct FXmlDatabaseFinder>    Finders;                                                  // 0x0028(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FXmlDatabaseMultiFinder> MultiFinders;                                             // 0x0078(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FXmlDatabaseIntegralFinder> IntegralFinders;                                          // 0x00C8(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FXmlDatabaseIntegralMultiFinder> IntegralMultiFinders;                                     // 0x0118(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0168(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class XmlDatabase.XmlDatabaseBase");
		return ptr;
	}


	void NotifyUpdate();
	TArray<int> K2_SearchDatabaseMulti_Integer(const struct FString& Finder, int Key);
	TArray<int> K2_SearchDatabaseMulti(const struct FString& Finder, const struct FString& Key);
	int K2_SearchDatabase_Integer(const struct FString& Finder, int Key);
	int K2_SearchDatabase(const struct FString& Finder, const struct FString& Key);
};


// Class XmlDatabase.XmlDatabaseManager
// 0x0000 (0x0028 - 0x0028)
class UXmlDatabaseManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class XmlDatabase.XmlDatabaseManager");
		return ptr;
	}


	void STATIC_UnregisterUpdatedNotification(const struct FXmlDatabaseNotificationHandle& Handle);
	struct FXmlDatabaseNotificationHandle STATIC_K2_RegisterUpdatedNotification(class UXmlDatabaseBase* Database, const struct FScriptDelegate& Event);
};


// Class XmlDatabase.XmlDatabaseSettings
// 0x0030 (0x0058 - 0x0028)
class UXmlDatabaseSettings : public UObject
{
public:
	bool                                               bAllPatchImportForDevelopment;                            // 0x0028(0x0001) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FString>                             IncludePatchKeys;                                         // 0x0030(0x0010) (Edit, ZeroConstructor, Config, EditConst)
	bool                                               bAllPlatformImportForDevelopment;                         // 0x0040(0x0001) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<struct FString>                             IncludePlatforms;                                         // 0x0048(0x0010) (Edit, ZeroConstructor, Config, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class XmlDatabase.XmlDatabaseSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
