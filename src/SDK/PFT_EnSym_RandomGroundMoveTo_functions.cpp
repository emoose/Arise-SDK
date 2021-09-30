
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

// Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.GetLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AIMoved                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UPFT_EnSym_RandomGroundMoveTo_C::GetLocation(bool AIMoved, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.GetLocation");

	UPFT_EnSym_RandomGroundMoveTo_C_GetLocation_Params params;
	params.AIMoved = AIMoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.GetFirstEndPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (Parm, OutParm, IsPlainOldData)

void UPFT_EnSym_RandomGroundMoveTo_C::GetFirstEndPoint(struct FVector* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.GetFirstEndPoint");

	UPFT_EnSym_RandomGroundMoveTo_C_GetFirstEndPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Point != nullptr)
		*Point = params.Point;
}


// Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.GetActorLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UPFT_EnSym_RandomGroundMoveTo_C::GetActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.GetActorLocation");

	UPFT_EnSym_RandomGroundMoveTo_C_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.OnExecute
// (BlueprintCallable, BlueprintEvent)

void UPFT_EnSym_RandomGroundMoveTo_C::OnExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.OnExecute");

	UPFT_EnSym_RandomGroundMoveTo_C_OnExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.ExecuteUbergraph_PFT_EnSym_RandomGroundMoveTo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPFT_EnSym_RandomGroundMoveTo_C::ExecuteUbergraph_PFT_EnSym_RandomGroundMoveTo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.ExecuteUbergraph_PFT_EnSym_RandomGroundMoveTo");

	UPFT_EnSym_RandomGroundMoveTo_C_ExecuteUbergraph_PFT_EnSym_RandomGroundMoveTo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
