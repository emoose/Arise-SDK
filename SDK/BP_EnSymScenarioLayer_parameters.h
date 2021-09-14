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

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.GetOutlinerFolderPath
struct ABP_EnSymScenarioLayer_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.GetOutlinerLabelName
struct ABP_EnSymScenarioLayer_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.OutputParameter
struct ABP_EnSymScenarioLayer_C_OutputParameter_Params
{
	struct FEncountSymbolLayerParamData                Output;                                                   // (Parm, OutParm)
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.SetActivate
struct ABP_EnSymScenarioLayer_C_SetActivate_Params
{
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.IsScenarioCondition
struct ABP_EnSymScenarioLayer_C_IsScenarioCondition_Params
{
	bool                                               UseChangeFlag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.UserConstructionScript
struct ABP_EnSymScenarioLayer_C_UserConstructionScript_Params
{
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.«0¹0¿0à0¤0Ù0ó0È0_1
struct ABP_EnSymScenarioLayer_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.«0¹0¿0à0¤0Ù0ó0È0_2
struct ABP_EnSymScenarioLayer_C_«0¹0¿0à0¤0Ù0ó0È0_2_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.OnInitCallback
struct ABP_EnSymScenarioLayer_C_OnInitCallback_Params
{
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.OnEndCallback
struct ABP_EnSymScenarioLayer_C_OnEndCallback_Params
{
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.ReceiveBeginPlay
struct ABP_EnSymScenarioLayer_C_ReceiveBeginPlay_Params
{
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.ReceiveEndPlay
struct ABP_EnSymScenarioLayer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnSymScenarioLayer.BP_EnSymScenarioLayer_C.ExecuteUbergraph_BP_EnSymScenarioLayer
struct ABP_EnSymScenarioLayer_C_ExecuteUbergraph_BP_EnSymScenarioLayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
