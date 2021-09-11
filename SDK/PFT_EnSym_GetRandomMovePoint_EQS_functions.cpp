
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

// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.PrintDebugLog
// (Public, BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_GetRandomMovePoint_EQS_C::PrintDebugLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.PrintDebugLog");

	UPFT_EnSym_GetRandomMovePoint_EQS_C_PrintDebugLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.IsOutMoveRange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          RotatorZ                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MoveLength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_GetRandomMovePoint_EQS_C::IsOutMoveRange(float RotatorZ, float MoveLength, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.IsOutMoveRange");

	UPFT_EnSym_GetRandomMovePoint_EQS_C_IsOutMoveRange_Params params;
	params.RotatorZ = RotatorZ;
	params.MoveLength = MoveLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.GetMoveDirToLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          RotatorZ                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MoveLength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, OutParm, IsPlainOldData)

void UPFT_EnSym_GetRandomMovePoint_EQS_C::GetMoveDirToLocation(float RotatorZ, float MoveLength, struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.GetMoveDirToLocation");

	UPFT_EnSym_GetRandomMovePoint_EQS_C_GetMoveDirToLocation_Params params;
	params.RotatorZ = RotatorZ;
	params.MoveLength = MoveLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.GetRotatorZ
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RotatorZ                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_GetRandomMovePoint_EQS_C::GetRotatorZ(float Min, float Max, float* RotatorZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.GetRotatorZ");

	UPFT_EnSym_GetRandomMovePoint_EQS_C_GetRotatorZ_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RotatorZ != nullptr)
		*RotatorZ = params.RotatorZ;
}


// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.GetMovePoint
// (Public, BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_GetRandomMovePoint_EQS_C::GetMovePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.GetMovePoint");

	UPFT_EnSym_GetRandomMovePoint_EQS_C_GetMovePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.OnExecute
// (BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_GetRandomMovePoint_EQS_C::OnExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.OnExecute");

	UPFT_EnSym_GetRandomMovePoint_EQS_C_OnExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.ExecuteUbergraph_PFT_EnSym_GetRandomMovePoint_EQS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_GetRandomMovePoint_EQS_C::ExecuteUbergraph_PFT_EnSym_GetRandomMovePoint_EQS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.ExecuteUbergraph_PFT_EnSym_GetRandomMovePoint_EQS");

	UPFT_EnSym_GetRandomMovePoint_EQS_C_ExecuteUbergraph_PFT_EnSym_GetRandomMovePoint_EQS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
