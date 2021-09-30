
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

// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.CanCheck
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_TreasurePoint_C::CanCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.CanCheck");

	UBP_SCHOBJ_TreasurePoint_C_CanCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.GetTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBP_SCHOBJ_TreasurePoint_C::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.GetTarget");

	UBP_SCHOBJ_TreasurePoint_C_GetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.IsTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_TreasurePoint_C::IsTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.IsTarget");

	UBP_SCHOBJ_TreasurePoint_C_IsTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SCHOBJ_TreasurePoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.ReceiveBeginPlay");

	UBP_SCHOBJ_TreasurePoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_TreasurePoint_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.ReceiveEndPlay");

	UBP_SCHOBJ_TreasurePoint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.ExecuteUbergraph_BP_SCHOBJ_TreasurePoint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_TreasurePoint_C::ExecuteUbergraph_BP_SCHOBJ_TreasurePoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.ExecuteUbergraph_BP_SCHOBJ_TreasurePoint");

	UBP_SCHOBJ_TreasurePoint_C_ExecuteUbergraph_BP_SCHOBJ_TreasurePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
