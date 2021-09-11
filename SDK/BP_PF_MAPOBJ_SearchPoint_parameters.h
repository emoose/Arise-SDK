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

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.ReceiveSerializeSearchPointParameter
struct ABP_PF_MAPOBJ_SearchPoint_C_ReceiveSerializeSearchPointParameter_Params
{
	struct FPFPlacementSearchPointDatabaseRow          DestinationParameter;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.GetOutlinerFolderPath
struct ABP_PF_MAPOBJ_SearchPoint_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.GetOutlinerLabelName
struct ABP_PF_MAPOBJ_SearchPoint_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.InitializePlacementData
struct ABP_PF_MAPOBJ_SearchPoint_C_InitializePlacementData_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.RequestSC
struct ABP_PF_MAPOBJ_SearchPoint_C_RequestSC_Params
{
	struct FString                                     RequestID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                NewGetItemID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsStrange;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.GetDebShowInfoMessage
struct ABP_PF_MAPOBJ_SearchPoint_C_GetDebShowInfoMessage_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutMessage;                                               // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.GetItem
struct ABP_PF_MAPOBJ_SearchPoint_C_GetItem_Params
{
	bool                                               ShowDialog;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.OnSetHideModel
struct ABP_PF_MAPOBJ_SearchPoint_C_OnSetHideModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.ApplyStatus
struct ABP_PF_MAPOBJ_SearchPoint_C_ApplyStatus_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.IsPop
struct ABP_PF_MAPOBJ_SearchPoint_C_IsPop_Params
{
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.SetDiscover
struct ABP_PF_MAPOBJ_SearchPoint_C_SetDiscover_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.IsDiscover
struct ABP_PF_MAPOBJ_SearchPoint_C_IsDiscover_Params
{
	bool                                               bCleared;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.IsGetItemFlag
struct ABP_PF_MAPOBJ_SearchPoint_C_IsGetItemFlag_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.CheckItem
struct ABP_PF_MAPOBJ_SearchPoint_C_CheckItem_Params
{
	bool                                               GetIt;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemLabel;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                ItemNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                GetGald;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LostGald;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.StopEffect
struct ABP_PF_MAPOBJ_SearchPoint_C_StopEffect_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.PlayEffect
struct ABP_PF_MAPOBJ_SearchPoint_C_PlayEffect_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.OnSetGatheredModel
struct ABP_PF_MAPOBJ_SearchPoint_C_OnSetGatheredModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.OnSetBaseModel
struct ABP_PF_MAPOBJ_SearchPoint_C_OnSetBaseModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.InitializeDropData
struct ABP_PF_MAPOBJ_SearchPoint_C_InitializeDropData_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.UserConstructionScript
struct ABP_PF_MAPOBJ_SearchPoint_C_UserConstructionScript_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.OnFoundTrapIn
struct ABP_PF_MAPOBJ_SearchPoint_C_OnFoundTrapIn_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.ReceiveOnConstruction
struct ABP_PF_MAPOBJ_SearchPoint_C_ReceiveOnConstruction_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.SetShowModel
struct ABP_PF_MAPOBJ_SearchPoint_C_SetShowModel_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.ReceiveEndPlay
struct ABP_PF_MAPOBJ_SearchPoint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.On Build Completed
struct ABP_PF_MAPOBJ_SearchPoint_C_On_Build_Completed_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.On Receive Field Action
struct ABP_PF_MAPOBJ_SearchPoint_C_On_Receive_Field_Action_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.ReceiveBeginPlay
struct ABP_PF_MAPOBJ_SearchPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_MAPOBJ_SearchPoint.BP_PF_MAPOBJ_SearchPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_SearchPoint
struct ABP_PF_MAPOBJ_SearchPoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_SearchPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
