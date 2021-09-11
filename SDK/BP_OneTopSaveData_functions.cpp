
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

// Function BP_OneTopSaveData.BP_OneTopSaveData_C.SetAlreadyRead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFOneTopRecord         Record                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OneTopSaveData_C::SetAlreadyRead(const struct FPFOneTopRecord& Record, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTopSaveData.BP_OneTopSaveData_C.SetAlreadyRead");

	UBP_OneTopSaveData_C_SetAlreadyRead_Params params;
	params.Record = Record;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneTopSaveData.BP_OneTopSaveData_C.IsChunkEnable
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FPFOneTopRecord         Record                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_OneTopSaveData_C::IsChunkEnable(const struct FString& ChunkName, const struct FPFOneTopRecord& Record, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTopSaveData.BP_OneTopSaveData_C.IsChunkEnable");

	UBP_OneTopSaveData_C_IsChunkEnable_Params params;
	params.ChunkName = ChunkName;
	params.Record = Record;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_OneTopSaveData.BP_OneTopSaveData_C.SetChunkEnable
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FPFOneTopRecord         Record                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OneTopSaveData_C::SetChunkEnable(const struct FString& ChunkName, const struct FPFOneTopRecord& Record, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTopSaveData.BP_OneTopSaveData_C.SetChunkEnable");

	UBP_OneTopSaveData_C_SetChunkEnable_Params params;
	params.ChunkName = ChunkName;
	params.Record = Record;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneTopSaveData.BP_OneTopSaveData_C.IsAlreadyRead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFOneTopRecord         Record                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_OneTopSaveData_C::IsAlreadyRead(const struct FPFOneTopRecord& Record, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTopSaveData.BP_OneTopSaveData_C.IsAlreadyRead");

	UBP_OneTopSaveData_C_IsAlreadyRead_Params params;
	params.Record = Record;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_OneTopSaveData.BP_OneTopSaveData_C.AlreadyRead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFOneTopRecord         Record                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_OneTopSaveData_C::AlreadyRead(const struct FPFOneTopRecord& Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTopSaveData.BP_OneTopSaveData_C.AlreadyRead");

	UBP_OneTopSaveData_C_AlreadyRead_Params params;
	params.Record = Record;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneTopSaveData.BP_OneTopSaveData_C.RegisterParameter
// (Event, Public, BlueprintEvent)

void UBP_OneTopSaveData_C::RegisterParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTopSaveData.BP_OneTopSaveData_C.RegisterParameter");

	UBP_OneTopSaveData_C_RegisterParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OneTopSaveData.BP_OneTopSaveData_C.ExecuteUbergraph_BP_OneTopSaveData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OneTopSaveData_C::ExecuteUbergraph_BP_OneTopSaveData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OneTopSaveData.BP_OneTopSaveData_C.ExecuteUbergraph_BP_OneTopSaveData");

	UBP_OneTopSaveData_C_ExecuteUbergraph_BP_OneTopSaveData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
