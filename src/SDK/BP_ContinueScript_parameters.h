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

// Function BP_ContinueScript.BP_ContinueScript_C.IsGameStart
struct ABP_ContinueScript_C_IsGameStart_Params
{
	bool                                               Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ContinueScript.BP_ContinueScript_C.GetPackageNames
struct ABP_ContinueScript_C_GetPackageNames_Params
{
	TArray<struct FString>                             Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FModifiedText                               Out;                                                      // (Parm, OutParm)
};

// Function BP_ContinueScript.BP_ContinueScript_C.CombineWithCRLF
struct ABP_ContinueScript_C_CombineWithCRLF_Params
{
	struct FModifiedText                               Text1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Text2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Out;                                                      // (Parm, OutParm)
};

// Function BP_ContinueScript.BP_ContinueScript_C.DialogYesNo
struct ABP_ContinueScript_C_DialogYesNo_Params
{
	struct FDictionaryText                             InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ContinueScript.BP_ContinueScript_C.GetDLC_CategoryError
struct ABP_ContinueScript_C_GetDLC_CategoryError_Params
{
	struct FString                                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FDictionaryText                             DicText;                                                  // (Parm, OutParm)
};

// Function BP_ContinueScript.BP_ContinueScript_C.GetScriptState
struct ABP_ContinueScript_C_GetScriptState_Params
{
	struct FString                                     CurrentState;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ContinueScript.BP_ContinueScript_C.GetScriptName
struct ABP_ContinueScript_C_GetScriptName_Params
{
	struct FString                                     MyName;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ContinueScript.BP_ContinueScript_C.UserConstructionScript
struct ABP_ContinueScript_C_UserConstructionScript_Params
{
};

// Function BP_ContinueScript.BP_ContinueScript_C.ReceiveBeginPlay
struct ABP_ContinueScript_C_ReceiveBeginPlay_Params
{
};

// Function BP_ContinueScript.BP_ContinueScript_C.StartLoad
struct ABP_ContinueScript_C_StartLoad_Params
{
	bool                                               DoVerify;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ContinueScript.BP_ContinueScript_C.LoadSuccess
struct ABP_ContinueScript_C_LoadSuccess_Params
{
};

// Function BP_ContinueScript.BP_ContinueScript_C.LoadError
struct ABP_ContinueScript_C_LoadError_Params
{
};

// Function BP_ContinueScript.BP_ContinueScript_C.ExecuteUbergraph_BP_ContinueScript
struct ABP_ContinueScript_C_ExecuteUbergraph_BP_ContinueScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
