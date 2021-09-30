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

// Function BP_GameScriptBase.BP_GameScriptBase_C.IsGameStart
struct ABP_GameScriptBase_C_IsGameStart_Params
{
	bool                                               Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameScriptBase.BP_GameScriptBase_C.GetScriptState
struct ABP_GameScriptBase_C_GetScriptState_Params
{
	struct FString                                     CurrentState;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameScriptBase.BP_GameScriptBase_C.GetScriptName
struct ABP_GameScriptBase_C_GetScriptName_Params
{
	struct FString                                     MyName;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameScriptBase.BP_GameScriptBase_C.UserConstructionScript
struct ABP_GameScriptBase_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
