
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

// Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.SetSwitchGroup
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAkComponent*            AkComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_ANO_Sound_PosstEventBase_C::SetSwitchGroup(class UAkComponent* AkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.SetSwitchGroup");

	UTO14_ANO_Sound_PosstEventBase_C_SetSwitchGroup_Params params;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.GetSwitchState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAkComponent*            AkComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 State                          (Parm, OutParm, ZeroConstructor)

void UTO14_ANO_Sound_PosstEventBase_C::GetSwitchState(class UAkComponent* AkComponent, struct FString* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.GetSwitchState");

	UTO14_ANO_Sound_PosstEventBase_C_GetSwitchState_Params params;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.GetSwitchGroup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAkComponent*            AkComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Group                          (Parm, OutParm, ZeroConstructor)

void UTO14_ANO_Sound_PosstEventBase_C::GetSwitchGroup(class UAkComponent* AkComponent, struct FString* Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.GetSwitchGroup");

	UTO14_ANO_Sound_PosstEventBase_C_GetSwitchGroup_Params params;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Group != nullptr)
		*Group = params.Group;
}


// Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.PostEventInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAkComponent*            Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UMeshComponent*          MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_ANO_Sound_PosstEventBase_C::PostEventInternal(class UAkComponent* Component, const struct FVector& Location, class UMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.PostEventInternal");

	UTO14_ANO_Sound_PosstEventBase_C_PostEventInternal_Params params;
	params.Component = Component;
	params.Location = Location;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.GetEventName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, OutParm, ZeroConstructor)

void UTO14_ANO_Sound_PosstEventBase_C::GetEventName(struct FString* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.GetEventName");

	UTO14_ANO_Sound_PosstEventBase_C_GetEventName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventName != nullptr)
		*EventName = params.EventName;
}


// Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.Received_Notify
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_ANO_Sound_PosstEventBase_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_Sound_PosstEventBase.TO14_ANO_Sound_PosstEventBase_C.Received_Notify");

	UTO14_ANO_Sound_PosstEventBase_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
