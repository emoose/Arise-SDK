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

// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventLongchatByLongchatName
struct ABP_AriseGameProcessWithEvent_C_PlayEventLongchatByLongchatName_Params
{
	struct FLongchatName                               LongchatName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.StopEvent
struct ABP_AriseGameProcessWithEvent_C_StopEvent_Params
{
};

// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.IsPlayEventFinalized
struct ABP_AriseGameProcessWithEvent_C_IsPlayEventFinalized_Params
{
	bool                                               bFinalized;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventMovie
struct ABP_AriseGameProcessWithEvent_C_PlayEventMovie_Params
{
	struct FEventNo                                    EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventSequence
struct ABP_AriseGameProcessWithEvent_C_PlayEventSequence_Params
{
	struct FEventNo                                    EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.PlayEventLongchat
struct ABP_AriseGameProcessWithEvent_C_PlayEventLongchat_Params
{
	struct FEventNo                                    EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.UserConstructionScript
struct ABP_AriseGameProcessWithEvent_C_UserConstructionScript_Params
{
};

// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.ReceiveBeginPlay
struct ABP_AriseGameProcessWithEvent_C_ReceiveBeginPlay_Params
{
};

// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.ReceiveEndPlay
struct ABP_AriseGameProcessWithEvent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGameProcessWithEvent.BP_AriseGameProcessWithEvent_C.ExecuteUbergraph_BP_AriseGameProcessWithEvent
struct ABP_AriseGameProcessWithEvent_C_ExecuteUbergraph_BP_AriseGameProcessWithEvent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
