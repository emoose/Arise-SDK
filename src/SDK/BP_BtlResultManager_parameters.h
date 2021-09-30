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

// Function BP_BtlResultManager.BP_BtlResultManager_C.ClearOpenWaitParams
struct ABP_BtlResultManager_C_ClearOpenWaitParams_Params
{
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.UserConstructionScript
struct ABP_BtlResultManager_C_UserConstructionScript_Params
{
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.ReceiveBeginPlay
struct ABP_BtlResultManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlAttackArtsSignature__DelegateSignature
struct ABP_BtlResultManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlAttackArtsSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.OnGoBackTitle
struct ABP_BtlResultManager_C_OnGoBackTitle_Params
{
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlDecideWinSignature__DelegateSignature
struct ABP_BtlResultManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlDecideWinSignature__DelegateSignature_Params
{
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.OnEndLoadSaveData
struct ABP_BtlResultManager_C_OnEndLoadSaveData_Params
{
	EAriseSaveResult                                   iResult;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.OnOpenTpItemWindow
struct ABP_BtlResultManager_C_OnOpenTpItemWindow_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.ShowTpITemWindow
struct ABP_BtlResultManager_C_ShowTpITemWindow_Params
{
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.OnPlayShortCatAnim
struct ABP_BtlResultManager_C_OnPlayShortCatAnim_Params
{
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.OnOpenBattleResult
struct ABP_BtlResultManager_C_OnOpenBattleResult_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.OnPostBattleResutlHud
struct ABP_BtlResultManager_C_OnPostBattleResutlHud_Params
{
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.OnDisableResultWindow
struct ABP_BtlResultManager_C_OnDisableResultWindow_Params
{
	class UPFDelegateArgs_DisableControl*              InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.OnShowGigantTutorial
struct ABP_BtlResultManager_C_OnShowGigantTutorial_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.Event Show Character Change Tutorial
struct ABP_BtlResultManager_C_Event_Show_Character_Change_Tutorial_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlResultManager.BP_BtlResultManager_C.ExecuteUbergraph_BP_BtlResultManager
struct ABP_BtlResultManager_C_ExecuteUbergraph_BP_BtlResultManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
