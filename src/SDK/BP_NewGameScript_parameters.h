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

// Function BP_NewGameScript.BP_NewGameScript_C.GetMenuManager_local
struct ABP_NewGameScript_C_GetMenuManager_local_Params
{
	TScriptInterface<class UTO14_BP_MenuManagerInterface_C> MenuManagerInterface;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NewGameScript.BP_NewGameScript_C.UpdateNewGame
struct ABP_NewGameScript_C_UpdateNewGame_Params
{
};

// Function BP_NewGameScript.BP_NewGameScript_C.UserConstructionScript
struct ABP_NewGameScript_C_UserConstructionScript_Params
{
};

// Function BP_NewGameScript.BP_NewGameScript_C.InitializeGameData
struct ABP_NewGameScript_C_InitializeGameData_Params
{
};

// Function BP_NewGameScript.BP_NewGameScript_C.ReceiveBeginPlay
struct ABP_NewGameScript_C_ReceiveBeginPlay_Params
{
};

// Function BP_NewGameScript.BP_NewGameScript_C.ExecuteUbergraph_BP_NewGameScript
struct ABP_NewGameScript_C_ExecuteUbergraph_BP_NewGameScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
