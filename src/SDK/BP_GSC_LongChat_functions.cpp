
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

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.SetupPrePFStartOperation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::SetupPrePFStartOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.SetupPrePFStartOperation");

	UBP_GSC_LongChat_C_SetupPrePFStartOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.EndPlayLongChat
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::EndPlayLongChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.EndPlayLongChat");

	UBP_GSC_LongChat_C_EndPlayLongChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.UpdatePlayRecord
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::UpdatePlayRecord()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.UpdatePlayRecord");

	UBP_GSC_LongChat_C_UpdatePlayRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.DestroyEventSkipController
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::DestroyEventSkipController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.DestroyEventSkipController");

	UBP_GSC_LongChat_C_DestroyEventSkipController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.NeedPlayEndMask?
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::NeedPlayEndMask_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.NeedPlayEndMask?");

	UBP_GSC_LongChat_C_NeedPlayEndMask__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PlayAbort
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::PlayAbort()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.PlayAbort");

	UBP_GSC_LongChat_C_PlayAbort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.SendKpiData
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::SendKpiData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.SendKpiData");

	UBP_GSC_LongChat_C_SendKpiData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.FlushTextureStream
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::FlushTextureStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.FlushTextureStream");

	UBP_GSC_LongChat_C_FlushTextureStream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.IsPausePossibleState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_LongChat_C::IsPausePossibleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.IsPausePossibleState");

	UBP_GSC_LongChat_C_IsPausePossibleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C._DoCaputerScene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              CameraTransform                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UCameraComponent*        BaseCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_GSC_LongChat_C::_DoCaputerScene(const struct FTransform& CameraTransform, class UCameraComponent* BaseCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C._DoCaputerScene");

	UBP_GSC_LongChat_C__DoCaputerScene_Params params;
	params.CameraTransform = CameraTransform;
	params.BaseCamera = BaseCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C._IsScreenMasked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMasked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::_IsScreenMasked(bool* bMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C._IsScreenMasked");

	UBP_GSC_LongChat_C__IsScreenMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMasked != nullptr)
		*bMasked = params.bMasked;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C._ChangeScreenMask
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::_ChangeScreenMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C._ChangeScreenMask");

	UBP_GSC_LongChat_C__ChangeScreenMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C._DoScreenMask
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaskOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::_DoScreenMask(bool MaskOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C._DoScreenMask");

	UBP_GSC_LongChat_C__DoScreenMask_Params params;
	params.MaskOn = MaskOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.AddPlayArgsOnPlayCamp
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::AddPlayArgsOnPlayCamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.AddPlayArgsOnPlayCamp");

	UBP_GSC_LongChat_C_AddPlayArgsOnPlayCamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PostSoundDuckingVolume
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::PostSoundDuckingVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.PostSoundDuckingVolume");

	UBP_GSC_LongChat_C_PostSoundDuckingVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PreSoundDuckingVolume
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::PreSoundDuckingVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.PreSoundDuckingVolume");

	UBP_GSC_LongChat_C_PreSoundDuckingVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PostEndGC
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::PostEndGC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.PostEndGC");

	UBP_GSC_LongChat_C_PostEndGC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PreStartGC
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::PreStartGC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.PreStartGC");

	UBP_GSC_LongChat_C_PreStartGC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PauseAndEventSkipManagement
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::PauseAndEventSkipManagement(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.PauseAndEventSkipManagement");

	UBP_GSC_LongChat_C_PauseAndEventSkipManagement_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.ShowNpcLevel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::ShowNpcLevel(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.ShowNpcLevel");

	UBP_GSC_LongChat_C_ShowNpcLevel_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PauseManagement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEventSkip                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::PauseManagement(bool* bEventSkip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.PauseManagement");

	UBP_GSC_LongChat_C_PauseManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEventSkip != nullptr)
		*bEventSkip = params.bEventSkip;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPGeneralFunctionBool
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   OpertionName                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TMap<struct FName, struct FString> Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_LongChat_C::BPGeneralFunctionBool(const struct FName& OpertionName, TMap<struct FName, struct FString> Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPGeneralFunctionBool");

	UBP_GSC_LongChat_C_BPGeneralFunctionBool_Params params;
	params.OpertionName = OpertionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.SetScreenMaskVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::SetScreenMaskVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.SetScreenMaskVisible");

	UBP_GSC_LongChat_C_SetScreenMaskVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.GetLongChatPlayTransform
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              PlayTransform                  (Parm, OutParm, IsPlainOldData)

void UBP_GSC_LongChat_C::GetLongChatPlayTransform(struct FTransform* PlayTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.GetLongChatPlayTransform");

	UBP_GSC_LongChat_C_GetLongChatPlayTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayTransform != nullptr)
		*PlayTransform = params.PlayTransform;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PFCharacterActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PlayerActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::PFCharacterActive(bool bEnable, class AActor** PlayerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.PFCharacterActive");

	UBP_GSC_LongChat_C_PFCharacterActive_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerActor != nullptr)
		*PlayerActor = params.PlayerActor;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.SetupScreenMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewScreenMask                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::SetupScreenMask(bool NewScreenMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.SetupScreenMask");

	UBP_GSC_LongChat_C_SetupScreenMask_Params params;
	params.NewScreenMask = NewScreenMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.CreateScreenMask
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::CreateScreenMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.CreateScreenMask");

	UBP_GSC_LongChat_C_CreateScreenMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.DebugPrintSceneState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::DebugPrintSceneState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.DebugPrintSceneState");

	UBP_GSC_LongChat_C_DebugPrintSceneState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Sleep
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  nextScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::BPE_Sleep(unsigned char nextScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Sleep");

	UBP_GSC_LongChat_C_BPE_Sleep_Params params;
	params.nextScene = nextScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PushState
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::PushState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.PushState");

	UBP_GSC_LongChat_C_PushState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PopState
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::PopState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.PopState");

	UBP_GSC_LongChat_C_PopState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.OnEndLongChat
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::OnEndLongChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.OnEndLongChat");

	UBP_GSC_LongChat_C_OnEndLongChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.IF_SetDelayLongchatClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDelay                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::IF_SetDelayLongchatClose(bool bDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.IF_SetDelayLongchatClose");

	UBP_GSC_LongChat_C_IF_SetDelayLongchatClose_Params params;
	params.bDelay = bDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.OnWakeup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ActiveScene                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::OnWakeup(unsigned char ActiveScene, unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.OnWakeup");

	UBP_GSC_LongChat_C_OnWakeup_Params params;
	params.ActiveScene = ActiveScene;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.EventHideNpc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::EventHideNpc(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.EventHideNpc");

	UBP_GSC_LongChat_C_EventHideNpc_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Finalize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneFinalizeReason           finalizeReason                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::BPE_Finalize(ESceneFinalizeReason finalizeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Finalize");

	UBP_GSC_LongChat_C_BPE_Finalize_Params params;
	params.finalizeReason = finalizeReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Initialize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneInitializeMode           initMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::BPE_Initialize(ESceneInitializeMode initMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Initialize");

	UBP_GSC_LongChat_C_BPE_Initialize_Params params;
	params.initMode = initMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::BPE_Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Tick");

	UBP_GSC_LongChat_C_BPE_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.OnMemoryRefresh
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_LongChat_C::OnMemoryRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.OnMemoryRefresh");

	UBP_GSC_LongChat_C_OnMemoryRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_LongChat.BP_GSC_LongChat_C.ExecuteUbergraph_BP_GSC_LongChat
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_LongChat_C::ExecuteUbergraph_BP_GSC_LongChat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_LongChat.BP_GSC_LongChat_C.ExecuteUbergraph_BP_GSC_LongChat");

	UBP_GSC_LongChat_C_ExecuteUbergraph_BP_GSC_LongChat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
