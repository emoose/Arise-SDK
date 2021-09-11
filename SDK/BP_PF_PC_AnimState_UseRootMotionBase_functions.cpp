
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

// Function BP_PF_PC_AnimState_UseRootMotionBase.BP_PF_PC_AnimState_UseRootMotionBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_PC_AnimState_UseRootMotionBase_C::ReceiveEndPlay(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_PC_AnimState_UseRootMotionBase.BP_PF_PC_AnimState_UseRootMotionBase_C.ReceiveEndPlay");

	UBP_PF_PC_AnimState_UseRootMotionBase_C_ReceiveEndPlay_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_PC_AnimState_UseRootMotionBase.BP_PF_PC_AnimState_UseRootMotionBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UASAnimationSet*         AnimationSet                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_PC_AnimState_UseRootMotionBase_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_PC_AnimState_UseRootMotionBase.BP_PF_PC_AnimState_UseRootMotionBase_C.ReceiveBeginPlay");

	UBP_PF_PC_AnimState_UseRootMotionBase_C_ReceiveBeginPlay_Params params;
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
