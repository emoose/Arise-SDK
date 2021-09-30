
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

// Function BP_ShortChatManager.BP_ShortChatManager_C.IsLockObjSC
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ShortChatManager_C::IsLockObjSC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.IsLockObjSC");

	ABP_ShortChatManager_C_IsLockObjSC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.MapChangeSC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InNewMapName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 InOldMapName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_ShortChatManager_C::MapChangeSC(const struct FString& InNewMapName, const struct FString& InOldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.MapChangeSC");

	ABP_ShortChatManager_C_MapChangeSC_Params params;
	params.InNewMapName = InNewMapName;
	params.InOldMapName = InOldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.OnChangeStateImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShortChatManager_C::OnChangeStateImpl(EAriseGameState State, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.OnChangeStateImpl");

	ABP_ShortChatManager_C_OnChangeStateImpl_Params params;
	params.State = State;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.ResetFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShortChatManager_C::ResetFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.ResetFlag");

	ABP_ShortChatManager_C_ResetFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.ForcePauseCancel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShortChatManager_C::ForcePauseCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.ForcePauseCancel");

	ABP_ShortChatManager_C_ForcePauseCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.IsStandbyState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ShortChatManager_C::IsStandbyState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.IsStandbyState");

	ABP_ShortChatManager_C_IsStandbyState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.SCPause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InPause                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArisePFSCPauseState           InState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShortChatManager_C::SCPause(bool InPause, EArisePFSCPauseState InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.SCPause");

	ABP_ShortChatManager_C_SCPause_Params params;
	params.InPause = InPause;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.GetCurrentLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_ShortChatManager_C::GetCurrentLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.GetCurrentLocation");

	ABP_ShortChatManager_C_GetCurrentLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShortChatManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.UserConstructionScript");

	ABP_ShortChatManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.InitCallback
// (BlueprintCallable, BlueprintEvent)

void ABP_ShortChatManager_C::InitCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.InitCallback");

	ABP_ShortChatManager_C_InitCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.OnMapChangeEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_ShortChatManager_C::OnMapChangeEnd(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.OnMapChangeEnd");

	ABP_ShortChatManager_C_OnMapChangeEnd_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.OnChangeStateBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShortChatManager_C::OnChangeStateBP(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.OnChangeStateBP");

	ABP_ShortChatManager_C_OnChangeStateBP_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.OnRequestAutoSave
// (BlueprintCallable, BlueprintEvent)

void ABP_ShortChatManager_C::OnRequestAutoSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.OnRequestAutoSave");

	ABP_ShortChatManager_C_OnRequestAutoSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.OnAutoSaveComplite
// (BlueprintCallable, BlueprintEvent)

void ABP_ShortChatManager_C::OnAutoSaveComplite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.OnAutoSaveComplite");

	ABP_ShortChatManager_C_OnAutoSaveComplite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.OnEndBattleScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlResultInfo          ResultInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ShortChatManager_C::OnEndBattleScene(const struct FBtlResultInfo& ResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.OnEndBattleScene");

	ABP_ShortChatManager_C_OnEndBattleScene_Params params;
	params.ResultInfo = ResultInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.StartShortChat
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 FaceIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ShortChatManager_C::StartShortChat(const struct FString& FaceIcon, const struct FString& Speaker, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.StartShortChat");

	ABP_ShortChatManager_C_StartShortChat_Params params;
	params.FaceIcon = FaceIcon;
	params.Speaker = Speaker;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.EndShortChat
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bAbort                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShortChatManager_C::EndShortChat(bool bAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.EndShortChat");

	ABP_ShortChatManager_C_EndShortChat_Params params;
	params.bAbort = bAbort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShortChatManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.ReceiveTick");

	ABP_ShortChatManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShortChatManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.ReceiveBeginPlay");

	ABP_ShortChatManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShortChatManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.ReceiveEndPlay");

	ABP_ShortChatManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.ResumeShortChat
// (Event, Public, BlueprintEvent)

void ABP_ShortChatManager_C::ResumeShortChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.ResumeShortChat");

	ABP_ShortChatManager_C_ResumeShortChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.PauseShortChat
// (Event, Public, BlueprintEvent)

void ABP_ShortChatManager_C::PauseShortChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.PauseShortChat");

	ABP_ShortChatManager_C_PauseShortChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.OnReadyEvent
// (Event, Public, BlueprintEvent)

void ABP_ShortChatManager_C::OnReadyEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.OnReadyEvent");

	ABP_ShortChatManager_C_OnReadyEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.OnInitEvent
// (Event, Public, BlueprintEvent)

void ABP_ShortChatManager_C::OnInitEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.OnInitEvent");

	ABP_ShortChatManager_C_OnInitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.ResumeShortChatUI
// (Event, Public, BlueprintEvent)

void ABP_ShortChatManager_C::ResumeShortChatUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.ResumeShortChatUI");

	ABP_ShortChatManager_C_ResumeShortChatUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.ExecutePause
// (Event, Public, BlueprintEvent)
// Parameters:
// EArisePFSCPauseState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShortChatManager_C::ExecutePause(EArisePFSCPauseState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.ExecutePause");

	ABP_ShortChatManager_C_ExecutePause_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.ExecuteReleasePause
// (Event, Public, BlueprintEvent)
// Parameters:
// EArisePFSCPauseState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShortChatManager_C::ExecuteReleasePause(EArisePFSCPauseState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.ExecuteReleasePause");

	ABP_ShortChatManager_C_ExecuteReleasePause_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.LockMapChangeSC
// (Event, Public, BlueprintEvent)

void ABP_ShortChatManager_C::LockMapChangeSC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.LockMapChangeSC");

	ABP_ShortChatManager_C_LockMapChangeSC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShortChatManager.BP_ShortChatManager_C.ExecuteUbergraph_BP_ShortChatManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShortChatManager_C::ExecuteUbergraph_BP_ShortChatManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShortChatManager.BP_ShortChatManager_C.ExecuteUbergraph_BP_ShortChatManager");

	ABP_ShortChatManager_C_ExecuteUbergraph_BP_ShortChatManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
