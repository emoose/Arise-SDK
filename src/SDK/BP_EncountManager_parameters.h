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

// Function BP_EncountManager.BP_EncountManager_C.BPE_IsLoadedSymbolAssets
struct ABP_EncountManager_C_BPE_IsLoadedSymbolAssets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.UpdateSearchRangeMagnify
struct ABP_EncountManager_C_UpdateSearchRangeMagnify_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.UpdateViewAngleMagnifty
struct ABP_EncountManager_C_UpdateViewAngleMagnifty_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.UpdateViewDistanceMagnify
struct ABP_EncountManager_C_UpdateViewDistanceMagnify_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.BPE_GetMinimapRange
struct ABP_EncountManager_C_BPE_GetMinimapRange_Params
{
	float                                              OutRange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.OnChangeStateImpl
struct ABP_EncountManager_C_OnChangeStateImpl_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.BPE_GetEncountSurroundHeight
struct ABP_EncountManager_C_BPE_GetEncountSurroundHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.LoadBattleAssetAll
struct ABP_EncountManager_C_LoadBattleAssetAll_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.SetEncountingState
struct ABP_EncountManager_C_SetEncountingState_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.BPE_GetLevelDiffValue
struct ABP_EncountManager_C_BPE_GetLevelDiffValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.SetBtlResult
struct ABP_EncountManager_C_SetBtlResult_Params
{
	struct FBtlResultInfo                              BtlResultInfo;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_EncountManager.BP_EncountManager_C.BPE_GetEncountSurroundDistance
struct ABP_EncountManager_C_BPE_GetEncountSurroundDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.BPE_GetBattleBonusEndValue
struct ABP_EncountManager_C_BPE_GetBattleBonusEndValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.BPE_GetBattleBonusDeduction
struct ABP_EncountManager_C_BPE_GetBattleBonusDeduction_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.ResetBattleFlag
struct ABP_EncountManager_C_ResetBattleFlag_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.ApplyCookSkill
struct ABP_EncountManager_C_ApplyCookSkill_Params
{
	float                                              In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.IsInSECautionRange
struct ABP_EncountManager_C_IsInSECautionRange_Params
{
	class AActor*                                      InSymbol;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsHitRange;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsHitShortRange;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.CreateEncountEffect
struct ABP_EncountManager_C_CreateEncountEffect_Params
{
	class ABP_EncountScreenMask_C*                     ScreenMask;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.IsInCautionRange
struct ABP_EncountManager_C_IsInCautionRange_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.GetSymbolsWithinCautionRange
struct ABP_EncountManager_C_GetSymbolsWithinCautionRange_Params
{
	TArray<class AActor*>                              OutSymbols;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_EncountManager.BP_EncountManager_C.RespawnSymbol
struct ABP_EncountManager_C_RespawnSymbol_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.IsCaution
struct ABP_EncountManager_C_IsCaution_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.OnGetInteractionProhibitedRange
struct ABP_EncountManager_C_OnGetInteractionProhibitedRange_Params
{
	float                                              ReactHorizontalDistance;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReactVerticalDistance;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.GetSearchRangeMagnify
struct ABP_EncountManager_C_GetSearchRangeMagnify_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.GetViewAngleMagnify
struct ABP_EncountManager_C_GetViewAngleMagnify_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.GetViewDistanceMagnify
struct ABP_EncountManager_C_GetViewDistanceMagnify_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.RemoveEncountMAPOBJ
struct ABP_EncountManager_C_RemoveEncountMAPOBJ_Params
{
	class AActor*                                      MapObj;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.AddEncountMAPOBJ
struct ABP_EncountManager_C_AddEncountMAPOBJ_Params
{
	class AActor*                                      MapObj;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.EndOfBattleScene
struct ABP_EncountManager_C_EndOfBattleScene_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.OnGetSurroundEncountMAPOBJNames
struct ABP_EncountManager_C_OnGetSurroundEncountMAPOBJNames_Params
{
	class AActor*                                      InMAPOBJ;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlEncountGroupParam                       Param;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.UnloadBattleAssetAll
struct ABP_EncountManager_C_UnloadBattleAssetAll_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.OnGetSurroundEncountGroupNames
struct ABP_EncountManager_C_OnGetSurroundEncountGroupNames_Params
{
	TArray<struct FString>                             EncountGroupNames;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AEncountGroup*                               InGroup;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlEncountGroupParam                       Param;                                                    // (Parm, OutParm)
	struct FString                                     EncountGroupName;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.OnGetEncountGroupNames
struct ABP_EncountManager_C_OnGetEncountGroupNames_Params
{
	struct FString                                     AutoSymbolName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AEncountGroup*                               InGroup;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlEncountGroupParam                       Param;                                                    // (Parm, OutParm)
	struct FString                                     EncountGroupName;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.GetBattleBonusDecValue
struct ABP_EncountManager_C_GetBattleBonusDecValue_Params
{
	TEnumAsByte<ENUM_EnSym_Bonus>                      Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.GetBonusGaugeData
struct ABP_EncountManager_C_GetBonusGaugeData_Params
{
	TEnumAsByte<ENUM_EnSym_Bonus>                      Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.UpdateRareGroup
struct ABP_EncountManager_C_UpdateRareGroup_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.EncountLinkImpl
struct ABP_EncountManager_C_EncountLinkImpl_Params
{
	class APFEncountSymbol*                            Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.DestroyAllSymbol
struct ABP_EncountManager_C_DestroyAllSymbol_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.GetDataTable
struct ABP_EncountManager_C_GetDataTable_Params
{
	TEnumAsByte<ENUM_EnSym_Encount>                    Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              A;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                INT_A;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                INT_B;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.InitDataTable
struct ABP_EncountManager_C_InitDataTable_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.SetEncountGroupState
struct ABP_EncountManager_C_SetEncountGroupState_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.GetEncountGroupNames
struct ABP_EncountManager_C_GetEncountGroupNames_Params
{
	struct FString                                     EncountSymbolName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FBtlEncountGroupParam>               Groups;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_EncountManager.BP_EncountManager_C.ClearEncountItems
struct ABP_EncountManager_C_ClearEncountItems_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.DoEncount
struct ABP_EncountManager_C_DoEncount_Params
{
	struct FString                                     BattleMapName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EncountManager.BP_EncountManager_C.UserConstructionScript
struct ABP_EncountManager_C_UserConstructionScript_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.OnPreMapChange
struct ABP_EncountManager_C_OnPreMapChange_Params
{
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EncountManager.BP_EncountManager_C.OnPostMapChange
struct ABP_EncountManager_C_OnPostMapChange_Params
{
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EncountManager.BP_EncountManager_C.BPE_OnChangeDisplayScene
struct ABP_EncountManager_C_BPE_OnChangeDisplayScene_Params
{
	EAriseGameScene                                    ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAriseGameScene                                    OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.OnBattleStart
struct ABP_EncountManager_C_OnBattleStart_Params
{
	bool                                               bAccept;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.OnBattleEnd
struct ABP_EncountManager_C_OnBattleEnd_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.OnFinalizeEvent
struct ABP_EncountManager_C_OnFinalizeEvent_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OptionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EncountManager.BP_EncountManager_C.BPE_OutCamp
struct ABP_EncountManager_C_BPE_OutCamp_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.OnEndBattleScene
struct ABP_EncountManager_C_OnEndBattleScene_Params
{
	struct FBtlResultInfo                              ResultInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_EncountManager.BP_EncountManager_C.InitCallback
struct ABP_EncountManager_C_InitCallback_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.OnBattleWakeup
struct ABP_EncountManager_C_OnBattleWakeup_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.OnGoBackTitleEvent
struct ABP_EncountManager_C_OnGoBackTitleEvent_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.OnChangeStateBP
struct ABP_EncountManager_C_OnChangeStateBP_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.OnPostWakeupShowPlayer
struct ABP_EncountManager_C_OnPostWakeupShowPlayer_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.DoEncountImpl
struct ABP_EncountManager_C_DoEncountImpl_Params
{
	struct FString                                     BattleMapName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_EncountManager.BP_EncountManager_C.ReceiveBeginPlay
struct ABP_EncountManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.OnReleaseBattleAsset
struct ABP_EncountManager_C_OnReleaseBattleAsset_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.OnPlayEvent
struct ABP_EncountManager_C_OnPlayEvent_Params
{
};

// Function BP_EncountManager.BP_EncountManager_C.ReceiveEndPlay
struct ABP_EncountManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.ReceiveTick
struct ABP_EncountManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountManager.BP_EncountManager_C.ExecuteUbergraph_BP_EncountManager
struct ABP_EncountManager_C_ExecuteUbergraph_BP_EncountManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
