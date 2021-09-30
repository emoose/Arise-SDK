
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

// Function AriseSound.AriseAmbientSound.StopAmbientSound
// (Final, Native, Public, BlueprintCallable)

void AAriseAmbientSound::StopAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseAmbientSound.StopAmbientSound");

	AAriseAmbientSound_StopAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseAmbientSound.StartAmbientSound
// (Final, Native, Public, BlueprintCallable)

void AAriseAmbientSound::StartAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseAmbientSound.StartAmbientSound");

	AAriseAmbientSound_StartAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseAmbientSound.SetSwitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SwitchGroup                    (Parm, ZeroConstructor)
// struct FString                 SWITCH                         (Parm, ZeroConstructor)

void AAriseAmbientSound::SetSwitch(const struct FString& SwitchGroup, const struct FString& SWITCH)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseAmbientSound.SetSwitch");

	AAriseAmbientSound_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SWITCH = SWITCH;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseAmbientSound.SetRTPCValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)

void AAriseAmbientSound::SetRTPCValue(const struct FString& RTPC, float Value, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseAmbientSound.SetRTPCValue");

	AAriseAmbientSound_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseAmbientSound.SetReverbEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUseReverb                     (Parm, ZeroConstructor, IsPlainOldData)

void AAriseAmbientSound::SetReverbEffect(bool bUseReverb)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseAmbientSound.SetReverbEffect");

	AAriseAmbientSound_SetReverbEffect_Params params;
	params.bUseReverb = bUseReverb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseAmbientSound.SetEventName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEventName                    (Parm, ZeroConstructor)
// bool                           bReplayIfPlaying               (Parm, ZeroConstructor, IsPlainOldData)

void AAriseAmbientSound::SetEventName(const struct FString& InEventName, bool bReplayIfPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseAmbientSound.SetEventName");

	AAriseAmbientSound_SetEventName_Params params;
	params.InEventName = InEventName;
	params.bReplayIfPlaying = bReplayIfPlaying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseAmbientSound.PostEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventNameString                (Parm, ZeroConstructor)

void AAriseAmbientSound::PostEvent(const struct FString& EventNameString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseAmbientSound.PostEvent");

	AAriseAmbientSound_PostEvent_Params params;
	params.EventNameString = EventNameString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseAmbientSound.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseAmbientSound::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseAmbientSound.IsPlaying");

	AAriseAmbientSound_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseAmbientSound.GetEventName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AAriseAmbientSound::GetEventName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseAmbientSound.GetEventName");

	AAriseAmbientSound_GetEventName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundSEBase.Stop
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)

void AAriseSoundSEBase::Stop(float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundSEBase.Stop");

	AAriseSoundSEBase_Stop_Params params;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundSEBase.Resume
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)

void AAriseSoundSEBase::Resume(float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundSEBase.Resume");

	AAriseSoundSEBase_Resume_Params params;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundSEBase.PlayByName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)

void AAriseSoundSEBase::PlayByName(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundSEBase.PlayByName");

	AAriseSoundSEBase_PlayByName_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundSEBase.Play
// (Native, Public, BlueprintCallable)

void AAriseSoundSEBase::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundSEBase.Play");

	AAriseSoundSEBase_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundSEBase.Pause
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)

void AAriseSoundSEBase::Pause(float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundSEBase.Pause");

	AAriseSoundSEBase_Pause_Params params;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundSEBase.IsPlaying
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseSoundSEBase::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundSEBase.IsPlaying");

	AAriseSoundSEBase_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundSEBase.GetPlayingMusicEventName
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AAriseSoundSEBase::GetPlayingMusicEventName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundSEBase.GetPlayingMusicEventName");

	AAriseSoundSEBase_GetPlayingMusicEventName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.SoundBankDLCDataClass.IsEnableIndex_Data
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoundBankDLCDataClass::IsEnableIndex_Data(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.SoundBankDLCDataClass.IsEnableIndex_Data");

	USoundBankDLCDataClass_IsEnableIndex_Data_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundInfoDatabase.SyncInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundInfoDatabase::SyncInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundInfoDatabase.SyncInfo");

	UAriseSoundInfoDatabase_SyncInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundNewStatics.StopEventByInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPostEventInfoBase*      Info                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundNewStatics::STATIC_StopEventByInfo(class UPostEventInfoBase* Info, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.StopEventByInfo");

	UAriseSoundNewStatics_StopEventByInfo_Params params;
	params.Info = Info;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.StopEventByEventName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)

void UAriseSoundNewStatics::STATIC_StopEventByEventName(class AActor* Actor, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.StopEventByEventName");

	UAriseSoundNewStatics_StopEventByEventName_Params params;
	params.Actor = Actor;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.StopEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)

void UAriseSoundNewStatics::STATIC_StopEvent(class AActor* Actor, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.StopEvent");

	UAriseSoundNewStatics_StopEvent_Params params;
	params.Actor = Actor;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.StopAllEvents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundNewStatics::STATIC_StopAllEvents(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.StopAllEvents");

	UAriseSoundNewStatics_StopAllEvents_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.SetSwitch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SwitchGroup                    (Parm, ZeroConstructor)
// struct FString                 SWITCH                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundNewStatics::STATIC_SetSwitch(class AActor* Actor, const struct FString& SwitchGroup, const struct FString& SWITCH)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.SetSwitch");

	UAriseSoundNewStatics_SetSwitch_Params params;
	params.Actor = Actor;
	params.SwitchGroup = SwitchGroup;
	params.SWITCH = SWITCH;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundNewStatics.SetState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StateGroup                     (Parm, ZeroConstructor)
// struct FString                 State                          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundNewStatics::STATIC_SetState(const struct FString& StateGroup, const struct FString& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.SetState");

	UAriseSoundNewStatics_SetState_Params params;
	params.StateGroup = StateGroup;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundNewStatics.SetSoundPauseEventEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           in_IsEnable                    (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundNewStatics::STATIC_SetSoundPauseEventEnable(bool in_IsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.SetSoundPauseEventEnable");

	UAriseSoundNewStatics_SetSoundPauseEventEnable_Params params;
	params.in_IsEnable = in_IsEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.SetRTPCValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RTPCName                       (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundNewStatics::STATIC_SetRTPCValue(class AActor* Actor, const struct FString& RTPCName, float Value, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.SetRTPCValue");

	UAriseSoundNewStatics_SetRTPCValue_Params params;
	params.Actor = Actor;
	params.RTPCName = RTPCName;
	params.Value = Value;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundNewStatics.SetReverbEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundNewStatics::STATIC_SetReverbEnable(class AActor* Actor, bool IsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.SetReverbEnable");

	UAriseSoundNewStatics_SetReverbEnable_Params params;
	params.Actor = Actor;
	params.IsEnable = IsEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.SeekOnEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// int                            PositionMs                     (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundNewStatics::STATIC_SeekOnEvent(class AActor* Owner, const struct FString& EventName, int PositionMs)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.SeekOnEvent");

	UAriseSoundNewStatics_SeekOnEvent_Params params;
	params.Owner = Owner;
	params.EventName = EventName;
	params.PositionMs = PositionMs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.ResumeEventByInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPostEventInfoBase*      Info                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundNewStatics::STATIC_ResumeEventByInfo(class UPostEventInfoBase* Info, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.ResumeEventByInfo");

	UAriseSoundNewStatics_ResumeEventByInfo_Params params;
	params.Info = Info;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.ResumeEventByEventName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)

void UAriseSoundNewStatics::STATIC_ResumeEventByEventName(class AActor* Actor, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.ResumeEventByEventName");

	UAriseSoundNewStatics_ResumeEventByEventName_Params params;
	params.Actor = Actor;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.ResumeEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)

void UAriseSoundNewStatics::STATIC_ResumeEvent(class AActor* Actor, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.ResumeEvent");

	UAriseSoundNewStatics_ResumeEvent_Params params;
	params.Actor = Actor;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.PlayEventWithParam
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSoundPlayEventParam    Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UPostEventInfoBase*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPostEventInfoBase* UAriseSoundNewStatics::STATIC_PlayEventWithParam(const struct FSoundPlayEventParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.PlayEventWithParam");

	UAriseSoundNewStatics_PlayEventWithParam_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundNewStatics.PlayEventRaw
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAriseSoundNewStatics::STATIC_PlayEventRaw(class AActor* Actor, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.PlayEventRaw");

	UAriseSoundNewStatics_PlayEventRaw_Params params;
	params.Actor = Actor;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundNewStatics.PlayEventByAkComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*            AkComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class UPostEventInfoBase*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPostEventInfoBase* UAriseSoundNewStatics::STATIC_PlayEventByAkComponent(class UAkComponent* AkComponent, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.PlayEventByAkComponent");

	UAriseSoundNewStatics_PlayEventByAkComponent_Params params;
	params.AkComponent = AkComponent;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundNewStatics.PlayEventAtLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bAutoDestory                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UPostEventInfoBase*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPostEventInfoBase* UAriseSoundNewStatics::STATIC_PlayEventAtLocation(class AActor* Actor, const struct FString& EventName, const struct FVector& Location, bool bAutoDestory, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.PlayEventAtLocation");

	UAriseSoundNewStatics_PlayEventAtLocation_Params params;
	params.Actor = Actor;
	params.EventName = EventName;
	params.Location = Location;
	params.bAutoDestory = bAutoDestory;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundNewStatics.PlayEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class UPostEventInfoBase*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPostEventInfoBase* UAriseSoundNewStatics::STATIC_PlayEvent(class AActor* Actor, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.PlayEvent");

	UAriseSoundNewStatics_PlayEvent_Params params;
	params.Actor = Actor;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundNewStatics.PauseEventByInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPostEventInfoBase*      Info                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundNewStatics::STATIC_PauseEventByInfo(class UPostEventInfoBase* Info, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.PauseEventByInfo");

	UAriseSoundNewStatics_PauseEventByInfo_Params params;
	params.Info = Info;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.PauseEventByEventName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)

void UAriseSoundNewStatics::STATIC_PauseEventByEventName(class AActor* Actor, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.PauseEventByEventName");

	UAriseSoundNewStatics_PauseEventByEventName_Params params;
	params.Actor = Actor;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.PauseEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)

void UAriseSoundNewStatics::STATIC_PauseEvent(class AActor* Actor, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.PauseEvent");

	UAriseSoundNewStatics_PauseEvent_Params params;
	params.Actor = Actor;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.IsPlayingByID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundNewStatics::STATIC_IsPlayingByID(int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.IsPlayingByID");

	UAriseSoundNewStatics_IsPlayingByID_Params params;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundNewStatics.IsPlayingByEventName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 in_EventName                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundNewStatics::STATIC_IsPlayingByEventName(const struct FString& in_EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.IsPlayingByEventName");

	UAriseSoundNewStatics_IsPlayingByEventName_Params params;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundNewStatics.GetSoundEventListByRegex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 iPattern                       (Parm, ZeroConstructor)
// TArray<struct FString>         OutEventList                   (Parm, OutParm, ZeroConstructor)

void UAriseSoundNewStatics::STATIC_GetSoundEventListByRegex(const struct FString& iPattern, TArray<struct FString>* OutEventList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.GetSoundEventListByRegex");

	UAriseSoundNewStatics_GetSoundEventListByRegex_Params params;
	params.iPattern = iPattern;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEventList != nullptr)
		*OutEventList = params.OutEventList;
}


// Function AriseSound.AriseSoundNewStatics.GetLoadedSoundBankList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         OutEventList                   (Parm, OutParm, ZeroConstructor)

void UAriseSoundNewStatics::STATIC_GetLoadedSoundBankList(TArray<struct FString>* OutEventList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.GetLoadedSoundBankList");

	UAriseSoundNewStatics_GetLoadedSoundBankList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEventList != nullptr)
		*OutEventList = params.OutEventList;
}


// Function AriseSound.AriseSoundNewStatics.ExecuteActionOnEventRaw
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// EAkActionOnEventType           AkActionOnEventType            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundNewStatics::STATIC_ExecuteActionOnEventRaw(const struct FString& EventName, EAkActionOnEventType AkActionOnEventType, class AActor* Actor, float InterpTimeSec, int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.ExecuteActionOnEventRaw");

	UAriseSoundNewStatics_ExecuteActionOnEventRaw_Params params;
	params.EventName = EventName;
	params.AkActionOnEventType = AkActionOnEventType;
	params.Actor = Actor;
	params.InterpTimeSec = InterpTimeSec;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundNewStatics.ExecuteActionOnEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPostEventInfoBase*      PostEventInfo                  (Parm, ZeroConstructor, IsPlainOldData)
// EAkActionOnEventType           AkActionOnEventType            (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundNewStatics::STATIC_ExecuteActionOnEvent(class UPostEventInfoBase* PostEventInfo, EAkActionOnEventType AkActionOnEventType, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundNewStatics.ExecuteActionOnEvent");

	UAriseSoundNewStatics_ExecuteActionOnEvent_Params params;
	params.PostEventInfo = PostEventInfo;
	params.AkActionOnEventType = AkActionOnEventType;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.PostEventInfoBase.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPostEventInfoBase::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.PostEventInfoBase.IsPlaying");

	UPostEventInfoBase_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.PostEventInfoBase.IsAkPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPostEventInfoBase::IsAkPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.PostEventInfoBase.IsAkPlaying");

	UPostEventInfoBase_IsAkPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.UnloadSceneBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ESoundBankLoadScene> InType                         (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_UnloadSceneBank(TEnumAsByte<ESoundBankLoadScene> InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.UnloadSceneBank");

	UAriseSoundStatics_UnloadSceneBank_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.UnloadBankAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAriseSoundStatics::STATIC_UnloadBankAsync(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.UnloadBankAsync");

	UAriseSoundStatics_UnloadBankAsync_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.UnloadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAriseSoundStatics::STATIC_UnloadBank(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.UnloadBank");

	UAriseSoundStatics_UnloadBank_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.StopSoundEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_StopSoundEvent(const struct FString& EventName, class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.StopSoundEvent");

	UAriseSoundStatics_StopSoundEvent_Params params;
	params.EventName = EventName;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.StopSound
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_StopSound(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.StopSound");

	UAriseSoundStatics_StopSound_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SpawnAmbientSoundActors
// (Final, Native, Static, Public, BlueprintCallable)

void UAriseSoundStatics::STATIC_SpawnAmbientSoundActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SpawnAmbientSoundActors");

	UAriseSoundStatics_SpawnAmbientSoundActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SetVolume_VOICE
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_SetVolume_VOICE(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SetVolume_VOICE");

	UAriseSoundStatics_SetVolume_VOICE_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SetVolume_SE
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_SetVolume_SE(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SetVolume_SE");

	UAriseSoundStatics_SetVolume_SE_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SetVolume_BGM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_SetVolume_BGM(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SetVolume_BGM");

	UAriseSoundStatics_SetVolume_BGM_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SetSwitch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SwitchGroup                    (Parm, ZeroConstructor)
// struct FString                 SWITCH                         (Parm, ZeroConstructor)

void UAriseSoundStatics::STATIC_SetSwitch(class AActor* Owner, const struct FString& SwitchGroup, const struct FString& SWITCH)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SetSwitch");

	UAriseSoundStatics_SetSwitch_Params params;
	params.Owner = Owner;
	params.SwitchGroup = SwitchGroup;
	params.SWITCH = SWITCH;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SetState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StateGroup                     (Parm, ZeroConstructor)
// struct FString                 State                          (Parm, ZeroConstructor)

void UAriseSoundStatics::STATIC_SetState(const struct FString& StateGroup, const struct FString& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SetState");

	UAriseSoundStatics_SetState_Params params;
	params.StateGroup = StateGroup;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SetRTPCValueGlobal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_SetRTPCValueGlobal(const struct FString& RTPC, float Value, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SetRTPCValueGlobal");

	UAriseSoundStatics_SetRTPCValueGlobal_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SetRTPCValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RTPC                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTimeSec                  (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_SetRTPCValue(class AActor* Owner, const struct FString& RTPC, float Value, float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SetRTPCValue");

	UAriseSoundStatics_SetRTPCValue_Params params;
	params.Owner = Owner;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SetReverbEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseReverb                     (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_SetReverbEffect(class AActor* Owner, bool bUseReverb)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SetReverbEffect");

	UAriseSoundStatics_SetReverbEffect_Params params;
	params.Owner = Owner;
	params.bUseReverb = bUseReverb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SetListenerOverridePosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)

void UAriseSoundStatics::STATIC_SetListenerOverridePosition(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SetListenerOverridePosition");

	UAriseSoundStatics_SetListenerOverridePosition_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SetListenerOverride
// (Final, Native, Static, Public, BlueprintCallable)

void UAriseSoundStatics::STATIC_SetListenerOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SetListenerOverride");

	UAriseSoundStatics_SetListenerOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.SeekSoundEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// int                            PositionMs                     (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_SeekSoundEvent(class AActor* Owner, const struct FString& EventName, int PositionMs)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.SeekSoundEvent");

	UAriseSoundStatics_SeekSoundEvent_Params params;
	params.Owner = Owner;
	params.EventName = EventName;
	params.PositionMs = PositionMs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.ResumeSoundEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_ResumeSoundEvent(const struct FString& EventName, class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.ResumeSoundEvent");

	UAriseSoundStatics_ResumeSoundEvent_Params params;
	params.EventName = EventName;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.RemoveCustomListener
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ListenerName                   (Parm, ZeroConstructor)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_RemoveCustomListener(const struct FString& ListenerName, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.RemoveCustomListener");

	UAriseSoundStatics_RemoveCustomListener_Params params;
	params.ListenerName = ListenerName;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.QueueEventAtLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestory                   (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_QueueEventAtLocation(const struct FString& EventName, const struct FVector& Location, class UObject* WorldContextObject, bool bAutoDestory)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.QueueEventAtLocation");

	UAriseSoundStatics_QueueEventAtLocation_Params params;
	params.EventName = EventName;
	params.Location = Location;
	params.WorldContextObject = WorldContextObject;
	params.bAutoDestory = bAutoDestory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.QueueEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)

void UAriseSoundStatics::STATIC_QueueEvent(class AActor* Owner, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.QueueEvent");

	UAriseSoundStatics_QueueEvent_Params params;
	params.Owner = Owner;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.PostVoiceEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class AActor*                  SpeakerActor                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAriseSoundStatics::STATIC_PostVoiceEvent(const struct FString& EventName, class AActor* SpeakerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.PostVoiceEvent");

	UAriseSoundStatics_PostVoiceEvent_Params params;
	params.EventName = EventName;
	params.SpeakerActor = SpeakerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.PostEventWithParam
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPostEventParam         Param                          (ConstParm, Parm, OutParm, ReferenceParm)

void UAriseSoundStatics::STATIC_PostEventWithParam(class AActor* Owner, const struct FPostEventParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.PostEventWithParam");

	UAriseSoundStatics_PostEventWithParam_Params params;
	params.Owner = Owner;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.PostEventWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAriseSoundStatics::STATIC_PostEventWithCallback(class AActor* Owner, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.PostEventWithCallback");

	UAriseSoundStatics_PostEventWithCallback_Params params;
	params.Owner = Owner;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.PostEventAtLocationWithParam
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FPostEventParam         Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_PostEventAtLocationWithParam(const struct FVector& Location, const struct FPostEventParam& Param, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.PostEventAtLocationWithParam");

	UAriseSoundStatics_PostEventAtLocationWithParam_Params params;
	params.Location = Location;
	params.Param = Param;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.PostEventAtLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestory                   (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_PostEventAtLocation(const struct FString& EventName, const struct FVector& Location, class UObject* WorldContextObject, bool bAutoDestory)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.PostEventAtLocation");

	UAriseSoundStatics_PostEventAtLocation_Params params;
	params.EventName = EventName;
	params.Location = Location;
	params.WorldContextObject = WorldContextObject;
	params.bAutoDestory = bAutoDestory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.PostEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)

void UAriseSoundStatics::STATIC_PostEvent(class AActor* Owner, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.PostEvent");

	UAriseSoundStatics_PostEvent_Params params;
	params.Owner = Owner;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.PauseSoundEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_PauseSoundEvent(const struct FString& EventName, class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.PauseSoundEvent");

	UAriseSoundStatics_PauseSoundEvent_Params params;
	params.EventName = EventName;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.LoadSceneBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ESoundBankLoadScene> InType                         (Parm, ZeroConstructor, IsPlainOldData)

void UAriseSoundStatics::STATIC_LoadSceneBank(TEnumAsByte<ESoundBankLoadScene> InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.LoadSceneBank");

	UAriseSoundStatics_LoadSceneBank_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.LoadDLCBank
// (Final, Native, Static, Public, BlueprintCallable)

void UAriseSoundStatics::STATIC_LoadDLCBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.LoadDLCBank");

	UAriseSoundStatics_LoadDLCBank_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.LoadBankAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAriseSoundStatics::STATIC_LoadBankAsync(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.LoadBankAsync");

	UAriseSoundStatics_LoadBankAsync_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.LoadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAriseSoundStatics::STATIC_LoadBank(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.LoadBank");

	UAriseSoundStatics_LoadBank_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.IsSetVoiceLanguageLoadFinished
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundStatics::STATIC_IsSetVoiceLanguageLoadFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.IsSetVoiceLanguageLoadFinished");

	UAriseSoundStatics_IsSetVoiceLanguageLoadFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.IsPlayingByID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundStatics::STATIC_IsPlayingByID(int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.IsPlayingByID");

	UAriseSoundStatics_IsPlayingByID_Params params;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.IsPlaying
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Owner                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundStatics::STATIC_IsPlaying(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.IsPlaying");

	UAriseSoundStatics_IsPlaying_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.IsLoadedSceneBanks
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ESoundBankLoadScene> InType                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundStatics::STATIC_IsLoadedSceneBanks(TEnumAsByte<ESoundBankLoadScene> InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.IsLoadedSceneBanks");

	UAriseSoundStatics_IsLoadedSceneBanks_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.IsExistBank
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundStatics::STATIC_IsExistBank(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.IsExistBank");

	UAriseSoundStatics_IsExistBank_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.IsAvailableBank
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundStatics::STATIC_IsAvailableBank(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.IsAvailableBank");

	UAriseSoundStatics_IsAvailableBank_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.GetSoundEventPlayPosition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayPosition                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundStatics::STATIC_GetSoundEventPlayPosition(int PlayingID, float* PlayPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.GetSoundEventPlayPosition");

	UAriseSoundStatics_GetSoundEventPlayPosition_Params params;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayPosition != nullptr)
		*PlayPosition = params.PlayPosition;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.GetPersonaPreviewListenerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAriseSoundStatics::STATIC_GetPersonaPreviewListenerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.GetPersonaPreviewListenerName");

	UAriseSoundStatics_GetPersonaPreviewListenerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.GetListenerOverridePosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseSoundStatics::STATIC_GetListenerOverridePosition(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.GetListenerOverridePosition");

	UAriseSoundStatics_GetListenerOverridePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.GetCascadePreviewListenerName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAriseSoundStatics::STATIC_GetCascadePreviewListenerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.GetCascadePreviewListenerName");

	UAriseSoundStatics_GetCascadePreviewListenerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.GetBGMActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAriseAmbientSound*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAriseAmbientSound* UAriseSoundStatics::STATIC_GetBGMActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.GetBGMActor");

	UAriseSoundStatics_GetBGMActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.GetAmbientSoundActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAriseAmbientSoundMapActorBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAriseAmbientSoundMapActorBase* UAriseSoundStatics::STATIC_GetAmbientSoundActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.GetAmbientSoundActor");

	UAriseSoundStatics_GetAmbientSoundActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.FlushEvents
// (Final, Native, Static, Public, BlueprintCallable)

void UAriseSoundStatics::STATIC_FlushEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.FlushEvents");

	UAriseSoundStatics_FlushEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.FindCustomListener
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ListenerName                   (Parm, ZeroConstructor)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UAriseSoundStatics::STATIC_FindCustomListener(const struct FString& ListenerName, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.FindCustomListener");

	UAriseSoundStatics_FindCustomListener_Params params;
	params.ListenerName = ListenerName;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseSound.AriseSoundStatics.ClearListenerOverride
// (Final, Native, Static, Public, BlueprintCallable)

void UAriseSoundStatics::STATIC_ClearListenerOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.ClearListenerOverride");

	UAriseSoundStatics_ClearListenerOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseSound.AriseSoundStatics.AddCustomListener
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ListenerName                   (Parm, ZeroConstructor)
// class USceneComponent*         Listener                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAriseSoundStatics::STATIC_AddCustomListener(const struct FString& ListenerName, class USceneComponent* Listener)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseSound.AriseSoundStatics.AddCustomListener");

	UAriseSoundStatics_AddCustomListener_Params params;
	params.ListenerName = ListenerName;
	params.Listener = Listener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
