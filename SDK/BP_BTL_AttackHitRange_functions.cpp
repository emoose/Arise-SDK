
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

// Function BP_BTL_AttackHitRange.BP_BTL_AttackHitRange_C.Received_InitializeCreateComponent
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USphereComponent*        SphereComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BTL_AttackHitRange_C::Received_InitializeCreateComponent(class USphereComponent* SphereComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_AttackHitRange.BP_BTL_AttackHitRange_C.Received_InitializeCreateComponent");

	UBP_BTL_AttackHitRange_C_Received_InitializeCreateComponent_Params params;
	params.SphereComponent = SphereComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_AttackHitRange.BP_BTL_AttackHitRange_C.GetNotifyName
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_BTL_AttackHitRange_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_AttackHitRange.BP_BTL_AttackHitRange_C.GetNotifyName");

	UBP_BTL_AttackHitRange_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
