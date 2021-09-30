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

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.UpdateEncountUnitNum
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_UpdateEncountUnitNum_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.IsArenaFirstCheck
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_IsArenaFirstCheck_Params
{
	struct FName                                       EncountGroupLabel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFirst;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.AddEncountUnit
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_AddEncountUnit_Params
{
	struct FName                                       UnitLabel;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.StopAnimations
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_StopAnimations_Params
{
	TArray<class UWidgetAnimation*>                    Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.HideAnim
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_HideAnim_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.DeadedEnemy
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_DeadedEnemy_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.FinishedEnemyReinforcement
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_FinishedEnemyReinforcement_Params
{
	struct FName                                       UnitID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SafeStopAnimation
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_SafeStopAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ShowEncountData
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_ShowEncountData_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.Development_SetEncountLoadState
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_Development_SetEncountLoadState_Params
{
	TMap<struct FName, bool>                           LoadState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SetBattleStart
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_SetBattleStart_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SetEncount
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_SetEncount_Params
{
	TArray<struct FBtlEncountGroupParam>               NewEncountArray;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.Construct
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_Construct_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BndEvt__Loop_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_BndEvt__Loop_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BndEvt__Start_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_BndEvt__Start_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BattleStart
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_BattleStart_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ShowEncountRequest
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_ShowEncountRequest_Params
{
	TArray<struct FBtlEncountGroupParam>               NewEncountArray;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.Destruct
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_Destruct_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ShowLastEncountRequest
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_ShowLastEncountRequest_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnBeginChangeTarget
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnBeginChangeTarget_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.BndEvt__End_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_BndEvt__End_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnMenuExit
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnMenuExit_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnFinishedEnemyReinforcement
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnFinishedEnemyReinforcement_Params
{
	struct FName                                       SpawnUnitId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnDeadCharacter
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnDeadCharacter_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnSpawnCharacter
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnSpawnCharacter_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reinforcement;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnEndBattle
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnEndBattle_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnBeginBattle
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnBeginBattle_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.SetEncountInfo
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_SetEncountInfo_Params
{
	TArray<struct FBtlEncountGroupParam>               NewEncountArray;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.UpdatePreset
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_UpdatePreset_Params
{
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.OnChangePreset
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_OnChangePreset_Params
{
	struct FName                                       Preset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT.TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C.ExecuteUbergraph_TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT
struct UTO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_C_ExecuteUbergraph_TO14_BP_BTL_ENCOUNT_LAYOUT_ROOT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
