
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

// Function BP_PF_AT_FloatingToSwimDiveHigh.BP_PF_AT_FloatingToSwimDiveHigh_C.ReceiveCanEnter
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PF_AT_FloatingToSwimDiveHigh_C::ReceiveCanEnter(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AT_FloatingToSwimDiveHigh.BP_PF_AT_FloatingToSwimDiveHigh_C.ReceiveCanEnter");

	UBP_PF_AT_FloatingToSwimDiveHigh_C_ReceiveCanEnter_Params params;
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