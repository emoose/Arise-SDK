
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

// Function WorldMap.WorldMapBPLibrary.WorldMapSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Param                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWorldMapBPLibrary::STATIC_WorldMapSampleFunction(float Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapBPLibrary.WorldMapSampleFunction");

	UWorldMapBPLibrary_WorldMapSampleFunction_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldMap.WorldMapManager.WorldInitialize
// (Final, Native, Protected, BlueprintCallable)

void AWorldMapManager::WorldInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.WorldInitialize");

	AWorldMapManager_WorldInitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap.WorldMapManager.RemakeCurrentGrid
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWorldMapManager::RemakeCurrentGrid(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.RemakeCurrentGrid");

	AWorldMapManager_RemakeCurrentGrid_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap.WorldMapManager.MakeStreamDatabase
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Header                         (Parm, ZeroConstructor)
// struct FString                 sep                            (Parm, ZeroConstructor)
// struct FString                 footer                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldMapManager::MakeStreamDatabase(class UObject* WorldContextObject, const struct FString& Header, const struct FString& sep, const struct FString& footer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.MakeStreamDatabase");

	AWorldMapManager_MakeStreamDatabase_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Header = Header;
	params.sep = sep;
	params.footer = footer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldMap.WorldMapManager.MakeNewGrid
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWorldMapManager::MakeNewGrid(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.MakeNewGrid");

	AWorldMapManager_MakeNewGrid_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap.WorldMapManager.MakeCurrentGrid
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWorldMapManager::MakeCurrentGrid(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.MakeCurrentGrid");

	AWorldMapManager_MakeCurrentGrid_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap.WorldMapManager.IsLevelLoading
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldMapManager::IsLevelLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.IsLevelLoading");

	AWorldMapManager_IsLevelLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldMap.WorldMapManager.GetWroldStream
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<struct FWorldStreamInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FWorldStreamInfo> AWorldMapManager::GetWroldStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.GetWroldStream");

	AWorldMapManager_GetWroldStream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldMap.WorldMapManager.GetTickState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWorldMapManager::GetTickState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.GetTickState");

	AWorldMapManager_GetTickState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldMap.WorldMapManager.GetLevelName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            NormaledGridX                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            NormaledGridY                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AWorldMapManager::GetLevelName(int NormaledGridX, int NormaledGridY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.GetLevelName");

	AWorldMapManager_GetLevelName_Params params;
	params.NormaledGridX = NormaledGridX;
	params.NormaledGridY = NormaledGridY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldMap.WorldMapManager.GetCurrentViewGrid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<struct FWorldGridInfo>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FWorldGridInfo> AWorldMapManager::GetCurrentViewGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.GetCurrentViewGrid");

	AWorldMapManager_GetCurrentViewGrid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldMap.WorldMapManager.GetCurrentGridVisibled
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldMapManager::GetCurrentGridVisibled(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.GetCurrentGridVisibled");

	AWorldMapManager_GetCurrentGridVisibled_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WorldMap.WorldMapManager.GetCurrentGridPosition
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWorldMapManager::GetCurrentGridPosition(const struct FVector& Location, int* X, int* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.GetCurrentGridPosition");

	AWorldMapManager_GetCurrentGridPosition_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function WorldMap.WorldMapManager.EnableStreamLevelControl
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AWorldMapManager::EnableStreamLevelControl(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.EnableStreamLevelControl");

	AWorldMapManager_EnableStreamLevelControl_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap.WorldMapManager.DumpStreamDatabase
// (Final, Native, Protected, BlueprintCallable)

void AWorldMapManager::DumpStreamDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.DumpStreamDatabase");

	AWorldMapManager_DumpStreamDatabase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap.WorldMapManager.DumpRemoveGrid
// (Final, Native, Protected, BlueprintCallable)

void AWorldMapManager::DumpRemoveGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.DumpRemoveGrid");

	AWorldMapManager_DumpRemoveGrid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap.WorldMapManager.DumpDiffGrid
// (Final, Native, Protected, BlueprintCallable)

void AWorldMapManager::DumpDiffGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.DumpDiffGrid");

	AWorldMapManager_DumpDiffGrid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap.WorldMapManager.DumpCurrentGrid
// (Final, Native, Protected, BlueprintCallable)

void AWorldMapManager::DumpCurrentGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.DumpCurrentGrid");

	AWorldMapManager_DumpCurrentGrid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap.WorldMapManager.CurrentLoadingMapName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AWorldMapManager::CurrentLoadingMapName()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapManager.CurrentLoadingMapName");

	AWorldMapManager_CurrentLoadingMapName_Params params;

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
