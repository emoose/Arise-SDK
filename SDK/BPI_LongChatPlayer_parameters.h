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

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_OnStop
struct UBPI_LongChatPlayer_C_IF_OnStop_Params
{
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_OnResume
struct UBPI_LongChatPlayer_C_IF_OnResume_Params
{
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_OnPause
struct UBPI_LongChatPlayer_C_IF_OnPause_Params
{
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_IsPlayerFinalize
struct UBPI_LongChatPlayer_C_IF_IsPlayerFinalize_Params
{
	bool                                               bEnd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_Finalize
struct UBPI_LongChatPlayer_C_IF_Finalize_Params
{
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_IsScriptEndEnd
struct UBPI_LongChatPlayer_C_IF_IsScriptEndEnd_Params
{
	bool                                               bEnd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_Play
struct UBPI_LongChatPlayer_C_IF_Play_Params
{
	struct FTransform                                  PlayTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FString                                     PrecaptureBG;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_ChangePlayerCameraView
struct UBPI_LongChatPlayer_C_IF_ChangePlayerCameraView_Params
{
	bool                                               bChange;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_GetPlayOption
struct UBPI_LongChatPlayer_C_IF_GetPlayOption_Params
{
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetPlayParams
struct UBPI_LongChatPlayer_C_IF_SetPlayParams_Params
{
	struct FString                                     ScriptPath;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     StringParh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLongChatPlayArgs                           Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetTickableWhenPaused
struct UBPI_LongChatPlayer_C_IF_SetTickableWhenPaused_Params
{
	bool                                               TickAble;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetLChatBuilder
struct UBPI_LongChatPlayer_C_IF_SetLChatBuilder_Params
{
	class AActor*                                      Builder;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_SetPlayTransform
struct UBPI_LongChatPlayer_C_IF_SetPlayTransform_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPI_LongChatPlayer.BPI_LongChatPlayer_C.IF_GetWindowZOrder
struct UBPI_LongChatPlayer_C_IF_GetWindowZOrder_Params
{
	int                                                WinId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
