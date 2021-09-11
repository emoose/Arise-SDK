
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPD_DebugCommand.BPD_DebugCommand_C.SetUnlimitedOverlimit
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusComponent*     BattleStatusComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_DebugCommand_C::SetUnlimitedOverlimit(class UBtlStatusComponent* BattleStatusComponent, bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.SetUnlimitedOverlimit");

	ABPD_DebugCommand_C_SetUnlimitedOverlimit_Params params;
	params.BattleStatusComponent = BattleStatusComponent;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPD_DebugCommand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.UserConstructionScript");

	ABPD_DebugCommand_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.PostChangeProfile
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlDebugParameter      Prev                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPD_DebugCommand_C::PostChangeProfile(const struct FBtlDebugParameter& Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.PostChangeProfile");

	ABPD_DebugCommand_C_PostChangeProfile_Params params;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.@Pause_SkipFrame
// (Public, BlueprintCallable, BlueprintEvent)

void ABPD_DebugCommand_C::@Pause_SkipFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.@Pause_SkipFrame");

	ABPD_DebugCommand_C_@Pause_SkipFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.BattleStartProfile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPD_DebugCommand_C::BattleStartProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.BattleStartProfile");

	ABPD_DebugCommand_C_BattleStartProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.Received_Begin
// (Event, Public, BlueprintEvent)

void ABPD_DebugCommand_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.Received_Begin");

	ABPD_DebugCommand_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.EventBack
// (BlueprintCallable, BlueprintEvent)

void ABPD_DebugCommand_C::EventBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.EventBack");

	ABPD_DebugCommand_C_EventBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlMysticEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlMysticEndParam      Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPD_DebugCommand_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlMysticEndSignature__DelegateSignature(const struct FBtlMysticEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlMysticEndSignature__DelegateSignature");

	ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlMysticEndSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlStrikeSmashEndParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPD_DebugCommand_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature(const struct FBtlStrikeSmashEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature");

	ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABPD_DebugCommand_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature");

	ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABPD_DebugCommand_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature");

	ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSpawnCharacterSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reinforcement                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_DebugCommand_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSpawnCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character, bool Reinforcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSpawnCharacterSignature__DelegateSignature");

	ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSpawnCharacterSignature__DelegateSignature_Params params;
	params.Character = Character;
	params.Reinforcement = Reinforcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_DebugCommand_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.ReceiveTick");

	ABPD_DebugCommand_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.OnBattleStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// EBattleState                   NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleState                   PrevState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_DebugCommand_C::OnBattleStateChange(EBattleState NowState, EBattleState PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.OnBattleStateChange");

	ABPD_DebugCommand_C_OnBattleStateChange_Params params;
	params.NowState = NowState;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.OnBattleSubStateEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EBattleState                   State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_DebugCommand_C::OnBattleSubStateEnd(EBattleState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.OnBattleSubStateEnd");

	ABPD_DebugCommand_C_OnBattleSubStateEnd_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.OnBattleSubStateStart
// (Event, Public, BlueprintEvent)
// Parameters:
// EBattleState                   State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_DebugCommand_C::OnBattleSubStateStart(EBattleState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.OnBattleSubStateStart");

	ABPD_DebugCommand_C_OnBattleSubStateStart_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPD_DebugCommand_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.ReceiveBeginPlay");

	ABPD_DebugCommand_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.OnSwitchBeginPIEAndSIE
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsSimulating                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_DebugCommand_C::OnSwitchBeginPIEAndSIE(bool bIsSimulating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.OnSwitchBeginPIEAndSIE");

	ABPD_DebugCommand_C_OnSwitchBeginPIEAndSIE_Params params;
	params.bIsSimulating = bIsSimulating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       PrevOperationUnit              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       NowOperationUnit               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_DebugCommand_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlSimpleSignature__DelegateSignature(class ABtlCharacterBase* PrevOperationUnit, class ABtlCharacterBase* NowOperationUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlSimpleSignature__DelegateSignature");

	ABPD_DebugCommand_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlSimpleSignature__DelegateSignature_Params params;
	params.PrevOperationUnit = PrevOperationUnit;
	params.NowOperationUnit = NowOperationUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPD_DebugCommand.BPD_DebugCommand_C.ExecuteUbergraph_BPD_DebugCommand
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPD_DebugCommand_C::ExecuteUbergraph_BPD_DebugCommand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPD_DebugCommand.BPD_DebugCommand_C.ExecuteUbergraph_BPD_DebugCommand");

	ABPD_DebugCommand_C_ExecuteUbergraph_BPD_DebugCommand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
