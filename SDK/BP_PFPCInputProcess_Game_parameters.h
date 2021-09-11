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

// Function BP_PFPCInputProcess_Game.BP_PFPCInputProcess_Game_C.IsDebugInputEnable
struct ABP_PFPCInputProcess_Game_C_IsDebugInputEnable_Params
{
	bool                                               bOut;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPCInputProcess_Game.BP_PFPCInputProcess_Game_C.IsExecuteProcess
struct ABP_PFPCInputProcess_Game_C_IsExecuteProcess_Params
{
	bool                                               Is;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPCInputProcess_Game.BP_PFPCInputProcess_Game_C.UserConstructionScript
struct ABP_PFPCInputProcess_Game_C_UserConstructionScript_Params
{
};

// Function BP_PFPCInputProcess_Game.BP_PFPCInputProcess_Game_C.ReceiveBeginPlay
struct ABP_PFPCInputProcess_Game_C_ReceiveBeginPlay_Params
{
};

// Function BP_PFPCInputProcess_Game.BP_PFPCInputProcess_Game_C.ExecuteGamePause
struct ABP_PFPCInputProcess_Game_C_ExecuteGamePause_Params
{
};

// Function BP_PFPCInputProcess_Game.BP_PFPCInputProcess_Game_C.ExecuteSwitchPartyTop
struct ABP_PFPCInputProcess_Game_C_ExecuteSwitchPartyTop_Params
{
	bool                                               CW;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPCInputProcess_Game.BP_PFPCInputProcess_Game_C.ExecuteUbergraph_BP_PFPCInputProcess_Game
struct ABP_PFPCInputProcess_Game_C_ExecuteUbergraph_BP_PFPCInputProcess_Game_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
