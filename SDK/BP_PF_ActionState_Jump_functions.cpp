
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

// Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.CheckJumpState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ToDash                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ToRun                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_ActionState_Jump_C::CheckJumpState(bool* ToDash, bool* ToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.CheckJumpState");

	UBP_PF_ActionState_Jump_C_CheckJumpState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToDash != nullptr)
		*ToDash = params.ToDash;
	if (ToRun != nullptr)
		*ToRun = params.ToRun;
}


// Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.NewFunction_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter*              self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocityLength                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PF_ActionState_Jump_C::NewFunction_1(class ACharacter* self2, float VelocityLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.NewFunction_1");

	UBP_PF_ActionState_Jump_C_NewFunction_1_Params params;
	params.self2 = self2;
	params.VelocityLength = VelocityLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.K2_Tick
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPFActionStateTickResult ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPFActionStateTickResult UBP_PF_ActionState_Jump_C::K2_Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.K2_Tick");

	UBP_PF_ActionState_Jump_C_K2_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.K2_Begin
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   PrevState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_ActionState_Jump_C::K2_Begin(const struct FName& PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.K2_Begin");

	UBP_PF_ActionState_Jump_C_K2_Begin_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.ExecuteUbergraph_BP_PF_ActionState_Jump
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_ActionState_Jump_C::ExecuteUbergraph_BP_PF_ActionState_Jump(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C.ExecuteUbergraph_BP_PF_ActionState_Jump");

	UBP_PF_ActionState_Jump_C_ExecuteUbergraph_BP_PF_ActionState_Jump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
