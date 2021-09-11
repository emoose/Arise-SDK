
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

// Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.GetMoveDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UPFT_EnSym_MoveTo_UseZ_C::GetMoveDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.GetMoveDirection");

	UPFT_EnSym_MoveTo_UseZ_C_GetMoveDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.DrawDebugPath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_MoveTo_UseZ_C::DrawDebugPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.DrawDebugPath");

	UPFT_EnSym_MoveTo_UseZ_C_DrawDebugPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.UpdatePathPointIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReachedDestination             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_MoveTo_UseZ_C::UpdatePathPointIndex(bool* ReachedDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.UpdatePathPointIndex");

	UPFT_EnSym_MoveTo_UseZ_C_UpdatePathPointIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReachedDestination != nullptr)
		*ReachedDestination = params.ReachedDestination;
}


// Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.IsAtLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          AcceptDistance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_MoveTo_UseZ_C::IsAtLocation(const struct FVector& Location, float AcceptDistance, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.IsAtLocation");

	UPFT_EnSym_MoveTo_UseZ_C_IsAtLocation_Params params;
	params.Location = Location;
	params.AcceptDistance = AcceptDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.GetCurrentPathPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (Parm, OutParm, IsPlainOldData)

void UPFT_EnSym_MoveTo_UseZ_C::GetCurrentPathPoint(struct FVector* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.GetCurrentPathPoint");

	UPFT_EnSym_MoveTo_UseZ_C_GetCurrentPathPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Point != nullptr)
		*Point = params.Point;
}


// Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.OnExecute
// (BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_MoveTo_UseZ_C::OnExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.OnExecute");

	UPFT_EnSym_MoveTo_UseZ_C_OnExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.OnTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_MoveTo_UseZ_C::OnTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.OnTick");

	UPFT_EnSym_MoveTo_UseZ_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.ExecuteUbergraph_PFT_EnSym_MoveTo_UseZ
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_MoveTo_UseZ_C::ExecuteUbergraph_PFT_EnSym_MoveTo_UseZ(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_MoveTo_UseZ.PFT_EnSym_MoveTo_UseZ_C.ExecuteUbergraph_PFT_EnSym_MoveTo_UseZ");

	UPFT_EnSym_MoveTo_UseZ_C_ExecuteUbergraph_PFT_EnSym_MoveTo_UseZ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
