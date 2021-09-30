
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CinematicTools.CinematicLevelSequencePlayer.OnPlaySequence
// (Final, Native, Public)

void UCinematicLevelSequencePlayer::OnPlaySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicTools.CinematicLevelSequencePlayer.OnPlaySequence");

	UCinematicLevelSequencePlayer_OnPlaySequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CinematicTools.CinematicLevelSequencePlayer.OnCameraChanged
// (Final, Native, Private)
// Parameters:
// class UCameraComponent*        CameraComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCinematicLevelSequencePlayer::OnCameraChanged(class UCameraComponent* CameraComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicTools.CinematicLevelSequencePlayer.OnCameraChanged");

	UCinematicLevelSequencePlayer_OnCameraChanged_Params params;
	params.CameraComponent = CameraComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CinematicTools.CinematicLevelSequencePlayer.AllSkipProcess
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FFrameNumber            SkipFrame                      (Parm)
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)

void UCinematicLevelSequencePlayer::AllSkipProcess(const struct FFrameNumber& SkipFrame, const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicTools.CinematicLevelSequencePlayer.AllSkipProcess");

	UCinematicLevelSequencePlayer_AllSkipProcess_Params params;
	params.SkipFrame = SkipFrame;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
