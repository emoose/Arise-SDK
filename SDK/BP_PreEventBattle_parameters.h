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

// Function BP_PreEventBattle.BP_PreEventBattle_C.UserConstructionScript
struct ABP_PreEventBattle_C_UserConstructionScript_Params
{
};

// Function BP_PreEventBattle.BP_PreEventBattle_C.ReceiveBeginPlay
struct ABP_PreEventBattle_C_ReceiveBeginPlay_Params
{
};

// Function BP_PreEventBattle.BP_PreEventBattle_C.ReceiveTick
struct ABP_PreEventBattle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PreEventBattle.BP_PreEventBattle_C.ExecuteUbergraph_BP_PreEventBattle
struct ABP_PreEventBattle_C_ExecuteUbergraph_BP_PreEventBattle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
