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

// Function CinematicTools.CinematicLevelSequencePlayer.OnPlaySequence
struct UCinematicLevelSequencePlayer_OnPlaySequence_Params
{
};

// Function CinematicTools.CinematicLevelSequencePlayer.OnCameraChanged
struct UCinematicLevelSequencePlayer_OnCameraChanged_Params
{
	class UCameraComponent*                            CameraComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CinematicTools.CinematicLevelSequencePlayer.AllSkipProcess
struct UCinematicLevelSequencePlayer_AllSkipProcess_Params
{
	struct FFrameNumber                                SkipFrame;                                                // (Parm)
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
