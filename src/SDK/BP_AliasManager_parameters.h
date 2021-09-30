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

// Function BP_AliasManager.BP_AliasManager_C.GetLearnAlias
struct ABP_AliasManager_C_GetLearnAlias_Params
{
	TArray<int>                                        OutIDs;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AliasManager.BP_AliasManager_C.GetPlayableShortChatName
struct ABP_AliasManager_C_GetPlayableShortChatName_Params
{
	struct FString                                     InLabel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OutShortChatName;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               OutFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AliasManager.BP_AliasManager_C.IsCheckAlias
struct ABP_AliasManager_C_IsCheckAlias_Params
{
	EAriseGameState                                    InGameState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInNewState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AliasManager.BP_AliasManager_C.UserConstructionScript
struct ABP_AliasManager_C_UserConstructionScript_Params
{
};

// Function BP_AliasManager.BP_AliasManager_C.ExecuteGetAlias
struct ABP_AliasManager_C_ExecuteGetAlias_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AliasManager.BP_AliasManager_C.AddDelegateTo
struct ABP_AliasManager_C_AddDelegateTo_Params
{
	class APFDelegateManager*                          InDelegateManager;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InPriority;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AliasManager.BP_AliasManager_C.ExecuteUbergraph_BP_AliasManager
struct ABP_AliasManager_C_ExecuteUbergraph_BP_AliasManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AliasManager.BP_AliasManager_C.OnCloseEvent__DelegateSignature
struct ABP_AliasManager_C_OnCloseEvent__DelegateSignature_Params
{
};

// Function BP_AliasManager.BP_AliasManager_C.OnOpenEvent__DelegateSignature
struct ABP_AliasManager_C_OnOpenEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
