
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

// Function BP_PF_AT_ToUTurn.BP_PF_AT_ToUTurn_C.IsWalkUTurn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AT_ToUTurn_C::IsWalkUTurn(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AT_ToUTurn.BP_PF_AT_ToUTurn_C.IsWalkUTurn");

	UBP_PF_AT_ToUTurn_C_IsWalkUTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_PF_AT_ToUTurn.BP_PF_AT_ToUTurn_C.ReceiveCanEnter
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PF_AT_ToUTurn_C::ReceiveCanEnter(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AT_ToUTurn.BP_PF_AT_ToUTurn_C.ReceiveCanEnter");

	UBP_PF_AT_ToUTurn_C_ReceiveCanEnter_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
