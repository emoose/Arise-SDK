
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

// Function ABP_MapAnimal_Pigeon.ABP_MapAnimal_Pigeon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapAnimal_Pigeon_ASAnimGraphNode_StateMachine_5AFD197B43343497F3D401993986967C
// (BlueprintEvent)

void UABP_MapAnimal_Pigeon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapAnimal_Pigeon_ASAnimGraphNode_StateMachine_5AFD197B43343497F3D401993986967C()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MapAnimal_Pigeon.ABP_MapAnimal_Pigeon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapAnimal_Pigeon_ASAnimGraphNode_StateMachine_5AFD197B43343497F3D401993986967C");

	UABP_MapAnimal_Pigeon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapAnimal_Pigeon_ASAnimGraphNode_StateMachine_5AFD197B43343497F3D401993986967C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MapAnimal_Pigeon.ABP_MapAnimal_Pigeon_C.ReceiveStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 PreviousStateName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NextStateName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UABP_MapAnimal_Pigeon_C::ReceiveStateChange(const struct FString& PreviousStateName, const struct FString& NextStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MapAnimal_Pigeon.ABP_MapAnimal_Pigeon_C.ReceiveStateChange");

	UABP_MapAnimal_Pigeon_C_ReceiveStateChange_Params params;
	params.PreviousStateName = PreviousStateName;
	params.NextStateName = NextStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MapAnimal_Pigeon.ABP_MapAnimal_Pigeon_C.ExecuteUbergraph_ABP_MapAnimal_Pigeon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MapAnimal_Pigeon_C::ExecuteUbergraph_ABP_MapAnimal_Pigeon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MapAnimal_Pigeon.ABP_MapAnimal_Pigeon_C.ExecuteUbergraph_ABP_MapAnimal_Pigeon");

	UABP_MapAnimal_Pigeon_C_ExecuteUbergraph_ABP_MapAnimal_Pigeon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
