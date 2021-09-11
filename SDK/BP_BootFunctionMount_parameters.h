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

// Function BP_BootFunctionMount.BP_BootFunctionMount_C.UserConstructionScript
struct ABP_BootFunctionMount_C_UserConstructionScript_Params
{
};

// Function BP_BootFunctionMount.BP_BootFunctionMount_C.ReceiveTick
struct ABP_BootFunctionMount_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BootFunctionMount.BP_BootFunctionMount_C.DoMount
struct ABP_BootFunctionMount_C_DoMount_Params
{
};

// Function BP_BootFunctionMount.BP_BootFunctionMount_C.ReceiveDestroyed
struct ABP_BootFunctionMount_C_ReceiveDestroyed_Params
{
};

// Function BP_BootFunctionMount.BP_BootFunctionMount_C.ReceiveBeginPlay
struct ABP_BootFunctionMount_C_ReceiveBeginPlay_Params
{
};

// Function BP_BootFunctionMount.BP_BootFunctionMount_C.ExecuteUbergraph_BP_BootFunctionMount
struct ABP_BootFunctionMount_C_ExecuteUbergraph_BP_BootFunctionMount_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
