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

// Function BP_GSC_Login.BP_GSC_Login_C.Release
struct UBP_GSC_Login_C_Release_Params
{
};

// Function BP_GSC_Login.BP_GSC_Login_C.GotoTitle
struct UBP_GSC_Login_C_GotoTitle_Params
{
};

// Function BP_GSC_Login.BP_GSC_Login_C.BPE_Tick
struct UBP_GSC_Login_C_BPE_Tick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Login.BP_GSC_Login_C.BPE_Finalize
struct UBP_GSC_Login_C_BPE_Finalize_Params
{
	ESceneFinalizeReason                               finalizeReason;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Login.BP_GSC_Login_C.BPE_Initialize
struct UBP_GSC_Login_C_BPE_Initialize_Params
{
	ESceneInitializeMode                               initMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Login.BP_GSC_Login_C.ExecuteUbergraph_BP_GSC_Login
struct UBP_GSC_Login_C_ExecuteUbergraph_BP_GSC_Login_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
