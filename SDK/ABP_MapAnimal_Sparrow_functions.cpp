
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

// Function ABP_MapAnimal_Sparrow.ABP_MapAnimal_Sparrow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapAnimal_Sparrow_ASAnimGraphNode_StateMachine_79DA9BFF473CD66249A9439964E9DC41
// (BlueprintEvent)

void UABP_MapAnimal_Sparrow_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapAnimal_Sparrow_ASAnimGraphNode_StateMachine_79DA9BFF473CD66249A9439964E9DC41()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MapAnimal_Sparrow.ABP_MapAnimal_Sparrow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapAnimal_Sparrow_ASAnimGraphNode_StateMachine_79DA9BFF473CD66249A9439964E9DC41");

	UABP_MapAnimal_Sparrow_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapAnimal_Sparrow_ASAnimGraphNode_StateMachine_79DA9BFF473CD66249A9439964E9DC41_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MapAnimal_Sparrow.ABP_MapAnimal_Sparrow_C.ReceiveStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 PreviousStateName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NextStateName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UABP_MapAnimal_Sparrow_C::ReceiveStateChange(const struct FString& PreviousStateName, const struct FString& NextStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MapAnimal_Sparrow.ABP_MapAnimal_Sparrow_C.ReceiveStateChange");

	UABP_MapAnimal_Sparrow_C_ReceiveStateChange_Params params;
	params.PreviousStateName = PreviousStateName;
	params.NextStateName = NextStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MapAnimal_Sparrow.ABP_MapAnimal_Sparrow_C.ExecuteUbergraph_ABP_MapAnimal_Sparrow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MapAnimal_Sparrow_C::ExecuteUbergraph_ABP_MapAnimal_Sparrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MapAnimal_Sparrow.ABP_MapAnimal_Sparrow_C.ExecuteUbergraph_ABP_MapAnimal_Sparrow");

	UABP_MapAnimal_Sparrow_C_ExecuteUbergraph_ABP_MapAnimal_Sparrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
