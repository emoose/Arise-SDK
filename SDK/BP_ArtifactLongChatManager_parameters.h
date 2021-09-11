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

// Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.IsLongChatPlayed
struct ABP_ArtifactLongChatManager_C_IsLongChatPlayed_Params
{
	struct FString                                     InLongChatName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               OutPlayed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.UserConstructionScript
struct ABP_ArtifactLongChatManager_C_UserConstructionScript_Params
{
};

// Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.ExecutePlayLongChat
struct ABP_ArtifactLongChatManager_C_ExecutePlayLongChat_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.AddDelegateTo
struct ABP_ArtifactLongChatManager_C_AddDelegateTo_Params
{
	class APFDelegateManager*                          InDelegateManager;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InPriority;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ArtifactLongChatManager.BP_ArtifactLongChatManager_C.ExecuteUbergraph_BP_ArtifactLongChatManager
struct ABP_ArtifactLongChatManager_C_ExecuteUbergraph_BP_ArtifactLongChatManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
