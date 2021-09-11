#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnEndMessageCallback
struct UBP_BTL_VoiceHandle_C_OnEndMessageCallback_Params
{
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.GetDelayTime
struct UBP_BTL_VoiceHandle_C_GetDelayTime_Params
{
	float                                              Delay_Time;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.StopVoiceEvent
struct UBP_BTL_VoiceHandle_C_StopVoiceEvent_Params
{
	float                                              InterpTimeSec;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.Received_PlayVoice
struct UBP_BTL_VoiceHandle_C_Received_PlayVoice_Params
{
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnPlayVoice
struct UBP_BTL_VoiceHandle_C_OnPlayVoice_Params
{
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.StopVoice
struct UBP_BTL_VoiceHandle_C_StopVoice_Params
{
	float                                              InterpTimeSec;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.VirtualPlayVoice
struct UBP_BTL_VoiceHandle_C_VirtualPlayVoice_Params
{
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.SoundEndCallback
struct UBP_BTL_VoiceHandle_C_SoundEndCallback_Params
{
	class UPostEventInfoBase*                          PostEventInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.PrintVoiceLog
struct UBP_BTL_VoiceHandle_C_PrintVoiceLog_Params
{
	struct FString                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnLosed
struct UBP_BTL_VoiceHandle_C_OnLosed_Params
{
	float                                              InterpTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnVirtualPlayEnd
struct UBP_BTL_VoiceHandle_C_OnVirtualPlayEnd_Params
{
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.OnFinalize
struct UBP_BTL_VoiceHandle_C_OnFinalize_Params
{
};

// Function BP_BTL_VoiceHandle.BP_BTL_VoiceHandle_C.ExecuteUbergraph_BP_BTL_VoiceHandle
struct UBP_BTL_VoiceHandle_C_ExecuteUbergraph_BP_BTL_VoiceHandle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
