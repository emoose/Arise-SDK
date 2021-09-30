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

// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.CreateDecal
struct UBP_MGC_TSK_CreateDecal_V2_C_CreateDecal_Params
{
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_DebugRender
struct UBP_MGC_TSK_CreateDecal_V2_C_Received_DebugRender_Params
{
	float                                              FrameDeltaTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_GetNotesInfomation
struct UBP_MGC_TSK_CreateDecal_V2_C_Received_GetNotesInfomation_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_GetTaskName
struct UBP_MGC_TSK_CreateDecal_V2_C_Received_GetTaskName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.RangeVector
struct UBP_MGC_TSK_CreateDecal_V2_C_RangeVector_Params
{
	struct FVector                                     Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.RangeFloat
struct UBP_MGC_TSK_CreateDecal_V2_C_RangeFloat_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_End
struct UBP_MGC_TSK_CreateDecal_V2_C_Received_End_Params
{
};

// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.Received_Begin
struct UBP_MGC_TSK_CreateDecal_V2_C_Received_Begin_Params
{
};

// Function BP_MGC_TSK_CreateDecal_V2.BP_MGC_TSK_CreateDecal_V2_C.ExecuteUbergraph_BP_MGC_TSK_CreateDecal_V2
struct UBP_MGC_TSK_CreateDecal_V2_C_ExecuteUbergraph_BP_MGC_TSK_CreateDecal_V2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
