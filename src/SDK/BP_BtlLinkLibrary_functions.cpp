
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

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.ShowLoadInfo
// (Static, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 DebugMessage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_ShowLoadInfo(const struct FString& DebugMessage, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.ShowLoadInfo");

	UBP_BtlLinkLibrary_C_ShowLoadInfo_Params params;
	params.DebugMessage = DebugMessage;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsLoadingBattleWarAssetsComplated_Implementation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsLoadComplated               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_IsLoadingBattleWarAssetsComplated_Implementation(class UObject* __WorldContext, bool* bIsLoadComplated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsLoadingBattleWarAssetsComplated_Implementation");

	UBP_BtlLinkLibrary_C_IsLoadingBattleWarAssetsComplated_Implementation_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsLoadComplated != nullptr)
		*bIsLoadComplated = params.bIsLoadComplated;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetMapOrderManagerInterface
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBP_MapOrderManagerInterface_C> MapOrderManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_GetMapOrderManagerInterface(class UObject* __WorldContext, TScriptInterface<class UBP_MapOrderManagerInterface_C>* MapOrderManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetMapOrderManagerInterface");

	UBP_BtlLinkLibrary_C_GetMapOrderManagerInterface_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapOrderManager != nullptr)
		*MapOrderManager = params.MapOrderManager;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetExcludeLevelScenarioCondition
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ExludeLevels                   (Parm, OutParm, ZeroConstructor)

void UBP_BtlLinkLibrary_C::STATIC_GetExcludeLevelScenarioCondition(const struct FString& MapName, class UObject* __WorldContext, TArray<struct FName>* ExludeLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetExcludeLevelScenarioCondition");

	UBP_BtlLinkLibrary_C_GetExcludeLevelScenarioCondition_Params params;
	params.MapName = MapName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExludeLevels != nullptr)
		*ExludeLevels = params.ExludeLevels;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetBattleLevelNames
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBP_BtlLinkLibrary_C::STATIC_GetBattleLevelNames(const struct FString& MapName, class UObject* __WorldContext, bool* Valid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetBattleLevelNames");

	UBP_BtlLinkLibrary_C_GetBattleLevelNames_Params params;
	params.MapName = MapName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsBattleMap
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapNames                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_IsBattleMap(const struct FString& MapNames, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsBattleMap");

	UBP_BtlLinkLibrary_C_IsBattleMap_Params params;
	params.MapNames = MapNames;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetBattleUnnecessaryFieldLevelName
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBP_BtlLinkLibrary_C::STATIC_GetBattleUnnecessaryFieldLevelName(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetBattleUnnecessaryFieldLevelName");

	UBP_BtlLinkLibrary_C_GetBattleUnnecessaryFieldLevelName_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadRequiredResident
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_UnloadRequiredResident(bool Force, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadRequiredResident");

	UBP_BtlLinkLibrary_C_UnloadRequiredResident_Params params;
	params.Force = Force;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncRequiredResident
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_LoadAsyncRequiredResident(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncRequiredResident");

	UBP_BtlLinkLibrary_C_LoadAsyncRequiredResident_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncBattle
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   EncountGroup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SourceContext                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_LoadAsyncBattle(const struct FString& MapDatabaseName, const struct FName& EncountGroup, const struct FString& SourceContext, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncBattle");

	UBP_BtlLinkLibrary_C_LoadAsyncBattle_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.EncountGroup = EncountGroup;
	params.SourceContext = SourceContext;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadBattle
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   EncountGroup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SourceContext                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_UnloadBattle(const struct FString& MapDatabaseName, const struct FName& EncountGroup, bool Force, const struct FString& SourceContext, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadBattle");

	UBP_BtlLinkLibrary_C_UnloadBattle_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.EncountGroup = EncountGroup;
	params.Force = Force;
	params.SourceContext = SourceContext;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadEncountGroup
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EncountGroup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_UnloadEncountGroup(const struct FName& EncountGroup, bool Force, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadEncountGroup");

	UBP_BtlLinkLibrary_C_UnloadEncountGroup_Params params;
	params.EncountGroup = EncountGroup;
	params.Force = Force;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncEncountGroup
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EncountGroup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_LoadAsyncEncountGroup(const struct FName& EncountGroup, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncEncountGroup");

	UBP_BtlLinkLibrary_C_LoadAsyncEncountGroup_Params params;
	params.EncountGroup = EncountGroup;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.HideBattleMap
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_HideBattleMap(const struct FString& MapDatabaseName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.HideBattleMap");

	UBP_BtlLinkLibrary_C_HideBattleMap_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsShowBattleLevelComplete
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_IsShowBattleLevelComplete(const struct FName& LevelName, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsShowBattleLevelComplete");

	UBP_BtlLinkLibrary_C_IsShowBattleLevelComplete_Params params;
	params.LevelName = LevelName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.ChangeVisibleBattleLevel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_ChangeVisibleBattleLevel(const struct FName& LevelName, bool Visible, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.ChangeVisibleBattleLevel");

	UBP_BtlLinkLibrary_C_ChangeVisibleBattleLevel_Params params;
	params.LevelName = LevelName;
	params.Visible = Visible;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetOnMemoryBattleMap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Result                         (Parm, OutParm, ZeroConstructor)

void UBP_BtlLinkLibrary_C::STATIC_GetOnMemoryBattleMap(class UObject* __WorldContext, TArray<struct FString>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetOnMemoryBattleMap");

	UBP_BtlLinkLibrary_C_GetOnMemoryBattleMap_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsShowBattleMapComplete
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_IsShowBattleMapComplete(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsShowBattleMapComplete");

	UBP_BtlLinkLibrary_C_IsShowBattleMapComplete_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.ShowBattleMap
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_ShowBattleMap(const struct FString& MapDatabaseName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.ShowBattleMap");

	UBP_BtlLinkLibrary_C_ShowBattleMap_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadBattleMapAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_UnloadBattleMapAll(bool Force, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadBattleMapAll");

	UBP_BtlLinkLibrary_C_UnloadBattleMapAll_Params params;
	params.Force = Force;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadBattleMap
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_UnloadBattleMap(const struct FString& MapDatabaseName, bool Force, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadBattleMap");

	UBP_BtlLinkLibrary_C_UnloadBattleMap_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.Force = Force;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsLoadCompleteBattleMap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_IsLoadCompleteBattleMap(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsLoadCompleteBattleMap");

	UBP_BtlLinkLibrary_C_IsLoadCompleteBattleMap_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncBattleMap
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_LoadAsyncBattleMap(const struct FString& MapDatabaseName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncBattleMap");

	UBP_BtlLinkLibrary_C_LoadAsyncBattleMap_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.BattleFinalizeToTitle
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_BattleFinalizeToTitle(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.BattleFinalizeToTitle");

	UBP_BtlLinkLibrary_C_BattleFinalizeToTitle_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsFieldMapAllHide
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hide                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlLinkLibrary_C::STATIC_IsFieldMapAllHide(class UObject* __WorldContext, bool* Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsFieldMapAllHide");

	UBP_BtlLinkLibrary_C_IsFieldMapAllHide_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hide != nullptr)
		*Hide = params.Hide;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
