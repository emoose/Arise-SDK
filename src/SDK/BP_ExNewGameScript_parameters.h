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

// Function BP_ExNewGameScript.BP_ExNewGameScript_C.IsGameStart
struct ABP_ExNewGameScript_C_IsGameStart_Params
{
	bool                                               Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExNewGameScript.BP_ExNewGameScript_C.ArtifactFlagCheck
struct ABP_ExNewGameScript_C_ArtifactFlagCheck_Params
{
};

// Function BP_ExNewGameScript.BP_ExNewGameScript_C.IsDatabaseLoaded
struct ABP_ExNewGameScript_C_IsDatabaseLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ExNewGameScript.BP_ExNewGameScript_C.GetScriptState
struct ABP_ExNewGameScript_C_GetScriptState_Params
{
	struct FString                                     CurrentState;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ExNewGameScript.BP_ExNewGameScript_C.GetScriptName
struct ABP_ExNewGameScript_C_GetScriptName_Params
{
	struct FString                                     MyName;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ExNewGameScript.BP_ExNewGameScript_C.UserConstructionScript
struct ABP_ExNewGameScript_C_UserConstructionScript_Params
{
};

// Function BP_ExNewGameScript.BP_ExNewGameScript_C.ReceiveBeginPlay
struct ABP_ExNewGameScript_C_ReceiveBeginPlay_Params
{
};

// Function BP_ExNewGameScript.BP_ExNewGameScript_C.«0¹0¿0à0¤0Ù0ó0È0_1
struct ABP_ExNewGameScript_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params
{
};

// Function BP_ExNewGameScript.BP_ExNewGameScript_C.«0¹0¿0à0¤0Ù0ó0È0_2
struct ABP_ExNewGameScript_C_«0¹0¿0à0¤0Ù0ó0È0_2_Params
{
};

// Function BP_ExNewGameScript.BP_ExNewGameScript_C.ExecuteUbergraph_BP_ExNewGameScript
struct ABP_ExNewGameScript_C_ExecuteUbergraph_BP_ExNewGameScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
