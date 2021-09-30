
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

// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetLevelActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         ActorID_Array                  (Parm, OutParm, ZeroConstructor)

void UBP_SearchOwlSaveData_C::GetLevelActors(const struct FString& LevelName, TArray<struct FString>* ActorID_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetLevelActors");

	UBP_SearchOwlSaveData_C_GetLevelActors_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorID_Array != nullptr)
		*ActorID_Array = params.ActorID_Array;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.SetReceiveFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InRewardID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInNew                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlSaveData_C::SetReceiveFlag(int InRewardID, bool bInNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.SetReceiveFlag");

	UBP_SearchOwlSaveData_C_SetReceiveFlag_Params params;
	params.InRewardID = InRewardID;
	params.bInNew = bInNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetReceivableReward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    OutRewardID                    (Parm, OutParm, ZeroConstructor)

void UBP_SearchOwlSaveData_C::GetReceivableReward(TArray<int>* OutRewardID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetReceivableReward");

	UBP_SearchOwlSaveData_C_GetReceivableReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRewardID != nullptr)
		*OutRewardID = params.OutRewardID;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetCompletedNum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutNum                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlSaveData_C::GetCompletedNum(int* OutNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetCompletedNum");

	UBP_SearchOwlSaveData_C_GetCompletedNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNum != nullptr)
		*OutNum = params.OutNum;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetCompletedRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OutRate                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlSaveData_C::GetCompletedRate(int* OutRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetCompletedRate");

	UBP_SearchOwlSaveData_C_GetCompletedRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRate != nullptr)
		*OutRate = params.OutRate;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.IsReceiveReward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlSaveData_C::IsReceiveReward(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.IsReceiveReward");

	UBP_SearchOwlSaveData_C_IsReceiveReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetDiscoverdRate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OutRate                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlSaveData_C::GetDiscoverdRate(int* OutRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetDiscoverdRate");

	UBP_SearchOwlSaveData_C_GetDiscoverdRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRate != nullptr)
		*OutRate = params.OutRate;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.ReceiveReward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    OutReceiveRewardID             (Parm, OutParm, ZeroConstructor)

void UBP_SearchOwlSaveData_C::ReceiveReward(TArray<int>* OutReceiveRewardID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.ReceiveReward");

	UBP_SearchOwlSaveData_C_ReceiveReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReceiveRewardID != nullptr)
		*OutReceiveRewardID = params.OutReceiveRewardID;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetDiscoveredNum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 InRegionName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlSaveData_C::GetDiscoveredNum(const struct FString& InRegionName, int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.GetDiscoveredNum");

	UBP_SearchOwlSaveData_C_GetDiscoveredNum_Params params;
	params.InRegionName = InRegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InDeltaSeconds                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlSaveData_C::Update(float InDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.Update");

	UBP_SearchOwlSaveData_C_Update_Params params;
	params.InDeltaSeconds = InDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.BindOnDiscoverStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_SearchOwlSaveData_C::BindOnDiscoverStateChanged(struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.BindOnDiscoverStateChanged");

	UBP_SearchOwlSaveData_C_BindOnDiscoverStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event != nullptr)
		*Event = params.Event;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.SetDiscover
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InLabel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           InDiscover                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlSaveData_C::SetDiscover(const struct FString& InLabel, bool InDiscover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.SetDiscover");

	UBP_SearchOwlSaveData_C_SetDiscover_Params params;
	params.InLabel = InLabel;
	params.InDiscover = InDiscover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.FillDiscover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InDiscover                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InWithEx                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlSaveData_C::FillDiscover(bool InDiscover, bool InWithEx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.FillDiscover");

	UBP_SearchOwlSaveData_C_FillDiscover_Params params;
	params.InDiscover = InDiscover;
	params.InWithEx = InWithEx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.IsDiscover
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 InActorID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bInDiscoverPoint               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlSaveData_C::IsDiscover(const struct FString& InActorID, bool bInDiscoverPoint, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.IsDiscover");

	UBP_SearchOwlSaveData_C_IsDiscover_Params params;
	params.InActorID = InActorID;
	params.bInDiscoverPoint = bInDiscoverPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.Discover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InLabel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_SearchOwlSaveData_C::Discover(const struct FString& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.Discover");

	UBP_SearchOwlSaveData_C_Discover_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.Event On New Game
// (BlueprintCallable, BlueprintEvent)

void UBP_SearchOwlSaveData_C::Event_On_New_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.Event On New Game");

	UBP_SearchOwlSaveData_C_Event_On_New_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.RegisterParameter
// (Event, Public, BlueprintEvent)

void UBP_SearchOwlSaveData_C::RegisterParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.RegisterParameter");

	UBP_SearchOwlSaveData_C_RegisterParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.ExecuteUbergraph_BP_SearchOwlSaveData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SearchOwlSaveData_C::ExecuteUbergraph_BP_SearchOwlSaveData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.ExecuteUbergraph_BP_SearchOwlSaveData");

	UBP_SearchOwlSaveData_C_ExecuteUbergraph_BP_SearchOwlSaveData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.OnDiscoverStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InActorID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_SearchOwlSaveData_C::OnDiscoverStateChanged__DelegateSignature(const struct FString& InActorID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchOwlSaveData.BP_SearchOwlSaveData_C.OnDiscoverStateChanged__DelegateSignature");

	UBP_SearchOwlSaveData_C_OnDiscoverStateChanged__DelegateSignature_Params params;
	params.InActorID = InActorID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
