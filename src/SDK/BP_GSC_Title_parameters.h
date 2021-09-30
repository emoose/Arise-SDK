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

// Function BP_GSC_Title.BP_GSC_Title_C.GetGSCTitle_IsTitleMoviePlay
struct UBP_GSC_Title_C_GetGSCTitle_IsTitleMoviePlay_Params
{
	bool                                               OutIsTitleMoviePlay;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.MenuBackImageUnLoad
struct UBP_GSC_Title_C_MenuBackImageUnLoad_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.MenuBackImageLoad
struct UBP_GSC_Title_C_MenuBackImageLoad_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.GetNewGameMap
struct UBP_GSC_Title_C_GetNewGameMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Title.BP_GSC_Title_C.IsTitleMoviePlay
struct UBP_GSC_Title_C_IsTitleMoviePlay_Params
{
	bool                                               OutIsTitleMoviePlay;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.IsEnableSystemPause
struct UBP_GSC_Title_C_IsEnableSystemPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.IsPausePossibleState
struct UBP_GSC_Title_C_IsPausePossibleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.SetPlayerCharacterVisibility
struct UBP_GSC_Title_C_SetPlayerCharacterVisibility_Params
{
	bool                                               IsVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.ResetConfig
struct UBP_GSC_Title_C_ResetConfig_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.IsMaskWhenTitleUIClosed
struct UBP_GSC_Title_C_IsMaskWhenTitleUIClosed_Params
{
	struct FString                                     Menu;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsMask;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.SetShowTitleLevel
struct UBP_GSC_Title_C_SetShowTitleLevel_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.PreloadNewGameMap
struct UBP_GSC_Title_C_PreloadNewGameMap_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.UnLoadEndLevel
struct UBP_GSC_Title_C_UnLoadEndLevel_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.UnLoadLevel
struct UBP_GSC_Title_C_UnLoadLevel_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.LoadEndLevel
struct UBP_GSC_Title_C_LoadEndLevel_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.LoadLevel
struct UBP_GSC_Title_C_LoadLevel_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.MountMainFunction
struct UBP_GSC_Title_C_MountMainFunction_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.HideNowLoading
struct UBP_GSC_Title_C_HideNowLoading_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.GameStart
struct UBP_GSC_Title_C_GameStart_Params
{
	struct FString                                     StartMap;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               InitGameData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LoadStart;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.ManagementScript
struct UBP_GSC_Title_C_ManagementScript_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.TitleUIClosed?
struct UBP_GSC_Title_C_TitleUIClosed__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FString                                     SelectedMenu;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GSC_Title.BP_GSC_Title_C.BootDebugMap
struct UBP_GSC_Title_C_BootDebugMap_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.SetupFieldMap
struct UBP_GSC_Title_C_SetupFieldMap_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.DebugPrintSceneState
struct UBP_GSC_Title_C_DebugPrintSceneState_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.SetupScene
struct UBP_GSC_Title_C_SetupScene_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.BPE_Finalize
struct UBP_GSC_Title_C_BPE_Finalize_Params
{
	ESceneFinalizeReason                               finalizeReason;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.BPE_Initialize
struct UBP_GSC_Title_C_BPE_Initialize_Params
{
	ESceneInitializeMode                               initMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.BPE_Tick
struct UBP_GSC_Title_C_BPE_Tick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.BPE_Wakeup
struct UBP_GSC_Title_C_BPE_Wakeup_Params
{
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.BPE_Sleep
struct UBP_GSC_Title_C_BPE_Sleep_Params
{
	unsigned char                                      nextScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.OnMenuShowDome
struct UBP_GSC_Title_C_OnMenuShowDome_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.OnMenuOpenStart
struct UBP_GSC_Title_C_OnMenuOpenStart_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.OnMenuCloseViewStart
struct UBP_GSC_Title_C_OnMenuCloseViewStart_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.ExecuteUbergraph_BP_GSC_Title
struct UBP_GSC_Title_C_ExecuteUbergraph_BP_GSC_Title_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.EmitterRemoveEvent__DelegateSignature
struct UBP_GSC_Title_C_EmitterRemoveEvent__DelegateSignature_Params
{
};

// Function BP_GSC_Title.BP_GSC_Title_C.ChengBackFlameSword__DelegateSignature
struct UBP_GSC_Title_C_ChengBackFlameSword__DelegateSignature_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Title.BP_GSC_Title_C.ChengBackUI__DelegateSignature
struct UBP_GSC_Title_C_ChengBackUI__DelegateSignature_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
