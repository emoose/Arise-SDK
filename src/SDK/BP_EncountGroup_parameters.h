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

// Function BP_EncountGroup.BP_EncountGroup_C.MakeSurroundEncountParameter
struct ABP_EncountGroup_C_MakeSurroundEncountParameter_Params
{
	TArray<struct FString>                             InEncountGroupNames;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FBtlEncountGroupParam                       Param;                                                    // (Parm, OutParm)
	struct FString                                     EncountGroupName;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_EncountGroup.BP_EncountGroup_C.MakeEncountParameter
struct ABP_EncountGroup_C_MakeEncountParameter_Params
{
	struct FString                                     InAutoSymbolName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               LockEntry;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FBtlEncountGroupParam                       Param;                                                    // (Parm, OutParm)
	struct FString                                     EncountGroupName;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_EncountGroup.BP_EncountGroup_C.GetUnloadBattleAssetUserImpl
struct ABP_EncountGroup_C_GetUnloadBattleAssetUserImpl_Params
{
	bool                                               Battle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AutoSymbolName;                                           // (Parm, OutParm, ZeroConstructor)
	struct FString                                     MapName;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FName                                       GroupID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareState
struct ABP_EncountGroup_C_UpdateRareState_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsLoadedSymbolAsset
struct ABP_EncountGroup_C_BPE_IsLoadedSymbolAsset_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.SetupBattleAsset
struct ABP_EncountGroup_C_SetupBattleAsset_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.GetBossLevel
struct ABP_EncountGroup_C_GetBossLevel_Params
{
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.SetWakeupLocation
struct ABP_EncountGroup_C_SetWakeupLocation_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsFadeOut
struct ABP_EncountGroup_C_BPE_IsFadeOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsFollow
struct ABP_EncountGroup_C_BPE_IsFollow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.BPE_IsCanSpawn
struct ABP_EncountGroup_C_BPE_IsCanSpawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.OutputParameter
struct ABP_EncountGroup_C_OutputParameter_Params
{
	struct FEncountSymbolGroupParamData                Output;                                                   // (Parm, OutParm)
};

// Function BP_EncountGroup.BP_EncountGroup_C.SetBattleEncount
struct ABP_EncountGroup_C_SetBattleEncount_Params
{
	EBtlResultType                                     BattleResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.GetBtlEncountGroupParam
struct ABP_EncountGroup_C_GetBtlEncountGroupParam_Params
{
	struct FBtlEncountGroupParam                       Result;                                                   // (Parm, OutParm)
};

// Function BP_EncountGroup.BP_EncountGroup_C.PostSpawnProcessInternal
struct ABP_EncountGroup_C_PostSpawnProcessInternal_Params
{
	class ABP_EncountSymbolBase_C*                     InSymbol;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APFBP_EnSym_Placement_C*                     inPlacement;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.IsBuildCompleted
struct ABP_EncountGroup_C_IsBuildCompleted_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.IsFindedSymbol
struct ABP_EncountGroup_C_IsFindedSymbol_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.SubFindedCount
struct ABP_EncountGroup_C_SubFindedCount_Params
{
	class AActor*                                      InSymbol;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.OnDeleteSymbol
struct ABP_EncountGroup_C_OnDeleteSymbol_Params
{
	class AActor*                                      InSymbol;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.RemoveManagerAll
struct ABP_EncountGroup_C_RemoveManagerAll_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.IsPF
struct ABP_EncountGroup_C_IsPF_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.ChangeSymbolRare
struct ABP_EncountGroup_C_ChangeSymbolRare_Params
{
	bool                                               Rare;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareGroup
struct ABP_EncountGroup_C_UpdateRareGroup_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.DeactiveSymbol
struct ABP_EncountGroup_C_DeactiveSymbol_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.IsInvisible
struct ABP_EncountGroup_C_IsInvisible_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.Stop
struct ABP_EncountGroup_C_Stop_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.Restart
struct ABP_EncountGroup_C_Restart_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.SetActivate
struct ABP_EncountGroup_C_SetActivate_Params
{
	bool                                               Activate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.IsScenarioCondision
struct ABP_EncountGroup_C_IsScenarioCondision_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.CheckSpawnID
struct ABP_EncountGroup_C_CheckSpawnID_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.OnGround
struct ABP_EncountGroup_C_OnGround_Params
{
	class APFBP_EnSym_Placement_C*                     Placement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.Respawn
struct ABP_EncountGroup_C_Respawn_Params
{
	bool                                               UpdateRare;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.CheckFinded
struct ABP_EncountGroup_C_CheckFinded_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.OnDelete
struct ABP_EncountGroup_C_OnDelete_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.IsLoaded
struct ABP_EncountGroup_C_IsLoaded_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.IsCanSpawn
struct ABP_EncountGroup_C_IsCanSpawn_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.IsSpawnTime
struct ABP_EncountGroup_C_IsSpawnTime_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.SpawnPlacement
struct ABP_EncountGroup_C_SpawnPlacement_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.SetupActor
struct ABP_EncountGroup_C_SetupActor_Params
{
	class ABP_EncountSymbolBase_C*                     Symbol;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APFBP_EnSym_Placement_C*                     Placement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.SpawnActor
struct ABP_EncountGroup_C_SpawnActor_Params
{
	class APFBP_EnSym_Placement_C*                     Placement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_EncountSymbolBase_C*                     Spawned;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.OnSpawn
struct ABP_EncountGroup_C_OnSpawn_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.UserConstructionScript
struct ABP_EncountGroup_C_UserConstructionScript_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.SetEncountBattleStateImpl
struct ABP_EncountGroup_C_SetEncountBattleStateImpl_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.DeleteSymbolImpl
struct ABP_EncountGroup_C_DeleteSymbolImpl_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareImpl
struct ABP_EncountGroup_C_UpdateRareImpl_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.UnloadBattleAssetImpl
struct ABP_EncountGroup_C_UnloadBattleAssetImpl_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.RespawnSymbolImpl
struct ABP_EncountGroup_C_RespawnSymbolImpl_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.ResetBattleFlagImpl
struct ABP_EncountGroup_C_ResetBattleFlagImpl_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.LoadBattleAsset
struct ABP_EncountGroup_C_LoadBattleAsset_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.UnloadBattleAsset
struct ABP_EncountGroup_C_UnloadBattleAsset_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.SetBattleResult
struct ABP_EncountGroup_C_SetBattleResult_Params
{
	EBtlResultType                                     Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.OnUnloadMapStart
struct ABP_EncountGroup_C_OnUnloadMapStart_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EncountGroup.BP_EncountGroup_C.UpdateRareStateImpl
struct ABP_EncountGroup_C_UpdateRareStateImpl_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.InitCallback
struct ABP_EncountGroup_C_InitCallback_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.TermCallback
struct ABP_EncountGroup_C_TermCallback_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.OnChangeScenario
struct ABP_EncountGroup_C_OnChangeScenario_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.ScenarioFlag
struct ABP_EncountGroup_C_ScenarioFlag_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.ScenarioCounter
struct ABP_EncountGroup_C_ScenarioCounter_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.OnChangeGameState_BattleLoadCheck
struct ABP_EncountGroup_C_OnChangeGameState_BattleLoadCheck_Params
{
	EAriseGameState                                    ChangeState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.SpawnEncountSymbol
struct ABP_EncountGroup_C_SpawnEncountSymbol_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.GroundEncountSymbol
struct ABP_EncountGroup_C_GroundEncountSymbol_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.RebuildEncountSymbol
struct ABP_EncountGroup_C_RebuildEncountSymbol_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.ReceiveBeginPlay
struct ABP_EncountGroup_C_ReceiveBeginPlay_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.ReceiveEndPlay
struct ABP_EncountGroup_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.SetEncountGroupNames
struct ABP_EncountGroup_C_SetEncountGroupNames_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.SetEncountSymbolState
struct ABP_EncountGroup_C_SetEncountSymbolState_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.AddFindedSymbol
struct ABP_EncountGroup_C_AddFindedSymbol_Params
{
	class ABP_EncountSymbolBase_C*                     Symbol;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.RemoveFindedSymbol
struct ABP_EncountGroup_C_RemoveFindedSymbol_Params
{
	class ABP_EncountSymbolBase_C*                     Symbol;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.RemoveFindedSymbolAll
struct ABP_EncountGroup_C_RemoveFindedSymbolAll_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.SpawnPostProcess
struct ABP_EncountGroup_C_SpawnPostProcess_Params
{
	class APFEncountSymbol*                            Symbol;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APFEnSymPlacement*                           Placement;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountGroup.BP_EncountGroup_C.ReceiveDestroyed
struct ABP_EncountGroup_C_ReceiveDestroyed_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.BPE_Spawn
struct ABP_EncountGroup_C_BPE_Spawn_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.BPE_LoadBtlAsset
struct ABP_EncountGroup_C_BPE_LoadBtlAsset_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.BPE_UnloadBtlAsset
struct ABP_EncountGroup_C_BPE_UnloadBtlAsset_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.BPE_FadeOut
struct ABP_EncountGroup_C_BPE_FadeOut_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.BPE_ExecFadeOut
struct ABP_EncountGroup_C_BPE_ExecFadeOut_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.OnReservedSpawn
struct ABP_EncountGroup_C_OnReservedSpawn_Params
{
};

// Function BP_EncountGroup.BP_EncountGroup_C.ExecuteUbergraph_BP_EncountGroup
struct ABP_EncountGroup_C_ExecuteUbergraph_BP_EncountGroup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
