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

// Function BPD_DebugCommand.BPD_DebugCommand_C.SetUnlimitedOverlimit
struct ABPD_DebugCommand_C_SetUnlimitedOverlimit_Params
{
	class UBtlStatusComponent*                         BattleStatusComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.UserConstructionScript
struct ABPD_DebugCommand_C_UserConstructionScript_Params
{
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.PostChangeProfile
struct ABPD_DebugCommand_C_PostChangeProfile_Params
{
	struct FBtlDebugParameter                          Prev;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.@Pause_SkipFrame
struct ABPD_DebugCommand_C_@Pause_SkipFrame_Params
{
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.BattleStartProfile
struct ABPD_DebugCommand_C_BattleStartProfile_Params
{
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.Received_Begin
struct ABPD_DebugCommand_C_Received_Begin_Params
{
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.EventBack
struct ABPD_DebugCommand_C_EventBack_Params
{
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlMysticEndSignature__DelegateSignature
struct ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlMysticEndSignature__DelegateSignature_Params
{
	struct FBtlMysticEndParam                          Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature
struct ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature_Params
{
	struct FBtlStrikeSmashEndParam                     Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature
struct ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature
struct ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSpawnCharacterSignature__DelegateSignature
struct ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSpawnCharacterSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reinforcement;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.ReceiveTick
struct ABPD_DebugCommand_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.OnBattleStateChange
struct ABPD_DebugCommand_C_OnBattleStateChange_Params
{
	EBattleState                                       NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleState                                       PrevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.OnBattleSubStateEnd
struct ABPD_DebugCommand_C_OnBattleSubStateEnd_Params
{
	EBattleState                                       State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.OnBattleSubStateStart
struct ABPD_DebugCommand_C_OnBattleSubStateStart_Params
{
	EBattleState                                       State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.ReceiveBeginPlay
struct ABPD_DebugCommand_C_ReceiveBeginPlay_Params
{
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.OnSwitchBeginPIEAndSIE
struct ABPD_DebugCommand_C_OnSwitchBeginPIEAndSIE_Params
{
	bool                                               bIsSimulating;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlSimpleSignature__DelegateSignature
struct ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlSimpleSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           PrevOperationUnit;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           NowOperationUnit;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPD_DebugCommand.BPD_DebugCommand_C.ExecuteUbergraph_BPD_DebugCommand
struct ABPD_DebugCommand_C_ExecuteUbergraph_BPD_DebugCommand_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
