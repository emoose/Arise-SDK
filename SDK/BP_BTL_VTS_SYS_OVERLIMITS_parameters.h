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

// Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.GetEmitter_Loop
struct UBP_BTL_VTS_SYS_OVERLIMITS_C_GetEmitter_Loop_Params
{
	class UParticleSystem*                             OverlimitLoopTemplate;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.GetEmitterAttachName
struct UBP_BTL_VTS_SYS_OVERLIMITS_C_GetEmitterAttachName_Params
{
	struct FName                                       AttachName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachName_GRA;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.GetEmitter_Start
struct UBP_BTL_VTS_SYS_OVERLIMITS_C_GetEmitter_Start_Params
{
	class UParticleSystem*                             OverlimitStartTemplate;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.Received_Begin
struct UBP_BTL_VTS_SYS_OVERLIMITS_C_Received_Begin_Params
{
};

// Function BP_BTL_VTS_SYS_OVERLIMITS.BP_BTL_VTS_SYS_OVERLIMITS_C.ExecuteUbergraph_BP_BTL_VTS_SYS_OVERLIMITS
struct UBP_BTL_VTS_SYS_OVERLIMITS_C_ExecuteUbergraph_BP_BTL_VTS_SYS_OVERLIMITS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
