
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

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsTargetableInCutScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceValidationHandle_C::IsTargetableInCutScene(class ABtlCharacterBase* Unit, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsTargetableInCutScene");

	UBP_VoiceValidationHandle_C_IsTargetableInCutScene_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetEnemyUnitsInCutScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class ABtlCharacterBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ABtlCharacterBase*> UBP_VoiceValidationHandle_C::GetEnemyUnitsInCutScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetEnemyUnitsInCutScene");

	UBP_VoiceValidationHandle_C_GetEnemyUnitsInCutScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.OnEndBattle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VoiceValidationHandle_C::OnEndBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.OnEndBattle");

	UBP_VoiceValidationHandle_C_OnEndBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetDerivedVoiceListByInternalPredicate
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            SourceVoiceIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Who                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       ToWhom                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DelayRequest                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TalkRequest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreOrder                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         UnitFilter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FScriptDelegate         VoiceFilter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FBtlVoiceLottery> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBtlVoiceLottery> UBP_VoiceValidationHandle_C::GetDerivedVoiceListByInternalPredicate(int SourceVoiceIndex, class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, bool DelayRequest, bool TalkRequest, bool IgnoreOrder, const struct FScriptDelegate& UnitFilter, const struct FScriptDelegate& VoiceFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetDerivedVoiceListByInternalPredicate");

	UBP_VoiceValidationHandle_C_GetDerivedVoiceListByInternalPredicate_Params params;
	params.SourceVoiceIndex = SourceVoiceIndex;
	params.Who = Who;
	params.ToWhom = ToWhom;
	params.DelayRequest = DelayRequest;
	params.TalkRequest = TalkRequest;
	params.IgnoreOrder = IgnoreOrder;
	params.UnitFilter = UnitFilter;
	params.VoiceFilter = VoiceFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.SetBattleTimerByEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLooping                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceValidationHandle_C::SetBattleTimerByEvent(const struct FScriptDelegate& Event, float Time, bool bLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.SetBattleTimerByEvent");

	UBP_VoiceValidationHandle_C_SetBattleTimerByEvent_Params params;
	params.Event = Event;
	params.Time = Time;
	params.bLooping = bLooping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.RequestVoiceLottery
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Who                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       ToWhom                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TalkRequest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreOrder                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_VoiceValidationHandle_C::RequestVoiceLottery(class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, bool TalkRequest, bool IgnoreOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.RequestVoiceLottery");

	UBP_VoiceValidationHandle_C_RequestVoiceLottery_Params params;
	params.Who = Who;
	params.ToWhom = ToWhom;
	params.TalkRequest = TalkRequest;
	params.IgnoreOrder = IgnoreOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetDerivedVoiceList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBtlVoiceMessageCommand SourceCommand                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FBtlVoiceLottery> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBtlVoiceLottery> UBP_VoiceValidationHandle_C::GetDerivedVoiceList(const struct FBtlVoiceMessageCommand& SourceCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetDerivedVoiceList");

	UBP_VoiceValidationHandle_C_GetDerivedVoiceList_Params params;
	params.SourceCommand = SourceCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetVoiceListByInternalPredicate
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       Who                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       ToWhom                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DelayRequest                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TalkRequest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreOrder                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         UnitFilter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FScriptDelegate         VoiceFilter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FBtlVoiceLottery> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBtlVoiceLottery> UBP_VoiceValidationHandle_C::GetVoiceListByInternalPredicate(class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, bool DelayRequest, bool TalkRequest, bool IgnoreOrder, const struct FScriptDelegate& UnitFilter, const struct FScriptDelegate& VoiceFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetVoiceListByInternalPredicate");

	UBP_VoiceValidationHandle_C_GetVoiceListByInternalPredicate_Params params;
	params.Who = Who;
	params.ToWhom = ToWhom;
	params.DelayRequest = DelayRequest;
	params.TalkRequest = TalkRequest;
	params.IgnoreOrder = IgnoreOrder;
	params.UnitFilter = UnitFilter;
	params.VoiceFilter = VoiceFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsRequestVoiceConditionMatched
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Who                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       ToWhom                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Args                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceValidationHandle_C::IsRequestVoiceConditionMatched(class ABtlCharacterBase* Speaker, class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, const struct FString& Args, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsRequestVoiceConditionMatched");

	UBP_VoiceValidationHandle_C_IsRequestVoiceConditionMatched_Params params;
	params.Speaker = Speaker;
	params.Who = Who;
	params.ToWhom = ToWhom;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsDerivedVoiceConditionMatched
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            SourceVoiceIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Who                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       ToWhom                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Args                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceValidationHandle_C::IsDerivedVoiceConditionMatched(int SourceVoiceIndex, class ABtlCharacterBase* Speaker, class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, const struct FString& Args, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsDerivedVoiceConditionMatched");

	UBP_VoiceValidationHandle_C_IsDerivedVoiceConditionMatched_Params params;
	params.SourceVoiceIndex = SourceVoiceIndex;
	params.Speaker = Speaker;
	params.Who = Who;
	params.ToWhom = ToWhom;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.BreakConditionArgs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ConditionArgs                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            RequiredCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Args                           (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_VoiceValidationHandle_C::BreakConditionArgs(const struct FString& ConditionArgs, int RequiredCount, TArray<struct FString>* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.BreakConditionArgs");

	UBP_VoiceValidationHandle_C_BreakConditionArgs_Params params;
	params.ConditionArgs = ConditionArgs;
	params.RequiredCount = RequiredCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Args != nullptr)
		*Args = params.Args;

	return params.ReturnValue;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.OnBeginBattle
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_VoiceValidationHandle_C::OnBeginBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.OnBeginBattle");

	UBP_VoiceValidationHandle_C_OnBeginBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsVoiceConditionMatched
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Who                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       ToWhom                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Args                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceValidationHandle_C::IsVoiceConditionMatched(class ABtlCharacterBase* Speaker, class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, const struct FString& Args, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsVoiceConditionMatched");

	UBP_VoiceValidationHandle_C_IsVoiceConditionMatched_Params params;
	params.Speaker = Speaker;
	params.Who = Who;
	params.ToWhom = ToWhom;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsTargetConditionMatched
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EBtlVoiceTarget                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceValidationHandle_C::IsTargetConditionMatched(class ABtlCharacterBase* Speaker, class ABtlCharacterBase* Character, const struct FString& Label, EBtlVoiceTarget Target, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsTargetConditionMatched");

	UBP_VoiceValidationHandle_C_IsTargetConditionMatched_Params params;
	params.Speaker = Speaker;
	params.Character = Character;
	params.Label = Label;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetVoiceList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBtlVoiceLottery> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBtlVoiceLottery> UBP_VoiceValidationHandle_C::GetVoiceList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetVoiceList");

	UBP_VoiceValidationHandle_C_GetVoiceList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetVoiceListByPredicate
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           TalkRequired                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Who                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       ToWhom                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreOrder                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBtlVoiceLottery> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBtlVoiceLottery> UBP_VoiceValidationHandle_C::GetVoiceListByPredicate(bool TalkRequired, class ABtlCharacterBase* Who, class ABtlCharacterBase* ToWhom, bool IgnoreOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetVoiceListByPredicate");

	UBP_VoiceValidationHandle_C_GetVoiceListByPredicate_Params params;
	params.TalkRequired = TalkRequired;
	params.Who = Who;
	params.ToWhom = ToWhom;
	params.IgnoreOrder = IgnoreOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
