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

// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.OnChageGameState
struct ABP_GP_PlayEventActor_C_OnChageGameState_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.DoPlayEvent
struct ABP_GP_PlayEventActor_C_DoPlayEvent_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.OnPlayEventFinalize
struct ABP_GP_PlayEventActor_C_OnPlayEventFinalize_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OptionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.UserConstructionScript
struct ABP_GP_PlayEventActor_C_UserConstructionScript_Params
{
};

// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.ReceiveBeginPlay
struct ABP_GP_PlayEventActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.ReceiveEndPlay
struct ABP_GP_PlayEventActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GP_PlayEventActor.BP_GP_PlayEventActor_C.ExecuteUbergraph_BP_GP_PlayEventActor
struct ABP_GP_PlayEventActor_C_ExecuteUbergraph_BP_GP_PlayEventActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
