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

// Function BP_DownloadShopScript.BP_DownloadShopScript_C.GetScriptState
struct ABP_DownloadShopScript_C_GetScriptState_Params
{
	struct FString                                     CurrentState;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_DownloadShopScript.BP_DownloadShopScript_C.GetScriptName
struct ABP_DownloadShopScript_C_GetScriptName_Params
{
	struct FString                                     MyName;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_DownloadShopScript.BP_DownloadShopScript_C.UserConstructionScript
struct ABP_DownloadShopScript_C_UserConstructionScript_Params
{
};

// Function BP_DownloadShopScript.BP_DownloadShopScript_C.ReceiveBeginPlay
struct ABP_DownloadShopScript_C_ReceiveBeginPlay_Params
{
};

// Function BP_DownloadShopScript.BP_DownloadShopScript_C.ExecuteUbergraph_BP_DownloadShopScript
struct ABP_DownloadShopScript_C_ExecuteUbergraph_BP_DownloadShopScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
