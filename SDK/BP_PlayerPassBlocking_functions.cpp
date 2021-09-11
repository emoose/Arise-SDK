
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

// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_PlayerPassBlocking_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.GetOutlinerFolderPath");

	ABP_PlayerPassBlocking_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PlayerPassBlocking_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.GetOutlinerLabelName");

	ABP_PlayerPassBlocking_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.SystemBlockManagement
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPassBlocking_C::SystemBlockManagement(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.SystemBlockManagement");

	ABP_PlayerPassBlocking_C_SystemBlockManagement_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.DoProcess
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::DoProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.DoProcess");

	ABP_PlayerPassBlocking_C_DoProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.RunNpcTalkScript
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::RunNpcTalkScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.RunNpcTalkScript");

	ABP_PlayerPassBlocking_C_RunNpcTalkScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.GetDatabaseRow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPassBlockData          Record                         (Parm, OutParm)

void ABP_PlayerPassBlocking_C::GetDatabaseRow(struct FPassBlockData* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.GetDatabaseRow");

	ABP_PlayerPassBlocking_C_GetDatabaseRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.CanAcceptBlockAction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPassBlocking_C::CanAcceptBlockAction(bool* bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.CanAcceptBlockAction");

	ABP_PlayerPassBlocking_C_CanAcceptBlockAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.RunScript
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::RunScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.RunScript");

	ABP_PlayerPassBlocking_C_RunScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ResizeAndRelocationPM
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::ResizeAndRelocationPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ResizeAndRelocationPM");

	ABP_PlayerPassBlocking_C_ResizeAndRelocationPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.SwitchScenarioCondition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::SwitchScenarioCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.SwitchScenarioCondition");

	ABP_PlayerPassBlocking_C_SwitchScenarioCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.UserConstructionScript");

	ABP_PlayerPassBlocking_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPassBlocking_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ReceiveTick");

	ABP_PlayerPassBlocking_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.BndEvt__Blocking_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              HIT                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PlayerPassBlocking_C::BndEvt__Blocking_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& HIT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.BndEvt__Blocking_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_PlayerPassBlocking_C_BndEvt__Blocking_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.HIT = HIT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.BndEvt__Overlaped_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PlayerPassBlocking_C::BndEvt__Overlaped_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.BndEvt__Overlaped_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_PlayerPassBlocking_C_BndEvt__Overlaped_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.BndEvt__Overlaped_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPassBlocking_C::BndEvt__Overlaped_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.BndEvt__Overlaped_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	ABP_PlayerPassBlocking_C_BndEvt__Overlaped_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerPassBlocking_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ReceiveBeginPlay");

	ABP_PlayerPassBlocking_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnChangeScenarioCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPassBlocking_C::OnChangeScenarioCounter(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnChangeScenarioCounter");

	ABP_PlayerPassBlocking_C_OnChangeScenarioCounter_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnChangeScenarioFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPassBlocking_C::OnChangeScenarioFlag(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnChangeScenarioFlag");

	ABP_PlayerPassBlocking_C_OnChangeScenarioFlag_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPassBlocking_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ReceiveEndPlay");

	ABP_PlayerPassBlocking_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnWatchScriptEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::OnWatchScriptEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnWatchScriptEvent");

	ABP_PlayerPassBlocking_C_OnWatchScriptEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnPlayEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::OnPlayEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnPlayEvent");

	ABP_PlayerPassBlocking_C_OnPlayEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnShowEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::OnShowEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnShowEvent");

	ABP_PlayerPassBlocking_C_OnShowEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnShowSysBlockMessage
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::OnShowSysBlockMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.OnShowSysBlockMessage");

	ABP_PlayerPassBlocking_C_OnShowSysBlockMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.Set NPC PassBlocking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPassBlocking_C::Set_NPC_PassBlocking(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.Set NPC PassBlocking");

	ABP_PlayerPassBlocking_C_Set_NPC_PassBlocking_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.EventDelayShowMessage
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::EventDelayShowMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.EventDelayShowMessage");

	ABP_PlayerPassBlocking_C_EventDelayShowMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ExecuteUbergraph_BP_PlayerPassBlocking
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPassBlocking_C::ExecuteUbergraph_BP_PlayerPassBlocking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.ExecuteUbergraph_BP_PlayerPassBlocking");

	ABP_PlayerPassBlocking_C_ExecuteUbergraph_BP_PlayerPassBlocking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.DoPlayEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::DoPlayEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.DoPlayEvent__DelegateSignature");

	ABP_PlayerPassBlocking_C_DoPlayEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.WatchScriptProcess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPassBlocking_C::WatchScriptProcess__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerPassBlocking.BP_PlayerPassBlocking_C.WatchScriptProcess__DelegateSignature");

	ABP_PlayerPassBlocking_C_WatchScriptProcess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
