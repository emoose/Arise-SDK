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

// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_GetConditionName
struct UBP_MGC_CON_NotifyCollision_C_Received_GetConditionName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_Condition
struct UBP_MGC_CON_NotifyCollision_C_Received_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_GetErrorMessage
struct UBP_MGC_CON_NotifyCollision_C_Received_GetErrorMessage_Params
{
	class UBtlMagicAsset*                              Asset;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.OnEndOverlap
struct UBP_MGC_CON_NotifyCollision_C_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         Collision;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.OnBeginOverlap
struct UBP_MGC_CON_NotifyCollision_C_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         Collision;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_Deactivated
struct UBP_MGC_CON_NotifyCollision_C_Received_Deactivated_Params
{
};

// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.Received_Activated
struct UBP_MGC_CON_NotifyCollision_C_Received_Activated_Params
{
};

// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.V2_BeginOverlap
struct UBP_MGC_CON_NotifyCollision_C_V2_BeginOverlap_Params
{
};

// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.V2_EndOverlap
struct UBP_MGC_CON_NotifyCollision_C_V2_EndOverlap_Params
{
};

// Function BP_MGC_CON_NotifyCollision.BP_MGC_CON_NotifyCollision_C.ExecuteUbergraph_BP_MGC_CON_NotifyCollision
struct UBP_MGC_CON_NotifyCollision_C_ExecuteUbergraph_BP_MGC_CON_NotifyCollision_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
