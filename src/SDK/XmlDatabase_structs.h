#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct XmlDatabase.XmlDatabaseFinder
// 0x0060
struct FXmlDatabaseFinder
{
	struct FString                                     CollectionName;                                           // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FString, int>                          Dictionary;                                               // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct XmlDatabase.XmlDatabaseMultiFinderIndices
// 0x0020
struct FXmlDatabaseMultiFinderIndices
{
	struct FString                                     CollectionName;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        Indices;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct XmlDatabase.XmlDatabaseMultiFinder
// 0x0060
struct FXmlDatabaseMultiFinder
{
	struct FString                                     CollectionName;                                           // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FXmlDatabaseMultiFinderIndices> Dictionary;                                               // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct XmlDatabase.XmlDatabaseIntegralFinder
// 0x0060
struct FXmlDatabaseIntegralFinder
{
	struct FString                                     CollectionName;                                           // 0x0000(0x0010) (ZeroConstructor)
	TMap<int, int>                                     Dictionary;                                               // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct XmlDatabase.XmlDatabaseIntegralMultiFinder
// 0x0060
struct FXmlDatabaseIntegralMultiFinder
{
	struct FString                                     CollectionName;                                           // 0x0000(0x0010) (ZeroConstructor)
	TMap<int, struct FXmlDatabaseMultiFinderIndices>   Dictionary;                                               // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct XmlDatabase.XmlDatabaseNotificationHandle
// 0x0004
struct FXmlDatabaseNotificationHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
