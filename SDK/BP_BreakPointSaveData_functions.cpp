
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

// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetRepopUnlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_BreakPointSaveData_C::SetRepopUnlock(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetRepopUnlock");

	UBP_BreakPointSaveData_C_SetRepopUnlock_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetRepopLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_BreakPointSaveData_C::SetRepopLock(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetRepopLock");

	UBP_BreakPointSaveData_C_SetRepopLock_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.FillUnacquired
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BreakPointSaveData_C::FillUnacquired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.FillUnacquired");

	UBP_BreakPointSaveData_C_FillUnacquired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.ResetItemGetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_BreakPointSaveData_C::ResetItemGetTime(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.ResetItemGetTime");

	UBP_BreakPointSaveData_C_ResetItemGetTime_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.ResetChunkTimeStamp
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_BreakPointSaveData_C::ResetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.ResetChunkTimeStamp");

	UBP_BreakPointSaveData_C_ResetChunkTimeStamp_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetAcquireOnce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::SetAcquireOnce(const struct FString& actorId, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetAcquireOnce");

	UBP_BreakPointSaveData_C_SetAcquireOnce_Params params;
	params.actorId = actorId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.IsAcquireOnce
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::IsAcquireOnce(const struct FString& actorId, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.IsAcquireOnce");

	UBP_BreakPointSaveData_C_IsAcquireOnce_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.AcquiredMiningData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BreakPointSaveData_C::AcquiredMiningData(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.AcquiredMiningData");

	UBP_BreakPointSaveData_C_AcquiredMiningData_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetMiningData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FPFMiningPointItemID    ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAriseMiningPointSaveInfo MiningPointInfo                (Parm, OutParm)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::GetMiningData(const struct FString& actorId, const struct FPFMiningPointItemID& ItemID, struct FAriseMiningPointSaveInfo* MiningPointInfo, bool* bFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetMiningData");

	UBP_BreakPointSaveData_C_GetMiningData_Params params;
	params.actorId = actorId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MiningPointInfo != nullptr)
		*MiningPointInfo = params.MiningPointInfo;
	if (bFound != nullptr)
		*bFound = params.bFound;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetChunkDropTable
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    RandomSkillID                  (Parm, OutParm, ZeroConstructor)

void UBP_BreakPointSaveData_C::GetChunkDropTable(const struct FString& ChunkName, const struct FString& actorId, int* ItemID, TArray<int>* RandomSkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetChunkDropTable");

	UBP_BreakPointSaveData_C_GetChunkDropTable_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
	if (RandomSkillID != nullptr)
		*RandomSkillID = params.RandomSkillID;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetChunkDropTable
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    RandomSkillID                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_BreakPointSaveData_C::SetChunkDropTable(const struct FString& ChunkName, const struct FString& actorId, int ItemID, TArray<int>* RandomSkillID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetChunkDropTable");

	UBP_BreakPointSaveData_C_SetChunkDropTable_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomSkillID != nullptr)
		*RandomSkillID = params.RandomSkillID;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetItemGetStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bPop                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::GetItemGetStatus(const struct FString& actorId, bool* bPop, int* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetItemGetStatus");

	UBP_BreakPointSaveData_C_GetItemGetStatus_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPop != nullptr)
		*bPop = params.bPop;
	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.BindOnItemGetStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_BreakPointSaveData_C::BindOnItemGetStateChanged(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.BindOnItemGetStateChanged");

	UBP_BreakPointSaveData_C_BindOnItemGetStateChanged_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.BindOnDiscoverStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_BreakPointSaveData_C::BindOnDiscoverStateChanged(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.BindOnDiscoverStateChanged");

	UBP_BreakPointSaveData_C_BindOnDiscoverStateChanged_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetLevelActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         ActorID_Array                  (Parm, OutParm, ZeroConstructor)

void UBP_BreakPointSaveData_C::GetLevelActors(const struct FString& LevelName, TArray<struct FString>* ActorID_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetLevelActors");

	UBP_BreakPointSaveData_C_GetLevelActors_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorID_Array != nullptr)
		*ActorID_Array = params.ActorID_Array;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetDiscover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::SetDiscover(const struct FString& actorId, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetDiscover");

	UBP_BreakPointSaveData_C_SetDiscover_Params params;
	params.actorId = actorId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.FillDiscover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDiscover                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::FillDiscover(bool bDiscover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.FillDiscover");

	UBP_BreakPointSaveData_C_FillDiscover_Params params;
	params.bDiscover = bDiscover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetChunkTimeStamp
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EPFSearchPointStatus           Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::GetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId, int* RemainingTime, EPFSearchPointStatus* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.GetChunkTimeStamp");

	UBP_BreakPointSaveData_C_GetChunkTimeStamp_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
	if (Status != nullptr)
		*Status = params.Status;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetChunkTimeStamp
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::SetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetChunkTimeStamp");

	UBP_BreakPointSaveData_C_SetChunkTimeStamp_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetItemGetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::SetItemGetTime(const struct FString& actorId, int Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetItemGetTime");

	UBP_BreakPointSaveData_C_SetItemGetTime_Params params;
	params.actorId = actorId;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.IsChunkEnable
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::IsChunkEnable(const struct FString& ChunkName, const struct FString& actorId, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.IsChunkEnable");

	UBP_BreakPointSaveData_C_IsChunkEnable_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetChunkEnable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::SetChunkEnable(const struct FString& ChunkName, const struct FString& actorId, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.SetChunkEnable");

	UBP_BreakPointSaveData_C_SetChunkEnable_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.IsDiscover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::IsDiscover(const struct FString& actorId, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.IsDiscover");

	UBP_BreakPointSaveData_C_IsDiscover_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.Discover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_BreakPointSaveData_C::Discover(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.Discover");

	UBP_BreakPointSaveData_C_Discover_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.RegisterParameter
// (Event, Public, BlueprintEvent)

void UBP_BreakPointSaveData_C::RegisterParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.RegisterParameter");

	UBP_BreakPointSaveData_C_RegisterParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.ExecuteUbergraph_BP_BreakPointSaveData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BreakPointSaveData_C::ExecuteUbergraph_BP_BreakPointSaveData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.ExecuteUbergraph_BP_BreakPointSaveData");

	UBP_BreakPointSaveData_C_ExecuteUbergraph_BP_BreakPointSaveData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.OnItemGetStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_BreakPointSaveData_C::OnItemGetStateChanged__DelegateSignature(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.OnItemGetStateChanged__DelegateSignature");

	UBP_BreakPointSaveData_C_OnItemGetStateChanged__DelegateSignature_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.OnDiscoverStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_BreakPointSaveData_C::OnDiscoverStateChanged__DelegateSignature(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakPointSaveData.BP_BreakPointSaveData_C.OnDiscoverStateChanged__DelegateSignature");

	UBP_BreakPointSaveData_C_OnDiscoverStateChanged__DelegateSignature_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
