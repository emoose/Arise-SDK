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

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ReceiveSerializeTreasurePointParameter
struct ABP_PF_MAPOBJ_TreasurePoint_C_ReceiveSerializeTreasurePointParameter_Params
{
	struct FPFPlacementTreasurePointDatabaseRow        DestinationParameter;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetOutlinerFolderPath
struct ABP_PF_MAPOBJ_TreasurePoint_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetOutlinerLabelName
struct ABP_PF_MAPOBJ_TreasurePoint_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.RequestSC
struct ABP_PF_MAPOBJ_TreasurePoint_C_RequestSC_Params
{
	struct FString                                     RequestID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsStrange;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetItemInternal
struct ABP_PF_MAPOBJ_TreasurePoint_C_GetItemInternal_Params
{
	int                                                ItemID;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetDebShowInfoMessage
struct ABP_PF_MAPOBJ_TreasurePoint_C_GetDebShowInfoMessage_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutMessage;                                               // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.CheckItem
struct ABP_PF_MAPOBJ_TreasurePoint_C_CheckItem_Params
{
	bool                                               GetIt;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemLabel;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                ItemNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                GetGald;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LostGald;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnSetHideModel
struct ABP_PF_MAPOBJ_TreasurePoint_C_OnSetHideModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.SetDiscover
struct ABP_PF_MAPOBJ_TreasurePoint_C_SetDiscover_Params
{
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.IsDiscover
struct ABP_PF_MAPOBJ_TreasurePoint_C_IsDiscover_Params
{
	bool                                               bCleared;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ApplyItemGetFlags
struct ABP_PF_MAPOBJ_TreasurePoint_C_ApplyItemGetFlags_Params
{
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetIconAngle
struct ABP_PF_MAPOBJ_TreasurePoint_C_GetIconAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetIconImageDataName
struct ABP_PF_MAPOBJ_TreasurePoint_C_GetIconImageDataName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetIconLocation
struct ABP_PF_MAPOBJ_TreasurePoint_C_GetIconLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.GetItem
struct ABP_PF_MAPOBJ_TreasurePoint_C_GetItem_Params
{
	bool                                               bShowDialog;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.SetOpen
struct ABP_PF_MAPOBJ_TreasurePoint_C_SetOpen_Params
{
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.IsOpen
struct ABP_PF_MAPOBJ_TreasurePoint_C_IsOpen_Params
{
	bool                                               bCleared;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnSetGatheredModel
struct ABP_PF_MAPOBJ_TreasurePoint_C_OnSetGatheredModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnSetBaseModel
struct ABP_PF_MAPOBJ_TreasurePoint_C_OnSetBaseModel_Params
{
	bool                                               bVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.UserConstructionScript
struct ABP_PF_MAPOBJ_TreasurePoint_C_UserConstructionScript_Params
{
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.SetShowModel
struct ABP_PF_MAPOBJ_TreasurePoint_C_SetShowModel_Params
{
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ReceiveOnConstruction
struct ABP_PF_MAPOBJ_TreasurePoint_C_ReceiveOnConstruction_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.OnFoundTrapIn
struct ABP_PF_MAPOBJ_TreasurePoint_C_OnFoundTrapIn_Params
{
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ReceiveBeginPlay
struct ABP_PF_MAPOBJ_TreasurePoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_MAPOBJ_TreasurePoint.BP_PF_MAPOBJ_TreasurePoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_TreasurePoint
struct ABP_PF_MAPOBJ_TreasurePoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_TreasurePoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
