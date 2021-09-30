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

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetOutlinerFolderPath
struct ABP_EncountGroupBase_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetOutlinerLabelName
struct ABP_EncountGroupBase_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetBattleAssetUser
struct ABP_EncountGroupBase_C_GetBattleAssetUser_Params
{
	struct FString                                     AutoSymbolName;                                           // (Parm, OutParm, ZeroConstructor)
	struct FString                                     MapName;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetBtlMapName
struct ABP_EncountGroupBase_C_GetBtlMapName_Params
{
	struct FString                                     MapName;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.SetEncountSymbolState
struct ABP_EncountGroupBase_C_SetEncountSymbolState_Params
{
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.SetEncountGroupNames
struct ABP_EncountGroupBase_C_SetEncountGroupNames_Params
{
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.DoEncountRequest
struct ABP_EncountGroupBase_C_DoEncountRequest_Params
{
	class AActor*                                      Encount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEncountAccept;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetIDName
struct ABP_EncountGroupBase_C_GetIDName_Params
{
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.GetDistanceToPlayer
struct ABP_EncountGroupBase_C_GetDistanceToPlayer_Params
{
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.BattleAssetPreload
struct ABP_EncountGroupBase_C_BattleAssetPreload_Params
{
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.BattleAssetUnload
struct ABP_EncountGroupBase_C_BattleAssetUnload_Params
{
	bool                                               bForceUnload;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.ChangeSymbolState
struct ABP_EncountGroupBase_C_ChangeSymbolState_Params
{
	EEncountSymbolState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.RegisterSymbol
struct ABP_EncountGroupBase_C_RegisterSymbol_Params
{
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.UserConstructionScript
struct ABP_EncountGroupBase_C_UserConstructionScript_Params
{
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.ReceiveEndPlay
struct ABP_EncountGroupBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.ReceiveBeginPlay
struct ABP_EncountGroupBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_EncountGroupBase.BP_EncountGroupBase_C.ExecuteUbergraph_BP_EncountGroupBase
struct ABP_EncountGroupBase_C_ExecuteUbergraph_BP_EncountGroupBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
