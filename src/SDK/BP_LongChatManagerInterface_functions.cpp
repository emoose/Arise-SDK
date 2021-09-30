
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

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.GetNoPlayVoice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNoPlayVoice                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LongChatManagerInterface_C::GetNoPlayVoice(bool* bNoPlayVoice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.GetNoPlayVoice");

	UBP_LongChatManagerInterface_C_GetNoPlayVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNoPlayVoice != nullptr)
		*bNoPlayVoice = params.bNoPlayVoice;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.GetLongchatProfiler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Profiler                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LongChatManagerInterface_C::GetLongchatProfiler(class AActor** Profiler)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.GetLongchatProfiler");

	UBP_LongChatManagerInterface_C_GetLongchatProfiler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Profiler != nullptr)
		*Profiler = params.Profiler;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.RequestClearQue
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LongChatManagerInterface_C::RequestClearQue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.RequestClearQue");

	UBP_LongChatManagerInterface_C_RequestClearQue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.SkipToNextCut
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LongChatManagerInterface_C::SkipToNextCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.SkipToNextCut");

	UBP_LongChatManagerInterface_C_SkipToNextCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.IsHidden
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           Hidden                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LongChatManagerInterface_C::IsHidden(bool* Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.IsHidden");

	UBP_LongChatManagerInterface_C_IsHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hidden != nullptr)
		*Hidden = params.Hidden;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.ShowTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LongChatManagerInterface_C::ShowTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.ShowTitle");

	UBP_LongChatManagerInterface_C_ShowTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.DirectPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LongchatName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_LongChatManagerInterface_C::DirectPlay(const struct FString& LongchatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.DirectPlay");

	UBP_LongChatManagerInterface_C_DirectPlay_Params params;
	params.LongchatName = LongchatName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Play
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LongChatManagerInterface_C::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Play");

	UBP_LongChatManagerInterface_C_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Resume
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LongChatManagerInterface_C::Resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Resume");

	UBP_LongChatManagerInterface_C_Resume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LongChatManagerInterface_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Stop");

	UBP_LongChatManagerInterface_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Pause
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LongChatManagerInterface_C::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Pause");

	UBP_LongChatManagerInterface_C_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.AddLongChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LongchatName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           WithPlay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LongChatManagerInterface_C::AddLongChat(const struct FString& LongchatName, bool WithPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.AddLongChat");

	UBP_LongChatManagerInterface_C_AddLongChat_Params params;
	params.LongchatName = LongchatName;
	params.WithPlay = WithPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.MapChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_LongChatManagerInterface_C::MapChanged(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.MapChanged");

	UBP_LongChatManagerInterface_C_MapChanged_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.HasPlayableChat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LongChatManagerInterface_C::HasPlayableChat(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.HasPlayableChat");

	UBP_LongChatManagerInterface_C_HasPlayableChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
