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

// Function BP_MGC_TSK_SendUnitScriptMessage.BP_MGC_TSK_SendUnitScriptMessage_C.Received_GetTaskName
struct UBP_MGC_TSK_SendUnitScriptMessage_C_Received_GetTaskName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_TSK_SendUnitScriptMessage.BP_MGC_TSK_SendUnitScriptMessage_C.Received_Begin
struct UBP_MGC_TSK_SendUnitScriptMessage_C_Received_Begin_Params
{
};

// Function BP_MGC_TSK_SendUnitScriptMessage.BP_MGC_TSK_SendUnitScriptMessage_C.ExecuteUbergraph_BP_MGC_TSK_SendUnitScriptMessage
struct UBP_MGC_TSK_SendUnitScriptMessage_C_ExecuteUbergraph_BP_MGC_TSK_SendUnitScriptMessage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
