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

// Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.GetEmitterAttachName
struct UBP_BTL_VTS_ABNORMAL_BASE_C_GetEmitterAttachName_Params
{
	struct FName                                       AttachName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.GetEmitter
struct UBP_BTL_VTS_ABNORMAL_BASE_C_GetEmitter_Params
{
	class UParticleSystem*                             AbnormalTemplate;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.Received_Begin
struct UBP_BTL_VTS_ABNORMAL_BASE_C_Received_Begin_Params
{
};

// Function BP_BTL_VTS_ABNORMAL_BASE.BP_BTL_VTS_ABNORMAL_BASE_C.ExecuteUbergraph_BP_BTL_VTS_ABNORMAL_BASE
struct UBP_BTL_VTS_ABNORMAL_BASE_C_ExecuteUbergraph_BP_BTL_VTS_ABNORMAL_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
