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

// Function XmlDatabase.XmlDatabaseBase.NotifyUpdate
struct UXmlDatabaseBase_NotifyUpdate_Params
{
};

// Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabaseMulti_Integer
struct UXmlDatabaseBase_K2_SearchDatabaseMulti_Integer_Params
{
	struct FString                                     Finder;                                                   // (Parm, ZeroConstructor)
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabaseMulti
struct UXmlDatabaseBase_K2_SearchDatabaseMulti_Params
{
	struct FString                                     Finder;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabase_Integer
struct UXmlDatabaseBase_K2_SearchDatabase_Integer_Params
{
	struct FString                                     Finder;                                                   // (Parm, ZeroConstructor)
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XmlDatabase.XmlDatabaseBase.K2_SearchDatabase
struct UXmlDatabaseBase_K2_SearchDatabase_Params
{
	struct FString                                     Finder;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XmlDatabase.XmlDatabaseManager.UnregisterUpdatedNotification
struct UXmlDatabaseManager_UnregisterUpdatedNotification_Params
{
	struct FXmlDatabaseNotificationHandle              Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function XmlDatabase.XmlDatabaseManager.K2_RegisterUpdatedNotification
struct UXmlDatabaseManager_K2_RegisterUpdatedNotification_Params
{
	class UXmlDatabaseBase*                            Database;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Event;                                                    // (Parm, ZeroConstructor)
	struct FXmlDatabaseNotificationHandle              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
