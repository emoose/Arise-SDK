
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

// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.IsAtLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AcceptDistance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_UpdateNextSplinePoint_C::IsAtLocation(float AcceptDistance, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.IsAtLocation");

	UPFT_EnSym_UpdateNextSplinePoint_C_IsAtLocation_Params params;
	params.AcceptDistance = AcceptDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.GetSplineData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UPFT_EnSym_UpdateNextSplinePoint_C::GetSplineData(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.GetSplineData");

	UPFT_EnSym_UpdateNextSplinePoint_C_GetSplineData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.GetNextPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Lazy                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_UpdateNextSplinePoint_C::GetNextPoint(bool* Lazy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.GetNextPoint");

	UPFT_EnSym_UpdateNextSplinePoint_C_GetNextPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lazy != nullptr)
		*Lazy = params.Lazy;
}


// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.GetNextMovePoint
// (BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_UpdateNextSplinePoint_C::GetNextMovePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.GetNextMovePoint");

	UPFT_EnSym_UpdateNextSplinePoint_C_GetNextMovePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.InitSpline
// (BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_UpdateNextSplinePoint_C::InitSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.InitSpline");

	UPFT_EnSym_UpdateNextSplinePoint_C_InitSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.OnTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_UpdateNextSplinePoint_C::OnTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.OnTick");

	UPFT_EnSym_UpdateNextSplinePoint_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.OnExecute
// (BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_UpdateNextSplinePoint_C::OnExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.OnExecute");

	UPFT_EnSym_UpdateNextSplinePoint_C_OnExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.ExecuteUbergraph_PFT_EnSym_UpdateNextSplinePoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_UpdateNextSplinePoint_C::ExecuteUbergraph_PFT_EnSym_UpdateNextSplinePoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.ExecuteUbergraph_PFT_EnSym_UpdateNextSplinePoint");

	UPFT_EnSym_UpdateNextSplinePoint_C_ExecuteUbergraph_PFT_EnSym_UpdateNextSplinePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
