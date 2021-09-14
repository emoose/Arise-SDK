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

// Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.Received_Condition
struct UBP_MGC_CON_HeightCheck_C_Received_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.Received_GetConditionName
struct UBP_MGC_CON_HeightCheck_C_Received_GetConditionName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.Received_Activated
struct UBP_MGC_CON_HeightCheck_C_Received_Activated_Params
{
};

// Function BP_MGC_CON_HeightCheck.BP_MGC_CON_HeightCheck_C.ExecuteUbergraph_BP_MGC_CON_HeightCheck
struct UBP_MGC_CON_HeightCheck_C_ExecuteUbergraph_BP_MGC_CON_HeightCheck_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
