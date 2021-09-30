
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

// Function BP_PF_AnimNotifyState_InputUTurnEnable.BP_PF_AnimNotifyState_InputUTurnEnable_C.Received_NotifyEnd
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PF_AnimNotifyState_InputUTurnEnable_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AnimNotifyState_InputUTurnEnable.BP_PF_AnimNotifyState_InputUTurnEnable_C.Received_NotifyEnd");

	UBP_PF_AnimNotifyState_InputUTurnEnable_C_Received_NotifyEnd_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_AnimNotifyState_InputUTurnEnable.BP_PF_AnimNotifyState_InputUTurnEnable_C.SetInputUTurnEnable
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AnimNotifyState_InputUTurnEnable_C::SetInputUTurnEnable(class AActor* InActor, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AnimNotifyState_InputUTurnEnable.BP_PF_AnimNotifyState_InputUTurnEnable_C.SetInputUTurnEnable");

	UBP_PF_AnimNotifyState_InputUTurnEnable_C_SetInputUTurnEnable_Params params;
	params.InActor = InActor;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_AnimNotifyState_InputUTurnEnable.BP_PF_AnimNotifyState_InputUTurnEnable_C.Received_NotifyBegin
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PF_AnimNotifyState_InputUTurnEnable_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AnimNotifyState_InputUTurnEnable.BP_PF_AnimNotifyState_InputUTurnEnable_C.Received_NotifyBegin");

	UBP_PF_AnimNotifyState_InputUTurnEnable_C_Received_NotifyBegin_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
