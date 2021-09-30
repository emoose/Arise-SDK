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

// Function BP_BattleUIManager.BP_BattleUIManager_C.IsUse
struct ABP_BattleUIManager_C_IsUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.ShowBtlLock
struct ABP_BattleUIManager_C_ShowBtlLock_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.HiddenBtlLock
struct ABP_BattleUIManager_C_HiddenBtlLock_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.PlayBtlTarget
struct ABP_BattleUIManager_C_PlayBtlTarget_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.PlayBtlLock
struct ABP_BattleUIManager_C_PlayBtlLock_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.UserConstructionScript
struct ABP_BattleUIManager_C_UserConstructionScript_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.ShowLockon
struct ABP_BattleUIManager_C_ShowLockon_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.OnHeal_Event
struct ABP_BattleUIManager_C_OnHeal_Event_Params
{
	class ABtlCharacterBase*                           Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.EventEndStrikeSmash
struct ABP_BattleUIManager_C_EventEndStrikeSmash_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.HideLockon
struct ABP_BattleUIManager_C_HideLockon_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.OnBeginSpellCastDelegate
struct ABP_BattleUIManager_C_OnBeginSpellCastDelegate_Params
{
	class UBtlStatusViewModelBase*                     ViewModel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.CreatePostStatusViewModel
struct ABP_BattleUIManager_C_CreatePostStatusViewModel_Params
{
	class UBtlStatusViewModelBase*                     ViewModel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.EventBeginStrikeSmash
struct ABP_BattleUIManager_C_EventBeginStrikeSmash_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature
struct ABP_BattleUIManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlHeelSignature__DelegateSignature
struct ABP_BattleUIManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlHeelSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Healer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlHeelSignature__DelegateSignature
struct ABP_BattleUIManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlHeelSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Healer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.OnHealEvent
struct ABP_BattleUIManager_C_OnHealEvent_Params
{
	class ABtlCharacterBase*                           Healer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlComboSignature__DelegateSignature
struct ABP_BattleUIManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlComboSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           DamageCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature
struct ABP_BattleUIManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.OnViewStart
struct ABP_BattleUIManager_C_OnViewStart_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.ReceiveBeginPlay
struct ABP_BattleUIManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.OnViewEnd
struct ABP_BattleUIManager_C_OnViewEnd_Params
{
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.ReceiveEndPlay
struct ABP_BattleUIManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.ReceiveTick
struct ABP_BattleUIManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.OpenPoisonDamage
struct ABP_BattleUIManager_C_OpenPoisonDamage_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnemy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.OpenHeal
struct ABP_BattleUIManager_C_OpenHeal_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.OpenDamage
struct ABP_BattleUIManager_C_OpenDamage_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnemy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeak;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsResist;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCore;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCoreBreak;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBoostBreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BattleUIManager.BP_BattleUIManager_C.ExecuteUbergraph_BP_BattleUIManager
struct ABP_BattleUIManager_C_ExecuteUbergraph_BP_BattleUIManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
