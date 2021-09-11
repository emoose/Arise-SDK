
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

// Function BP_PF_AnimState_EnableRotationControl.BP_PF_AnimState_EnableRotationControl_C.SetRotationControlEnable
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           InAnimInstance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AnimState_EnableRotationControl_C::SetRotationControlEnable(class UAnimInstance* InAnimInstance, bool InEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AnimState_EnableRotationControl.BP_PF_AnimState_EnableRotationControl_C.SetRotationControlEnable");

	UBP_PF_AnimState_EnableRotationControl_C_SetRotationControlEnable_Params params;
	params.InAnimInstance = InAnimInstance;
	params.InEnable = InEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_AnimState_EnableRotationControl.BP_PF_AnimState_EnableRotationControl_C.ReceiveEndPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AnimState_EnableRotationControl_C::ReceiveEndPlay(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AnimState_EnableRotationControl.BP_PF_AnimState_EnableRotationControl_C.ReceiveEndPlay");

	UBP_PF_AnimState_EnableRotationControl_C_ReceiveEndPlay_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_AnimState_EnableRotationControl.BP_PF_AnimState_EnableRotationControl_C.ReceiveFinishedTick
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AnimState_EnableRotationControl_C::ReceiveFinishedTick(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AnimState_EnableRotationControl.BP_PF_AnimState_EnableRotationControl_C.ReceiveFinishedTick");

	UBP_PF_AnimState_EnableRotationControl_C_ReceiveFinishedTick_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_AnimState_EnableRotationControl.BP_PF_AnimState_EnableRotationControl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UASAnimationSet*         AnimationSet                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AnimState_EnableRotationControl_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AnimState_EnableRotationControl.BP_PF_AnimState_EnableRotationControl_C.ReceiveBeginPlay");

	UBP_PF_AnimState_EnableRotationControl_C_ReceiveBeginPlay_Params params;
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
