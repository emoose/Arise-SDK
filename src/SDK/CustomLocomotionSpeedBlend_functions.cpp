
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

// Function CustomLocomotionSpeedBlend.CustomLocomotionSpeedBlend_C.ReceiveTick
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UASAnimationSet*         AnimationSet                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomLocomotionSpeedBlend_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomLocomotionSpeedBlend.CustomLocomotionSpeedBlend_C.ReceiveTick");

	UCustomLocomotionSpeedBlend_C_ReceiveTick_Params params;
	params.DeltaTime = DeltaTime;
	params.AnimInstance = AnimInstance;
	params.AnimationSet = AnimationSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
