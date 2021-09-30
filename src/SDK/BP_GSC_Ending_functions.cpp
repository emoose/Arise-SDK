
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

// Function BP_GSC_Ending.BP_GSC_Ending_C.IsPausePossibleState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Ending_C::IsPausePossibleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.IsPausePossibleState");

	UBP_GSC_Ending_C_IsPausePossibleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.IsEnableSystemPause
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Ending_C::IsEnableSystemPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.IsEnableSystemPause");

	UBP_GSC_Ending_C_IsEnableSystemPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.IsClearSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsClearSave                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::IsClearSave(bool* OutIsClearSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.IsClearSave");

	UBP_GSC_Ending_C_IsClearSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsClearSave != nullptr)
		*OutIsClearSave = params.OutIsClearSave;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.SetPlayerCharacterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::SetPlayerCharacterVisibility(bool IsVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.SetPlayerCharacterVisibility");

	UBP_GSC_Ending_C_SetPlayerCharacterVisibility_Params params;
	params.IsVisibility = IsVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.IsPlayMask
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsMask                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::IsPlayMask(bool* OutIsMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.IsPlayMask");

	UBP_GSC_Ending_C_IsPlayMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsMask != nullptr)
		*OutIsMask = params.OutIsMask;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.PreloadMovie
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Ending_C::PreloadMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.PreloadMovie");

	UBP_GSC_Ending_C_PreloadMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.FinalizeMovie
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Ending_C::FinalizeMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.FinalizeMovie");

	UBP_GSC_Ending_C_FinalizeMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.IsMovieEnd
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnd                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::IsMovieEnd(bool* bEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.IsMovieEnd");

	UBP_GSC_Ending_C_IsMovieEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnd != nullptr)
		*bEnd = params.bEnd;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.IsLoadAsyncCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLoadEnd                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::IsLoadAsyncCheck(bool* IsLoadEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.IsLoadAsyncCheck");

	UBP_GSC_Ending_C_IsLoadAsyncCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLoadEnd != nullptr)
		*IsLoadEnd = params.IsLoadEnd;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.IsLevelUnloaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUnloaded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::IsLevelUnloaded(bool* bUnloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.IsLevelUnloaded");

	UBP_GSC_Ending_C_IsLevelUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnloaded != nullptr)
		*bUnloaded = params.bUnloaded;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.IsLevelShowed
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::IsLevelShowed(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.IsLevelShowed");

	UBP_GSC_Ending_C_IsLevelShowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.IsLevelLoaded
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Loaded                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::IsLevelLoaded(bool* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.IsLevelLoaded");

	UBP_GSC_Ending_C_IsLevelLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loaded != nullptr)
		*Loaded = params.Loaded;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.EventPlayMovie
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Ending_C::EventPlayMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.EventPlayMovie");

	UBP_GSC_Ending_C_EventPlayMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.LevelLoad
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Ending_C::LevelLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.LevelLoad");

	UBP_GSC_Ending_C_LevelLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.LevelShow
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Ending_C::LevelShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.LevelShow");

	UBP_GSC_Ending_C_LevelShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.LevelUnload
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Ending_C::LevelUnload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.LevelUnload");

	UBP_GSC_Ending_C_LevelUnload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.BPE_Initialize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneInitializeMode           initMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::BPE_Initialize(ESceneInitializeMode initMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.BPE_Initialize");

	UBP_GSC_Ending_C_BPE_Initialize_Params params;
	params.initMode = initMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.BPE_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::BPE_Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.BPE_Tick");

	UBP_GSC_Ending_C_BPE_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.BPE_Finalize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneFinalizeReason           finalizeReason                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::BPE_Finalize(ESceneFinalizeReason finalizeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.BPE_Finalize");

	UBP_GSC_Ending_C_BPE_Finalize_Params params;
	params.finalizeReason = finalizeReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.ExecuteUbergraph_BP_GSC_Ending
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Ending_C::ExecuteUbergraph_BP_GSC_Ending(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.ExecuteUbergraph_BP_GSC_Ending");

	UBP_GSC_Ending_C_ExecuteUbergraph_BP_GSC_Ending_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Ending.BP_GSC_Ending_C.DeleteEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Ending_C::DeleteEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Ending.BP_GSC_Ending_C.DeleteEvent__DelegateSignature");

	UBP_GSC_Ending_C_DeleteEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
