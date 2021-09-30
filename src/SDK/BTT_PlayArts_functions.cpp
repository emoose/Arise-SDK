
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

// Function BTT_PlayArts.BTT_PlayArts_C.WaitCanTransitionAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayArts_C::WaitCanTransitionAttack(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayArts.BTT_PlayArts_C.WaitCanTransitionAttack");

	UBTT_PlayArts_C_WaitCanTransitionAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BTT_PlayArts.BTT_PlayArts_C.WaitOnGround
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayArts_C::WaitOnGround(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayArts.BTT_PlayArts_C.WaitOnGround");

	UBTT_PlayArts_C_WaitOnGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BTT_PlayArts.BTT_PlayArts_C.WaitCancelFrame
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayArts_C::WaitCancelFrame(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayArts.BTT_PlayArts_C.WaitCancelFrame");

	UBTT_PlayArts_C_WaitCancelFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BTT_PlayArts.BTT_PlayArts_C.WaitArtsEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayArts_C::WaitArtsEnd(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayArts.BTT_PlayArts_C.WaitArtsEnd");

	UBTT_PlayArts_C_WaitArtsEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BTT_PlayArts.BTT_PlayArts_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayArts_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayArts.BTT_PlayArts_C.ReceiveTickAI");

	UBTT_PlayArts_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayArts.BTT_PlayArts_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayArts_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayArts.BTT_PlayArts_C.ReceiveExecuteAI");

	UBTT_PlayArts_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayArts.BTT_PlayArts_C.ExecuteUbergraph_BTT_PlayArts
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayArts_C::ExecuteUbergraph_BTT_PlayArts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayArts.BTT_PlayArts_C.ExecuteUbergraph_BTT_PlayArts");

	UBTT_PlayArts_C_ExecuteUbergraph_BTT_PlayArts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
