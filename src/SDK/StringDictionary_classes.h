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

// Class StringDictionary.StringDictionaryData
// 0x0028 (0x0050 - 0x0028)
class UStringDictionaryData : public UObject
{
public:
	struct FString                                     ID;                                                       // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FText                                       Text;                                                     // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StringDictionary.StringDictionaryData");
		return ptr;
	}

};


// Class StringDictionary.MessageData
// 0x0048 (0x0098 - 0x0050)
class UMessageData : public UStringDictionaryData
{
public:
	struct FString                                     VoiceLabel;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     CaptionId;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     SpeakerId;                                                // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Facial;                                                   // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               NotShowCaption;                                           // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StringDictionary.MessageData");
		return ptr;
	}

};


// Class StringDictionary.StringDictionaryDatabase
// 0x0058 (0x0080 - 0x0028)
class UStringDictionaryDatabase : public UObject
{
public:
	TMap<struct FString, struct FStringDictionaryGroup> Dictionary;                                               // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                Priority;                                                 // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StringDictionary.StringDictionaryDatabase");
		return ptr;
	}


	void GetString(const struct FString& Group, const struct FString& ID, struct FText* OutString, bool* Contains);
	void GetIdList(const struct FString& Group, TArray<struct FString>* OutIdList);
	bool Contains(const struct FString& Group, const struct FString& ID);
};


// Class StringDictionary.MessageDatabase
// 0x0050 (0x00D0 - 0x0080)
class UMessageDatabase : public UStringDictionaryDatabase
{
public:
	TMap<struct FString, struct FStringIdList>         GroupIdList;                                              // 0x0080(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StringDictionary.MessageDatabase");
		return ptr;
	}

};


// Class StringDictionary.StringDictionaryBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UStringDictionaryBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StringDictionary.StringDictionaryBPLibrary");
		return ptr;
	}


	void STATIC_Unload(const struct FString& Path);
	void STATIC_LoadAsync(const struct FString& Path);
	void STATIC_Load(const struct FString& Path);
	bool STATIC_IsLoaded(const struct FString& Path);
	void STATIC_GetStringData_DictionaryText(const struct FDictionaryText& DictionaryText, class UStringDictionaryData** OutStringData, bool* Contains);
	void STATIC_GetStringData(const struct FString& Group, const struct FString& ID, class UStringDictionaryData** OutStringData, bool* Contains);
	void STATIC_GetString_DictionaryText(const struct FDictionaryText& DictionaryText, struct FText* OutString, bool* Contains);
	void STATIC_GetString(const struct FString& Group, const struct FString& ID, struct FText* OutString, bool* Contains);
	void STATIC_GetIdList(const struct FString& Group, TArray<struct FString>* OutIdList);
	void STATIC_GetGroupList(TArray<struct FString>* OutGroupList);
	bool STATIC_Contains_DictionaryText(const struct FDictionaryText& DictionaryText);
	bool STATIC_Contains(const struct FString& Group, const struct FString& ID);
};


// Class StringDictionary.StringDictionaryListDatabase
// 0x0010 (0x01C8 - 0x01B8)
class UStringDictionaryListDatabase : public UXmlDatabaseBase
{
public:
	struct FStringDictionaryListCollection             Database;                                                 // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StringDictionary.StringDictionaryListDatabase");
		return ptr;
	}


	bool IsEnableIndex_Records(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
