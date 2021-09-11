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

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.SetupPrePFStartOperation
struct UBP_GSC_LongChat_C_SetupPrePFStartOperation_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.EndPlayLongChat
struct UBP_GSC_LongChat_C_EndPlayLongChat_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.UpdatePlayRecord
struct UBP_GSC_LongChat_C_UpdatePlayRecord_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.DestroyEventSkipController
struct UBP_GSC_LongChat_C_DestroyEventSkipController_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.NeedPlayEndMask?
struct UBP_GSC_LongChat_C_NeedPlayEndMask__Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PlayAbort
struct UBP_GSC_LongChat_C_PlayAbort_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.SendKpiData
struct UBP_GSC_LongChat_C_SendKpiData_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.FlushTextureStream
struct UBP_GSC_LongChat_C_FlushTextureStream_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.IsPausePossibleState
struct UBP_GSC_LongChat_C_IsPausePossibleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C._DoCaputerScene
struct UBP_GSC_LongChat_C__DoCaputerScene_Params
{
	struct FTransform                                  CameraTransform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UCameraComponent*                            BaseCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C._IsScreenMasked
struct UBP_GSC_LongChat_C__IsScreenMasked_Params
{
	bool                                               bMasked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C._ChangeScreenMask
struct UBP_GSC_LongChat_C__ChangeScreenMask_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C._DoScreenMask
struct UBP_GSC_LongChat_C__DoScreenMask_Params
{
	bool                                               MaskOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.AddPlayArgsOnPlayCamp
struct UBP_GSC_LongChat_C_AddPlayArgsOnPlayCamp_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PostSoundDuckingVolume
struct UBP_GSC_LongChat_C_PostSoundDuckingVolume_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PreSoundDuckingVolume
struct UBP_GSC_LongChat_C_PreSoundDuckingVolume_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PostEndGC
struct UBP_GSC_LongChat_C_PostEndGC_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PreStartGC
struct UBP_GSC_LongChat_C_PreStartGC_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PauseAndEventSkipManagement
struct UBP_GSC_LongChat_C_PauseAndEventSkipManagement_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.ShowNpcLevel
struct UBP_GSC_LongChat_C_ShowNpcLevel_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PauseManagement
struct UBP_GSC_LongChat_C_PauseManagement_Params
{
	bool                                               bEventSkip;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPGeneralFunctionBool
struct UBP_GSC_LongChat_C_BPGeneralFunctionBool_Params
{
	struct FName                                       OpertionName;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TMap<struct FName, struct FString>                 Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.SetScreenMaskVisible
struct UBP_GSC_LongChat_C_SetScreenMaskVisible_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.GetLongChatPlayTransform
struct UBP_GSC_LongChat_C_GetLongChatPlayTransform_Params
{
	struct FTransform                                  PlayTransform;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PFCharacterActive
struct UBP_GSC_LongChat_C_PFCharacterActive_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlayerActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.SetupScreenMask
struct UBP_GSC_LongChat_C_SetupScreenMask_Params
{
	bool                                               NewScreenMask;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.CreateScreenMask
struct UBP_GSC_LongChat_C_CreateScreenMask_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.DebugPrintSceneState
struct UBP_GSC_LongChat_C_DebugPrintSceneState_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Sleep
struct UBP_GSC_LongChat_C_BPE_Sleep_Params
{
	unsigned char                                      nextScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PushState
struct UBP_GSC_LongChat_C_PushState_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.PopState
struct UBP_GSC_LongChat_C_PopState_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.OnEndLongChat
struct UBP_GSC_LongChat_C_OnEndLongChat_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.IF_SetDelayLongchatClose
struct UBP_GSC_LongChat_C_IF_SetDelayLongchatClose_Params
{
	bool                                               bDelay;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.OnWakeup
struct UBP_GSC_LongChat_C_OnWakeup_Params
{
	unsigned char                                      ActiveScene;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.EventHideNpc
struct UBP_GSC_LongChat_C_EventHideNpc_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Finalize
struct UBP_GSC_LongChat_C_BPE_Finalize_Params
{
	ESceneFinalizeReason                               finalizeReason;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Initialize
struct UBP_GSC_LongChat_C_BPE_Initialize_Params
{
	ESceneInitializeMode                               initMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.BPE_Tick
struct UBP_GSC_LongChat_C_BPE_Tick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.OnMemoryRefresh
struct UBP_GSC_LongChat_C_OnMemoryRefresh_Params
{
};

// Function BP_GSC_LongChat.BP_GSC_LongChat_C.ExecuteUbergraph_BP_GSC_LongChat
struct UBP_GSC_LongChat_C_ExecuteUbergraph_BP_GSC_LongChat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
