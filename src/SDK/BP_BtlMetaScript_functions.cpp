
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

// Function BP_BtlMetaScript.BP_BtlMetaScript_C.IsPlayingScenarioVoice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlMetaScript_C::IsPlayingScenarioVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.IsPlayingScenarioVoice");

	UBP_BtlMetaScript_C_IsPlayingScenarioVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.RequestVoiceByCondition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlVoiceCondition             Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlMetaScript_C::RequestVoiceByCondition(EBtlVoiceCondition Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.RequestVoiceByCondition");

	UBP_BtlMetaScript_C_RequestVoiceByCondition_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.IsBattleLossCondition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlMetaScript_C::IsBattleLossCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.IsBattleLossCondition");

	UBP_BtlMetaScript_C_IsBattleLossCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.IsBattleWinCondition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlMetaScript_C::IsBattleWinCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.IsBattleWinCondition");

	UBP_BtlMetaScript_C_IsBattleWinCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.Unregister_BattleWinCheck
// (Event, Public, BlueprintEvent)

void UBP_BtlMetaScript_C::Unregister_BattleWinCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.Unregister_BattleWinCheck");

	UBP_BtlMetaScript_C_Unregister_BattleWinCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.Register_BattleWinCheck
// (Event, Public, BlueprintEvent)

void UBP_BtlMetaScript_C::Register_BattleWinCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.Register_BattleWinCheck");

	UBP_BtlMetaScript_C_Register_BattleWinCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.OnWinCheck_DeadCharater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BtlMetaScript_C::OnWinCheck_DeadCharater(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.OnWinCheck_DeadCharater");

	UBP_BtlMetaScript_C_OnWinCheck_DeadCharater_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.OnLossCheck_DeadCharater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BtlMetaScript_C::OnLossCheck_DeadCharater(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.OnLossCheck_DeadCharater");

	UBP_BtlMetaScript_C_OnLossCheck_DeadCharater_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.Unregister_BattleLossCheck
// (Event, Public, BlueprintEvent)

void UBP_BtlMetaScript_C::Unregister_BattleLossCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.Unregister_BattleLossCheck");

	UBP_BtlMetaScript_C_Unregister_BattleLossCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.Register_BattleLossCheck
// (Event, Public, BlueprintEvent)

void UBP_BtlMetaScript_C::Register_BattleLossCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.Register_BattleLossCheck");

	UBP_BtlMetaScript_C_Register_BattleLossCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.RequestOpenHelpWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCollectionHelp_XmlDatabaseLabel HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BtlMetaScript_C::RequestOpenHelpWindow(const struct FCollectionHelp_XmlDatabaseLabel& HelpLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.RequestOpenHelpWindow");

	UBP_BtlMetaScript_C_RequestOpenHelpWindow_Params params;
	params.HelpLabel = HelpLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.OnComplateHelpWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_BtlMetaScript_C::OnComplateHelpWindow(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.OnComplateHelpWindow");

	UBP_BtlMetaScript_C_OnComplateHelpWindow_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlMetaScript.BP_BtlMetaScript_C.ExecuteUbergraph_BP_BtlMetaScript
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlMetaScript_C::ExecuteUbergraph_BP_BtlMetaScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlMetaScript.BP_BtlMetaScript_C.ExecuteUbergraph_BP_BtlMetaScript");

	UBP_BtlMetaScript_C_ExecuteUbergraph_BP_BtlMetaScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
