
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

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CanPlayVoice
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBtlVoiceData           VoiceData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABtlCharacterBase*       SpeakerUnit                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlVoiceManager_C::CanPlayVoice(const struct FBtlVoiceData& VoiceData, class ABtlCharacterBase* SpeakerUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CanPlayVoice");

	ABP_BtlVoiceManager_C_CanPlayVoice_Params params;
	params.VoiceData = VoiceData;
	params.SpeakerUnit = SpeakerUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndVoice
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlVoiceMessageCommand Command                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::OnEndVoice(bool Success, struct FBtlVoiceMessageCommand* Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndVoice");

	ABP_BtlVoiceManager_C_OnEndVoice_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Command != nullptr)
		*Command = params.Command;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CreateVoiceHandle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlVoiceHandle*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBtlVoiceHandle* ABP_BtlVoiceManager_C::CreateVoiceHandle(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CreateVoiceHandle");

	ABP_BtlVoiceManager_C_CreateVoiceHandle_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetVoiceLotteries
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EBtlVoiceState                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlVoiceCondition             Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBtlVoiceLottery> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBtlVoiceLottery> ABP_BtlVoiceManager_C::GetVoiceLotteries(EBtlVoiceState State, EBtlVoiceCondition Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetVoiceLotteries");

	ABP_BtlVoiceManager_C_GetVoiceLotteries_Params params;
	params.State = State;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetVoiceHandleByUnit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlVoiceHandle*         VoiceHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::GetVoiceHandleByUnit(class ABtlCharacterBase* Unit, class UBtlVoiceHandle** VoiceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetVoiceHandleByUnit");

	ABP_BtlVoiceManager_C_GetVoiceHandleByUnit_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VoiceHandle != nullptr)
		*VoiceHandle = params.VoiceHandle;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetInterpTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_BtlVoiceManager_C::GetInterpTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetInterpTime");

	ABP_BtlVoiceManager_C_GetInterpTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetBattleRank
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            WinRank                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::GetBattleRank(int* WinRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetBattleRank");

	ABP_BtlVoiceManager_C_GetBattleRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WinRank != nullptr)
		*WinRank = params.WinRank;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CanResultVoice
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBtlVoice_DatabaseLabel VoiceLabel                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<EBtlVoiceCharaID>       PartyCharacterList             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlVoiceManager_C::CanResultVoice(const struct FBtlVoice_DatabaseLabel& VoiceLabel, TArray<EBtlVoiceCharaID>* PartyCharacterList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CanResultVoice");

	ABP_BtlVoiceManager_C_CanResultVoice_Params params;
	params.VoiceLabel = VoiceLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyCharacterList != nullptr)
		*PartyCharacterList = params.PartyCharacterList;

	return params.ReturnValue;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetSequentialVoiceArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBtlVoice_DatabaseLabel VoiceLabel                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FBtlVoice_DatabaseLabel> VoiceLabelArray                (Parm, OutParm, ZeroConstructor)

void ABP_BtlVoiceManager_C::GetSequentialVoiceArray(const struct FBtlVoice_DatabaseLabel& VoiceLabel, TArray<struct FBtlVoice_DatabaseLabel>* VoiceLabelArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetSequentialVoiceArray");

	ABP_BtlVoiceManager_C_GetSequentialVoiceArray_Params params;
	params.VoiceLabel = VoiceLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VoiceLabelArray != nullptr)
		*VoiceLabelArray = params.VoiceLabelArray;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.MakeDictionaryText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBtlVoice_DatabaseLabel VoiceLabel                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FDictionaryText> DictionaryTextArray            (Parm, OutParm, ZeroConstructor)

void ABP_BtlVoiceManager_C::MakeDictionaryText(struct FBtlVoice_DatabaseLabel* VoiceLabel, TArray<struct FDictionaryText>* DictionaryTextArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.MakeDictionaryText");

	ABP_BtlVoiceManager_C_MakeDictionaryText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VoiceLabel != nullptr)
		*VoiceLabel = params.VoiceLabel;
	if (DictionaryTextArray != nullptr)
		*DictionaryTextArray = params.DictionaryTextArray;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CacheResultVoiceLotteries
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::CacheResultVoiceLotteries()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CacheResultVoiceLotteries");

	ABP_BtlVoiceManager_C_CacheResultVoiceLotteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetResultVoiceLotteries
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FBtlVoiceLottery> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBtlVoiceLottery> ABP_BtlVoiceManager_C::GetResultVoiceLotteries()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetResultVoiceLotteries");

	ABP_BtlVoiceManager_C_GetResultVoiceLotteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetLotteryToDictionaryText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FBtlVoiceLottery> Lotteries                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Voice_Label                    (Parm, OutParm, ZeroConstructor)

void ABP_BtlVoiceManager_C::GetLotteryToDictionaryText(TArray<struct FBtlVoiceLottery> Lotteries, struct FString* Voice_Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetLotteryToDictionaryText");

	ABP_BtlVoiceManager_C_GetLotteryToDictionaryText_Params params;
	params.Lotteries = Lotteries;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Voice_Label != nullptr)
		*Voice_Label = params.Voice_Label;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetMessageDataArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBtlVoice_DatabaseLabel VoiceLabel                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UMessageData*>    ShortChatMessageArray          (Parm, OutParm, ZeroConstructor)

void ABP_BtlVoiceManager_C::GetMessageDataArray(struct FBtlVoice_DatabaseLabel* VoiceLabel, TArray<class UMessageData*>* ShortChatMessageArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetMessageDataArray");

	ABP_BtlVoiceManager_C_GetMessageDataArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VoiceLabel != nullptr)
		*VoiceLabel = params.VoiceLabel;
	if (ShortChatMessageArray != nullptr)
		*ShortChatMessageArray = params.ShortChatMessageArray;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnRequestResultVoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::OnRequestResultVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnRequestResultVoice");

	ABP_BtlVoiceManager_C_OnRequestResultVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.RequestDerivedVoice
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlVoiceMessageCommand SourceCommand                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           DerivedScenarioVoiceExist      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::RequestDerivedVoice(const struct FBtlVoiceMessageCommand& SourceCommand, bool* DerivedScenarioVoiceExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.RequestDerivedVoice");

	ABP_BtlVoiceManager_C_RequestDerivedVoice_Params params;
	params.SourceCommand = SourceCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DerivedScenarioVoiceExist != nullptr)
		*DerivedScenarioVoiceExist = params.DerivedScenarioVoiceExist;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoadTimePatternTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::OnLoadTimePatternTable(class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoadTimePatternTable");

	ABP_BtlVoiceManager_C_OnLoadTimePatternTable_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsRewardItemInResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Rare                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::IsRewardItemInResult(bool Rare, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsRewardItemInResult");

	ABP_BtlVoiceManager_C_IsRewardItemInResult_Params params;
	params.Rare = Rare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetValidationHandle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EBtlVoiceState                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlVoiceCondition             Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UBP_VoiceValidationHandle_C*> Handles                        (Parm, OutParm, ZeroConstructor)

void ABP_BtlVoiceManager_C::GetValidationHandle(EBtlVoiceState State, EBtlVoiceCondition Condition, TArray<class UBP_VoiceValidationHandle_C*>* Handles)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetValidationHandle");

	ABP_BtlVoiceManager_C_GetValidationHandle_Params params;
	params.State = State;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handles != nullptr)
		*Handles = params.Handles;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetEasyFightConditionTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ConditionTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::GetEasyFightConditionTime(float* ConditionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetEasyFightConditionTime");

	ABP_BtlVoiceManager_C_GetEasyFightConditionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConditionTime != nullptr)
		*ConditionTime = params.ConditionTime;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetHardFightConditionTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ConditionTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::GetHardFightConditionTime(float* ConditionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetHardFightConditionTime");

	ABP_BtlVoiceManager_C_GetHardFightConditionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConditionTime != nullptr)
		*ConditionTime = params.ConditionTime;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsEasyFight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::IsEasyFight(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsEasyFight");

	ABP_BtlVoiceManager_C_IsEasyFight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsHardFight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::IsHardFight(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsHardFight");

	ABP_BtlVoiceManager_C_IsHardFight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.SetWinTalkRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::SetWinTalkRequest(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.SetWinTalkRequest");

	ABP_BtlVoiceManager_C_SetWinTalkRequest_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetValidationHandleByState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EBtlVoiceState                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UBP_VoiceValidationHandle_C*> Handles                        (Parm, OutParm, ZeroConstructor)

void ABP_BtlVoiceManager_C::GetValidationHandleByState(EBtlVoiceState State, TArray<class UBP_VoiceValidationHandle_C*>* Handles)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetValidationHandleByState");

	ABP_BtlVoiceManager_C_GetValidationHandleByState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handles != nullptr)
		*Handles = params.Handles;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetValidationHandleByCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EBtlVoiceCondition             Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UBP_VoiceValidationHandle_C*> Handles                        (Parm, OutParm, ZeroConstructor)

void ABP_BtlVoiceManager_C::GetValidationHandleByCondition(EBtlVoiceCondition Condition, TArray<class UBP_VoiceValidationHandle_C*>* Handles)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetValidationHandleByCondition");

	ABP_BtlVoiceManager_C_GetValidationHandleByCondition_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handles != nullptr)
		*Handles = params.Handles;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.VoiceCheck_Win
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::VoiceCheck_Win(const struct FString& Label, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.VoiceCheck_Win");

	ABP_BtlVoiceManager_C_VoiceCheck_Win_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetWinRank
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::GetWinRank(int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetWinRank");

	ABP_BtlVoiceManager_C_GetWinRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsLevelUpUnit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EPCOrder                       TargetPcOrder                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::IsLevelUpUnit(EPCOrder TargetPcOrder, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsLevelUpUnit");

	ABP_BtlVoiceManager_C_IsLevelUpUnit_Params params;
	params.TargetPcOrder = TargetPcOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.@MakeVoiceLotteryEtc
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBtlVoiceLottery> VoiceLottery                   (Parm, OutParm, ZeroConstructor)

void ABP_BtlVoiceManager_C::@MakeVoiceLotteryEtc(TArray<struct FBtlVoiceLottery>* VoiceLottery)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.@MakeVoiceLotteryEtc");

	ABP_BtlVoiceManager_C_@MakeVoiceLotteryEtc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VoiceLottery != nullptr)
		*VoiceLottery = params.VoiceLottery;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.UserConstructionScript");

	ABP_BtlVoiceManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsRelationshipCheck
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBtlVoiceData           VoiceData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlVoiceManager_C::IsRelationshipCheck(const struct FBtlVoiceData& VoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsRelationshipCheck");

	ABP_BtlVoiceManager_C_IsRelationshipCheck_Params params;
	params.VoiceData = VoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.@GetHpRate
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bVanguardOnly                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HpRate                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::@GetHpRate(bool bVanguardOnly, float* HpRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.@GetHpRate");

	ABP_BtlVoiceManager_C_@GetHpRate_Params params;
	params.bVanguardOnly = bVanguardOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HpRate != nullptr)
		*HpRate = params.HpRate;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsCheckVoiceTargetType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       Character                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 VoiceLabel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EBtlVoiceTarget                VoiceTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       VoiceSpeaker                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlVoiceManager_C::IsCheckVoiceTargetType(class ABtlCharacterBase* Character, const struct FString& VoiceLabel, EBtlVoiceTarget VoiceTarget, class ABtlCharacterBase* VoiceSpeaker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsCheckVoiceTargetType");

	ABP_BtlVoiceManager_C_IsCheckVoiceTargetType_Params params;
	params.Character = Character;
	params.VoiceLabel = VoiceLabel;
	params.VoiceTarget = VoiceTarget;
	params.VoiceSpeaker = VoiceSpeaker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.VoiceEvent_OnBeginBattle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::VoiceEvent_OnBeginBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.VoiceEvent_OnBeginBattle");

	ABP_BtlVoiceManager_C_VoiceEvent_OnBeginBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.VoiceCheck_DamageRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABtlCharacterBase*       PartyMember                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 VoiceLabel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FBtlVoiceInfoData       VoiceInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBtlVoiceConditionData  VoiceCondition                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::VoiceCheck_DamageRate(class ABtlCharacterBase* PartyMember, const struct FString& VoiceLabel, const struct FBtlVoiceInfoData& VoiceInfo, const struct FBtlVoiceConditionData& VoiceCondition, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.VoiceCheck_DamageRate");

	ABP_BtlVoiceManager_C_VoiceCheck_DamageRate_Params params;
	params.PartyMember = PartyMember;
	params.VoiceLabel = VoiceLabel;
	params.VoiceInfo = VoiceInfo;
	params.VoiceCondition = VoiceCondition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoaded_492A336D42BB9FF86232E4AD65B6DE01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::OnLoaded_492A336D42BB9FF86232E4AD65B6DE01(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoaded_492A336D42BB9FF86232E4AD65B6DE01");

	ABP_BtlVoiceManager_C_OnLoaded_492A336D42BB9FF86232E4AD65B6DE01_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoaded_2E86D3664C3EA014B57FB3BB939A332F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::OnLoaded_2E86D3664C3EA014B57FB3BB939A332F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoaded_2E86D3664C3EA014B57FB3BB939A332F");

	ABP_BtlVoiceManager_C_OnLoaded_2E86D3664C3EA014B57FB3BB939A332F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ReceiveTick");

	ABP_BtlVoiceManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlVoiceManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature");

	ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlVoiceManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlSimpleSignature__DelegateSignature");

	ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlVoiceManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature");

	ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlVoiceManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature");

	ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlVoiceManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSimpleSignature__DelegateSignature");

	ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.StoreVoiceValidationHandle
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::StoreVoiceValidationHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.StoreVoiceValidationHandle");

	ABP_BtlVoiceManager_C_StoreVoiceValidationHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlVoiceManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlSimpleSignature__DelegateSignature");

	ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLosed
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::OnLosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLosed");

	ABP_BtlVoiceManager_C_OnLosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.InitializeVoiceRecorder
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::InitializeVoiceRecorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.InitializeVoiceRecorder");

	ABP_BtlVoiceManager_C_InitializeVoiceRecorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDecideWinSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlVoiceManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDecideWinSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDecideWinSignature__DelegateSignature");

	ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDecideWinSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnResultShortChat
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::OnResultShortChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnResultShortChat");

	ABP_BtlVoiceManager_C_OnResultShortChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ClearVoiceValidationHandle
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::ClearVoiceValidationHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ClearVoiceValidationHandle");

	ABP_BtlVoiceManager_C_ClearVoiceValidationHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoadVoiceHandleRecord
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_VoiceConditionRecord Record                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BtlVoiceManager_C::OnLoadVoiceHandleRecord(const struct FSTR_VoiceConditionRecord& Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoadVoiceHandleRecord");

	ABP_BtlVoiceManager_C_OnLoadVoiceHandleRecord_Params params;
	params.Record = Record;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.InitializeVoiceFlags
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::InitializeVoiceFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.InitializeVoiceFlags");

	ABP_BtlVoiceManager_C_InitializeVoiceFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndResult
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::OnEndResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndResult");

	ABP_BtlVoiceManager_C_OnEndResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlAttackArtsSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlVoiceManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlAttackArtsSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlAttackArtsSignature__DelegateSignature");

	ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlAttackArtsSignature__DelegateSignature_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.InitializeBattleRankFlags
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::InitializeBattleRankFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.InitializeBattleRankFlags");

	ABP_BtlVoiceManager_C_InitializeBattleRankFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnGoBackTitle
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::OnGoBackTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnGoBackTitle");

	ABP_BtlVoiceManager_C_OnGoBackTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.RegisterEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.RegisterEvent");

	ABP_BtlVoiceManager_C_RegisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ReceiveEndPlay");

	ABP_BtlVoiceManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.UnregisterEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::UnregisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.UnregisterEvent");

	ABP_BtlVoiceManager_C_UnregisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.StopVoice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InterpTimeSec                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::StopVoice(float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.StopVoice");

	ABP_BtlVoiceManager_C_StopVoice_Params params;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.StopVoiceByUnit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::StopVoiceByUnit(class ABtlCharacterBase* Unit, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.StopVoiceByUnit");

	ABP_BtlVoiceManager_C_StopVoiceByUnit_Params params;
	params.Unit = Unit;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndLoad
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlVoiceManager_C::OnEndLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndLoad");

	ABP_BtlVoiceManager_C_OnEndLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.EndLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseSaveResult               iResult                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::EndLoad(EAriseSaveResult iResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.EndLoad");

	ABP_BtlVoiceManager_C_EndLoad_Params params;
	params.iResult = iResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlVoiceManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature");

	ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndVoiceMessageCommand
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBtlVoiceMessageCommand Command                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::OnEndVoiceMessageCommand(const struct FBtlVoiceMessageCommand& Command, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndVoiceMessageCommand");

	ABP_BtlVoiceManager_C_OnEndVoiceMessageCommand_Params params;
	params.Command = Command;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ExecuteUbergraph_BP_BtlVoiceManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlVoiceManager_C::ExecuteUbergraph_BP_BtlVoiceManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ExecuteUbergraph_BP_BtlVoiceManager");

	ABP_BtlVoiceManager_C_ExecuteUbergraph_BP_BtlVoiceManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
