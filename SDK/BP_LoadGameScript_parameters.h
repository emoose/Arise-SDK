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

// Function BP_LoadGameScript.BP_LoadGameScript_C.IsGameStart
struct ABP_LoadGameScript_C_IsGameStart_Params
{
	bool                                               Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LoadGameScript.BP_LoadGameScript_C.GetScriptState
struct ABP_LoadGameScript_C_GetScriptState_Params
{
	struct FString                                     CurrentState;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LoadGameScript.BP_LoadGameScript_C.GetScriptName
struct ABP_LoadGameScript_C_GetScriptName_Params
{
	struct FString                                     MyName;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LoadGameScript.BP_LoadGameScript_C.UserConstructionScript
struct ABP_LoadGameScript_C_UserConstructionScript_Params
{
};

// Function BP_LoadGameScript.BP_LoadGameScript_C.ReceiveBeginPlay
struct ABP_LoadGameScript_C_ReceiveBeginPlay_Params
{
};

// Function BP_LoadGameScript.BP_LoadGameScript_C.ExecuteUbergraph_BP_LoadGameScript
struct ABP_LoadGameScript_C_ExecuteUbergraph_BP_LoadGameScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
