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

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.GetNoPlayVoice
struct UBP_LongChatManagerInterface_C_GetNoPlayVoice_Params
{
	bool                                               bNoPlayVoice;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.GetLongchatProfiler
struct UBP_LongChatManagerInterface_C_GetLongchatProfiler_Params
{
	class AActor*                                      Profiler;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.RequestClearQue
struct UBP_LongChatManagerInterface_C_RequestClearQue_Params
{
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.SkipToNextCut
struct UBP_LongChatManagerInterface_C_SkipToNextCut_Params
{
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.IsHidden
struct UBP_LongChatManagerInterface_C_IsHidden_Params
{
	bool                                               Hidden;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.ShowTitle
struct UBP_LongChatManagerInterface_C_ShowTitle_Params
{
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.DirectPlay
struct UBP_LongChatManagerInterface_C_DirectPlay_Params
{
	struct FString                                     LongchatName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Play
struct UBP_LongChatManagerInterface_C_Play_Params
{
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Resume
struct UBP_LongChatManagerInterface_C_Resume_Params
{
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Stop
struct UBP_LongChatManagerInterface_C_Stop_Params
{
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.Pause
struct UBP_LongChatManagerInterface_C_Pause_Params
{
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.AddLongChat
struct UBP_LongChatManagerInterface_C_AddLongChat_Params
{
	struct FString                                     LongchatName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               WithPlay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.MapChanged
struct UBP_LongChatManagerInterface_C_MapChanged_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LongChatManagerInterface.BP_LongChatManagerInterface_C.HasPlayableChat
struct UBP_LongChatManagerInterface_C_HasPlayableChat_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
