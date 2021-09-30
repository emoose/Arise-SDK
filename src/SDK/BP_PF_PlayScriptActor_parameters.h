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

// Function BP_PF_PlayScriptActor.BP_PF_PlayScriptActor_C.UserConstructionScript
struct ABP_PF_PlayScriptActor_C_UserConstructionScript_Params
{
};

// Function BP_PF_PlayScriptActor.BP_PF_PlayScriptActor_C.ReceiveBeginPlay
struct ABP_PF_PlayScriptActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_PlayScriptActor.BP_PF_PlayScriptActor_C.ReceiveTick
struct ABP_PF_PlayScriptActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_PlayScriptActor.BP_PF_PlayScriptActor_C.Script Load Completed
struct ABP_PF_PlayScriptActor_C_Script_Load_Completed_Params
{
	class UObject*                                     InLoadedAsset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_PlayScriptActor.BP_PF_PlayScriptActor_C.ReceiveEndPlay
struct ABP_PF_PlayScriptActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_PlayScriptActor.BP_PF_PlayScriptActor_C.ExecuteUbergraph_BP_PF_PlayScriptActor
struct ABP_PF_PlayScriptActor_C_ExecuteUbergraph_BP_PF_PlayScriptActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
