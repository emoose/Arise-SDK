
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

// Function BP_GSC_Movie.BP_GSC_Movie_C.SetPostMaskColor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVisualFadeLayer>  Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Movie_C::SetPostMaskColor(TEnumAsByte<EVisualFadeLayer> Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.SetPostMaskColor");

	UBP_GSC_Movie_C_SetPostMaskColor_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Movie.BP_GSC_Movie_C.IsEnableSystemPause
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Movie_C::IsEnableSystemPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.IsEnableSystemPause");

	UBP_GSC_Movie_C_IsEnableSystemPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Movie.BP_GSC_Movie_C.ExitMovie
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Movie_C::ExitMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.ExitMovie");

	UBP_GSC_Movie_C_ExitMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Movie.BP_GSC_Movie_C.PlayMovie
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Movie_C::PlayMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.PlayMovie");

	UBP_GSC_Movie_C_PlayMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Movie.BP_GSC_Movie_C.WaitEndMovie
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnd                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Movie_C::WaitEndMovie(bool* bEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.WaitEndMovie");

	UBP_GSC_Movie_C_WaitEndMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnd != nullptr)
		*bEnd = params.bEnd;
}


// Function BP_GSC_Movie.BP_GSC_Movie_C.DebugPrintSceneState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Movie_C::DebugPrintSceneState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.DebugPrintSceneState");

	UBP_GSC_Movie_C_DebugPrintSceneState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Movie.BP_GSC_Movie_C.BPE_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Movie_C::BPE_Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.BPE_Tick");

	UBP_GSC_Movie_C_BPE_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Movie.BP_GSC_Movie_C.BPE_Initialize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneInitializeMode           initMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Movie_C::BPE_Initialize(ESceneInitializeMode initMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.BPE_Initialize");

	UBP_GSC_Movie_C_BPE_Initialize_Params params;
	params.initMode = initMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Movie.BP_GSC_Movie_C.SetMovieName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 movieName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Movie_C::SetMovieName(const struct FString& movieName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.SetMovieName");

	UBP_GSC_Movie_C_SetMovieName_Params params;
	params.movieName = movieName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Movie.BP_GSC_Movie_C.BPE_Finalize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneFinalizeReason           finalizeReason                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Movie_C::BPE_Finalize(ESceneFinalizeReason finalizeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.BPE_Finalize");

	UBP_GSC_Movie_C_BPE_Finalize_Params params;
	params.finalizeReason = finalizeReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Movie.BP_GSC_Movie_C.EventPreFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBlack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Movie_C::EventPreFade(bool bBlack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.EventPreFade");

	UBP_GSC_Movie_C_EventPreFade_Params params;
	params.bBlack = bBlack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Movie.BP_GSC_Movie_C.ExecuteUbergraph_BP_GSC_Movie
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Movie_C::ExecuteUbergraph_BP_GSC_Movie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Movie.BP_GSC_Movie_C.ExecuteUbergraph_BP_GSC_Movie");

	UBP_GSC_Movie_C_ExecuteUbergraph_BP_GSC_Movie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
