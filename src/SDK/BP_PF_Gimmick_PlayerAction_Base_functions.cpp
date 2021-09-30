
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

// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsOverScenarioFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::IsOverScenarioFlag(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsOverScenarioFlag");

	ABP_PF_Gimmick_PlayerAction_Base_C_IsOverScenarioFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.FreezeCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::FreezeCharacter(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.FreezeCharacter");

	ABP_PF_Gimmick_PlayerAction_Base_C_FreezeCharacter_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.GetTPCost
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::GetTPCost(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.GetTPCost");

	ABP_PF_Gimmick_PlayerAction_Base_C_GetTPCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ResetPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::ResetPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ResetPlayer");

	ABP_PF_Gimmick_PlayerAction_Base_C_ResetPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.UnlockProcess
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::UnlockProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.UnlockProcess");

	ABP_PF_Gimmick_PlayerAction_Base_C_UnlockProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsEnoughTP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::IsEnoughTP(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsEnoughTP");

	ABP_PF_Gimmick_PlayerAction_Base_C_IsEnoughTP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InteractLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PF_Gimmick_InteractActorBase_C* Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::InteractLock(class ABP_PF_Gimmick_InteractActorBase_C* Interact, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InteractLock");

	ABP_PF_Gimmick_PlayerAction_Base_C_InteractLock_Params params;
	params.Interact = Interact;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.DebugUnlocked
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::DebugUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.DebugUnlocked");

	ABP_PF_Gimmick_PlayerAction_Base_C_DebugUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InteractWakeup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PF_Gimmick_InteractActorBase_C* Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::InteractWakeup(class ABP_PF_Gimmick_InteractActorBase_C* Interact)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InteractWakeup");

	ABP_PF_Gimmick_PlayerAction_Base_C_InteractWakeup_Params params;
	params.Interact = Interact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InteractSleep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PF_Gimmick_InteractActorBase_C* Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::InteractSleep(class ABP_PF_Gimmick_InteractActorBase_C* Interact)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InteractSleep");

	ABP_PF_Gimmick_PlayerAction_Base_C_InteractSleep_Params params;
	params.Interact = Interact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.GetInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    ChildActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABP_PF_Gimmick_InteractActorBase_C* Result                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::GetInteract(class UChildActorComponent* ChildActor, class ABP_PF_Gimmick_InteractActorBase_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.GetInteract");

	ABP_PF_Gimmick_PlayerAction_Base_C_GetInteract_Params params;
	params.ChildActor = ChildActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.SelectShortChat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMapGimmickShortChatBlock> Params                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ID                             (Parm, OutParm, ZeroConstructor)
// float                          Interval                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::SelectShortChat(TArray<struct FMapGimmickShortChatBlock>* Params, struct FString* ID, float* Interval)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.SelectShortChat");

	ABP_PF_Gimmick_PlayerAction_Base_C_SelectShortChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
	if (ID != nullptr)
		*ID = params.ID;
	if (Interval != nullptr)
		*Interval = params.Interval;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.SetDebugLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::SetDebugLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.SetDebugLabel");

	ABP_PF_Gimmick_PlayerAction_Base_C_SetDebugLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.PlaySequencer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::PlaySequencer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.PlaySequencer");

	ABP_PF_Gimmick_PlayerAction_Base_C_PlaySequencer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ConsumeTP
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::ConsumeTP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ConsumeTP");

	ABP_PF_Gimmick_PlayerAction_Base_C_ConsumeTP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.CheckShortChatScenarioCondition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMapGimmickShortChatBlock> ShortChatBlock                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            idx                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::CheckShortChatScenarioCondition(TArray<struct FMapGimmickShortChatBlock>* ShortChatBlock, int* idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.CheckShortChatScenarioCondition");

	ABP_PF_Gimmick_PlayerAction_Base_C_CheckShortChatScenarioCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShortChatBlock != nullptr)
		*ShortChatBlock = params.ShortChatBlock;
	if (idx != nullptr)
		*idx = params.idx;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.PlayShortChat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ShortChatID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::PlayShortChat(const struct FString& ShortChatID, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.PlayShortChat");

	ABP_PF_Gimmick_PlayerAction_Base_C_PlayShortChat_Params params;
	params.ShortChatID = ShortChatID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RandomizeShortChat
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMapGimmickShortChatID> ShortChatID                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ID                             (Parm, OutParm, ZeroConstructor)
// float                          Interval                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::RandomizeShortChat(TArray<struct FMapGimmickShortChatID>* ShortChatID, struct FString* ID, float* Interval)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RandomizeShortChat");

	ABP_PF_Gimmick_PlayerAction_Base_C_RandomizeShortChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShortChatID != nullptr)
		*ShortChatID = params.ShortChatID;
	if (ID != nullptr)
		*ID = params.ID;
	if (Interval != nullptr)
		*Interval = params.Interval;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsMySelfEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Same                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::IsMySelfEvent(const struct FString& EventName, bool* Same)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsMySelfEvent");

	ABP_PF_Gimmick_PlayerAction_Base_C_IsMySelfEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Same != nullptr)
		*Same = params.Same;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.DebugEventStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::DebugEventStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.DebugEventStart");

	ABP_PF_Gimmick_PlayerAction_Base_C_DebugEventStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.UpdateDebugText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bConstruction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::UpdateDebugText(bool bConstruction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.UpdateDebugText");

	ABP_PF_Gimmick_PlayerAction_Base_C_UpdateDebugText_Params params;
	params.bConstruction = bConstruction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsPlayerCollision
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bPlayer                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::IsPlayerCollision(class AActor* Actor, class UPrimitiveComponent* Component, bool* bPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.IsPlayerCollision");

	ABP_PF_Gimmick_PlayerAction_Base_C_IsPlayerCollision_Params params;
	params.Actor = Actor;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPlayer != nullptr)
		*bPlayer = params.bPlayer;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.UserConstructionScript");

	ABP_PF_Gimmick_PlayerAction_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.PlayUnlockEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::PlayUnlockEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.PlayUnlockEvent");

	ABP_PF_Gimmick_PlayerAction_Base_C_PlayUnlockEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RunPostEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::RunPostEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RunPostEvent");

	ABP_PF_Gimmick_PlayerAction_Base_C_RunPostEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RunPreEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::RunPreEvent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RunPreEvent");

	ABP_PF_Gimmick_PlayerAction_Base_C_RunPreEvent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnLockInteraction
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::OnLockInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnLockInteraction");

	ABP_PF_Gimmick_PlayerAction_Base_C_OnLockInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnUnlockInteraction
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::OnUnlockInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnUnlockInteraction");

	ABP_PF_Gimmick_PlayerAction_Base_C_OnUnlockInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ReceiveBeginPlay");

	ABP_PF_Gimmick_PlayerAction_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnScenarioFlagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::OnScenarioFlagChange(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnScenarioFlagChange");

	ABP_PF_Gimmick_PlayerAction_Base_C_OnScenarioFlagChange_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnScenarioCounterChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::OnScenarioCounterChange(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnScenarioCounterChange");

	ABP_PF_Gimmick_PlayerAction_Base_C_OnScenarioCounterChange_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ReceiveEndPlay");

	ABP_PF_Gimmick_PlayerAction_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_Gimmick_PlayerAction_Base_C::OnMapChange(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnMapChange");

	ABP_PF_Gimmick_PlayerAction_Base_C_OnMapChange_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPostEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OptionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_Gimmick_PlayerAction_Base_C::OnPostEvent(const struct FString& EventName, const struct FString& OptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPostEvent");

	ABP_PF_Gimmick_PlayerAction_Base_C_OnPostEvent_Params params;
	params.EventName = EventName;
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.On Receive Interact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InSender                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::On_Receive_Interact(class AActor* InSender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.On Receive Interact");

	ABP_PF_Gimmick_PlayerAction_Base_C_On_Receive_Interact_Params params;
	params.InSender = InSender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnChangedScenarioCondition
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::OnChangedScenarioCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnChangedScenarioCondition");

	ABP_PF_Gimmick_PlayerAction_Base_C_OnChangedScenarioCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InitJustBeforePlaySequencer
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::InitJustBeforePlaySequencer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.InitJustBeforePlaySequencer");

	ABP_PF_Gimmick_PlayerAction_Base_C_InitJustBeforePlaySequencer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ReceiveOnConstruction
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::ReceiveOnConstruction(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ReceiveOnConstruction");

	ABP_PF_Gimmick_PlayerAction_Base_C_ReceiveOnConstruction_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnFoundTrapEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::OnFoundTrapEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnFoundTrapEvent");

	ABP_PF_Gimmick_PlayerAction_Base_C_OnFoundTrapEvent_Params params;
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


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPlayEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::OnPlayEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPlayEvent");

	ABP_PF_Gimmick_PlayerAction_Base_C_OnPlayEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.Unlocked
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::Unlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.Unlocked");

	ABP_PF_Gimmick_PlayerAction_Base_C_Unlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPostEventProcessNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_Gimmick_PlayerAction_Base_C::OnPostEventProcessNotify(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPostEventProcessNotify");

	ABP_PF_Gimmick_PlayerAction_Base_C_OnPostEventProcessNotify_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RunPostEventProcessNotify
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::RunPostEventProcessNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.RunPostEventProcessNotify");

	ABP_PF_Gimmick_PlayerAction_Base_C_RunPostEventProcessNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPFStart
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_Gimmick_PlayerAction_Base_C::OnPFStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.OnPFStart");

	ABP_PF_Gimmick_PlayerAction_Base_C_OnPFStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ExecuteUbergraph_BP_PF_Gimmick_PlayerAction_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_Gimmick_PlayerAction_Base_C::ExecuteUbergraph_BP_PF_Gimmick_PlayerAction_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_Gimmick_PlayerAction_Base.BP_PF_Gimmick_PlayerAction_Base_C.ExecuteUbergraph_BP_PF_Gimmick_PlayerAction_Base");

	ABP_PF_Gimmick_PlayerAction_Base_C_ExecuteUbergraph_BP_PF_Gimmick_PlayerAction_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
