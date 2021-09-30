
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

// Function BP_EventAreaBase.BP_EventAreaBase_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_EventAreaBase_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.GetOutlinerFolderPath");

	ABP_EventAreaBase_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_EventAreaBase_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.GetOutlinerLabelName");

	ABP_EventAreaBase_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C._ClearFreeObjectPoolNpc
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::_ClearFreeObjectPoolNpc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C._ClearFreeObjectPoolNpc");

	ABP_EventAreaBase_C__ClearFreeObjectPoolNpc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C._DespawnNpc
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::_DespawnNpc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C._DespawnNpc");

	ABP_EventAreaBase_C__DespawnNpc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C._SetPreMapJumped
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::_SetPreMapJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C._SetPreMapJumped");

	ABP_EventAreaBase_C__SetPreMapJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C._SetMapJumped
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::_SetMapJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C._SetMapJumped");

	ABP_EventAreaBase_C__SetMapJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C._SetAreaMeshColor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::_SetAreaMeshColor(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C._SetAreaMeshColor");

	ABP_EventAreaBase_C__SetAreaMeshColor_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C._BuildProcedualMesh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::_BuildProcedualMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C._BuildProcedualMesh");

	ABP_EventAreaBase_C__BuildProcedualMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C._SceneStateCheck
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bOk                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::_SceneStateCheck(bool* bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C._SceneStateCheck");

	ABP_EventAreaBase_C__SceneStateCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOk != nullptr)
		*bOk = params.bOk;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C._ScreenMaskedOnMapjumpEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::_ScreenMaskedOnMapjumpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C._ScreenMaskedOnMapjumpEvent");

	ABP_EventAreaBase_C__ScreenMaskedOnMapjumpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C._IsNpcSpawned
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCheckedSpawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSpawnedOrDontCare             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::_IsNpcSpawned(bool bCheckedSpawn, bool* bSpawnedOrDontCare)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C._IsNpcSpawned");

	ABP_EventAreaBase_C__IsNpcSpawned_Params params;
	params.bCheckedSpawn = bCheckedSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSpawnedOrDontCare != nullptr)
		*bSpawnedOrDontCare = params.bSpawnedOrDontCare;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C._SpawnNpc
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawn                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::_SpawnNpc(bool* bSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C._SpawnNpc");

	ABP_EventAreaBase_C__SpawnNpc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSpawn != nullptr)
		*bSpawn = params.bSpawn;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.DebugEventStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::DebugEventStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.DebugEventStart");

	ABP_EventAreaBase_C_DebugEventStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.CheckIligalCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::CheckIligalCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.CheckIligalCollision");

	ABP_EventAreaBase_C_CheckIligalCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.SetEventAreaCollisionEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::SetEventAreaCollisionEnable(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.SetEventAreaCollisionEnable");

	ABP_EventAreaBase_C_SetEventAreaCollisionEnable_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.ResizeEventArea
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::ResizeEventArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.ResizeEventArea");

	ABP_EventAreaBase_C_ResizeEventArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.UpdateMeshSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::UpdateMeshSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.UpdateMeshSize");

	ABP_EventAreaBase_C_UpdateMeshSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.CanPlayEvent?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCanPlay                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::CanPlayEvent_(bool* bCanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.CanPlayEvent?");

	ABP_EventAreaBase_C_CanPlayEvent__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanPlay != nullptr)
		*bCanPlay = params.bCanPlay;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.UpdateDebugText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bConstruction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::UpdateDebugText(bool bConstruction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.UpdateDebugText");

	ABP_EventAreaBase_C_UpdateDebugText_Params params;
	params.bConstruction = bConstruction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.EnableEventCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::EnableEventCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.EnableEventCollision");

	ABP_EventAreaBase_C_EnableEventCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.IsPlayerCollision?
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bPlayer                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::IsPlayerCollision_(class AActor* Actor, class UPrimitiveComponent* Component, bool* bPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.IsPlayerCollision?");

	ABP_EventAreaBase_C_IsPlayerCollision__Params params;
	params.Actor = Actor;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPlayer != nullptr)
		*bPlayer = params.bPlayer;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.UserConstructionScript");

	ABP_EventAreaBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.OnPlayEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::OnPlayEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.OnPlayEvent");

	ABP_EventAreaBase_C_OnPlayEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.OnScenarioCounterChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::OnScenarioCounterChange(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.OnScenarioCounterChange");

	ABP_EventAreaBase_C_OnScenarioCounterChange_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.OnMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EventAreaBase_C::OnMapChange(const struct FString& OldMapName, const struct FString& NewMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.OnMapChange");

	ABP_EventAreaBase_C_OnMapChange_Params params;
	params.OldMapName = OldMapName;
	params.NewMapName = NewMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.OnFieldWakeup
// (BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::OnFieldWakeup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.OnFieldWakeup");

	ABP_EventAreaBase_C_OnFieldWakeup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.OnScenarioFlagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::OnScenarioFlagChange(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.OnScenarioFlagChange");

	ABP_EventAreaBase_C_OnScenarioFlagChange_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_EventAreaBase_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.ReceiveEndPlay");

	ABP_EventAreaBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.ReceiveTick");

	ABP_EventAreaBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_EventAreaBase_C::BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_EventAreaBase_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_EventAreaBase.BP_EventAreaBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EventAreaBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.ReceiveBeginPlay");

	ABP_EventAreaBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.OnLoadGame
// (BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::OnLoadGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.OnLoadGame");

	ABP_EventAreaBase_C_OnLoadGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.On Event Finalize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OptionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EventAreaBase_C::On_Event_Finalize(const struct FString& EventName, const struct FString& OptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.On Event Finalize");

	ABP_EventAreaBase_C_On_Event_Finalize_Params params;
	params.EventName = EventName;
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.ExecuteUbergraph_BP_EventAreaBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventAreaBase_C::ExecuteUbergraph_BP_EventAreaBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.ExecuteUbergraph_BP_EventAreaBase");

	ABP_EventAreaBase_C_ExecuteUbergraph_BP_EventAreaBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventAreaBase.BP_EventAreaBase_C.DoPlayEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EventAreaBase_C::DoPlayEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventAreaBase.BP_EventAreaBase_C.DoPlayEvent__DelegateSignature");

	ABP_EventAreaBase_C_DoPlayEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
