
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

// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.ResetChunkTimeStamp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_RecoveryPointSaveData_C::ResetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.ResetChunkTimeStamp");

	UBP_RecoveryPointSaveData_C_ResetChunkTimeStamp_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.ResetRepopTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_RecoveryPointSaveData_C::ResetRepopTime(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.ResetRepopTime");

	UBP_RecoveryPointSaveData_C_ResetRepopTime_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.FillUnused
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_RecoveryPointSaveData_C::FillUnused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.FillUnused");

	UBP_RecoveryPointSaveData_C_FillUnused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.GetChunkTimeStamp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EPFSearchPointStatus           Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_RecoveryPointSaveData_C::GetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId, int* Time, EPFSearchPointStatus* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.GetChunkTimeStamp");

	UBP_RecoveryPointSaveData_C_GetChunkTimeStamp_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
	if (Status != nullptr)
		*Status = params.Status;
}


// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.SetChunkTimeStamp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RecoveryPointSaveData_C::SetChunkTimeStamp(const struct FString& ChunkName, const struct FString& actorId, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.SetChunkTimeStamp");

	UBP_RecoveryPointSaveData_C_SetChunkTimeStamp_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.GetUsed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bUsed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_RecoveryPointSaveData_C::GetUsed(const struct FString& actorId, bool* bUsed, int* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.GetUsed");

	UBP_RecoveryPointSaveData_C_GetUsed_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUsed != nullptr)
		*bUsed = params.bUsed;
	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.SetUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RecoveryPointSaveData_C::SetUse(const struct FString& actorId, int Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.SetUse");

	UBP_RecoveryPointSaveData_C_SetUse_Params params;
	params.actorId = actorId;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.RegisterParameter
// (Event, Public, BlueprintEvent)

void UBP_RecoveryPointSaveData_C::RegisterParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.RegisterParameter");

	UBP_RecoveryPointSaveData_C_RegisterParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.ExecuteUbergraph_BP_RecoveryPointSaveData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RecoveryPointSaveData_C::ExecuteUbergraph_BP_RecoveryPointSaveData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RecoveryPointSaveData.BP_RecoveryPointSaveData_C.ExecuteUbergraph_BP_RecoveryPointSaveData");

	UBP_RecoveryPointSaveData_C_ExecuteUbergraph_BP_RecoveryPointSaveData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
