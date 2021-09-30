
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

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInHideMenuScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bValidMap                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetLevelNamesInHideMenuScene(const struct FString& MapName, bool* bValidMap, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInHideMenuScene");

	ABP_MapOrderManager_C_GetLevelNamesInHideMenuScene_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValidMap != nullptr)
		*bValidMap = params.bValidMap;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetMapUser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FString, int>      MapUser                        (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetMapUser(TMap<struct FString, int>* MapUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetMapUser");

	ABP_MapOrderManager_C_GetMapUser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapUser != nullptr)
		*MapUser = params.MapUser;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetEnvLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EnvLevel                       (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetEnvLevel(const struct FString& MapName, struct FString* EnvLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetEnvLevel");

	ABP_MapOrderManager_C_GetEnvLevel_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnvLevel != nullptr)
		*EnvLevel = params.EnvLevel;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetExcludeLevelsWithScenarioCondtion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetExcludeLevelsWithScenarioCondtion(const struct FString& MapName, TArray<struct FName>* ExcludeLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetExcludeLevelsWithScenarioCondtion");

	ABP_MapOrderManager_C_GetExcludeLevelsWithScenarioCondtion_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapHide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bBattleScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHide                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsMapHide(const struct FString& MapName, bool bBattleScene, bool* bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapHide");

	ABP_MapOrderManager_C_IsMapHide_Params params;
	params.MapName = MapName;
	params.bBattleScene = bBattleScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHide != nullptr)
		*bHide = params.bHide;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInRequired
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// ELevelRequiredSetting          InRequired                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetLevelNamesInRequired(const struct FString& MapName, ELevelRequiredSetting InRequired, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInRequired");

	ABP_MapOrderManager_C_GetLevelNamesInRequired_Params params;
	params.MapName = MapName;
	params.InRequired = InRequired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EMapOrderType                  InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetLevelNamesInType(const struct FString& MapName, EMapOrderType InType, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInType");

	ABP_MapOrderManager_C_GetLevelNamesInType_Params params;
	params.MapName = MapName;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapUnloaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bUnloaded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsMapUnloaded(const struct FString& MapName, bool* bUnloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapUnloaded");

	ABP_MapOrderManager_C_IsMapUnloaded_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnloaded != nullptr)
		*bUnloaded = params.bUnloaded;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsVisibled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Levels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bVisibled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsLevelsVisibled(TArray<struct FName>* Levels, bool* bVisibled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsVisibled");

	ABP_MapOrderManager_C_IsLevelsVisibled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
	if (bVisibled != nullptr)
		*bVisibled = params.bVisibled;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapVisibledWithExclude
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           BattleScene                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisibled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsMapVisibledWithExclude(const struct FString& MapName, bool BattleScene, TArray<struct FName>* ExcludeLevels, bool* bVisibled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapVisibledWithExclude");

	ABP_MapOrderManager_C_IsMapVisibledWithExclude_Params params;
	params.MapName = MapName;
	params.BattleScene = BattleScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
	if (bVisibled != nullptr)
		*bVisibled = params.bVisibled;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Levels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsLevelsLoaded(TArray<struct FName>* Levels, bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsLoaded");

	ABP_MapOrderManager_C_IsLevelsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapLoadedWithExclude
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsMapLoadedWithExclude(const struct FString& MapName, TArray<struct FName>* ExcludeLevels, bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapLoadedWithExclude");

	ABP_MapOrderManager_C_IsMapLoadedWithExclude_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetLevelNames(const struct FString& MapName, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNames");

	ABP_MapOrderManager_C_GetLevelNames_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsValidMapUser?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsValidMapUser_(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsValidMapUser?");

	ABP_MapOrderManager_C_IsValidMapUser__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.CleanupValues
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::CleanupValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.CleanupValues");

	ABP_MapOrderManager_C_CleanupValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInHideMenuScene_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetLevelNamesInHideMenuScene_Implementation(const struct FString& MapName, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInHideMenuScene_Implementation");

	ABP_MapOrderManager_C_GetLevelNamesInHideMenuScene_Implementation_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsSameVisible
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<bool>                   Array0                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<bool>                   Array1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bSame                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsSameVisible(TArray<bool>* Array0, TArray<bool>* Array1, bool* bSame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsSameVisible");

	ABP_MapOrderManager_C_IsSameVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array0 != nullptr)
		*Array0 = params.Array0;
	if (Array1 != nullptr)
		*Array1 = params.Array1;
	if (bSame != nullptr)
		*bSame = params.bSame;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetUserCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Users                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::GetUserCount(const struct FString& MapName, int* Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetUserCount");

	ABP_MapOrderManager_C_GetUserCount_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Users != nullptr)
		*Users = params.Users;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.SnapTerrainLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::SnapTerrainLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.SnapTerrainLocation");

	ABP_MapOrderManager_C_SnapTerrainLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.FindMapOrderUserWithCache
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMapOrderUser           User                           (Parm, OutParm)

void ABP_MapOrderManager_C::FindMapOrderUserWithCache(const struct FString& MapName, bool* bFound, struct FMapOrderUser* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.FindMapOrderUserWithCache");

	ABP_MapOrderManager_C_FindMapOrderUserWithCache_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (User != nullptr)
		*User = params.User;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ChangePlayerVisibilty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::ChangePlayerVisibilty(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ChangePlayerVisibilty");

	ABP_MapOrderManager_C_ChangePlayerVisibilty_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.HidePlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::HidePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.HidePlayer");

	ABP_MapOrderManager_C_HidePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetEnvLevel_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EnvLevel                       (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetEnvLevel_Implementation(const struct FString& MapName, struct FString* EnvLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetEnvLevel_Implementation");

	ABP_MapOrderManager_C_GetEnvLevel_Implementation_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnvLevel != nullptr)
		*EnvLevel = params.EnvLevel;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ChangeMapUserCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            oNewUserCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::ChangeMapUserCount(const struct FString& MapName, int Add, int* oNewUserCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ChangeMapUserCount");

	ABP_MapOrderManager_C_ChangeMapUserCount_Params params;
	params.MapName = MapName;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oNewUserCount != nullptr)
		*oNewUserCount = params.oNewUserCount;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetExcludeLevelsWithScenarioCondtion_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetExcludeLevelsWithScenarioCondtion_Implementation(const struct FString& MapName, TArray<struct FName>* ExcludeLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetExcludeLevelsWithScenarioCondtion_Implementation");

	ABP_MapOrderManager_C_GetExcludeLevelsWithScenarioCondtion_Implementation_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadQueManagement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::UnloadQueManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadQueManagement");

	ABP_MapOrderManager_C_UnloadQueManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.LoadQueManagement
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLoadingStart                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::LoadQueManagement(bool* bLoadingStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.LoadQueManagement");

	ABP_MapOrderManager_C_LoadQueManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoadingStart != nullptr)
		*bLoadingStart = params.bLoadingStart;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.DoUnloadMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapOrderManager_C::DoUnloadMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.DoUnloadMap");

	ABP_MapOrderManager_C_DoUnloadMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.DoPreloadMap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::DoPreloadMap(const struct FString& MapName, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.DoPreloadMap");

	ABP_MapOrderManager_C_DoPreloadMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapHide_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bBattleScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHide                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsMapHide_Implementation(const struct FString& MapName, bool bBattleScene, bool* bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapHide_Implementation");

	ABP_MapOrderManager_C_IsMapHide_Implementation_Params params;
	params.MapName = MapName;
	params.bBattleScene = bBattleScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHide != nullptr)
		*bHide = params.bHide;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInRequired_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// ELevelRequiredSetting          InRequired                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetLevelNamesInRequired_Implementation(const struct FString& MapName, ELevelRequiredSetting InRequired, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInRequired_Implementation");

	ABP_MapOrderManager_C_GetLevelNamesInRequired_Implementation_Params params;
	params.MapName = MapName;
	params.InRequired = InRequired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInType_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EMapOrderType                  InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetLevelNamesInType_Implementation(const struct FString& MapName, EMapOrderType InType, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInType_Implementation");

	ABP_MapOrderManager_C_GetLevelNamesInType_Implementation_Params params;
	params.MapName = MapName;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsVisibled_Implementation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           Levels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bVisibled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsLevelsVisibled_Implementation(TArray<struct FName>* Levels, bool* bVisibled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsVisibled_Implementation");

	ABP_MapOrderManager_C_IsLevelsVisibled_Implementation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
	if (bVisibled != nullptr)
		*bVisibled = params.bVisibled;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapVisibledWithExclude_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           BattleScene                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisibled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsMapVisibledWithExclude_Implementation(const struct FString& MapName, bool BattleScene, TArray<struct FName>* ExcludeLevels, bool* bVisibled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapVisibledWithExclude_Implementation");

	ABP_MapOrderManager_C_IsMapVisibledWithExclude_Implementation_Params params;
	params.MapName = MapName;
	params.BattleScene = BattleScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
	if (bVisibled != nullptr)
		*bVisibled = params.bVisibled;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowLevels_Implementation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Levels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MapOrderManager_C::ShowLevels_Implementation(bool bShow, TArray<struct FName>* Levels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ShowLevels_Implementation");

	ABP_MapOrderManager_C_ShowLevels_Implementation_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowMapWithExlude_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MapOrderManager_C::ShowMapWithExlude_Implementation(bool bShow, const struct FString& MapName, TArray<struct FName>* ExcludeLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ShowMapWithExlude_Implementation");

	ABP_MapOrderManager_C_ShowMapWithExlude_Implementation_Params params;
	params.bShow = bShow;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsLoaded_Implementation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           Levels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsLevelsLoaded_Implementation(TArray<struct FName>* Levels, bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsLoaded_Implementation");

	ABP_MapOrderManager_C_IsLevelsLoaded_Implementation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapLoadedWithExclude_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsMapLoadedWithExclude_Implementation(const struct FString& MapName, TArray<struct FName>* ExcludeLevels, bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapLoadedWithExclude_Implementation");

	ABP_MapOrderManager_C_IsMapLoadedWithExclude_Implementation_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNames_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetLevelNames_Implementation(const struct FString& MapName, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNames_Implementation");

	ABP_MapOrderManager_C_GetLevelNames_Implementation_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.MaskMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bMask                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MaskReason                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapOrderManager_C::MaskMap(const struct FString& MapName, bool bMask, const struct FString& MaskReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.MaskMap");

	ABP_MapOrderManager_C_MaskMap_Params params;
	params.MapName = MapName;
	params.bMask = bMask;
	params.MaskReason = MaskReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsValidMapname?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsValidMapname_(const struct FString& MapName, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsValidMapname?");

	ABP_MapOrderManager_C_IsValidMapname__Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetMapLocators
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_MapLocatorBase_C*> OutActors                      (Parm, OutParm, ZeroConstructor)

void ABP_MapOrderManager_C::GetMapLocators(TArray<class ABP_MapLocatorBase_C*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetMapLocators");

	ABP_MapOrderManager_C_GetMapLocators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.RemoveSoundLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           SoundLevels                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MapOrderManager_C::RemoveSoundLevel(TArray<struct FName>* SoundLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.RemoveSoundLevel");

	ABP_MapOrderManager_C_RemoveSoundLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SoundLevels != nullptr)
		*SoundLevels = params.SoundLevels;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.AddSoundLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SoundLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapOrderManager_C::AddSoundLevel(const struct FString& SoundLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.AddSoundLevel");

	ABP_MapOrderManager_C_AddSoundLevel_Params params;
	params.SoundLevel = SoundLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ClearSoundLevels
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::ClearSoundLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ClearSoundLevels");

	ABP_MapOrderManager_C_ClearSoundLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsSoundBankAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   BankName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsSoundBankAvailable(const struct FName& BankName, bool* Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsSoundBankAvailable");

	ABP_MapOrderManager_C_IsSoundBankAvailable_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.LoadSoundBank
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           SoundLevels                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MapOrderManager_C::LoadSoundBank(TArray<struct FName>* SoundLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.LoadSoundBank");

	ABP_MapOrderManager_C_LoadSoundBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SoundLevels != nullptr)
		*SoundLevels = params.SoundLevels;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadSoundBank
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           SoundLevels                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MapOrderManager_C::UnloadSoundBank(TArray<struct FName>* SoundLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadSoundBank");

	ABP_MapOrderManager_C_UnloadSoundBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SoundLevels != nullptr)
		*SoundLevels = params.SoundLevels;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.GetMapOrderDatabasePath
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Full                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::GetMapOrderDatabasePath(const struct FString& MapName, bool Full, struct FString* Path, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.GetMapOrderDatabasePath");

	ABP_MapOrderManager_C_GetMapOrderDatabasePath_Params params;
	params.MapName = MapName;
	params.Full = Full;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsAllMapsUnloaded
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUnloaded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsAllMapsUnloaded(bool* bUnloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsAllMapsUnloaded");

	ABP_MapOrderManager_C_IsAllMapsUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnloaded != nullptr)
		*bUnloaded = params.bUnloaded;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadMap_Implementation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapOrderManager_C::UnloadMap_Implementation(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadMap_Implementation");

	ABP_MapOrderManager_C_UnloadMap_Implementation_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.RemoveMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapOrderManager_C::RemoveMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.RemoveMap");

	ABP_MapOrderManager_C_RemoveMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapVisibled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bBattleScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisibled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsMapVisibled(const struct FString& MapName, bool bBattleScene, bool* bVisibled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapVisibled");

	ABP_MapOrderManager_C_IsMapVisibled_Params params;
	params.MapName = MapName;
	params.bBattleScene = bBattleScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bVisibled != nullptr)
		*bVisibled = params.bVisibled;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapUnloaded_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bUnloaded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsMapUnloaded_Implementation(const struct FString& MapName, bool* bUnloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapUnloaded_Implementation");

	ABP_MapOrderManager_C_IsMapUnloaded_Implementation_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnloaded != nullptr)
		*bUnloaded = params.bUnloaded;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.RemoveAllMaps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::RemoveAllMaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.RemoveAllMaps");

	ABP_MapOrderManager_C_RemoveAllMaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadAllMaps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::UnloadAllMaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadAllMaps");

	ABP_MapOrderManager_C_UnloadAllMaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 AssignLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bLocationFromPartyProfile      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyLocationChange            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ChangeLocation                 (Parm, OutParm, IsPlainOldData)

void ABP_MapOrderManager_C::ShowPlayer(const struct FString& LocationName, const struct FVector& AssignLocation, bool bLocationFromPartyProfile, bool bOnlyLocationChange, struct FVector* ChangeLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ShowPlayer");

	ABP_MapOrderManager_C_ShowPlayer_Params params;
	params.LocationName = LocationName;
	params.AssignLocation = AssignLocation;
	params.bLocationFromPartyProfile = bLocationFromPartyProfile;
	params.bOnlyLocationChange = bOnlyLocationChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChangeLocation != nullptr)
		*ChangeLocation = params.ChangeLocation;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bBattleScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreAlwaysShow              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::ShowMap(bool bShow, const struct FString& MapName, bool bBattleScene, bool bIgnoreAlwaysShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ShowMap");

	ABP_MapOrderManager_C_ShowMap_Params params;
	params.bShow = bShow;
	params.MapName = MapName;
	params.bBattleScene = bBattleScene;
	params.bIgnoreAlwaysShow = bIgnoreAlwaysShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapLoaded
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::IsMapLoaded(const struct FString& MapName, bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapLoaded");

	ABP_MapOrderManager_C_IsMapLoaded_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.PreloadMap_Implementation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bReload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::PreloadMap_Implementation(const struct FString& MapName, bool bReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.PreloadMap_Implementation");

	ABP_MapOrderManager_C_PreloadMap_Implementation_Params params;
	params.MapName = MapName;
	params.bReload = bReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.UserConstructionScript");

	ABP_MapOrderManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.OnUnloadFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::OnUnloadFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.OnUnloadFinished");

	ABP_MapOrderManager_C_OnUnloadFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.OnLoadFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::OnLoadFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.OnLoadFinished");

	ABP_MapOrderManager_C_OnLoadFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapOrderManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ReceiveBeginPlay");

	ABP_MapOrderManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ReceiveTick");

	ABP_MapOrderManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.OnMapGabage
// (BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::OnMapGabage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.OnMapGabage");

	ABP_MapOrderManager_C_OnMapGabage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.PreloadMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bReload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::PreloadMap(const struct FString& MapName, bool bReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.PreloadMap");

	ABP_MapOrderManager_C_PreloadMap_Params params;
	params.MapName = MapName;
	params.bReload = bReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowMapWithExlude
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MapName                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MapOrderManager_C::ShowMapWithExlude(bool bShow, const struct FString& MapName, TArray<struct FName>* ExcludeLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ShowMapWithExlude");

	ABP_MapOrderManager_C_ShowMapWithExlude_Params params;
	params.bShow = bShow;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowLevels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Levels                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MapOrderManager_C::ShowLevels(bool bShow, TArray<struct FName> Levels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ShowLevels");

	ABP_MapOrderManager_C_ShowLevels_Params params;
	params.bShow = bShow;
	params.Levels = Levels;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapOrderManager_C::UnloadMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadMap");

	ABP_MapOrderManager_C_UnloadMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.BPE_DoCleanup
// (Event, Protected, BlueprintEvent)

void ABP_MapOrderManager_C::BPE_DoCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.BPE_DoCleanup");

	ABP_MapOrderManager_C_BPE_DoCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.ExecuteUbergraph_BP_MapOrderManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapOrderManager_C::ExecuteUbergraph_BP_MapOrderManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.ExecuteUbergraph_BP_MapOrderManager");

	ABP_MapOrderManager_C_ExecuteUbergraph_BP_MapOrderManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.EventMapGabage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MapOrderManager_C::EventMapGabage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.EventMapGabage__DelegateSignature");

	ABP_MapOrderManager_C_EventMapGabage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.EventUnloadFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapOrderManager_C::EventUnloadFinished__DelegateSignature(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.EventUnloadFinished__DelegateSignature");

	ABP_MapOrderManager_C_EventUnloadFinished__DelegateSignature_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManager.BP_MapOrderManager_C.EventLoadFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapOrderManager_C::EventLoadFinished__DelegateSignature(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManager.BP_MapOrderManager_C.EventLoadFinished__DelegateSignature");

	ABP_MapOrderManager_C_EventLoadFinished__DelegateSignature_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
