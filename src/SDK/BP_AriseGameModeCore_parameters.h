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

// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.MountSystemFunctions
struct ABP_AriseGameModeCore_C_MountSystemFunctions_Params
{
};

// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.UserConstructionScript
struct ABP_AriseGameModeCore_C_UserConstructionScript_Params
{
};

// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.ReceiveTick
struct ABP_AriseGameModeCore_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.ReceiveBeginPlay
struct ABP_AriseGameModeCore_C_ReceiveBeginPlay_Params
{
};

// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.UpdateCurrentSection
struct ABP_AriseGameModeCore_C_UpdateCurrentSection_Params
{
	unsigned char                                      StartedSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AriseGameModeCore.BP_AriseGameModeCore_C.ExecuteUbergraph_BP_AriseGameModeCore
struct ABP_AriseGameModeCore_C_ExecuteUbergraph_BP_AriseGameModeCore_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
