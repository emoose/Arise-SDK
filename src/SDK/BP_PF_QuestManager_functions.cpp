
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

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetIsArrivedItemCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Arrived                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::GetIsArrivedItemCounter(const struct FQuestTargetCounterData& Data, bool* Arrived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetIsArrivedItemCounter");

	ABP_PF_QuestManager_C_GetIsArrivedItemCounter_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arrived != nullptr)
		*Arrived = params.Arrived;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetIsArrivedEnemyCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Arrived                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::GetIsArrivedEnemyCounter(const struct FQuestTargetCounterData& Data, bool* Arrived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetIsArrivedEnemyCounter");

	ABP_PF_QuestManager_C_GetIsArrivedEnemyCounter_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arrived != nullptr)
		*Arrived = params.Arrived;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CallOnQuestUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::CallOnQuestUpdate(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CallOnQuestUpdate");

	ABP_PF_QuestManager_C_CallOnQuestUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.UnbindOnQuestUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::UnbindOnQuestUpdate(const struct FAriseSimpleEventData& Event, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.UnbindOnQuestUpdate");

	ABP_PF_QuestManager_C_UnbindOnQuestUpdate_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.BindOnQuestUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::BindOnQuestUpdate(const struct FAriseSimpleEventData& Event, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.BindOnQuestUpdate");

	ABP_PF_QuestManager_C_BindOnQuestUpdate_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetCurrentSubQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         RetSubQuestIDs                 (Parm, OutParm, ZeroConstructor)
// TArray<int>                    retSubStepIndices              (Parm, OutParm, ZeroConstructor)

void ABP_PF_QuestManager_C::GetCurrentSubQuest(bool* IsFound, TArray<struct FString>* RetSubQuestIDs, TArray<int>* retSubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetCurrentSubQuest");

	ABP_PF_QuestManager_C_GetCurrentSubQuest_Params params;

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


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetCurrentMainQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 retMainQuestID                 (Parm, OutParm, ZeroConstructor)
// int                            retMainStepIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::GetCurrentMainQuest(bool* IsFound, struct FString* retMainQuestID, int* retMainStepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetCurrentMainQuest");

	ABP_PF_QuestManager_C_GetCurrentMainQuest_Params params;

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


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.IsDuringShowQuestEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::IsDuringShowQuestEffects(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.IsDuringShowQuestEffects");

	ABP_PF_QuestManager_C_IsDuringShowQuestEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.FlushTargetCounterScriptPlayCache
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::FlushTargetCounterScriptPlayCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.FlushTargetCounterScriptPlayCache");

	ABP_PF_QuestManager_C_FlushTargetCounterScriptPlayCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckTargetCounterScriptPlay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData CounterData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  NewPlayScriptActor             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::CheckTargetCounterScriptPlay(const struct FQuestTargetCounterData& CounterData, class AActor** NewPlayScriptActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckTargetCounterScriptPlay");

	ABP_PF_QuestManager_C_CheckTargetCounterScriptPlay_Params params;
	params.CounterData = CounterData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPlayScriptActor != nullptr)
		*NewPlayScriptActor = params.NewPlayScriptActor;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.SetBattleByMapLink
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::SetBattleByMapLink(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.SetBattleByMapLink");

	ABP_PF_QuestManager_C_SetBattleByMapLink_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckEnemyScriptContinue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBtlEncountGroupParam> EncountGroup                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PF_QuestManager_C::CheckEnemyScriptContinue(TArray<struct FBtlEncountGroupParam>* EncountGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckEnemyScriptContinue");

	ABP_PF_QuestManager_C_CheckEnemyScriptContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EncountGroup != nullptr)
		*EncountGroup = params.EncountGroup;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleKPIVisit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBtlEncountGroupParam> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PF_QuestManager_C::OnBattleKPIVisit(TArray<struct FBtlEncountGroupParam>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleKPIVisit");

	ABP_PF_QuestManager_C_OnBattleKPIVisit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.KPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData CounterData                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAriseKpiExDungeonData         InDataType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::KPI(const struct FQuestTargetCounterData& CounterData, EAriseKpiExDungeonData InDataType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.KPI");

	ABP_PF_QuestManager_C_KPI_Params params;
	params.CounterData = CounterData;
	params.InDataType = InDataType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.NotifyEnemyCounter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EnemyID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            DefeatNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DefeatMax                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::NotifyEnemyCounter(const struct FString& EnemyID, int DefeatNum, int DefeatMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.NotifyEnemyCounter");

	ABP_PF_QuestManager_C_NotifyEnemyCounter_Params params;
	params.EnemyID = EnemyID;
	params.DefeatNum = DefeatNum;
	params.DefeatMax = DefeatMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.FlushQuestUpdateQueue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_QuestManager_C::FlushQuestUpdateQueue(const struct FString& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.FlushQuestUpdateQueue");

	ABP_PF_QuestManager_C_FlushQuestUpdateQueue_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.AddQuestUpdateQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            QuestStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::AddQuestUpdateQueue(const struct FString& QuestID, int QuestStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.AddQuestUpdateQueue");

	ABP_PF_QuestManager_C_AddQuestUpdateQueue_Params params;
	params.QuestID = QuestID;
	params.QuestStep = QuestStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.NotifyItemCounter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::NotifyItemCounter(int ItemID, int NewNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.NotifyItemCounter");

	ABP_PF_QuestManager_C_NotifyItemCounter_Params params;
	params.ItemID = ItemID;
	params.NewNum = NewNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveOnCheckLineup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PF_QuestManager_C::ReceiveOnCheckLineup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveOnCheckLineup");

	ABP_PF_QuestManager_C_ReceiveOnCheckLineup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.IsArrivedItemCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData CounterData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bArrived                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::IsArrivedItemCounter(const struct FQuestTargetCounterData& CounterData, bool* bArrived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.IsArrivedItemCounter");

	ABP_PF_QuestManager_C_IsArrivedItemCounter_Params params;
	params.CounterData = CounterData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bArrived != nullptr)
		*bArrived = params.bArrived;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.IsArrivedEnemyCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData CounterData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bArrived                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::IsArrivedEnemyCounter(const struct FQuestTargetCounterData& CounterData, bool* bArrived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.IsArrivedEnemyCounter");

	ABP_PF_QuestManager_C_IsArrivedEnemyCounter_Params params;
	params.CounterData = CounterData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bArrived != nullptr)
		*bArrived = params.bArrived;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetItemCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData CounterData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::GetItemCounter(const struct FQuestTargetCounterData& CounterData, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetItemCounter");

	ABP_PF_QuestManager_C_GetItemCounter_Params params;
	params.CounterData = CounterData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetEnemyCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData CounterData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::GetEnemyCounter(const struct FQuestTargetCounterData& CounterData, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetEnemyCounter");

	ABP_PF_QuestManager_C_GetEnemyCounter_Params params;
	params.CounterData = CounterData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckTargetCounterArrivedOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData CounterData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PF_QuestManager_C::CheckTargetCounterArrivedOptions(const struct FQuestTargetCounterData& CounterData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckTargetCounterArrivedOptions");

	ABP_PF_QuestManager_C_CheckTargetCounterArrivedOptions_Params params;
	params.CounterData = CounterData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.DoBattleEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::DoBattleEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.DoBattleEvent");

	ABP_PF_QuestManager_C_DoBattleEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.DoItemGetEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::DoItemGetEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.DoItemGetEvent");

	ABP_PF_QuestManager_C_DoItemGetEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestCounterCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::OnQuestCounterCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestCounterCheck");

	ABP_PF_QuestManager_C_OnQuestCounterCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ApplyItemCounter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData CounterData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bArrived                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::ApplyItemCounter(const struct FQuestTargetCounterData& CounterData, bool* bArrived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.ApplyItemCounter");

	ABP_PF_QuestManager_C_ApplyItemCounter_Params params;
	params.CounterData = CounterData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bArrived != nullptr)
		*bArrived = params.bArrived;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckItemCounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::CheckItemCounter(int ItemID, int NewNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckItemCounter");

	ABP_PF_QuestManager_C_CheckItemCounter_Params params;
	params.ItemID = ItemID;
	params.NewNum = NewNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ApplyEnemyCounter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData CounterData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bArrived                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::ApplyEnemyCounter(const struct FQuestTargetCounterData& CounterData, bool* bArrived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.ApplyEnemyCounter");

	ABP_PF_QuestManager_C_ApplyEnemyCounter_Params params;
	params.CounterData = CounterData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bArrived != nullptr)
		*bArrived = params.bArrived;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckTargetCounter
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestTargetCounterData QuestTargetCounterData         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bArrived                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::CheckTargetCounter(const struct FQuestTargetCounterData& QuestTargetCounterData, const struct FScriptDelegate& Delegate, bool* bArrived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckTargetCounter");

	ABP_PF_QuestManager_C_CheckTargetCounter_Params params;
	params.QuestTargetCounterData = QuestTargetCounterData;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bArrived != nullptr)
		*bArrived = params.bArrived;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckEnemyCounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EncountGroup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_QuestManager_C::CheckEnemyCounter(const struct FString& EncountGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckEnemyCounter");

	ABP_PF_QuestManager_C_CheckEnemyCounter_Params params;
	params.EncountGroup = EncountGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::OnBattleStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleStart");

	ABP_PF_QuestManager_C_OnBattleStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   EncountGroupName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::OnBattleLoad(const struct FString& MapName, const struct FName& EncountGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleLoad");

	ABP_PF_QuestManager_C_OnBattleLoad_Params params;
	params.MapName = MapName;
	params.EncountGroupName = EncountGroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleFinish
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::OnBattleFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleFinish");

	ABP_PF_QuestManager_C_OnBattleFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetTimeToMinutes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TimeDay                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TimeHour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TimeMinute                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Minutes                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::GetTimeToMinutes(int CurrentTime, int TimeDay, int TimeHour, int TimeMinute, int* Minutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetTimeToMinutes");

	ABP_PF_QuestManager_C_GetTimeToMinutes_Params params;
	params.CurrentTime = CurrentTime;
	params.TimeDay = TimeDay;
	params.TimeHour = TimeHour;
	params.TimeMinute = TimeMinute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Minutes != nullptr)
		*Minutes = params.Minutes;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ForceQuestLineup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestLabelID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_QuestManager_C::ForceQuestLineup(const struct FString& QuestLabelID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.ForceQuestLineup");

	ABP_PF_QuestManager_C_ForceQuestLineup_Params params;
	params.QuestLabelID = QuestLabelID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupByDatabase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestLineupData        QuestLineupData                (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PF_QuestManager_C::QuestLineupByDatabase(const struct FQuestLineupData& QuestLineupData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupByDatabase");

	ABP_PF_QuestManager_C_QuestLineupByDatabase_Params params;
	params.QuestLineupData = QuestLineupData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestLineupCheckByDatabase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::OnQuestLineupCheckByDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestLineupCheckByDatabase");

	ABP_PF_QuestManager_C_OnQuestLineupCheckByDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounterAndScenarioFlagAndTimeStamp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Chapter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ConditionScenarioFlags         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Timestamp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            elapsedDay                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            elapsedHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ElapsedMinute                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::QuestLineupFromCounterAndScenarioFlagAndTimeStamp(const struct FQuestID& QuestID, int Chapter, int Section, int Timestamp, int elapsedDay, int elapsedHour, int ElapsedMinute, TArray<struct FString>* ConditionScenarioFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounterAndScenarioFlagAndTimeStamp");

	ABP_PF_QuestManager_C_QuestLineupFromCounterAndScenarioFlagAndTimeStamp_Params params;
	params.QuestID = QuestID;
	params.Chapter = Chapter;
	params.Section = Section;
	params.Timestamp = Timestamp;
	params.elapsedDay = elapsedDay;
	params.elapsedHour = elapsedHour;
	params.ElapsedMinute = ElapsedMinute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConditionScenarioFlags != nullptr)
		*ConditionScenarioFlags = params.ConditionScenarioFlags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounterAndTimeStamp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Capter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Timestamp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            elapsedDay                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ElaspedHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ElapsedMinute                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::QuestLineupFromCounterAndTimeStamp(const struct FQuestID& QuestID, int Capter, int Section, int Timestamp, int elapsedDay, int ElaspedHour, int ElapsedMinute)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounterAndTimeStamp");

	ABP_PF_QuestManager_C_QuestLineupFromCounterAndTimeStamp_Params params;
	params.QuestID = QuestID;
	params.Capter = Capter;
	params.Section = Section;
	params.Timestamp = Timestamp;
	params.elapsedDay = elapsedDay;
	params.ElaspedHour = ElaspedHour;
	params.ElapsedMinute = ElapsedMinute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnInteractionCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::OnInteractionCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnInteractionCheck");

	ABP_PF_QuestManager_C_OnInteractionCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckScenarioFlags
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         Flags                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::CheckScenarioFlags(TArray<struct FString>* Flags, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckScenarioFlags");

	ABP_PF_QuestManager_C_CheckScenarioFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Flags != nullptr)
		*Flags = params.Flags;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckScenarioCounter
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Capter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::CheckScenarioCounter(int Capter, int Section, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckScenarioCounter");

	ABP_PF_QuestManager_C_CheckScenarioCounter_Params params;
	params.Capter = Capter;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounterAndScenarioFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Chapter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ConditionScenarioFlags         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PF_QuestManager_C::QuestLineupFromCounterAndScenarioFlag(const struct FQuestID& QuestID, int Chapter, int Section, TArray<struct FString>* ConditionScenarioFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounterAndScenarioFlag");

	ABP_PF_QuestManager_C_QuestLineupFromCounterAndScenarioFlag_Params params;
	params.QuestID = QuestID;
	params.Chapter = Chapter;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConditionScenarioFlags != nullptr)
		*ConditionScenarioFlags = params.ConditionScenarioFlags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Capter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::QuestLineupFromCounter(const struct FQuestID& QuestID, int Capter, int Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounter");

	ABP_PF_QuestManager_C_QuestLineupFromCounter_Params params;
	params.QuestID = QuestID;
	params.Capter = Capter;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestLineupCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::OnQuestLineupCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestLineupCheck");

	ABP_PF_QuestManager_C_OnQuestLineupCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnItemGetCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::OnItemGetCheck(int ItemID, int NewNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnItemGetCheck");

	ABP_PF_QuestManager_C_OnItemGetCheck_Params params;
	params.ItemID = ItemID;
	params.NewNum = NewNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleResultCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           EncountLabel                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PF_QuestManager_C::OnBattleResultCheck(TArray<struct FName>* EncountLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleResultCheck");

	ABP_PF_QuestManager_C_OnBattleResultCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EncountLabel != nullptr)
		*EncountLabel = params.EncountLabel;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.UserConstructionScript");

	ABP_PF_QuestManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0665_PLEASEWIZARD
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0665_PLEASEWIZARD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0665_PLEASEWIZARD");

	ABP_PF_QuestManager_C_CHECK_SQ_0665_PLEASEWIZARD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0680_GOMIHIROI
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0680_GOMIHIROI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0680_GOMIHIROI");

	ABP_PF_QuestManager_C_CHECK_SQ_0680_GOMIHIROI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0465_DAIDOKORO
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0465_DAIDOKORO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0465_DAIDOKORO");

	ABP_PF_QuestManager_C_CHECK_SQ_0465_DAIDOKORO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0260_IWABA
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0260_IWABA()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0260_IWABA");

	ABP_PF_QuestManager_C_CHECK_SQ_0260_IWABA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0080_MORESALES
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0080_MORESALES()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0080_MORESALES");

	ABP_PF_QuestManager_C_CHECK_SQ_0080_MORESALES_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0160_WARASIBE
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0160_WARASIBE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0160_WARASIBE");

	ABP_PF_QuestManager_C_CHECK_SQ_0160_WARASIBE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0355_REQUEST
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0355_REQUEST()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0355_REQUEST");

	ABP_PF_QuestManager_C_CHECK_SQ_0355_REQUEST_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0350_NEWLEADER
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0350_NEWLEADER()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0350_NEWLEADER");

	ABP_PF_QuestManager_C_CHECK_SQ_0350_NEWLEADER_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0360_PRIZESTART
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0360_PRIZESTART()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0360_PRIZESTART");

	ABP_PF_QuestManager_C_CHECK_SQ_0360_PRIZESTART_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Select Sub Quest Mark
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_QuestManager_C::Select_Sub_Quest_Mark(const struct FString& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.Select Sub Quest Mark");

	ABP_PF_QuestManager_C_Select_Sub_Quest_Mark_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ShowQuestClearEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bGetReward                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::ShowQuestClearEffects(const struct FQuestID& QuestID, bool bGetReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.ShowQuestClearEffects");

	ABP_PF_QuestManager_C_ShowQuestClearEffects_Params params;
	params.QuestID = QuestID;
	params.bGetReward = bGetReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ShowQuestStartEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSelectSubQuestMark            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::ShowQuestStartEffects(const struct FQuestID& QuestID, bool bSelectSubQuestMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.ShowQuestStartEffects");

	ABP_PF_QuestManager_C_ShowQuestStartEffects_Params params;
	params.QuestID = QuestID;
	params.bSelectSubQuestMark = bSelectSubQuestMark;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_QuestManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveBeginPlay");

	ABP_PF_QuestManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveTick");

	ABP_PF_QuestManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0030_NABESAGASI
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0030_NABESAGASI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0030_NABESAGASI");

	ABP_PF_QuestManager_C_CHECK_SQ_0030_NABESAGASI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnChangeScenarioCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::Event_OnChangeScenarioCounter(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnChangeScenarioCounter");

	ABP_PF_QuestManager_C_Event_OnChangeScenarioCounter_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnChageScenarioFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::Event_OnChageScenarioFlag(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnChageScenarioFlag");

	ABP_PF_QuestManager_C_Event_OnChageScenarioFlag_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0040_KANATOKO
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0040_KANATOKO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0040_KANATOKO");

	ABP_PF_QuestManager_C_CHECK_SQ_0040_KANATOKO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event Add Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::Event_Add_Item(int ItemID, int OldNum, int NewNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event Add Item");

	ABP_PF_QuestManager_C_Event_Add_Item_Params params;
	params.ItemID = ItemID;
	params.OldNum = OldNum;
	params.NewNum = NewNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveEndPlay");

	ABP_PF_QuestManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0060_FIELDWORK
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0060_FIELDWORK()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0060_FIELDWORK");

	ABP_PF_QuestManager_C_CHECK_SQ_0060_FIELDWORK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Event Field Wakeup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::On_Event_Field_Wakeup(unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Event Field Wakeup");

	ABP_PF_QuestManager_C_On_Event_Field_Wakeup_Params params;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Register Event Field Wakeup
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::Register_Event_Field_Wakeup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.Register Event Field Wakeup");

	ABP_PF_QuestManager_C_Register_Event_Field_Wakeup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnBattleFinalize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlResultInfo          ResultInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PF_QuestManager_C::Event_OnBattleFinalize(const struct FBtlResultInfo& ResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnBattleFinalize");

	ABP_PF_QuestManager_C_Event_OnBattleFinalize_Params params;
	params.ResultInfo = ResultInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Refresh Post FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ValidCheckObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPostMapJump                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::On_Refresh_Post_FadeIn(float FadeTime, class UObject* ValidCheckObject, bool bPostMapJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Refresh Post FadeIn");

	ABP_PF_QuestManager_C_On_Refresh_Post_FadeIn_Params params;
	params.FadeTime = FadeTime;
	params.ValidCheckObject = ValidCheckObject;
	params.bPostMapJump = bPostMapJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0205_AFTER
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::CHECK_SQ_0205_AFTER()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0205_AFTER");

	ABP_PF_QuestManager_C_CHECK_SQ_0205_AFTER_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.EventDoCollectLocators
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::EventDoCollectLocators()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.EventDoCollectLocators");

	ABP_PF_QuestManager_C_EventDoCollectLocators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ManagedScriptKillPostFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ValidCheckObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPostMapJump                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::ManagedScriptKillPostFadeIn(float FadeTime, class UObject* ValidCheckObject, bool bPostMapJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.ManagedScriptKillPostFadeIn");

	ABP_PF_QuestManager_C_ManagedScriptKillPostFadeIn_Params params;
	params.FadeTime = FadeTime;
	params.ValidCheckObject = ValidCheckObject;
	params.bPostMapJump = bPostMapJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   EncountGroupName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::QuestBattleLoad(const struct FString& MapName, const struct FName& EncountGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleLoad");

	ABP_PF_QuestManager_C_QuestBattleLoad_Params params;
	params.MapName = MapName;
	params.EncountGroupName = EncountGroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::QuestBattleStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleStart");

	ABP_PF_QuestManager_C_QuestBattleStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleResultCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EncountGroupName               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::QuestBattleResultCheck(const struct FName& EncountGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleResultCheck");

	ABP_PF_QuestManager_C_QuestBattleResultCheck_Params params;
	params.EncountGroupName = EncountGroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleStartByMapLink
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::QuestBattleStartByMapLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleStartByMapLink");

	ABP_PF_QuestManager_C_QuestBattleStartByMapLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.RequestAddQuestUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestID                QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::RequestAddQuestUpdate(const struct FQuestID& QuestID, int Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.RequestAddQuestUpdate");

	ABP_PF_QuestManager_C_RequestAddQuestUpdate_Params params;
	params.QuestID = QuestID;
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.RequestForceQuestLineup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestLabelID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_QuestManager_C::RequestForceQuestLineup(const struct FString& QuestLabelID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.RequestForceQuestLineup");

	ABP_PF_QuestManager_C_RequestForceQuestLineup_Params params;
	params.QuestLabelID = QuestLabelID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Do Post Map Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_QuestManager_C::Do_Post_Map_Change(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.Do Post Map Change");

	ABP_PF_QuestManager_C_Do_Post_Map_Change_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleKPIVisit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EncountGroupLabel              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::QuestBattleKPIVisit(const struct FName& EncountGroupLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleKPIVisit");

	ABP_PF_QuestManager_C_QuestBattleKPIVisit_Params params;
	params.EncountGroupLabel = EncountGroupLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Auto Save Execute
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::On_Auto_Save_Execute()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Auto Save Execute");

	ABP_PF_QuestManager_C_On_Auto_Save_Execute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnChangeDisplayScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::Event_OnChangeDisplayScene(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnChangeDisplayScene");

	ABP_PF_QuestManager_C_Event_OnChangeDisplayScene_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Auto Save Cancel
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::On_Auto_Save_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Auto Save Cancel");

	ABP_PF_QuestManager_C_On_Auto_Save_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ExecuteUbergraph_BP_PF_QuestManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_QuestManager_C::ExecuteUbergraph_BP_PF_QuestManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.ExecuteUbergraph_BP_PF_QuestManager");

	ABP_PF_QuestManager_C_ExecuteUbergraph_BP_PF_QuestManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PF_QuestManager_C::OnQuestUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestUpdate__DelegateSignature");

	ABP_PF_QuestManager_C_OnQuestUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
