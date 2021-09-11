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

// Function BP_PF_InteractEvent_LadderUp.BP_PF_InteractEvent_LadderUp_C.GetBeginPointLocationAndRotation
struct ABP_PF_InteractEvent_LadderUp_C_GetBeginPointLocationAndRotation_Params
{
	class ABP_PF_LadderActorBase_C*                    InLadderActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_InteractEvent_LadderUp.BP_PF_InteractEvent_LadderUp_C.GetBeginAnimCommand
struct ABP_PF_InteractEvent_LadderUp_C_GetBeginAnimCommand_Params
{
	struct FString                                     OutCommand;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_InteractEvent_LadderUp.BP_PF_InteractEvent_LadderUp_C.UserConstructionScript
struct ABP_PF_InteractEvent_LadderUp_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
