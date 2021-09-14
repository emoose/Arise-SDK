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

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ReplaceInputState
struct UBP_DerivedInputStateComponent_C_ReplaceInputState_Params
{
	bool                                               bSwapEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.SetInputState
struct UBP_DerivedInputStateComponent_C_SetInputState_Params
{
	int                                                ArtsSlotIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.GetArtsSlotIndexByButtonId
struct UBP_DerivedInputStateComponent_C_GetArtsSlotIndexByButtonId_Params
{
	struct FName                                       ButtonID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ArtsSlotIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.CanArtsSwap
struct UBP_DerivedInputStateComponent_C_CanArtsSwap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.GetNowArtsButtonId
struct UBP_DerivedInputStateComponent_C_GetNowArtsButtonId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.IsMagicKeepButtonPressed
struct UBP_DerivedInputStateComponent_C_IsMagicKeepButtonPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.BP_CanMysticAction
struct UBP_DerivedInputStateComponent_C_BP_CanMysticAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.GetPressedCount
struct UBP_DerivedInputStateComponent_C_GetPressedCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.IsMysticButtonPressed
struct UBP_DerivedInputStateComponent_C_IsMysticButtonPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.CanDerivedAction
struct UBP_DerivedInputStateComponent_C_CanDerivedAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.IsDerivedButtonPressed
struct UBP_DerivedInputStateComponent_C_IsDerivedButtonPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnButtonPressed
struct UBP_DerivedInputStateComponent_C_OnButtonPressed_Params
{
	struct FName                                       ButtonName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlInputEventType                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnButtonReleased
struct UBP_DerivedInputStateComponent_C_OnButtonReleased_Params
{
	struct FName                                       ButtonName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlInputEventType                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ReceiveBeginPlay
struct UBP_DerivedInputStateComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ReceiveTick
struct UBP_DerivedInputStateComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnBeginAttackState
struct UBP_DerivedInputStateComponent_C_OnBeginAttackState_Params
{
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.BindUnitEvent
struct UBP_DerivedInputStateComponent_C_BindUnitEvent_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnStateChanged
struct UBP_DerivedInputStateComponent_C_OnStateChanged_Params
{
	EBattleActionState                                 NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleActionState                                 PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.UnbindUnitEvent
struct UBP_DerivedInputStateComponent_C_UnbindUnitEvent_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnPaused
struct UBP_DerivedInputStateComponent_C_OnPaused_Params
{
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnUnPaused
struct UBP_DerivedInputStateComponent_C_OnUnPaused_Params
{
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.InitializeInputState
struct UBP_DerivedInputStateComponent_C_InitializeInputState_Params
{
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnWon
struct UBP_DerivedInputStateComponent_C_OnWon_Params
{
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnOperationUnitChanged
struct UBP_DerivedInputStateComponent_C_OnOperationUnitChanged_Params
{
	class ABtlCharacterBase*                           PrevOperationUnit;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           NowOperationUnit;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnArtsSwapButtonPressed
struct UBP_DerivedInputStateComponent_C_OnArtsSwapButtonPressed_Params
{
	struct FName                                       ButtonName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlInputEventType                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.OnArtsSwapButtonReleased
struct UBP_DerivedInputStateComponent_C_OnArtsSwapButtonReleased_Params
{
	struct FName                                       ButtonName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlInputEventType                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DerivedInputStateComponent.BP_DerivedInputStateComponent_C.ExecuteUbergraph_BP_DerivedInputStateComponent
struct UBP_DerivedInputStateComponent_C_ExecuteUbergraph_BP_DerivedInputStateComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
