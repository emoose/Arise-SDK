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

// Function BP_PF_InteractEvent_Ladder.BP_PF_InteractEvent_Ladder_C.GetBeginLadderStepNum
struct ABP_PF_InteractEvent_Ladder_C_GetBeginLadderStepNum_Params
{
	class ABP_PF_LadderActorBase_C*                    InLadderActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutStepNum;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEvent_Ladder.BP_PF_InteractEvent_Ladder_C.GetBeginAnimCommand
struct ABP_PF_InteractEvent_Ladder_C_GetBeginAnimCommand_Params
{
	struct FString                                     OutCommand;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_InteractEvent_Ladder.BP_PF_InteractEvent_Ladder_C.GetBeginPointLocationAndRotation
struct ABP_PF_InteractEvent_Ladder_C_GetBeginPointLocationAndRotation_Params
{
	class ABP_PF_LadderActorBase_C*                    InLadderActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_InteractEvent_Ladder.BP_PF_InteractEvent_Ladder_C.UserConstructionScript
struct ABP_PF_InteractEvent_Ladder_C_UserConstructionScript_Params
{
};

// Function BP_PF_InteractEvent_Ladder.BP_PF_InteractEvent_Ladder_C.K2_Execute
struct ABP_PF_InteractEvent_Ladder_C_K2_Execute_Params
{
	class AActor*                                      Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_InteractEvent_Ladder.BP_PF_InteractEvent_Ladder_C.ExecuteUbergraph_BP_PF_InteractEvent_Ladder
struct ABP_PF_InteractEvent_Ladder_C_ExecuteUbergraph_BP_PF_InteractEvent_Ladder_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
