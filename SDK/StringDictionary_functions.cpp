
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

// Function StringDictionary.StringDictionaryDatabase.GetString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Group                          (Parm, ZeroConstructor)
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FText                   OutString                      (Parm, OutParm)
// bool                           Contains                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStringDictionaryDatabase::GetString(const struct FString& Group, const struct FString& ID, struct FText* OutString, bool* Contains)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryDatabase.GetString");

	UStringDictionaryDatabase_GetString_Params params;
	params.Group = Group;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
	if (Contains != nullptr)
		*Contains = params.Contains;
}


// Function StringDictionary.StringDictionaryDatabase.GetIdList
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Group                          (Parm, ZeroConstructor)
// TArray<struct FString>         OutIdList                      (Parm, OutParm, ZeroConstructor)

void UStringDictionaryDatabase::GetIdList(const struct FString& Group, TArray<struct FString>* OutIdList)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryDatabase.GetIdList");

	UStringDictionaryDatabase_GetIdList_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIdList != nullptr)
		*OutIdList = params.OutIdList;
}


// Function StringDictionary.StringDictionaryDatabase.Contains
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Group                          (Parm, ZeroConstructor)
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStringDictionaryDatabase::Contains(const struct FString& Group, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryDatabase.Contains");

	UStringDictionaryDatabase_Contains_Params params;
	params.Group = Group;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StringDictionary.StringDictionaryBPLibrary.Unload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void UStringDictionaryBPLibrary::STATIC_Unload(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.Unload");

	UStringDictionaryBPLibrary_Unload_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StringDictionary.StringDictionaryBPLibrary.LoadAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void UStringDictionaryBPLibrary::STATIC_LoadAsync(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.LoadAsync");

	UStringDictionaryBPLibrary_LoadAsync_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StringDictionary.StringDictionaryBPLibrary.Load
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void UStringDictionaryBPLibrary::STATIC_Load(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.Load");

	UStringDictionaryBPLibrary_Load_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StringDictionary.StringDictionaryBPLibrary.IsLoaded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStringDictionaryBPLibrary::STATIC_IsLoaded(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.IsLoaded");

	UStringDictionaryBPLibrary_IsLoaded_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StringDictionary.StringDictionaryBPLibrary.GetStringData_DictionaryText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDictionaryText         DictionaryText                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UStringDictionaryData*   OutStringData                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Contains                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStringDictionaryBPLibrary::STATIC_GetStringData_DictionaryText(const struct FDictionaryText& DictionaryText, class UStringDictionaryData** OutStringData, bool* Contains)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.GetStringData_DictionaryText");

	UStringDictionaryBPLibrary_GetStringData_DictionaryText_Params params;
	params.DictionaryText = DictionaryText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStringData != nullptr)
		*OutStringData = params.OutStringData;
	if (Contains != nullptr)
		*Contains = params.Contains;
}


// Function StringDictionary.StringDictionaryBPLibrary.GetStringData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Group                          (Parm, ZeroConstructor)
// struct FString                 ID                             (Parm, ZeroConstructor)
// class UStringDictionaryData*   OutStringData                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Contains                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStringDictionaryBPLibrary::STATIC_GetStringData(const struct FString& Group, const struct FString& ID, class UStringDictionaryData** OutStringData, bool* Contains)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.GetStringData");

	UStringDictionaryBPLibrary_GetStringData_Params params;
	params.Group = Group;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStringData != nullptr)
		*OutStringData = params.OutStringData;
	if (Contains != nullptr)
		*Contains = params.Contains;
}


// Function StringDictionary.StringDictionaryBPLibrary.GetString_DictionaryText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDictionaryText         DictionaryText                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   OutString                      (Parm, OutParm)
// bool                           Contains                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStringDictionaryBPLibrary::STATIC_GetString_DictionaryText(const struct FDictionaryText& DictionaryText, struct FText* OutString, bool* Contains)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.GetString_DictionaryText");

	UStringDictionaryBPLibrary_GetString_DictionaryText_Params params;
	params.DictionaryText = DictionaryText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
	if (Contains != nullptr)
		*Contains = params.Contains;
}


// Function StringDictionary.StringDictionaryBPLibrary.GetString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Group                          (Parm, ZeroConstructor)
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FText                   OutString                      (Parm, OutParm)
// bool                           Contains                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStringDictionaryBPLibrary::STATIC_GetString(const struct FString& Group, const struct FString& ID, struct FText* OutString, bool* Contains)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.GetString");

	UStringDictionaryBPLibrary_GetString_Params params;
	params.Group = Group;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
	if (Contains != nullptr)
		*Contains = params.Contains;
}


// Function StringDictionary.StringDictionaryBPLibrary.GetIdList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Group                          (Parm, ZeroConstructor)
// TArray<struct FString>         OutIdList                      (Parm, OutParm, ZeroConstructor)

void UStringDictionaryBPLibrary::STATIC_GetIdList(const struct FString& Group, TArray<struct FString>* OutIdList)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.GetIdList");

	UStringDictionaryBPLibrary_GetIdList_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIdList != nullptr)
		*OutIdList = params.OutIdList;
}


// Function StringDictionary.StringDictionaryBPLibrary.GetGroupList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         OutGroupList                   (Parm, OutParm, ZeroConstructor)

void UStringDictionaryBPLibrary::STATIC_GetGroupList(TArray<struct FString>* OutGroupList)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.GetGroupList");

	UStringDictionaryBPLibrary_GetGroupList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGroupList != nullptr)
		*OutGroupList = params.OutGroupList;
}


// Function StringDictionary.StringDictionaryBPLibrary.Contains_DictionaryText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDictionaryText         DictionaryText                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStringDictionaryBPLibrary::STATIC_Contains_DictionaryText(const struct FDictionaryText& DictionaryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.Contains_DictionaryText");

	UStringDictionaryBPLibrary_Contains_DictionaryText_Params params;
	params.DictionaryText = DictionaryText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StringDictionary.StringDictionaryBPLibrary.Contains
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Group                          (Parm, ZeroConstructor)
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStringDictionaryBPLibrary::STATIC_Contains(const struct FString& Group, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryBPLibrary.Contains");

	UStringDictionaryBPLibrary_Contains_Params params;
	params.Group = Group;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StringDictionary.StringDictionaryListDatabase.IsEnableIndex_Records
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStringDictionaryListDatabase::IsEnableIndex_Records(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function StringDictionary.StringDictionaryListDatabase.IsEnableIndex_Records");

	UStringDictionaryListDatabase_IsEnableIndex_Records_Params params;
	params.Index = Index;

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
