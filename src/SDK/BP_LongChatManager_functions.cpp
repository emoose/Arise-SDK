
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

// Function BP_LongChatManager.BP_LongChatManager_C.GetNoPlayVoice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNoPlayVoice                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::GetNoPlayVoice(bool* bNoPlayVoice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.GetNoPlayVoice");

	ABP_LongChatManager_C_GetNoPlayVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNoPlayVoice != nullptr)
		*bNoPlayVoice = params.bNoPlayVoice;
}


// Function BP_LongChatManager.BP_LongChatManager_C.GetLongchatProfiler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Profiler                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::GetLongchatProfiler(class AActor** Profiler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.GetLongchatProfiler");

	ABP_LongChatManager_C_GetLongchatProfiler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Profiler != nullptr)
		*Profiler = params.Profiler;
}


// Function BP_LongChatManager.BP_LongChatManager_C.IsHidden
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           Hidden                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::IsHidden(bool* Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.IsHidden");

	ABP_LongChatManager_C_IsHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hidden != nullptr)
		*Hidden = params.Hidden;
}


// Function BP_LongChatManager.BP_LongChatManager_C.HasPlayableChat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::HasPlayableChat(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.HasPlayableChat");

	ABP_LongChatManager_C_HasPlayableChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_LongChatManager.BP_LongChatManager_C.UpdatePlayRecord
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::UpdatePlayRecord()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.UpdatePlayRecord");

	ABP_LongChatManager_C_UpdatePlayRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.SetShowUIFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShowUI                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::SetShowUIFlag(bool bIsShowUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.SetShowUIFlag");

	ABP_LongChatManager_C_SetShowUIFlag_Params params;
	params.bIsShowUI = bIsShowUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.IsShowUI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsShowUI                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::IsShowUI(bool* bIsShowUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.IsShowUI");

	ABP_LongChatManager_C_IsShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsShowUI != nullptr)
		*bIsShowUI = params.bIsShowUI;
}


// Function BP_LongChatManager.BP_LongChatManager_C.SetNoPlayVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNoPlayVoice                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::SetNoPlayVoice(bool bNoPlayVoice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.SetNoPlayVoice");

	ABP_LongChatManager_C_SetNoPlayVoice_Params params;
	params.bNoPlayVoice = bNoPlayVoice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.CanPlayable?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bAble                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::CanPlayable_(bool* bAble)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.CanPlayable?");

	ABP_LongChatManager_C_CanPlayable__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAble != nullptr)
		*bAble = params.bAble;
}


// Function BP_LongChatManager.BP_LongChatManager_C.IsPlayabelLongchatNow?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bAble                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::IsPlayabelLongchatNow_(bool* bAble)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.IsPlayabelLongchatNow?");

	ABP_LongChatManager_C_IsPlayabelLongchatNow__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAble != nullptr)
		*bAble = params.bAble;
}


