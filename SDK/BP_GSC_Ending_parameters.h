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

// Function BP_GSC_Ending.BP_GSC_Ending_C.IsPausePossibleState
struct UBP_GSC_Ending_C_IsPausePossibleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.IsEnableSystemPause
struct UBP_GSC_Ending_C_IsEnableSystemPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.IsClearSave
struct UBP_GSC_Ending_C_IsClearSave_Params
{
	bool                                               OutIsClearSave;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.SetPlayerCharacterVisibility
struct UBP_GSC_Ending_C_SetPlayerCharacterVisibility_Params
{
	bool                                               IsVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.IsPlayMask
struct UBP_GSC_Ending_C_IsPlayMask_Params
{
	bool                                               OutIsMask;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.PreloadMovie
struct UBP_GSC_Ending_C_PreloadMovie_Params
{
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.FinalizeMovie
struct UBP_GSC_Ending_C_FinalizeMovie_Params
{
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.IsMovieEnd
struct UBP_GSC_Ending_C_IsMovieEnd_Params
{
	bool                                               bEnd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.IsLoadAsyncCheck
struct UBP_GSC_Ending_C_IsLoadAsyncCheck_Params
{
	bool                                               IsLoadEnd;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.IsLevelUnloaded
struct UBP_GSC_Ending_C_IsLevelUnloaded_Params
{
	bool                                               bUnloaded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.IsLevelShowed
struct UBP_GSC_Ending_C_IsLevelShowed_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.IsLevelLoaded
struct UBP_GSC_Ending_C_IsLevelLoaded_Params
{
	bool                                               Loaded;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.EventPlayMovie
struct UBP_GSC_Ending_C_EventPlayMovie_Params
{
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.LevelLoad
struct UBP_GSC_Ending_C_LevelLoad_Params
{
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.LevelShow
struct UBP_GSC_Ending_C_LevelShow_Params
{
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.LevelUnload
struct UBP_GSC_Ending_C_LevelUnload_Params
{
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.BPE_Initialize
struct UBP_GSC_Ending_C_BPE_Initialize_Params
{
	ESceneInitializeMode                               initMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.BPE_Tick
struct UBP_GSC_Ending_C_BPE_Tick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.BPE_Finalize
struct UBP_GSC_Ending_C_BPE_Finalize_Params
{
	ESceneFinalizeReason                               finalizeReason;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.ExecuteUbergraph_BP_GSC_Ending
struct UBP_GSC_Ending_C_ExecuteUbergraph_BP_GSC_Ending_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Ending.BP_GSC_Ending_C.DeleteEvent__DelegateSignature
struct UBP_GSC_Ending_C_DeleteEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
