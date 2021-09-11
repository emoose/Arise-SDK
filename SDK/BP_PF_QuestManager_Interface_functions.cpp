
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

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleKPIVisit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EncountGroupLabel              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::QuestBattleKPIVisit(const struct FName& EncountGroupLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleKPIVisit");

	UBP_PF_QuestManager_Interface_C_QuestBattleKPIVisit_Params params;
	params.EncountGroupLabel = EncountGroupLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.RequestForceQuestLineup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestLabelID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_PF_QuestManager_Interface_C::RequestForceQuestLineup(const struct FString& QuestLabelID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.RequestForceQuestLineup");

	UBP_PF_QuestManager_Interface_C_RequestForceQuestLineup_Params params;
	params.QuestLabelID = QuestLabelID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetIsArrivedItemCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Arrived                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::GetIsArrivedItemCounter(const struct FQuestTargetCounterData& Data, bool* Arrived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetIsArrivedItemCounter");

	UBP_PF_QuestManager_Interface_C_GetIsArrivedItemCounter_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arrived != nullptr)
		*Arrived = params.Arrived;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetIsArrivedEnemyCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Arrived                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::GetIsArrivedEnemyCounter(const struct FQuestTargetCounterData& Data, bool* Arrived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetIsArrivedEnemyCounter");

	UBP_PF_QuestManager_Interface_C_GetIsArrivedEnemyCounter_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arrived != nullptr)
		*Arrived = params.Arrived;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.RequestAddQuestUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::RequestAddQuestUpdate(const struct FQuestID& QuestID, int Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.RequestAddQuestUpdate");

	UBP_PF_QuestManager_Interface_C_RequestAddQuestUpdate_Params params;
	params.QuestID = QuestID;
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleStartByMapLink
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PF_QuestManager_Interface_C::QuestBattleStartByMapLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleStartByMapLink");

	UBP_PF_QuestManager_Interface_C_QuestBattleStartByMapLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.CallOnQuestUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::CallOnQuestUpdate(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.CallOnQuestUpdate");

	UBP_PF_QuestManager_Interface_C_CallOnQuestUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.UnbindOnQuestUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::UnbindOnQuestUpdate(const struct FAriseSimpleEventData& Event, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.UnbindOnQuestUpdate");

	UBP_PF_QuestManager_Interface_C_UnbindOnQuestUpdate_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.BindOnQuestUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::BindOnQuestUpdate(const struct FAriseSimpleEventData& Event, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.BindOnQuestUpdate");

	UBP_PF_QuestManager_Interface_C_BindOnQuestUpdate_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetCurrentSubQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         RetSubQuestIDs                 (Parm, OutParm, ZeroConstructor)
// TArray<int>                    retSubStepIndices              (Parm, OutParm, ZeroConstructor)

void UBP_PF_QuestManager_Interface_C::GetCurrentSubQuest(bool* IsFound, TArray<struct FString>* RetSubQuestIDs, TArray<int>* retSubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetCurrentSubQuest");

	UBP_PF_QuestManager_Interface_C_GetCurrentSubQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFound != nullptr)
		*IsFound = params.IsFound;
	if (RetSubQuestIDs != nullptr)
		*RetSubQuestIDs = params.RetSubQuestIDs;
	if (retSubStepIndices != nullptr)
		*retSubStepIndices = params.retSubStepIndices;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetCurrentMainQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 retMainQuestID                 (Parm, OutParm, ZeroConstructor)
// int                            retMainStepIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::GetCurrentMainQuest(bool* IsFound, struct FString* retMainQuestID, int* retMainStepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetCurrentMainQuest");

	UBP_PF_QuestManager_Interface_C_GetCurrentMainQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFound != nullptr)
		*IsFound = params.IsFound;
	if (retMainQuestID != nullptr)
		*retMainQuestID = params.retMainQuestID;
	if (retMainStepIndex != nullptr)
		*retMainStepIndex = params.retMainStepIndex;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   EncountGroupName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::QuestBattleLoad(const struct FString& MapName, const struct FName& EncountGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleLoad");

	UBP_PF_QuestManager_Interface_C_QuestBattleLoad_Params params;
	params.MapName = MapName;
	params.EncountGroupName = EncountGroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleResultCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EncountGroupName               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::QuestBattleResultCheck(const struct FName& EncountGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleResultCheck");

	UBP_PF_QuestManager_Interface_C_QuestBattleResultCheck_Params params;
	params.EncountGroupName = EncountGroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PF_QuestManager_Interface_C::QuestBattleStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleStart");

	UBP_PF_QuestManager_Interface_C_QuestBattleStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.ManagedScriptKillPostFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ValidCheckObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPostMapJump                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::ManagedScriptKillPostFadeIn(float FadeTime, class UObject* ValidCheckObject, bool bPostMapJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.ManagedScriptKillPostFadeIn");

	UBP_PF_QuestManager_Interface_C_ManagedScriptKillPostFadeIn_Params params;
	params.FadeTime = FadeTime;
	params.ValidCheckObject = ValidCheckObject;
	params.bPostMapJump = bPostMapJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.ShowQuestClearEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bGetReward                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::ShowQuestClearEffects(const struct FQuestID& QuestID, bool bGetReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.ShowQuestClearEffects");

	UBP_PF_QuestManager_Interface_C_ShowQuestClearEffects_Params params;
	params.QuestID = QuestID;
	params.bGetReward = bGetReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.ShowQuestStartEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSelectSubQuestMark            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::ShowQuestStartEffects(const struct FQuestID& QuestID, bool bSelectSubQuestMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.ShowQuestStartEffects");

	UBP_PF_QuestManager_Interface_C_ShowQuestStartEffects_Params params;
	params.QuestID = QuestID;
	params.bSelectSubQuestMark = bSelectSubQuestMark;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.IsDuringShowQuestEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_QuestManager_Interface_C::IsDuringShowQuestEffects(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.IsDuringShowQuestEffects");

	UBP_PF_QuestManager_Interface_C_IsDuringShowQuestEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
