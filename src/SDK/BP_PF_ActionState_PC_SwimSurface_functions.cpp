
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

// Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.IsPrevStateFloating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InPrevState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_ActionState_PC_SwimSurface_C::IsPrevStateFloating(const struct FName& InPrevState, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.IsPrevStateFloating");

	UBP_PF_ActionState_PC_SwimSurface_C_IsPrevStateFloating_Params params;
	params.InPrevState = InPrevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.SetIKEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_ActionState_PC_SwimSurface_C::SetIKEnable(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.SetIKEnable");

	UBP_PF_ActionState_PC_SwimSurface_C_SetIKEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.K2_Tick
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPFActionStateTickResult ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPFActionStateTickResult UBP_PF_ActionState_PC_SwimSurface_C::K2_Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.K2_Tick");

	UBP_PF_ActionState_PC_SwimSurface_C_K2_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.K2_Begin
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   PrevState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_ActionState_PC_SwimSurface_C::K2_Begin(const struct FName& PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.K2_Begin");

	UBP_PF_ActionState_PC_SwimSurface_C_K2_Begin_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.K2_End
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   NextState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_ActionState_PC_SwimSurface_C::K2_End(const struct FName& NextState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.K2_End");

	UBP_PF_ActionState_PC_SwimSurface_C_K2_End_Params params;
	params.NextState = NextState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.ExecuteUbergraph_BP_PF_ActionState_PC_SwimSurface
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_ActionState_PC_SwimSurface_C::ExecuteUbergraph_BP_PF_ActionState_PC_SwimSurface(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ActionState_PC_SwimSurface.BP_PF_ActionState_PC_SwimSurface_C.ExecuteUbergraph_BP_PF_ActionState_PC_SwimSurface");

	UBP_PF_ActionState_PC_SwimSurface_C_ExecuteUbergraph_BP_PF_ActionState_PC_SwimSurface_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
