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

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsHide
struct UBP_MapGimmickSaveData_C_IsHide_Params
{
	struct FString                                     ActrorID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bUnlocked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Hide
struct UBP_MapGimmickSaveData_C_Hide_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsValidMapGimmick
struct UBP_MapGimmickSaveData_C_IsValidMapGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Register
struct UBP_MapGimmickSaveData_C_Register_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.DebugRegisterInfo
struct UBP_MapGimmickSaveData_C_DebugRegisterInfo_Params
{
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.BindOnUnlockStateChanged
struct UBP_MapGimmickSaveData_C_BindOnUnlockStateChanged_Params
{
	struct FScriptDelegate                             ¤0Ù0ó0È0;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.SetChunkEnable
struct UBP_MapGimmickSaveData_C_SetChunkEnable_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChangeState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.BindOnDiscoverStateChanged
struct UBP_MapGimmickSaveData_C_BindOnDiscoverStateChanged_Params
{
	struct FScriptDelegate                             ¤0Ù0ó0È0;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsChunkEnable
struct UBP_MapGimmickSaveData_C_IsChunkEnable_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ChunkName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsUnlock
struct UBP_MapGimmickSaveData_C_IsUnlock_Params
{
	struct FString                                     ActrorID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bUnlocked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Unlock
struct UBP_MapGimmickSaveData_C_Unlock_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.IsDiscover
struct UBP_MapGimmickSaveData_C_IsDiscover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bDiscover;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.Discover
struct UBP_MapGimmickSaveData_C_Discover_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.RegisterParameter
struct UBP_MapGimmickSaveData_C_RegisterParameter_Params
{
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnNewGame
struct UBP_MapGimmickSaveData_C_OnNewGame_Params
{
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.ExecuteUbergraph_BP_MapGimmickSaveData
struct UBP_MapGimmickSaveData_C_ExecuteUbergraph_BP_MapGimmickSaveData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnHideStateChanged__DelegateSignature
struct UBP_MapGimmickSaveData_C_OnHideStateChanged__DelegateSignature_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnUnlockStateChanged__DelegateSignature
struct UBP_MapGimmickSaveData_C_OnUnlockStateChanged__DelegateSignature_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapGimmickSaveData.BP_MapGimmickSaveData_C.OnDiscoverStateChanged__DelegateSignature
struct UBP_MapGimmickSaveData_C_OnDiscoverStateChanged__DelegateSignature_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
