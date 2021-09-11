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

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_ChangeLocator
struct UBP_GameFunctionLibrary_C_GameFunc_ChangeLocator_Params
{
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_IsDuringMapChanging
struct UBP_GameFunctionLibrary_C_GameFunc_IsDuringMapChanging_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChanging;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_ShowNowloading
struct UBP_GameFunctionLibrary_C_GameFunc_ShowNowloading_Params
{
	bool                                               bInShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_ShowPF_HUD
struct UBP_GameFunctionLibrary_C_GameFunc_ShowPF_HUD_Params
{
	bool                                               bInShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_LockPlayerFree
struct UBP_GameFunctionLibrary_C_GameFunc_LockPlayerFree_Params
{
	bool                                               bLock;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_BindWorldWind
struct UBP_GameFunctionLibrary_C_GameFunc_BindWorldWind_Params
{
	class UParticleSystemComponent*                    Particle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_GetCurrentMapName
struct UBP_GameFunctionLibrary_C_GameFunc_GetCurrentMapName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_PostDataLoad
struct UBP_GameFunctionLibrary_C_GameFunc_PostDataLoad_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_MapChange
struct UBP_GameFunctionLibrary_C_GameFunc_MapChange_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_IsBattelScene
struct UBP_GameFunctionLibrary_C_GameFunc_IsBattelScene_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInBattle;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GameFunc_PartyStatusRefresh
struct UBP_GameFunctionLibrary_C_GameFunc_PartyStatusRefresh_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
