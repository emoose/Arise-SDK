
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

// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.GetOpenCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TreasurePointSaveData_C::GetOpenCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.GetOpenCount");

	UBP_TreasurePointSaveData_C_GetOpenCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.BindOnOpenStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_TreasurePointSaveData_C::BindOnOpenStateChanged(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.BindOnOpenStateChanged");

	UBP_TreasurePointSaveData_C_BindOnOpenStateChanged_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.BindOnDiscoverStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_TreasurePointSaveData_C::BindOnDiscoverStateChanged(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.BindOnDiscoverStateChanged");

	UBP_TreasurePointSaveData_C_BindOnDiscoverStateChanged_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.GetLevelActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         ActorID_Array                  (Parm, OutParm, ZeroConstructor)

void UBP_TreasurePointSaveData_C::GetLevelActors(const struct FString& LevelName, TArray<struct FString>* ActorID_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.GetLevelActors");

	UBP_TreasurePointSaveData_C_GetLevelActors_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorID_Array != nullptr)
		*ActorID_Array = params.ActorID_Array;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.SetDiscover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFTreasurePointItemID  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TreasurePointSaveData_C::SetDiscover(const struct FPFTreasurePointItemID& ItemID, bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.SetDiscover");

	UBP_TreasurePointSaveData_C_SetDiscover_Params params;
	params.ItemID = ItemID;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.FillDiscover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDiscover                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TreasurePointSaveData_C::FillDiscover(bool bDiscover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.FillDiscover");

	UBP_TreasurePointSaveData_C_FillDiscover_Params params;
	params.bDiscover = bDiscover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.IsChunkEnable
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FPFTreasurePointItemID  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TreasurePointSaveData_C::IsChunkEnable(const struct FString& ChunkName, const struct FPFTreasurePointItemID& ItemID, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.IsChunkEnable");

	UBP_TreasurePointSaveData_C_IsChunkEnable_Params params;
	params.ChunkName = ChunkName;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.SetChunkEnable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChunkName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FPFTreasurePointItemID  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TreasurePointSaveData_C::SetChunkEnable(const struct FString& ChunkName, const struct FPFTreasurePointItemID& ItemID, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.SetChunkEnable");

	UBP_TreasurePointSaveData_C_SetChunkEnable_Params params;
	params.ChunkName = ChunkName;
	params.ItemID = ItemID;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.IsOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFTreasurePointItemID  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TreasurePointSaveData_C::IsOpen(const struct FPFTreasurePointItemID& ItemID, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.IsOpen");

	UBP_TreasurePointSaveData_C_IsOpen_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFTreasurePointItemID  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TreasurePointSaveData_C::Open(const struct FPFTreasurePointItemID& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.Open");

	UBP_TreasurePointSaveData_C_Open_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.IsDiscover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFTreasurePointItemID  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TreasurePointSaveData_C::IsDiscover(const struct FPFTreasurePointItemID& ItemID, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.IsDiscover");

	UBP_TreasurePointSaveData_C_IsDiscover_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.Discover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFTreasurePointItemID  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TreasurePointSaveData_C::Discover(const struct FPFTreasurePointItemID& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.Discover");

	UBP_TreasurePointSaveData_C_Discover_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.RegisterParameter
// (Event, Public, BlueprintEvent)

void UBP_TreasurePointSaveData_C::RegisterParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.RegisterParameter");

	UBP_TreasurePointSaveData_C_RegisterParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.ExecuteUbergraph_BP_TreasurePointSaveData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TreasurePointSaveData_C::ExecuteUbergraph_BP_TreasurePointSaveData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.ExecuteUbergraph_BP_TreasurePointSaveData");

	UBP_TreasurePointSaveData_C_ExecuteUbergraph_BP_TreasurePointSaveData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.OnOpenStateChanged__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_TreasurePointSaveData_C::OnOpenStateChanged__DelegateSignature(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.OnOpenStateChanged__DelegateSignature");

	UBP_TreasurePointSaveData_C_OnOpenStateChanged__DelegateSignature_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.OnDiscoverStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 actorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_TreasurePointSaveData_C::OnDiscoverStateChanged__DelegateSignature(const struct FString& actorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasurePointSaveData.BP_TreasurePointSaveData_C.OnDiscoverStateChanged__DelegateSignature");

	UBP_TreasurePointSaveData_C_OnDiscoverStateChanged__DelegateSignature_Params params;
	params.actorId = actorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
