
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

// Function BP_FishingSaveData.BP_FishingSaveData_C.CheckEXNewGameInheritFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseScriptSaveDataChunk* ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::CheckEXNewGameInheritFlag(class UAriseScriptSaveDataChunk* ChunkData, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.CheckEXNewGameInheritFlag");

	UBP_FishingSaveData_C_CheckEXNewGameInheritFlag_Params params;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishTypeNum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Nums                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::GetFishTypeNum(int* Nums)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishTypeNum");

	UBP_FishingSaveData_C_GetFishTypeNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Nums != nullptr)
		*Nums = params.Nums;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.SetFishingItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::SetFishingItem(int ID, int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.SetFishingItem");

	UBP_FishingSaveData_C_SetFishingItem_Params params;
	params.ID = ID;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishingItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::GetFishingItem(int ID, int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishingItem");

	UBP_FishingSaveData_C_GetFishingItem_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.GetCatchedFishCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            outCount                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::GetCatchedFishCount(int InIndex, int* outCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.GetCatchedFishCount");

	UBP_FishingSaveData_C_GetCatchedFishCount_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outCount != nullptr)
		*outCount = params.outCount;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishRewardGetFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlag                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::GetFishRewardGetFlag(int ID, bool* bFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishRewardGetFlag");

	UBP_FishingSaveData_C_GetFishRewardGetFlag_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFlag != nullptr)
		*bFlag = params.bFlag;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.SetFishRewardGetFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlag                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::SetFishRewardGetFlag(int ID, bool bFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.SetFishRewardGetFlag");

	UBP_FishingSaveData_C_SetFishRewardGetFlag_Params params;
	params.ID = ID;
	params.bFlag = bFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.GetBigRecordFishTypeCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            outTypeCount                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            EpicTypeCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bLegendCatch                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::GetBigRecordFishTypeCount(int* outTypeCount, int* EpicTypeCount, bool* bLegendCatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.GetBigRecordFishTypeCount");

	UBP_FishingSaveData_C_GetBigRecordFishTypeCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outTypeCount != nullptr)
		*outTypeCount = params.outTypeCount;
	if (EpicTypeCount != nullptr)
		*EpicTypeCount = params.EpicTypeCount;
	if (bLegendCatch != nullptr)
		*bLegendCatch = params.bLegendCatch;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.GetCatchedFishTypeCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            outTypeCount                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::GetCatchedFishTypeCount(int* outTypeCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.GetCatchedFishTypeCount");

	UBP_FishingSaveData_C_GetCatchedFishTypeCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outTypeCount != nullptr)
		*outTypeCount = params.outTypeCount;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishSizeChunk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAriseScriptSaveDataChunk_INT32* Chunk                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::GetFishSizeChunk(class UAriseScriptSaveDataChunk_INT32** Chunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishSizeChunk");

	UBP_FishingSaveData_C_GetFishSizeChunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Chunk != nullptr)
		*Chunk = params.Chunk;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishCountChunk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAriseScriptSaveDataChunk_INT32* Chunk                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::GetFishCountChunk(class UAriseScriptSaveDataChunk_INT32** Chunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.GetFishCountChunk");

	UBP_FishingSaveData_C_GetFishCountChunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Chunk != nullptr)
		*Chunk = params.Chunk;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.SaveFishingRecord
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FishId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SizeRecordUpdate               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::SaveFishingRecord(int FishId, int Size, bool* SizeRecordUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.SaveFishingRecord");

	UBP_FishingSaveData_C_SaveFishingRecord_Params params;
	params.FishId = FishId;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SizeRecordUpdate != nullptr)
		*SizeRecordUpdate = params.SizeRecordUpdate;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.RegisterParameter
// (Event, Public, BlueprintEvent)

void UBP_FishingSaveData_C::RegisterParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.RegisterParameter");

	UBP_FishingSaveData_C_RegisterParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.OnNewGame
// (BlueprintCallable, BlueprintEvent)

void UBP_FishingSaveData_C::OnNewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.OnNewGame");

	UBP_FishingSaveData_C_OnNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingSaveData.BP_FishingSaveData_C.ExecuteUbergraph_BP_FishingSaveData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FishingSaveData_C::ExecuteUbergraph_BP_FishingSaveData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingSaveData.BP_FishingSaveData_C.ExecuteUbergraph_BP_FishingSaveData");

	UBP_FishingSaveData_C_ExecuteUbergraph_BP_FishingSaveData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
