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

// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.GetBack2Front
struct UBP_BtlChangeOrderHandlePolicy_C_GetBack2Front_Params
{
	class ABtlCharacterBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.GetFront2Back
struct UBP_BtlChangeOrderHandlePolicy_C_GetFront2Back_Params
{
	class ABtlCharacterBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.SetVisibleChangeFormation
struct UBP_BtlChangeOrderHandlePolicy_C_SetVisibleChangeFormation_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.IsChangeable
struct UBP_BtlChangeOrderHandlePolicy_C_IsChangeable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.IsImmediateChangeCheck
struct UBP_BtlChangeOrderHandlePolicy_C_IsImmediateChangeCheck_Params
{
	bool                                               ImmediateChange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.Init
struct UBP_BtlChangeOrderHandlePolicy_C_Init_Params
{
};

// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.SetVanguardFlags
struct UBP_BtlChangeOrderHandlePolicy_C_SetVanguardFlags_Params
{
	class ABtlCharacterBase*                           Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.OnEscapeSuccess
struct UBP_BtlChangeOrderHandlePolicy_C_OnEscapeSuccess_Params
{
};

// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.DoChangeOrder
struct UBP_BtlChangeOrderHandlePolicy_C_DoChangeOrder_Params
{
};

// Function BP_BtlChangeOrderHandlePolicy.BP_BtlChangeOrderHandlePolicy_C.ExecuteUbergraph_BP_BtlChangeOrderHandlePolicy
struct UBP_BtlChangeOrderHandlePolicy_C_ExecuteUbergraph_BP_BtlChangeOrderHandlePolicy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
