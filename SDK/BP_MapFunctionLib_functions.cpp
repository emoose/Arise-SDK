
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

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetSnapTerrainCharacterLocation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SnapLocation                   (Parm, OutParm, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_GetSnapTerrainCharacterLocation(const struct FVector& InLocation, TArray<class AActor*> ActorsToIgnore, class UObject* __WorldContext, struct FVector* SnapLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetSnapTerrainCharacterLocation");

	UBP_MapFunctionLib_C_GetSnapTerrainCharacterLocation_Params params;
	params.InLocation = InLocation;
	params.ActorsToIgnore = ActorsToIgnore;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SnapLocation != nullptr)
		*SnapLocation = params.SnapLocation;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.UnloadMap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bAtActorFinalize               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUnloadAccept                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_UnloadMap(const struct FString& MapName, bool bAtActorFinalize, class UObject* __WorldContext, bool* bUnloadAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.UnloadMap");

	UBP_MapFunctionLib_C_UnloadMap_Params params;
	params.MapName = MapName;
	params.bAtActorFinalize = bAtActorFinalize;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnloadAccept != nullptr)
		*bUnloadAccept = params.bUnloadAccept;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetMapOrderManagerInterface
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UBP_MapOrderManagerInterface_C> MapOrderManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_GetMapOrderManagerInterface(class UObject* __WorldContext, TScriptInterface<class UBP_MapOrderManagerInterface_C>* MapOrderManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetMapOrderManagerInterface");

	UBP_MapFunctionLib_C_GetMapOrderManagerInterface_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapOrderManager != nullptr)
		*MapOrderManager = params.MapOrderManager;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.MapJump
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ChangeScenarioFlag             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_MapJump(const struct FString& MapName, const struct FString& MapLocatorName, bool ChangeScenarioFlag, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.MapJump");

	UBP_MapFunctionLib_C_MapJump_Params params;
	params.MapName = MapName;
	params.MapLocatorName = MapLocatorName;
	params.ChangeScenarioFlag = ChangeScenarioFlag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.PreloadMap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bPreloaded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_PreloadMap(const struct FString& MapName, class UObject* __WorldContext, bool* bAccept, bool* bPreloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.PreloadMap");

	UBP_MapFunctionLib_C_PreloadMap_Params params;
	params.MapName = MapName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
	if (bPreloaded != nullptr)
		*bPreloaded = params.bPreloaded;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.HideSubLevelAtEvent
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EMapOrderType>          HideType                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           HideMapNames                   (Parm, OutParm, ZeroConstructor)

void UBP_MapFunctionLib_C::STATIC_HideSubLevelAtEvent(class UObject* __WorldContext, TArray<EMapOrderType>* HideType, TArray<struct FName>* HideMapNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.HideSubLevelAtEvent");

	UBP_MapFunctionLib_C_HideSubLevelAtEvent_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HideType != nullptr)
		*HideType = params.HideType;
	if (HideMapNames != nullptr)
		*HideMapNames = params.HideMapNames;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetMapOrderManagerNative
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMapOrderManager*        MapOrderManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_GetMapOrderManagerNative(class UObject* __WorldContext, class AMapOrderManager** MapOrderManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetMapOrderManagerNative");

	UBP_MapFunctionLib_C_GetMapOrderManagerNative_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapOrderManager != nullptr)
		*MapOrderManager = params.MapOrderManager;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetChangeMapReason
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapChangeReason               MapChangeReason                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_GetChangeMapReason(class UObject* __WorldContext, EMapChangeReason* MapChangeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetChangeMapReason");

	UBP_MapFunctionLib_C_GetChangeMapReason_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapChangeReason != nullptr)
		*MapChangeReason = params.MapChangeReason;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetLongChatGamma
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gamma                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_GetLongChatGamma(class UObject* __WorldContext, float* Gamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetLongChatGamma");

	UBP_MapFunctionLib_C_GetLongChatGamma_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gamma != nullptr)
		*Gamma = params.Gamma;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetBattleUnnecessaryFieldLevelName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBP_MapFunctionLib_C::STATIC_GetBattleUnnecessaryFieldLevelName(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetBattleUnnecessaryFieldLevelName");

	UBP_MapFunctionLib_C_GetBattleUnnecessaryFieldLevelName_Params params;
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


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowMapEnvironment
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_ShowMapEnvironment(bool bNewShow, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowMapEnvironment");

	UBP_MapFunctionLib_C_ShowMapEnvironment_Params params;
	params.bNewShow = bNewShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.CurrentTimeZoneShift
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWorldTimeZone                 TimeZone                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_CurrentTimeZoneShift(class UObject* __WorldContext, EWorldTimeZone* TimeZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.CurrentTimeZoneShift");

	UBP_MapFunctionLib_C_CurrentTimeZoneShift_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeZone != nullptr)
		*TimeZone = params.TimeZone;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowSubLevel
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapOrderType                  MapOrderType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuc                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOldVisible                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_ShowSubLevel(EMapOrderType MapOrderType, bool bShow, class UObject* __WorldContext, bool* bSuc, bool* bOldVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowSubLevel");

	UBP_MapFunctionLib_C_ShowSubLevel_Params params;
	params.MapOrderType = MapOrderType;
	params.bShow = bShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuc != nullptr)
		*bSuc = params.bSuc;
	if (bOldVisible != nullptr)
		*bOldVisible = params.bOldVisible;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetPrevLevelName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LevelName                      (Parm, OutParm, ZeroConstructor)

void UBP_MapFunctionLib_C::STATIC_GetPrevLevelName(class UObject* __WorldContext, struct FString* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetPrevLevelName");

	UBP_MapFunctionLib_C_GetPrevLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetCurrentLevelName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LevelName                      (Parm, OutParm, ZeroConstructor)

void UBP_MapFunctionLib_C::STATIC_GetCurrentLevelName(class UObject* __WorldContext, struct FString* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetCurrentLevelName");

	UBP_MapFunctionLib_C_GetCurrentLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ReloadCurrentMap
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bChangeMap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_ReloadCurrentMap(bool bChangeMap, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.ReloadCurrentMap");

	UBP_MapFunctionLib_C_ReloadCurrentMap_Params params;
	params.bChangeMap = bChangeMap;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetExcludeLevelScenarioCondition
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ExludeLevels                   (Parm, OutParm, ZeroConstructor)

void UBP_MapFunctionLib_C::STATIC_GetExcludeLevelScenarioCondition(const struct FString& MapDatabaseName, class UObject* __WorldContext, TArray<struct FName>* ExludeLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetExcludeLevelScenarioCondition");

	UBP_MapFunctionLib_C_GetExcludeLevelScenarioCondition_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExludeLevels != nullptr)
		*ExludeLevels = params.ExludeLevels;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapAllHide
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHide                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_IsMapAllHide(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapAllHide");

	UBP_MapFunctionLib_C_IsMapAllHide_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHide != nullptr)
		*bHide = params.bHide;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowFieldMap
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_ShowFieldMap(bool NewShow, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowFieldMap");

	UBP_MapFunctionLib_C_ShowFieldMap_Params params;
	params.NewShow = NewShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsFieldMapAllHide
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHide                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_IsFieldMapAllHide(class UObject* __WorldContext, bool* bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsFieldMapAllHide");

	UBP_MapFunctionLib_C_IsFieldMapAllHide_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHide != nullptr)
		*bHide = params.bHide;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsBattleMap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBattleMap                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_IsBattleMap(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bBattleMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsBattleMap");

	UBP_MapFunctionLib_C_IsBattleMap_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bBattleMap != nullptr)
		*bBattleMap = params.bBattleMap;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetLevelNamesInRequired
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// ELevelRequiredSetting          InRequired                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBP_MapFunctionLib_C::STATIC_GetLevelNamesInRequired(const struct FString& MapDatabaseName, ELevelRequiredSetting InRequired, class UObject* __WorldContext, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetLevelNamesInRequired");

	UBP_MapFunctionLib_C_GetLevelNamesInRequired_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.InRequired = InRequired;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetBattleLevelNames
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBP_MapFunctionLib_C::STATIC_GetBattleLevelNames(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetBattleLevelNames");

	UBP_MapFunctionLib_C_GetBattleLevelNames_Params params;
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


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapUnloaded
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUnloaded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_IsMapUnloaded(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bUnloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapUnloaded");

	UBP_MapFunctionLib_C_IsMapUnloaded_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnloaded != nullptr)
		*bUnloaded = params.bUnloaded;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.UnloadAnsyncMap
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_UnloadAnsyncMap(const struct FString& MapDatabaseName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.UnloadAnsyncMap");

	UBP_MapFunctionLib_C_UnloadAnsyncMap_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsLevelsVisibled
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           Levels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisibled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_IsLevelsVisibled(class UObject* __WorldContext, TArray<struct FName>* Levels, bool* bVisibled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsLevelsVisibled");

	UBP_MapFunctionLib_C_IsLevelsVisibled_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
	if (bVisibled != nullptr)
		*bVisibled = params.bVisibled;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapVisibled
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           BattleScene                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisibled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_IsMapVisibled(const struct FString& MapDatabaseName, bool BattleScene, class UObject* __WorldContext, TArray<struct FName>* ExcludeLevels, bool* bVisibled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapVisibled");

	UBP_MapFunctionLib_C_IsMapVisibled_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.BattleScene = BattleScene;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
	if (bVisibled != nullptr)
		*bVisibled = params.bVisibled;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowLevels
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Levels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           NewShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_ShowLevels(bool NewShow, class UObject* __WorldContext, TArray<struct FName>* Levels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowLevels");

	UBP_MapFunctionLib_C_ShowLevels_Params params;
	params.NewShow = NewShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowMap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           NewShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_ShowMap(const struct FString& MapDatabaseName, bool NewShow, class UObject* __WorldContext, TArray<struct FName>* ExcludeLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowMap");

	UBP_MapFunctionLib_C_ShowMap_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.NewShow = NewShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsLevelsLoaded
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           Levels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_IsLevelsLoaded(class UObject* __WorldContext, TArray<struct FName>* Levels, bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsLevelsLoaded");

	UBP_MapFunctionLib_C_IsLevelsLoaded_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapLoaded
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_IsMapLoaded(const struct FString& MapDatabaseName, class UObject* __WorldContext, TArray<struct FName>* ExcludeLevels, bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapLoaded");

	UBP_MapFunctionLib_C_IsMapLoaded_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetLevelNames
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBP_MapFunctionLib_C::STATIC_GetLevelNames(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetLevelNames");

	UBP_MapFunctionLib_C_GetLevelNames_Params params;
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


// Function BP_MapFunctionLib.BP_MapFunctionLib_C.LoadAsyncMap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapDatabaseName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAaccept                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapFunctionLib_C::STATIC_LoadAsyncMap(const struct FString& MapDatabaseName, class UObject* __WorldContext, bool* bAaccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapFunctionLib.BP_MapFunctionLib_C.LoadAsyncMap");

	UBP_MapFunctionLib_C_LoadAsyncMap_Params params;
	params.MapDatabaseName = MapDatabaseName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAaccept != nullptr)
		*bAaccept = params.bAaccept;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
