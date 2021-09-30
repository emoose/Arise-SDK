
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

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNamesInHideMenuScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bValidMap                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBP_MapOrderManagerInterface_C::GetLevelNamesInHideMenuScene(const struct FString& MapName, bool* bValidMap, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNamesInHideMenuScene");

	UBP_MapOrderManagerInterface_C_GetLevelNamesInHideMenuScene_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValidMap != nullptr)
		*bValidMap = params.bValidMap;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetMapUser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FString, int>      MapUser                        (Parm, OutParm, ZeroConstructor)

void UBP_MapOrderManagerInterface_C::GetMapUser(TMap<struct FString, int>* MapUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetMapUser");

	UBP_MapOrderManagerInterface_C_GetMapUser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapUser != nullptr)
		*MapUser = params.MapUser;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetEnvLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EnvLevel                       (Parm, OutParm, ZeroConstructor)

void UBP_MapOrderManagerInterface_C::GetEnvLevel(const struct FString& MapName, struct FString* EnvLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetEnvLevel");

	UBP_MapOrderManagerInterface_C_GetEnvLevel_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnvLevel != nullptr)
		*EnvLevel = params.EnvLevel;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetExcludeLevelsWithScenarioCondtion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (Parm, OutParm, ZeroConstructor)

void UBP_MapOrderManagerInterface_C::GetExcludeLevelsWithScenarioCondtion(const struct FString& MapName, TArray<struct FName>* ExcludeLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetExcludeLevelsWithScenarioCondtion");

	UBP_MapOrderManagerInterface_C_GetExcludeLevelsWithScenarioCondtion_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapHide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bBattleScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHide                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapOrderManagerInterface_C::IsMapHide(const struct FString& MapName, bool bBattleScene, bool* bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapHide");

	UBP_MapOrderManagerInterface_C_IsMapHide_Params params;
	params.MapName = MapName;
	params.bBattleScene = bBattleScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHide != nullptr)
		*bHide = params.bHide;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNamesInRequired
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// ELevelRequiredSetting          InRequired                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBP_MapOrderManagerInterface_C::GetLevelNamesInRequired(const struct FString& MapName, ELevelRequiredSetting InRequired, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNamesInRequired");

	UBP_MapOrderManagerInterface_C_GetLevelNamesInRequired_Params params;
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


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNamesInType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EMapOrderType                  InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBP_MapOrderManagerInterface_C::GetLevelNamesInType(const struct FString& MapName, EMapOrderType InType, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNamesInType");

	UBP_MapOrderManagerInterface_C_GetLevelNamesInType_Params params;
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


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapUnloaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bUnloaded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapOrderManagerInterface_C::IsMapUnloaded(const struct FString& MapName, bool* bUnloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapUnloaded");

	UBP_MapOrderManagerInterface_C_IsMapUnloaded_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnloaded != nullptr)
		*bUnloaded = params.bUnloaded;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.UnloadMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_MapOrderManagerInterface_C::UnloadMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.UnloadMap");

	UBP_MapOrderManagerInterface_C_UnloadMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsLevelsVisibled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Levels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bVisibled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapOrderManagerInterface_C::IsLevelsVisibled(TArray<struct FName>* Levels, bool* bVisibled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsLevelsVisibled");

	UBP_MapOrderManagerInterface_C_IsLevelsVisibled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
	if (bVisibled != nullptr)
		*bVisibled = params.bVisibled;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapVisibledWithExclude
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           BattleScene                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisibled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapOrderManagerInterface_C::IsMapVisibledWithExclude(const struct FString& MapName, bool BattleScene, TArray<struct FName>* ExcludeLevels, bool* bVisibled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapVisibledWithExclude");

	UBP_MapOrderManagerInterface_C_IsMapVisibledWithExclude_Params params;
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


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.ShowLevels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Levels                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MapOrderManagerInterface_C::ShowLevels(bool bShow, TArray<struct FName> Levels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.ShowLevels");

	UBP_MapOrderManagerInterface_C_ShowLevels_Params params;
	params.bShow = bShow;
	params.Levels = Levels;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.ShowMapWithExlude
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MapName                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MapOrderManagerInterface_C::ShowMapWithExlude(bool bShow, const struct FString& MapName, TArray<struct FName>* ExcludeLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.ShowMapWithExlude");

	UBP_MapOrderManagerInterface_C_ShowMapWithExlude_Params params;
	params.bShow = bShow;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsLevelsLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Levels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapOrderManagerInterface_C::IsLevelsLoaded(TArray<struct FName>* Levels, bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsLevelsLoaded");

	UBP_MapOrderManagerInterface_C_IsLevelsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapLoadedWithExclude
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           ExcludeLevels                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MapOrderManagerInterface_C::IsMapLoadedWithExclude(const struct FString& MapName, TArray<struct FName>* ExcludeLevels, bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapLoadedWithExclude");

	UBP_MapOrderManagerInterface_C_IsMapLoadedWithExclude_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeLevels != nullptr)
		*ExcludeLevels = params.ExcludeLevels;
	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBP_MapOrderManagerInterface_C::GetLevelNames(const struct FString& MapName, bool* bValid, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNames");

	UBP_MapOrderManagerInterface_C_GetLevelNames_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.PreloadMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bReload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MapOrderManagerInterface_C::PreloadMap(const struct FString& MapName, bool bReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.PreloadMap");

	UBP_MapOrderManagerInterface_C_PreloadMap_Params params;
	params.MapName = MapName;
	params.bReload = bReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
