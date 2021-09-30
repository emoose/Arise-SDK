
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

// Function TO14_ANO_PostEvent_FootStep.TO14_ANO_PostEvent_FootStep_C.Received_Notify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_ANO_PostEvent_FootStep_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_PostEvent_FootStep.TO14_ANO_PostEvent_FootStep_C.Received_Notify");

	UTO14_ANO_PostEvent_FootStep_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_ANO_PostEvent_FootStep.TO14_ANO_PostEvent_FootStep_C.GetModelID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAkComponent*            AkComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 State                          (Parm, OutParm, ZeroConstructor)

void UTO14_ANO_PostEvent_FootStep_C::GetModelID(class UAkComponent* AkComponent, struct FString* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_PostEvent_FootStep.TO14_ANO_PostEvent_FootStep_C.GetModelID");

	UTO14_ANO_PostEvent_FootStep_C_GetModelID_Params params;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function TO14_ANO_PostEvent_FootStep.TO14_ANO_PostEvent_FootStep_C.SetSwitchGroup
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAkComponent*            AkComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_ANO_PostEvent_FootStep_C::SetSwitchGroup(class UAkComponent* AkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_PostEvent_FootStep.TO14_ANO_PostEvent_FootStep_C.SetSwitchGroup");

	UTO14_ANO_PostEvent_FootStep_C_SetSwitchGroup_Params params;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_ANO_PostEvent_FootStep.TO14_ANO_PostEvent_FootStep_C.GetSwitchState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAkComponent*            AkComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 State                          (Parm, OutParm, ZeroConstructor)

void UTO14_ANO_PostEvent_FootStep_C::GetSwitchState(class UAkComponent* AkComponent, struct FString* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_PostEvent_FootStep.TO14_ANO_PostEvent_FootStep_C.GetSwitchState");

	UTO14_ANO_PostEvent_FootStep_C_GetSwitchState_Params params;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function TO14_ANO_PostEvent_FootStep.TO14_ANO_PostEvent_FootStep_C.GetSwitchGroup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAkComponent*            AkComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Group                          (Parm, OutParm, ZeroConstructor)

void UTO14_ANO_PostEvent_FootStep_C::GetSwitchGroup(class UAkComponent* AkComponent, struct FString* Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_PostEvent_FootStep.TO14_ANO_PostEvent_FootStep_C.GetSwitchGroup");

	UTO14_ANO_PostEvent_FootStep_C_GetSwitchGroup_Params params;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Group != nullptr)
		*Group = params.Group;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
