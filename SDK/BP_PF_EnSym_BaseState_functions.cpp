
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

// Function BP_PF_EnSym_BaseState.BP_PF_EnSym_BaseState_C.IsChangeState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPFActorComponent*       InComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_EnSym_BaseState_C::IsChangeState(const struct FName& InState, class UPFActorComponent* InComponent, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_EnSym_BaseState.BP_PF_EnSym_BaseState_C.IsChangeState");

	UBP_PF_EnSym_BaseState_C_IsChangeState_Params params;
	params.InState = InState;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PF_EnSym_BaseState.BP_PF_EnSym_BaseState_C.ChangeState
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPFEncountSymbolComponent* Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_PF_EnSym_BaseState_C::ChangeState(const struct FName& State, class UPFEncountSymbolComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_EnSym_BaseState.BP_PF_EnSym_BaseState_C.ChangeState");

	UBP_PF_EnSym_BaseState_C_ChangeState_Params params;
	params.State = State;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
