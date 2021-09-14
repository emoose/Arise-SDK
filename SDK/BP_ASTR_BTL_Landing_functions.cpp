
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

// Function BP_ASTR_BTL_Landing.BP_ASTR_BTL_Landing_C.ReceiveCanEnter
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_ASTR_BTL_Landing_C::ReceiveCanEnter(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ASTR_BTL_Landing.BP_ASTR_BTL_Landing_C.ReceiveCanEnter");

	UBP_ASTR_BTL_Landing_C_ReceiveCanEnter_Params params;
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
