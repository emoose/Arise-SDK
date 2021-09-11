
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

// Function BP_PF_Gimmick_InteractionCondition_InjuredPerson.BP_PF_Gimmick_InteractionCondition_InjuredPerson_C.K2_CanEnter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InReceiveActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PF_Gimmick_InteractionCondition_InjuredPerson_C::K2_CanEnter(class AActor* InReceiveActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_InteractionCondition_InjuredPerson.BP_PF_Gimmick_InteractionCondition_InjuredPerson_C.K2_CanEnter");

	UBP_PF_Gimmick_InteractionCondition_InjuredPerson_C_K2_CanEnter_Params params;
	params.InReceiveActor = InReceiveActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
