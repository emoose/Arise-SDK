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

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.RunBoostAttackReserveDwon
struct ABP_BattleManagerBase_C_RunBoostAttackReserveDwon_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.UserConstructionScript
struct ABP_BattleManagerBase_C_UserConstructionScript_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.GetSpecialStrikeLabel
struct ABP_BattleManagerBase_C_GetSpecialStrikeLabel_Params
{
	struct FName                                       Label;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.IsReadySpecialStrike
struct ABP_BattleManagerBase_C_IsReadySpecialStrike_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnMysticFadeInFinished
struct ABP_BattleManagerBase_C_OnMysticFadeInFinished_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.MysticFadeIn
struct ABP_BattleManagerBase_C_MysticFadeIn_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.RegisterMysticEndFade
struct ABP_BattleManagerBase_C_RegisterMysticEndFade_Params
{
	class UClass*                                      FadeWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.AllUnitStateReset
struct ABP_BattleManagerBase_C_AllUnitStateReset_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ChangeMysticUnitVisibility
struct ABP_BattleManagerBase_C_ChangeMysticUnitVisibility_Params
{
	class ABtlCharacterBase*                           PlayUnit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           TargetUnit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.RestoreMysticTransform
struct ABP_BattleManagerBase_C_RestoreMysticTransform_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BackupMysticTransform
struct ABP_BattleManagerBase_C_BackupMysticTransform_Params
{
	struct FBtlMysticBeginParam                        MysticParam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.GetAlphaMaskComponents
struct ABP_BattleManagerBase_C_GetAlphaMaskComponents_Params
{
	TArray<class UAlphaMaskComponent*>                 NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ClearAlphaMaskComponent
struct ABP_BattleManagerBase_C_ClearAlphaMaskComponent_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.RemoveAlphaMaskComponent
struct ABP_BattleManagerBase_C_RemoveAlphaMaskComponent_Params
{
	class UAlphaMaskComponent*                         Remove;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.RegistAlphaMaskComponent
struct ABP_BattleManagerBase_C_RegistAlphaMaskComponent_Params
{
	class UAlphaMaskComponent*                         Regist;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeSmashBeginSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeSmashBeginSignature__DelegateSignature_Params
{
	struct FBtlStrikeSmashBeginParam                   Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeSmashEndSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeSmashEndSignature__DelegateSignature_Params
{
	struct FBtlStrikeSmashEndParam                     Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlMysticBeginSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlMysticBeginSignature__DelegateSignature_Params
{
	struct FBtlMysticBeginParam                        Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlMysticEndSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlMysticEndSignature__DelegateSignature_Params
{
	struct FBtlMysticEndParam                          Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature_Params
{
	struct FBtlCutSceneEndParam                        Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlMysticBeginSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlMysticBeginSignature__DelegateSignature_Params
{
	struct FBtlMysticBeginParam                        Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlStrikeAttackSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlStrikeAttackSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlFlashRaidSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlFlashRaidSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCoreBreakSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCoreBreakSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackReserveDownSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackReserveDownSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDamageSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDamageSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                PreArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                PrevHp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantDeath;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Critical;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlStrikeAttackSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlStrikeAttackSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlCollisionSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlCollisionSignature__DelegateSignature_Params
{
	struct FBtlCollisionSignatureData                  CollisionParam;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlRequestUseItemBeginSignature__DelegateSignature
struct ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlRequestUseItemBeginSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           ItemUser;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveInitialize
struct ABP_BattleManagerBase_C_ReceiveInitialize_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.Receive_BattleResume
struct ABP_BattleManagerBase_C_Receive_BattleResume_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.Receive_BattlePause
struct ABP_BattleManagerBase_C_Receive_BattlePause_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveFinalize
struct ABP_BattleManagerBase_C_ReceiveFinalize_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.NotReadySpecialStrike
struct ABP_BattleManagerBase_C_NotReadySpecialStrike_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReadySpecialStrike
struct ABP_BattleManagerBase_C_ReadySpecialStrike_Params
{
	struct FName                                       NewSpecialStrike;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.PlayBattleExitMask
struct ABP_BattleManagerBase_C_PlayBattleExitMask_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleExitMaskDestory
struct ABP_BattleManagerBase_C_OnBattleExitMaskDestory_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveBeginPlay
struct ABP_BattleManagerBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveEndPlay
struct ABP_BattleManagerBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBeginBattleScene
struct ABP_BattleManagerBase_C_OnBeginBattleScene_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnGoBackTitle
struct ABP_BattleManagerBase_C_OnGoBackTitle_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnEndLoad
struct ABP_BattleManagerBase_C_OnEndLoad_Params
{
	EAriseSaveResult                                   iResult;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.@OnExitMaskStartAnimFinish
struct ABP_BattleManagerBase_C_@OnExitMaskStartAnimFinish_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ExecuteUbergraph_BP_BattleManagerBase
struct ABP_BattleManagerBase_C_ExecuteUbergraph_BP_BattleManagerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
