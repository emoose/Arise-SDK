
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

// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.SetCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_QuestEnemyCountSaveData_C::SetCount(const struct FString& Label, int Count, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.SetCount");

	UBP_QuestEnemyCountSaveData_C_SetCount_Params params;
	params.Label = Label;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.GetChunkCount
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_QuestEnemyCountSaveData_C::GetChunkCount(const struct FString& ChunkName, const struct FString& Label, int* Count, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.GetChunkCount");

	UBP_QuestEnemyCountSaveData_C_GetChunkCount_Params params;
	params.ChunkName = ChunkName;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.SetChunkCount
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_QuestEnemyCountSaveData_C::SetChunkCount(const struct FString& ChunkName, const struct FString& Label, int Count, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.SetChunkCount");

	UBP_QuestEnemyCountSaveData_C_SetChunkCount_Params params;
	params.ChunkName = ChunkName;
	params.Label = Label;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.GetCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_QuestEnemyCountSaveData_C::GetCount(const struct FString& Label, int* Count, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.GetCount");

	UBP_QuestEnemyCountSaveData_C_GetCount_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.RegisterParameter
// (Event, Public, BlueprintEvent)

void UBP_QuestEnemyCountSaveData_C::RegisterParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.RegisterParameter");

	UBP_QuestEnemyCountSaveData_C_RegisterParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.ExecuteUbergraph_BP_QuestEnemyCountSaveData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QuestEnemyCountSaveData_C::ExecuteUbergraph_BP_QuestEnemyCountSaveData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestEnemyCountSaveData.BP_QuestEnemyCountSaveData_C.ExecuteUbergraph_BP_QuestEnemyCountSaveData");

	UBP_QuestEnemyCountSaveData_C_ExecuteUbergraph_BP_QuestEnemyCountSaveData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
