
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

// Function BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C.Received_IsComplate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlOpenHelpWindowTask_C::Received_IsComplate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C.Received_IsComplate");

	UBP_BtlOpenHelpWindowTask_C_Received_IsComplate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C.Received_End
// (Event, Public, BlueprintEvent)

void UBP_BtlOpenHelpWindowTask_C::Received_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C.Received_End");

	UBP_BtlOpenHelpWindowTask_C_Received_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C.Received_Begin
// (Event, Public, BlueprintEvent)

void UBP_BtlOpenHelpWindowTask_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C.Received_Begin");

	UBP_BtlOpenHelpWindowTask_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C.Received_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlOpenHelpWindowTask_C::Received_Tick(float FrameDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C.Received_Tick");

	UBP_BtlOpenHelpWindowTask_C_Received_Tick_Params params;
	params.FrameDeltaTime = FrameDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C.ExecuteUbergraph_BP_BtlOpenHelpWindowTask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlOpenHelpWindowTask_C::ExecuteUbergraph_BP_BtlOpenHelpWindowTask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlOpenHelpWindowTask.BP_BtlOpenHelpWindowTask_C.ExecuteUbergraph_BP_BtlOpenHelpWindowTask");

	UBP_BtlOpenHelpWindowTask_C_ExecuteUbergraph_BP_BtlOpenHelpWindowTask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
