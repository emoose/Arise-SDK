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

// Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.GetEmitter
struct UBP_BTL_VTS_SYS_DEAD_C_GetEmitter_Params
{
	class UParticleSystem*                             NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.GetEmitterAttachName
struct UBP_BTL_VTS_SYS_DEAD_C_GetEmitterAttachName_Params
{
	struct FName                                       AttachName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.Received_Begin
struct UBP_BTL_VTS_SYS_DEAD_C_Received_Begin_Params
{
};

// Function BP_BTL_VTS_SYS_DEAD.BP_BTL_VTS_SYS_DEAD_C.ExecuteUbergraph_BP_BTL_VTS_SYS_DEAD
struct UBP_BTL_VTS_SYS_DEAD_C_ExecuteUbergraph_BP_BTL_VTS_SYS_DEAD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
