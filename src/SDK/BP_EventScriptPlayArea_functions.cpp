
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

// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_EventScriptPlayArea_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.GetOutlinerFolderPath");

	ABP_EventScriptPlayArea_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_EventScriptPlayArea_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.GetOutlinerLabelName");

	ABP_EventScriptPlayArea_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.SetPreMapJumped
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::SetPreMapJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.SetPreMapJumped");

	ABP_EventScriptPlayArea_C_SetPreMapJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.DestroyProcess
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::DestroyProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.DestroyProcess");

	ABP_EventScriptPlayArea_C_DestroyProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._ScreenMaskedOnMapjumpEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::_ScreenMaskedOnMapjumpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._ScreenMaskedOnMapjumpEvent");

	ABP_EventScriptPlayArea_C__ScreenMaskedOnMapjumpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.SetMapJumped
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::SetMapJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.SetMapJumped");

	ABP_EventScriptPlayArea_C_SetMapJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._AutoSaveResume
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::_AutoSaveResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._AutoSaveResume");

	ABP_EventScriptPlayArea_C__AutoSaveResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._AutoSaveSuspend
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::_AutoSaveSuspend()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._AutoSaveSuspend");

	ABP_EventScriptPlayArea_C__AutoSaveSuspend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._SceneStateCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bOk                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventScriptPlayArea_C::_SceneStateCheck(bool* bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C._SceneStateCheck");

	ABP_EventScriptPlayArea_C__SceneStateCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOk != nullptr)
		*bOk = params.bOk;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.CheckRestartArea
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::CheckRestartArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.CheckRestartArea");

	ABP_EventScriptPlayArea_C_CheckRestartArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.UnloadScript
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::UnloadScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.UnloadScript");

	ABP_EventScriptPlayArea_C_UnloadScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.LoadScript
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::LoadScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.LoadScript");

	ABP_EventScriptPlayArea_C_LoadScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.DoProcess
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::DoProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.DoProcess");

	ABP_EventScriptPlayArea_C_DoProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.CanPlayEvent?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCanPlay                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventScriptPlayArea_C::CanPlayEvent_(bool* bCanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.CanPlayEvent?");

	ABP_EventScriptPlayArea_C_CanPlayEvent__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanPlay != nullptr)
		*bCanPlay = params.bCanPlay;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.IsSatisfyScenarioCondition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSatisfy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventScriptPlayArea_C::IsSatisfyScenarioCondition(bool* bSatisfy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.IsSatisfyScenarioCondition");

	ABP_EventScriptPlayArea_C_IsSatisfyScenarioCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSatisfy != nullptr)
		*bSatisfy = params.bSatisfy;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ScenarioFlagCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bOn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventScriptPlayArea_C::ScenarioFlagCheck(bool* bOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ScenarioFlagCheck");

	ABP_EventScriptPlayArea_C_ScenarioFlagCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOn != nullptr)
		*bOn = params.bOn;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.UpdateMeshSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::UpdateMeshSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.UpdateMeshSize");

	ABP_EventScriptPlayArea_C_UpdateMeshSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.RunScript
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::RunScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.RunScript");

	ABP_EventScriptPlayArea_C_RunScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.IsPlayerActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayer                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventScriptPlayArea_C::IsPlayerActor(class AActor* Actor, bool* bPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.IsPlayerActor");

	ABP_EventScriptPlayArea_C_IsPlayerActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPlayer != nullptr)
		*bPlayer = params.bPlayer;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ResizeArea
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::ResizeArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ResizeArea");

	ABP_EventScriptPlayArea_C_ResizeArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.UserConstructionScript");

	ABP_EventScriptPlayArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.Setup Event Dispatchers
// (BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::Setup_Event_Dispatchers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.Setup Event Dispatchers");

	ABP_EventScriptPlayArea_C_Setup_Event_Dispatchers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnPlayScript
// (BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::OnPlayScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnPlayScript");

	ABP_EventScriptPlayArea_C_OnPlayScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnChangeScenario
// (BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::OnChangeScenario()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnChangeScenario");

	ABP_EventScriptPlayArea_C_OnChangeScenario_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EventScriptPlayArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ReceiveBeginPlay");

	ABP_EventScriptPlayArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventScriptPlayArea_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ReceiveTick");

	ABP_EventScriptPlayArea_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnWatchEventScript
// (BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::OnWatchEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnWatchEventScript");

	ABP_EventScriptPlayArea_C_OnWatchEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.BndEvt__PlayArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_EventScriptPlayArea_C::BndEvt__PlayArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.BndEvt__PlayArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_EventScriptPlayArea_C_BndEvt__PlayArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.BndEvt__PlayArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventScriptPlayArea_C::BndEvt__PlayArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.BndEvt__PlayArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_EventScriptPlayArea_C_BndEvt__PlayArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EventScriptPlayArea_C::OnMapChange(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnMapChange");

	ABP_EventScriptPlayArea_C_OnMapChange_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventScriptPlayArea_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ReceiveEndPlay");

	ABP_EventScriptPlayArea_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnChangeScenarioFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventScriptPlayArea_C::OnChangeScenarioFlag(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnChangeScenarioFlag");

	ABP_EventScriptPlayArea_C_OnChangeScenarioFlag_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnChangeScenarioCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventScriptPlayArea_C::OnChangeScenarioCounter(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.OnChangeScenarioCounter");

	ABP_EventScriptPlayArea_C_OnChangeScenarioCounter_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ExecuteUbergraph_BP_EventScriptPlayArea
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventScriptPlayArea_C::ExecuteUbergraph_BP_EventScriptPlayArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ExecuteUbergraph_BP_EventScriptPlayArea");

	ABP_EventScriptPlayArea_C_ExecuteUbergraph_BP_EventScriptPlayArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ChangeScenarioEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::ChangeScenarioEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.ChangeScenarioEvent__DelegateSignature");

	ABP_EventScriptPlayArea_C_ChangeScenarioEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.PlayScriptProcess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::PlayScriptProcess__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.PlayScriptProcess__DelegateSignature");

	ABP_EventScriptPlayArea_C_PlayScriptProcess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.WatchScriptProcess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EventScriptPlayArea_C::WatchScriptProcess__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventScriptPlayArea.BP_EventScriptPlayArea_C.WatchScriptProcess__DelegateSignature");

	ABP_EventScriptPlayArea_C_WatchScriptProcess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
