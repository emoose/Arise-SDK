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

// Function BTT_PlayArts.BTT_PlayArts_C.WaitCanTransitionAttack
struct UBTT_PlayArts_C_WaitCanTransitionAttack_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayArts.BTT_PlayArts_C.WaitOnGround
struct UBTT_PlayArts_C_WaitOnGround_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayArts.BTT_PlayArts_C.WaitCancelFrame
struct UBTT_PlayArts_C_WaitCancelFrame_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayArts.BTT_PlayArts_C.WaitArtsEnd
struct UBTT_PlayArts_C_WaitArtsEnd_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayArts.BTT_PlayArts_C.ReceiveTickAI
struct UBTT_PlayArts_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayArts.BTT_PlayArts_C.ReceiveExecuteAI
struct UBTT_PlayArts_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayArts.BTT_PlayArts_C.ExecuteUbergraph_BTT_PlayArts
struct UBTT_PlayArts_C_ExecuteUbergraph_BTT_PlayArts_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
