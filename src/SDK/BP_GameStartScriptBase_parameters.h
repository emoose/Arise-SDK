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

// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.UpdateNewGame
struct ABP_GameStartScriptBase_C_UpdateNewGame_Params
{
};

// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.UserConstructionScript
struct ABP_GameStartScriptBase_C_UserConstructionScript_Params
{
};

// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.InitializeGameData
struct ABP_GameStartScriptBase_C_InitializeGameData_Params
{
	struct FAriseSimpleEventData                       EndCallback;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.PlayFirstMovie
struct ABP_GameStartScriptBase_C_PlayFirstMovie_Params
{
	struct FAriseSimpleEventData                       MovieEndCallback;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.ExecuteUbergraph_BP_GameStartScriptBase
struct ABP_GameStartScriptBase_C_ExecuteUbergraph_BP_GameStartScriptBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.OnFirstMovieEnd__DelegateSignature
struct ABP_GameStartScriptBase_C_OnFirstMovieEnd__DelegateSignature_Params
{
};

// Function BP_GameStartScriptBase.BP_GameStartScriptBase_C.OnGameDataInitialized__DelegateSignature
struct ABP_GameStartScriptBase_C_OnGameDataInitialized__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
