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

// ScriptStruct StringDictionary.StringDictionaryGroup
// 0x0050
struct FStringDictionaryGroup
{
	TMap<struct FString, class UStringDictionaryData*> Strings;                                                  // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct StringDictionary.StringIdList
// 0x0010
struct FStringIdList
{
	TArray<struct FString>                             List;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct StringDictionary.DictionaryText
// 0x0020
struct FDictionaryText
{
	struct FString                                     Group;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ID;                                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct StringDictionary.StringDictionaryListData
// 0x0028
struct FStringDictionaryListData
{
	struct FSoftObjectPath                             Asset;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FString                                     Platform;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct StringDictionary.StringDictionaryListCollection
// 0x0010
struct FStringDictionaryListCollection
{
	TArray<struct FStringDictionaryListData>           Records;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
