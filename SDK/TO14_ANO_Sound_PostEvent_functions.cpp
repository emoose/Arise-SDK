
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

// Function TO14_ANO_Sound_PostEvent.TO14_ANO_Sound_PostEvent_C.PostEventInternal
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAkComponent*            Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UMeshComponent*          MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_ANO_Sound_PostEvent_C::PostEventInternal(class UAkComponent* Component, const struct FVector& Location, class UMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_Sound_PostEvent.TO14_ANO_Sound_PostEvent_C.PostEventInternal");

	UTO14_ANO_Sound_PostEvent_C_PostEventInternal_Params params;
	params.Component = Component;
	params.Location = Location;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_ANO_Sound_PostEvent.TO14_ANO_Sound_PostEvent_C.GetEventName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, OutParm, ZeroConstructor)

void UTO14_ANO_Sound_PostEvent_C::GetEventName(struct FString* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_Sound_PostEvent.TO14_ANO_Sound_PostEvent_C.GetEventName");

	UTO14_ANO_Sound_PostEvent_C_GetEventName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventName != nullptr)
		*EventName = params.EventName;
}


// Function TO14_ANO_Sound_PostEvent.TO14_ANO_Sound_PostEvent_C.Received_Notify
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_ANO_Sound_PostEvent_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_ANO_Sound_PostEvent.TO14_ANO_Sound_PostEvent_C.Received_Notify");

	UTO14_ANO_Sound_PostEvent_C_Received_Notify_Params params;
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
