
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

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnEndMessageCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VoiceHandle_C::OnEndMessageCallback(bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnEndMessageCallback");

	UBP_BTL_VoiceHandle_C_OnEndMessageCallback_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.GetDelayTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Delay_Time                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VoiceHandle_C::GetDelayTime(float* Delay_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.GetDelayTime");

	UBP_BTL_VoiceHandle_C_GetDelayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delay_Time != nullptr)
		*Delay_Time = params.Delay_Time;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.StopVoiceEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InterpTimeSec                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VoiceHandle_C::StopVoiceEvent(float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.StopVoiceEvent");

	UBP_BTL_VoiceHandle_C_StopVoiceEvent_Params params;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.Received_PlayVoice
// (Event, Public, BlueprintEvent)

void UBP_BTL_VoiceHandle_C::Received_PlayVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.Received_PlayVoice");

	UBP_BTL_VoiceHandle_C_Received_PlayVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnPlayVoice
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_VoiceHandle_C::OnPlayVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnPlayVoice");

	UBP_BTL_VoiceHandle_C_OnPlayVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.StopVoice
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InterpTimeSec                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VoiceHandle_C::StopVoice(float InterpTimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.StopVoice");

	UBP_BTL_VoiceHandle_C_StopVoice_Params params;
	params.InterpTimeSec = InterpTimeSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.VirtualPlayVoice
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_VoiceHandle_C::VirtualPlayVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.VirtualPlayVoice");

	UBP_BTL_VoiceHandle_C_VirtualPlayVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.SoundEndCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPostEventInfoBase*      PostEventInfo                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VoiceHandle_C::SoundEndCallback(class UPostEventInfoBase* PostEventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.SoundEndCallback");

	UBP_BTL_VoiceHandle_C_SoundEndCallback_Params params;
	params.PostEventInfo = PostEventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.PrintVoiceLog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_BTL_VoiceHandle_C::PrintVoiceLog(const struct FString& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.PrintVoiceLog");

	UBP_BTL_VoiceHandle_C_PrintVoiceLog_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnLosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InterpTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VoiceHandle_C::OnLosed(float InterpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnLosed");

	UBP_BTL_VoiceHandle_C_OnLosed_Params params;
	params.InterpTime = InterpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnVirtualPlayEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_BTL_VoiceHandle_C::OnVirtualPlayEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnVirtualPlayEnd");

	UBP_BTL_VoiceHandle_C_OnVirtualPlayEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnFinalize
// (Event, Protected, BlueprintEvent)

void UBP_BTL_VoiceHandle_C::OnFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnFinalize");

	UBP_BTL_VoiceHandle_C_OnFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.ExecuteUbergraph_BP_BTL_VoiceHandle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BTL_VoiceHandle_C::ExecuteUbergraph_BP_BTL_VoiceHandle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.ExecuteUbergraph_BP_BTL_VoiceHandle");

	UBP_BTL_VoiceHandle_C_ExecuteUbergraph_BP_BTL_VoiceHandle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
