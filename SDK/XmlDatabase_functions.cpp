
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

// Function XmlDatabase.XmlDatabaseBase.NotifyUpdate
// (Final, Native, Public, BlueprintCallable)

void UXmlDatabaseBase::NotifyUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function XmlDatabase.XmlDatabaseBase.NotifyUpdate");

	UXmlDatabaseBase_NotifyUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabaseMulti_Integer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Finder                         (Parm, ZeroConstructor)
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UXmlDatabaseBase::K2_SearchDatabaseMulti_Integer(const struct FString& Finder, int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabaseMulti_Integer");

	UXmlDatabaseBase_K2_SearchDatabaseMulti_Integer_Params params;
	params.Finder = Finder;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabaseMulti
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Finder                         (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UXmlDatabaseBase::K2_SearchDatabaseMulti(const struct FString& Finder, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabaseMulti");

	UXmlDatabaseBase_K2_SearchDatabaseMulti_Params params;
	params.Finder = Finder;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabase_Integer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Finder                         (Parm, ZeroConstructor)
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXmlDatabaseBase::K2_SearchDatabase_Integer(const struct FString& Finder, int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabase_Integer");

	UXmlDatabaseBase_K2_SearchDatabase_Integer_Params params;
	params.Finder = Finder;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Finder                         (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXmlDatabaseBase::K2_SearchDatabase(const struct FString& Finder, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabase");

	UXmlDatabaseBase_K2_SearchDatabase_Params params;
	params.Finder = Finder;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XmlDatabase.XmlDatabaseManager.UnregisterUpdatedNotification
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FXmlDatabaseNotificationHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXmlDatabaseManager::STATIC_UnregisterUpdatedNotification(const struct FXmlDatabaseNotificationHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function XmlDatabase.XmlDatabaseManager.UnregisterUpdatedNotification");

	UXmlDatabaseManager_UnregisterUpdatedNotification_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XmlDatabase.XmlDatabaseManager.K2_RegisterUpdatedNotification
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UXmlDatabaseBase*        Database                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Event                          (Parm, ZeroConstructor)
// struct FXmlDatabaseNotificationHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FXmlDatabaseNotificationHandle UXmlDatabaseManager::STATIC_K2_RegisterUpdatedNotification(class UXmlDatabaseBase* Database, const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function XmlDatabase.XmlDatabaseManager.K2_RegisterUpdatedNotification");

	UXmlDatabaseManager_K2_RegisterUpdatedNotification_Params params;
	params.Database = Database;
	params.Event = Event;

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
