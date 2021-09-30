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

// Function TrophyRuntime.TrophyRuntimeBPLibrary.UnlockTrophy
struct UTrophyRuntimeBPLibrary_UnlockTrophy_Params
{
	struct FString                                     TrophyName;                                               // (Parm, ZeroConstructor)
};

// Function TrophyRuntime.TrophyRuntimeBPLibrary.SearchTrophyData
struct UTrophyRuntimeBPLibrary_SearchTrophyData_Params
{
	struct FString                                     TrophyName;                                               // (Parm, ZeroConstructor)
	struct FTrophyData                                 TrohyData;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrophyRuntime.TrophyRuntimeBPLibrary.ResetAllTrophies
struct UTrophyRuntimeBPLibrary_ResetAllTrophies_Params
{
};

// Function TrophyRuntime.TrophyRuntimeBPLibrary.IsUnlockTropy
struct UTrophyRuntimeBPLibrary_IsUnlockTropy_Params
{
	struct FString                                     TrophyName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
