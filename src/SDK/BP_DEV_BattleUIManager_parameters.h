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

// Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevHudClosePlayableHelp
struct ABP_DEV_BattleUIManager_C_DevHudClosePlayableHelp_Params
{
};

// Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevHUDShowPlayAbleHelp
struct ABP_DEV_BattleUIManager_C_DevHUDShowPlayAbleHelp_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Explanation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.UserConstructionScript
struct ABP_DEV_BattleUIManager_C_UserConstructionScript_Params
{
};

// Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevOnClosePlayableHelp__DelegateSignature
struct ABP_DEV_BattleUIManager_C_DevOnClosePlayableHelp__DelegateSignature_Params
{
};

// Function BP_DEV_BattleUIManager.BP_DEV_BattleUIManager_C.DevOnOpenPlayableHelp__DelegateSignature
struct ABP_DEV_BattleUIManager_C_DevOnOpenPlayableHelp__DelegateSignature_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Explanation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
