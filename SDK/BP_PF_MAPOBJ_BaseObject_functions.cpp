
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

// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetActiveCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PF_MAPOBJ_BaseObject_C::GetActiveCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetActiveCondition");

	ABP_PF_MAPOBJ_BaseObject_C_GetActiveCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.IsEnableChangeState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PF_MAPOBJ_BaseObject_C::IsEnableChangeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.IsEnableChangeState");

	ABP_PF_MAPOBJ_BaseObject_C_IsEnableChangeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetDebShowInfoMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutMessage                     (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            OutColor                       (Parm, OutParm, IsPlainOldData)

void ABP_PF_MAPOBJ_BaseObject_C::GetDebShowInfoMessage(bool* bValid, struct FString* OutMessage, struct FLinearColor* OutColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetDebShowInfoMessage");

	ABP_PF_MAPOBJ_BaseObject_C_GetDebShowInfoMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (OutMessage != nullptr)
		*OutMessage = params.OutMessage;
	if (OutColor != nullptr)
		*OutColor = params.OutColor;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Received_OnChangeState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PF_MAPOBJ_BaseObject_C::Received_OnChangeState(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Received_OnChangeState");

	ABP_PF_MAPOBJ_BaseObject_C_Received_OnChangeState_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ChangeActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BaseObject_C::ChangeActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ChangeActive");

	ABP_PF_MAPOBJ_BaseObject_C_ChangeActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.SetRecieverEnable
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BaseObject_C::SetRecieverEnable(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.SetRecieverEnable");

	ABP_PF_MAPOBJ_BaseObject_C_SetRecieverEnable_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveUpdateActive
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BaseObject_C::ReceiveUpdateActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveUpdateActive");

	ABP_PF_MAPOBJ_BaseObject_C_ReceiveUpdateActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.UpdateActive
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BaseObject_C::UpdateActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.UpdateActive");

	ABP_PF_MAPOBJ_BaseObject_C_UpdateActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetCurrentQuestComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBP_QuestComponent_C*    Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PF_MAPOBJ_BaseObject_C::GetCurrentQuestComponent(class UBP_QuestComponent_C** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetCurrentQuestComponent");

	ABP_PF_MAPOBJ_BaseObject_C_GetCurrentQuestComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.CheckQuest
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BaseObject_C::CheckQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.CheckQuest");

	ABP_PF_MAPOBJ_BaseObject_C_CheckQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetMinimapIconName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void ABP_PF_MAPOBJ_BaseObject_C::GetMinimapIconName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.GetMinimapIconName");

	ABP_PF_MAPOBJ_BaseObject_C_GetMinimapIconName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.OnFoundTrapIn
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BaseObject_C::OnFoundTrapIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.OnFoundTrapIn");

	ABP_PF_MAPOBJ_BaseObject_C_OnFoundTrapIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BaseObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.UserConstructionScript");

	ABP_PF_MAPOBJ_BaseObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveOnConstruction
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_MAPOBJ_BaseObject_C::ReceiveOnConstruction(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveOnConstruction");

	ABP_PF_MAPOBJ_BaseObject_C_ReceiveOnConstruction_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Event OnFoundTrapIn
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_MAPOBJ_BaseObject_C::Event_OnFoundTrapIn(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Event OnFoundTrapIn");

	ABP_PF_MAPOBJ_BaseObject_C_Event_OnFoundTrapIn_Params params;
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


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.DB_ShowInformation
// (Event, Protected, BlueprintEvent)

void ABP_PF_MAPOBJ_BaseObject_C::DB_ShowInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.DB_ShowInformation");

	ABP_PF_MAPOBJ_BaseObject_C_DB_ShowInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_MAPOBJ_BaseObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveBeginPlay");

	ABP_PF_MAPOBJ_BaseObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Event OnChangeScenarioCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BaseObject_C::Event_OnChangeScenarioCounter(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Event OnChangeScenarioCounter");

	ABP_PF_MAPOBJ_BaseObject_C_Event_OnChangeScenarioCounter_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Event OnChageScenarioFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BaseObject_C::Event_OnChageScenarioFlag(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.Event OnChageScenarioFlag");

	ABP_PF_MAPOBJ_BaseObject_C_Event_OnChageScenarioFlag_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BaseObject_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ReceiveEndPlay");

	ABP_PF_MAPOBJ_BaseObject_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.RequestUpdateActive
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_BaseObject_C::RequestUpdateActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.RequestUpdateActive");

	ABP_PF_MAPOBJ_BaseObject_C_RequestUpdateActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ExecuteUbergraph_BP_PF_MAPOBJ_BaseObject
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_BaseObject_C::ExecuteUbergraph_BP_PF_MAPOBJ_BaseObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_BaseObject.BP_PF_MAPOBJ_BaseObject_C.ExecuteUbergraph_BP_PF_MAPOBJ_BaseObject");

	ABP_PF_MAPOBJ_BaseObject_C_ExecuteUbergraph_BP_PF_MAPOBJ_BaseObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
