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

// Function StringDictionary.StringDictionaryDatabase.GetString
struct UStringDictionaryDatabase_GetString_Params
{
	struct FString                                     Group;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FText                                       OutString;                                                // (Parm, OutParm)
	bool                                               Contains;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StringDictionary.StringDictionaryDatabase.GetIdList
struct UStringDictionaryDatabase_GetIdList_Params
{
	struct FString                                     Group;                                                    // (Parm, ZeroConstructor)
	TArray<struct FString>                             OutIdList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function StringDictionary.StringDictionaryDatabase.Contains
struct UStringDictionaryDatabase_Contains_Params
{
	struct FString                                     Group;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StringDictionary.StringDictionaryBPLibrary.Unload
struct UStringDictionaryBPLibrary_Unload_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function StringDictionary.StringDictionaryBPLibrary.LoadAsync
struct UStringDictionaryBPLibrary_LoadAsync_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function StringDictionary.StringDictionaryBPLibrary.Load
struct UStringDictionaryBPLibrary_Load_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function StringDictionary.StringDictionaryBPLibrary.IsLoaded
struct UStringDictionaryBPLibrary_IsLoaded_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StringDictionary.StringDictionaryBPLibrary.GetStringData_DictionaryText
struct UStringDictionaryBPLibrary_GetStringData_DictionaryText_Params
{
	struct FDictionaryText                             DictionaryText;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UStringDictionaryData*                       OutStringData;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Contains;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StringDictionary.StringDictionaryBPLibrary.GetStringData
struct UStringDictionaryBPLibrary_GetStringData_Params
{
	struct FString                                     Group;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	class UStringDictionaryData*                       OutStringData;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Contains;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StringDictionary.StringDictionaryBPLibrary.GetString_DictionaryText
struct UStringDictionaryBPLibrary_GetString_DictionaryText_Params
{
	struct FDictionaryText                             DictionaryText;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       OutString;                                                // (Parm, OutParm)
	bool                                               Contains;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StringDictionary.StringDictionaryBPLibrary.GetString
struct UStringDictionaryBPLibrary_GetString_Params
{
	struct FString                                     Group;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FText                                       OutString;                                                // (Parm, OutParm)
	bool                                               Contains;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StringDictionary.StringDictionaryBPLibrary.GetIdList
struct UStringDictionaryBPLibrary_GetIdList_Params
{
	struct FString                                     Group;                                                    // (Parm, ZeroConstructor)
	TArray<struct FString>                             OutIdList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function StringDictionary.StringDictionaryBPLibrary.GetGroupList
struct UStringDictionaryBPLibrary_GetGroupList_Params
{
	TArray<struct FString>                             OutGroupList;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function StringDictionary.StringDictionaryBPLibrary.Contains_DictionaryText
struct UStringDictionaryBPLibrary_Contains_DictionaryText_Params
{
	struct FDictionaryText                             DictionaryText;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StringDictionary.StringDictionaryBPLibrary.Contains
struct UStringDictionaryBPLibrary_Contains_Params
{
	struct FString                                     Group;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StringDictionary.StringDictionaryListDatabase.IsEnableIndex_Records
struct UStringDictionaryListDatabase_IsEnableIndex_Records_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
