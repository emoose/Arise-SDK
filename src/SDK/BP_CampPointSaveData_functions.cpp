
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

// Function BP_CampPointSaveData.BP_CampPointSaveData_C.BindOnDiscoverStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_CampPointSaveData_C::BindOnDiscoverStateChanged(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.BindOnDiscoverStateChanged");

	UBP_CampPointSaveData_C_BindOnDiscoverStateChanged_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampPointSaveData.BP_CampPointSaveData_C.GetDiscoverCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CampPointSaveData_C::GetDiscoverCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.GetDiscoverCount");

	UBP_CampPointSaveData_C_GetDiscoverCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_CampPointSaveData.BP_CampPointSaveData_C.GetLevelActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         ActorID_Array                  (Parm, OutParm, ZeroConstructor)

void UBP_CampPointSaveData_C::GetLevelActors(const struct FString& LevelName, TArray<struct FString>* ActorID_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.GetLevelActors");

	UBP_CampPointSaveData_C_GetLevelActors_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorID_Array != nullptr)
		*ActorID_Array = params.ActorID_Array;
}


// Function BP_CampPointSaveData.BP_CampPointSaveData_C.SetDiscover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CampPointSaveData_C::SetDiscover(const struct FString& actorId, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.SetDiscover");

	UBP_CampPointSaveData_C_SetDiscover_Params params;
	params.actorId = actorId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampPointSaveData.BP_CampPointSaveData_C.FillDiscover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDiscover                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CampPointSaveData_C::FillDiscover(bool bDiscover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.FillDiscover");

	UBP_CampPointSaveData_C_FillDiscover_Params params;
	params.bDiscover = bDiscover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampPointSaveData.BP_CampPointSaveData_C.IsChunkEnable
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CampPointSaveData_C::IsChunkEnable(const struct FString& ChunkName, const struct FString& actorId, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.IsChunkEnable");

	UBP_CampPointSaveData_C_IsChunkEnable_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_CampPointSaveData.BP_CampPointSaveData_C.SetChunkEnable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CampPointSaveData_C::SetChunkEnable(const struct FString& ChunkName, const struct FString& actorId, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.SetChunkEnable");

	UBP_CampPointSaveData_C_SetChunkEnable_Params params;
	params.ChunkName = ChunkName;
	params.actorId = actorId;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampPointSaveData.BP_CampPointSaveData_C.IsDiscover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CampPointSaveData_C::IsDiscover(const struct FString& actorId, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.IsDiscover");

	UBP_CampPointSaveData_C_IsDiscover_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_CampPointSaveData.BP_CampPointSaveData_C.Discover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_CampPointSaveData_C::Discover(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.Discover");

	UBP_CampPointSaveData_C_Discover_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampPointSaveData.BP_CampPointSaveData_C.RegisterParameter
// (Event, Public, BlueprintEvent)

void UBP_CampPointSaveData_C::RegisterParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.RegisterParameter");

	UBP_CampPointSaveData_C_RegisterParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampPointSaveData.BP_CampPointSaveData_C.ExecuteUbergraph_BP_CampPointSaveData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CampPointSaveData_C::ExecuteUbergraph_BP_CampPointSaveData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.ExecuteUbergraph_BP_CampPointSaveData");

	UBP_CampPointSaveData_C_ExecuteUbergraph_BP_CampPointSaveData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampPointSaveData.BP_CampPointSaveData_C.OnDiscoverStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_CampPointSaveData_C::OnDiscoverStateChanged__DelegateSignature(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampPointSaveData.BP_CampPointSaveData_C.OnDiscoverStateChanged__DelegateSignature");

	UBP_CampPointSaveData_C_OnDiscoverStateChanged__DelegateSignature_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
