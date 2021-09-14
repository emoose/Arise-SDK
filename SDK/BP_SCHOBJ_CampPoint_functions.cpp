
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

// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.CanCheck
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_CampPoint_C::CanCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.CanCheck");

	UBP_SCHOBJ_CampPoint_C_CanCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.GetTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBP_SCHOBJ_CampPoint_C::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.GetTarget");

	UBP_SCHOBJ_CampPoint_C_GetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.IsTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SCHOBJ_CampPoint_C::IsTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.IsTarget");

	UBP_SCHOBJ_CampPoint_C_IsTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_CampPoint_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.ReceiveEndPlay");

	UBP_SCHOBJ_CampPoint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SCHOBJ_CampPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.ReceiveBeginPlay");

	UBP_SCHOBJ_CampPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.OnChangeScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_CampPoint_C::OnChangeScene(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.OnChangeScene");

	UBP_SCHOBJ_CampPoint_C_OnChangeScene_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.ExecuteUbergraph_BP_SCHOBJ_CampPoint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SCHOBJ_CampPoint_C::ExecuteUbergraph_BP_SCHOBJ_CampPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.ExecuteUbergraph_BP_SCHOBJ_CampPoint");

	UBP_SCHOBJ_CampPoint_C_ExecuteUbergraph_BP_SCHOBJ_CampPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
