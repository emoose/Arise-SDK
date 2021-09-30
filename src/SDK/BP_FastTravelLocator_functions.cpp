
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

// Function BP_FastTravelLocator.BP_FastTravelLocator_C.DrawDebugArea
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FastTravelLocator_C::DrawDebugArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FastTravelLocator.BP_FastTravelLocator_C.DrawDebugArea");

	ABP_FastTravelLocator_C_DrawDebugArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FastTravelLocator.BP_FastTravelLocator_C.IsPlayerCollision?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bPlayer                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FastTravelLocator_C::IsPlayerCollision_(class AActor* Actor, class UPrimitiveComponent* Component, bool* bPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FastTravelLocator.BP_FastTravelLocator_C.IsPlayerCollision?");

	ABP_FastTravelLocator_C_IsPlayerCollision__Params params;
	params.Actor = Actor;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPlayer != nullptr)
		*bPlayer = params.bPlayer;
}


// Function BP_FastTravelLocator.BP_FastTravelLocator_C.UpdateMeshSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FastTravelLocator_C::UpdateMeshSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FastTravelLocator.BP_FastTravelLocator_C.UpdateMeshSize");

	ABP_FastTravelLocator_C_UpdateMeshSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FastTravelLocator.BP_FastTravelLocator_C.ResizeArea
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FastTravelLocator_C::ResizeArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FastTravelLocator.BP_FastTravelLocator_C.ResizeArea");

	ABP_FastTravelLocator_C_ResizeArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FastTravelLocator.BP_FastTravelLocator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FastTravelLocator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FastTravelLocator.BP_FastTravelLocator_C.UserConstructionScript");

	ABP_FastTravelLocator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FastTravelLocator.BP_FastTravelLocator_C.BndEvt__InteractionArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_FastTravelLocator_C::BndEvt__InteractionArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FastTravelLocator.BP_FastTravelLocator_C.BndEvt__InteractionArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_FastTravelLocator_C_BndEvt__InteractionArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FastTravelLocator.BP_FastTravelLocator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FastTravelLocator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FastTravelLocator.BP_FastTravelLocator_C.ReceiveBeginPlay");

	ABP_FastTravelLocator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FastTravelLocator.BP_FastTravelLocator_C.ExecuteUbergraph_BP_FastTravelLocator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FastTravelLocator_C::ExecuteUbergraph_BP_FastTravelLocator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FastTravelLocator.BP_FastTravelLocator_C.ExecuteUbergraph_BP_FastTravelLocator");

	ABP_FastTravelLocator_C_ExecuteUbergraph_BP_FastTravelLocator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
