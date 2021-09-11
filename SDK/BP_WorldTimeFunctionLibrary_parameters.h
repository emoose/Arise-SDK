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

// Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.Deshitf24h
struct UBP_WorldTimeFunctionLibrary_C_Deshitf24h_Params
{
	float                                              inHour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              outOur;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.Shitf24h
struct UBP_WorldTimeFunctionLibrary_C_Shitf24h_Params
{
	float                                              inHour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              outOur;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.SetBattleEndMapTimeSettings
struct UBP_WorldTimeFunctionLibrary_C_SetBattleEndMapTimeSettings_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.SetBattleMapTimeSettings
struct UBP_WorldTimeFunctionLibrary_C_SetBattleMapTimeSettings_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTimeFunctionLibrary.BP_WorldTimeFunctionLibrary_C.SetMapTimeSettings
struct UBP_WorldTimeFunctionLibrary_C_SetMapTimeSettings_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
