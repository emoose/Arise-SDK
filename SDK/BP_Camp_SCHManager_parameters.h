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

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.SCPause
struct ABP_Camp_SCHManager_C_SCPause_Params
{
	bool                                               InPause;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArisePFSCPauseState                               InState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.UserConstructionScript
struct ABP_Camp_SCHManager_C_UserConstructionScript_Params
{
};

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ReceiveTick
struct ABP_Camp_SCHManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ReceiveBeginPlay
struct ABP_Camp_SCHManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ReceiveEndPlay
struct ABP_Camp_SCHManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.StartShortChat
struct ABP_Camp_SCHManager_C_StartShortChat_Params
{
	struct FString                                     FaceIcon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.EndShortChat
struct ABP_Camp_SCHManager_C_EndShortChat_Params
{
	bool                                               bAbort;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ResumeShortChat
struct ABP_Camp_SCHManager_C_ResumeShortChat_Params
{
};

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.PauseShortChat
struct ABP_Camp_SCHManager_C_PauseShortChat_Params
{
};

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ExecutePause
struct ABP_Camp_SCHManager_C_ExecutePause_Params
{
	EArisePFSCPauseState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ExecuteReleasePause
struct ABP_Camp_SCHManager_C_ExecuteReleasePause_Params
{
	EArisePFSCPauseState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Camp_SCHManager.BP_Camp_SCHManager_C.ExecuteUbergraph_BP_Camp_SCHManager
struct ABP_Camp_SCHManager_C_ExecuteUbergraph_BP_Camp_SCHManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
