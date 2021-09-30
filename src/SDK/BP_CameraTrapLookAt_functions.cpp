
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

// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.EndOverlapCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CameraTrapLookAt_C::EndOverlapCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.EndOverlapCheck");

	ABP_CameraTrapLookAt_C_EndOverlapCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.CanPlayEvents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bPlayEvent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayQuest                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayCamp                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayLongChat                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CameraTrapLookAt_C::CanPlayEvents(bool* bPlayEvent, bool* bPlayQuest, bool* bPlayCamp, bool* bPlayLongChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.CanPlayEvents");

	ABP_CameraTrapLookAt_C_CanPlayEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPlayEvent != nullptr)
		*bPlayEvent = params.bPlayEvent;
	if (bPlayQuest != nullptr)
		*bPlayQuest = params.bPlayQuest;
	if (bPlayCamp != nullptr)
		*bPlayCamp = params.bPlayCamp;
	if (bPlayLongChat != nullptr)
		*bPlayLongChat = params.bPlayLongChat;
}


// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.IsScenarioSatisfyCondition
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CameraTrapLookAt_C::IsScenarioSatisfyCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.IsScenarioSatisfyCondition");

	ABP_CameraTrapLookAt_C_IsScenarioSatisfyCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CameraTrapLookAt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.UserConstructionScript");

	ABP_CameraTrapLookAt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraTrapLookAt_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ReceiveTick");

	ABP_CameraTrapLookAt_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_CameraTrapLookAt_C::BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_CameraTrapLookAt_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraTrapLookAt_C::BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_CameraTrapLookAt_C_BndEvt__Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CameraTrapLookAt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ReceiveBeginPlay");

	ABP_CameraTrapLookAt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraTrapLookAt_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ReceiveEndPlay");

	ABP_CameraTrapLookAt_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ExecuteUbergraph_BP_CameraTrapLookAt
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraTrapLookAt_C::ExecuteUbergraph_BP_CameraTrapLookAt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapLookAt.BP_CameraTrapLookAt_C.ExecuteUbergraph_BP_CameraTrapLookAt");

	ABP_CameraTrapLookAt_C_ExecuteUbergraph_BP_CameraTrapLookAt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
