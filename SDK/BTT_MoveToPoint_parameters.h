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

// Function BTT_MoveToPoint.BTT_MoveToPoint_C.GuardEndRequest
struct UBTT_MoveToPoint_C_GuardEndRequest_Params
{
	bool                                               Wait;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToPoint.BTT_MoveToPoint_C.GuardRequest
struct UBTT_MoveToPoint_C_GuardRequest_Params
{
	bool                                               Wait;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToPoint.BTT_MoveToPoint_C.TerminationProcess
struct UBTT_MoveToPoint_C_TerminationProcess_Params
{
};

// Function BTT_MoveToPoint.BTT_MoveToPoint_C.OnFindGoalQueryFinished
struct UBTT_MoveToPoint_C_OnFindGoalQueryFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToPoint.BTT_MoveToPoint_C.OnFindPointQueryFinished
struct UBTT_MoveToPoint_C_OnFindPointQueryFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToPoint.BTT_MoveToPoint_C.ReceiveAbortAI
struct UBTT_MoveToPoint_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToPoint.BTT_MoveToPoint_C.ReceiveExecuteAI
struct UBTT_MoveToPoint_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToPoint.BTT_MoveToPoint_C.ReceiveTickAI
struct UBTT_MoveToPoint_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToPoint.BTT_MoveToPoint_C.ExecuteUbergraph_BTT_MoveToPoint
struct UBTT_MoveToPoint_C_ExecuteUbergraph_BTT_MoveToPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
