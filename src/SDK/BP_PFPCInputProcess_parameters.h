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

// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.IsDebugInputEnable
struct ABP_PFPCInputProcess_C_IsDebugInputEnable_Params
{
	bool                                               bOut;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.ExecuteSwitchPartyTop
struct ABP_PFPCInputProcess_C_ExecuteSwitchPartyTop_Params
{
	bool                                               CW;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.ExecuteGamePause
struct ABP_PFPCInputProcess_C_ExecuteGamePause_Params
{
};

// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.IsExecuteProcess
struct ABP_PFPCInputProcess_C_IsExecuteProcess_Params
{
	bool                                               Is;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.UserConstructionScript
struct ABP_PFPCInputProcess_C_UserConstructionScript_Params
{
};

// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.K2_ExecuteProcess
struct ABP_PFPCInputProcess_C_K2_ExecuteProcess_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPCInputProcess.BP_PFPCInputProcess_C.ExecuteUbergraph_BP_PFPCInputProcess
struct ABP_PFPCInputProcess_C_ExecuteUbergraph_BP_PFPCInputProcess_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
