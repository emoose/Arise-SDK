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

// Function BP_GSC_Movie.BP_GSC_Movie_C.SetPostMaskColor
struct UBP_GSC_Movie_C_SetPostMaskColor_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Movie.BP_GSC_Movie_C.IsEnableSystemPause
struct UBP_GSC_Movie_C_IsEnableSystemPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Movie.BP_GSC_Movie_C.ExitMovie
struct UBP_GSC_Movie_C_ExitMovie_Params
{
};

// Function BP_GSC_Movie.BP_GSC_Movie_C.PlayMovie
struct UBP_GSC_Movie_C_PlayMovie_Params
{
};

// Function BP_GSC_Movie.BP_GSC_Movie_C.WaitEndMovie
struct UBP_GSC_Movie_C_WaitEndMovie_Params
{
	bool                                               bEnd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Movie.BP_GSC_Movie_C.DebugPrintSceneState
struct UBP_GSC_Movie_C_DebugPrintSceneState_Params
{
};

// Function BP_GSC_Movie.BP_GSC_Movie_C.BPE_Tick
struct UBP_GSC_Movie_C_BPE_Tick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Movie.BP_GSC_Movie_C.BPE_Initialize
struct UBP_GSC_Movie_C_BPE_Initialize_Params
{
	ESceneInitializeMode                               initMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Movie.BP_GSC_Movie_C.SetMovieName
struct UBP_GSC_Movie_C_SetMovieName_Params
{
	struct FString                                     movieName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GSC_Movie.BP_GSC_Movie_C.BPE_Finalize
struct UBP_GSC_Movie_C_BPE_Finalize_Params
{
	ESceneFinalizeReason                               finalizeReason;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Movie.BP_GSC_Movie_C.EventPreFade
struct UBP_GSC_Movie_C_EventPreFade_Params
{
	bool                                               bBlack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Movie.BP_GSC_Movie_C.ExecuteUbergraph_BP_GSC_Movie
struct UBP_GSC_Movie_C_ExecuteUbergraph_BP_GSC_Movie_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
