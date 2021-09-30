
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

// Function TrophyRuntime.TrophyRuntimeBPLibrary.UnlockTrophy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TrophyName                     (Parm, ZeroConstructor)

void UTrophyRuntimeBPLibrary::STATIC_UnlockTrophy(const struct FString& TrophyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyRuntime.TrophyRuntimeBPLibrary.UnlockTrophy");

	UTrophyRuntimeBPLibrary_UnlockTrophy_Params params;
	params.TrophyName = TrophyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyRuntime.TrophyRuntimeBPLibrary.SearchTrophyData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 TrophyName                     (Parm, ZeroConstructor)
// struct FTrophyData             TrohyData                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTrophyRuntimeBPLibrary::STATIC_SearchTrophyData(const struct FString& TrophyName, struct FTrophyData* TrohyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyRuntime.TrophyRuntimeBPLibrary.SearchTrophyData");

	UTrophyRuntimeBPLibrary_SearchTrophyData_Params params;
	params.TrophyName = TrophyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrohyData != nullptr)
		*TrohyData = params.TrohyData;

	return params.ReturnValue;
}


// Function TrophyRuntime.TrophyRuntimeBPLibrary.ResetAllTrophies
// (Final, Native, Static, Public, BlueprintCallable)

void UTrophyRuntimeBPLibrary::STATIC_ResetAllTrophies()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyRuntime.TrophyRuntimeBPLibrary.ResetAllTrophies");

	UTrophyRuntimeBPLibrary_ResetAllTrophies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyRuntime.TrophyRuntimeBPLibrary.IsUnlockTropy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 TrophyName                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTrophyRuntimeBPLibrary::STATIC_IsUnlockTropy(const struct FString& TrophyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyRuntime.TrophyRuntimeBPLibrary.IsUnlockTropy");

	UTrophyRuntimeBPLibrary_IsUnlockTropy_Params params;
	params.TrophyName = TrophyName;

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
