
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

// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ChangeObjectVisibilityBtWorldTime
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_DRT_DayNight_C::ChangeObjectVisibilityBtWorldTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ChangeObjectVisibilityBtWorldTime");

	ATO14_BP_DRT_DayNight_C_ChangeObjectVisibilityBtWorldTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.NewFunction_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATO14_BP_DRT_DayNight_C::NewFunction_1(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.NewFunction_1");

	ATO14_BP_DRT_DayNight_C_NewFunction_1_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.OnRep_NewVar_1
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_DRT_DayNight_C::OnRep_NewVar_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.OnRep_NewVar_1");

	ATO14_BP_DRT_DayNight_C_OnRep_NewVar_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_DRT_DayNight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.UserConstructionScript");

	ATO14_BP_DRT_DayNight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATO14_BP_DRT_DayNight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ReceiveBeginPlay");

	ATO14_BP_DRT_DayNight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.OnChangeWorldTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          newHour                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_DRT_DayNight_C::OnChangeWorldTime(float newHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.OnChangeWorldTime");

	ATO14_BP_DRT_DayNight_C_OnChangeWorldTime_Params params;
	params.newHour = newHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_DRT_DayNight_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ReceiveEndPlay");

	ATO14_BP_DRT_DayNight_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ExecuteUbergraph_TO14_BP_DRT_DayNight
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_DRT_DayNight_C::ExecuteUbergraph_TO14_BP_DRT_DayNight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ExecuteUbergraph_TO14_BP_DRT_DayNight");

	ATO14_BP_DRT_DayNight_C_ExecuteUbergraph_TO14_BP_DRT_DayNight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