// Function BP_LongChatManager.BP_LongChatManager_C.GetPlayableChatNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::GetPlayableChatNum(int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.GetPlayableChatNum");

	ABP_LongChatManager_C_GetPlayableChatNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function BP_LongChatManager.BP_LongChatManager_C.PlayLongChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDirect                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DirectPlayName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LongChatManager_C::PlayLongChat(bool bDirect, const struct FString& DirectPlayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.PlayLongChat");

	ABP_LongChatManager_C_PlayLongChat_Params params;
	params.bDirect = bDirect;
	params.DirectPlayName = DirectPlayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.UserConstructionScript");

	ABP_LongChatManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.AddLongChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LongchatName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           WithPlay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::AddLongChat(const struct FString& LongchatName, bool WithPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.AddLongChat");

	ABP_LongChatManager_C_AddLongChat_Params params;
	params.LongchatName = LongchatName;
	params.WithPlay = WithPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.Pause
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.Pause");

	ABP_LongChatManager_C_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.Stop");

	ABP_LongChatManager_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.Resume
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::Resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.Resume");

	ABP_LongChatManager_C_Resume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.Play
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.Play");

	ABP_LongChatManager_C_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.DirectPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LongchatName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LongChatManager_C::DirectPlay(const struct FString& LongchatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.DirectPlay");

	ABP_LongChatManager_C_DirectPlay_Params params;
	params.LongchatName = LongchatName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.ShowTitle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::ShowTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.ShowTitle");

	ABP_LongChatManager_C_ShowTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.MapChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LongChatManager_C::MapChanged(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.MapChanged");

	ABP_LongChatManager_C_MapChanged_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.SkipToNextCut
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::SkipToNextCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.SkipToNextCut");

	ABP_LongChatManager_C_SkipToNextCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.RequestClearQue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::RequestClearQue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.RequestClearQue");

	ABP_LongChatManager_C_RequestClearQue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LongChatManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.ReceiveBeginPlay");

	ABP_LongChatManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.SpawnLongChatProfiler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InLoadedAssetClass             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::SpawnLongChatProfiler(class UClass* InLoadedAssetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.SpawnLongChatProfiler");

	ABP_LongChatManager_C_SpawnLongChatProfiler_Params params;
	params.InLoadedAssetClass = InLoadedAssetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.OnPostPlayLongchat
// (BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::OnPostPlayLongchat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.OnPostPlayLongchat");

	ABP_LongChatManager_C_OnPostPlayLongchat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.ReceiveTick");

	ABP_LongChatManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.ReceiveEndPlay");

	ABP_LongChatManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.OnPreMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LongChatManager_C::OnPreMapChange(const struct FString& OldMapName, const struct FString& NewMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.OnPreMapChange");

	ABP_LongChatManager_C_OnPreMapChange_Params params;
	params.OldMapName = OldMapName;
	params.NewMapName = NewMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.OnPartyIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  InPartyID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::OnPartyIn(EArisePartyID InPartyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.OnPartyIn");

	ABP_LongChatManager_C_OnPartyIn_Params params;
	params.InPartyID = InPartyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.OnDelayedUpdateLCQue
// (BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::OnDelayedUpdateLCQue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.OnDelayedUpdateLCQue");

	ABP_LongChatManager_C_OnDelayedUpdateLCQue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.OnPartyOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  OutPartyID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::OnPartyOut(EArisePartyID OutPartyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.OnPartyOut");

	ABP_LongChatManager_C_OnPartyOut_Params params;
	params.OutPartyID = OutPartyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.OnChangeScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::OnChangeScene(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.OnChangeScene");

	ABP_LongChatManager_C_OnChangeScene_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.OnChangeMainScenario
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::OnChangeMainScenario(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.OnChangeMainScenario");

	ABP_LongChatManager_C_OnChangeMainScenario_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.ExecuteUbergraph_BP_LongChatManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatManager_C::ExecuteUbergraph_BP_LongChatManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.ExecuteUbergraph_BP_LongChatManager");

	ABP_LongChatManager_C_ExecuteUbergraph_BP_LongChatManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.ShowLongChatTitle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::ShowLongChatTitle__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.ShowLongChatTitle__DelegateSignature");

	ABP_LongChatManager_C_ShowLongChatTitle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.NextCutLongChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::NextCutLongChat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.NextCutLongChat__DelegateSignature");

	ABP_LongChatManager_C_NextCutLongChat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.ChangeLongChatList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::ChangeLongChatList__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.ChangeLongChatList__DelegateSignature");

	ABP_LongChatManager_C_ChangeLongChatList__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.ResumeLongChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::ResumeLongChat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.ResumeLongChat__DelegateSignature");

	ABP_LongChatManager_C_ResumeLongChat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.PauseLongChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::PauseLongChat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.PauseLongChat__DelegateSignature");

	ABP_LongChatManager_C_PauseLongChat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManager.BP_LongChatManager_C.StopLongChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LongChatManager_C::StopLongChat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManager.BP_LongChatManager_C.StopLongChat__DelegateSignature");

	ABP_LongChatManager_C_StopLongChat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
