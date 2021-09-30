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

// Function BP_OpenMenuScript.BP_OpenMenuScript_C.GetScriptState
struct ABP_OpenMenuScript_C_GetScriptState_Params
{
	struct FString                                     CurrentState;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_OpenMenuScript.BP_OpenMenuScript_C.GetScriptName
struct ABP_OpenMenuScript_C_GetScriptName_Params
{
	struct FString                                     MyName;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_OpenMenuScript.BP_OpenMenuScript_C.UserConstructionScript
struct ABP_OpenMenuScript_C_UserConstructionScript_Params
{
};

// Function BP_OpenMenuScript.BP_OpenMenuScript_C.ReceiveBeginPlay
struct ABP_OpenMenuScript_C_ReceiveBeginPlay_Params
{
};

// Function BP_OpenMenuScript.BP_OpenMenuScript_C.OpenMenu
struct ABP_OpenMenuScript_C_OpenMenu_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_OpenMenuScript.BP_OpenMenuScript_C.ExecuteUbergraph_BP_OpenMenuScript
struct ABP_OpenMenuScript_C_ExecuteUbergraph_BP_OpenMenuScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
