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

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnEndOverlimitsUnit
struct ABP_BtlAssetManager_C_OnEndOverlimitsUnit_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnBeginOverlimitsUnit
struct ABP_BtlAssetManager_C_OnBeginOverlimitsUnit_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.GetMysticLabels
struct ABP_BtlAssetManager_C_GetMysticLabels_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               MysticLabels;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnBackTitle
struct ABP_BtlAssetManager_C_OnBackTitle_Params
{
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.IsSortWarHandle
struct ABP_BtlAssetManager_C_IsSortWarHandle_Params
{
	struct FBattleWarAssetHandle                       Lhs;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FBattleWarAssetHandle                       Rhs;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPreMapChangeNative
struct ABP_BtlAssetManager_C_OnPreMapChangeNative_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     PrevMapName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnChangeState
struct ABP_BtlAssetManager_C_OnChangeState_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.IsBattleAssetLoadable
struct ABP_BtlAssetManager_C_IsBattleAssetLoadable_Params
{
	bool                                               IsLoadable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnSaveDataLoadComplated
struct ABP_BtlAssetManager_C_OnSaveDataLoadComplated_Params
{
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadAsyncGuest
struct ABP_BtlAssetManager_C_LoadAsyncGuest_Params
{
	EAriseGuestID                                      GuestId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadAsyncParty
struct ABP_BtlAssetManager_C_LoadAsyncParty_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnLoadParty
struct ABP_BtlAssetManager_C_UnLoadParty_Params
{
	TArray<EArisePartyID>                              Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnLoadGuest
struct ABP_BtlAssetManager_C_UnLoadGuest_Params
{
	TArray<EAriseGuestID>                              Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UserConstructionScript
struct ABP_BtlAssetManager_C_UserConstructionScript_Params
{
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadAsyncPartyUnit
struct ABP_BtlAssetManager_C_LoadAsyncPartyUnit_Params
{
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnloadPartyUnit
struct ABP_BtlAssetManager_C_UnloadPartyUnit_Params
{
	bool                                               bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.ReceiveBeginPlay
struct ABP_BtlAssetManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPartyIn
struct ABP_BtlAssetManager_C_OnPartyIn_Params
{
	EArisePartyID                                      InPartyID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPartyOut
struct ABP_BtlAssetManager_C_OnPartyOut_Params
{
	EArisePartyID                                      OutPartyID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnGuestIn
struct ABP_BtlAssetManager_C_OnGuestIn_Params
{
	EAriseGuestID                                      InGuestID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnGuestOut
struct ABP_BtlAssetManager_C_OnGuestOut_Params
{
	TArray<EAriseGuestID>                              OutGuestID;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadResidentRequiredAssets
struct ABP_BtlAssetManager_C_LoadResidentRequiredAssets_Params
{
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnloadResidentRequiredAssets
struct ABP_BtlAssetManager_C_UnloadResidentRequiredAssets_Params
{
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.ReceiveEndPlay
struct ABP_BtlAssetManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnPartyOrderLoadComplated
struct ABP_BtlAssetManager_C_OnPartyOrderLoadComplated_Params
{
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnReplaceGuestUnitId
struct ABP_BtlAssetManager_C_OnReplaceGuestUnitId_Params
{
	EAriseGuestID                                      GuestId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewGuestUnitID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PrevGuestUnitID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.UnloadBattleMapCore
struct ABP_BtlAssetManager_C_UnloadBattleMapCore_Params
{
	struct FName                                       BattleMap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.LoadBattleMapCore
struct ABP_BtlAssetManager_C_LoadBattleMapCore_Params
{
	struct FName                                       BattleMap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.OnEndBattle
struct ABP_BtlAssetManager_C_OnEndBattle_Params
{
};

// Function BP_BtlAssetManager.BP_BtlAssetManager_C.ExecuteUbergraph_BP_BtlAssetManager
struct ABP_BtlAssetManager_C_ExecuteUbergraph_BP_BtlAssetManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
