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

// Function AriseMovieRuntime.AriseMovieActor.UpdateSubtitle
struct AAriseMovieActor_UpdateSubtitle_Params
{
	bool                                               Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GroupID;                                                  // (Parm, ZeroConstructor)
	struct FString                                     StringID;                                                 // (Parm, ZeroConstructor)
};

// Function AriseMovieRuntime.AriseMovieActor.UpdateManaStatus
struct AAriseMovieActor_UpdateManaStatus_Params
{
	EManaComponentStatus                               Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieActor.SetupMaterial
struct AAriseMovieActor_SetupMaterial_Params
{
	EAriseMovieMaterialType                            MaterialType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieActor.SetMasterVolume
struct AAriseMovieActor_SetMasterVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieActor.ResetMaterial
struct AAriseMovieActor_ResetMaterial_Params
{
};

// Function AriseMovieRuntime.AriseMovieActor.NotifyEventPoint
struct AAriseMovieActor_NotifyEventPoint_Params
{
	struct FManaEventPointInfo                         Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AriseMovieRuntime.AriseMovieActor.MovieUnload
struct AAriseMovieActor_MovieUnload_Params
{
};

// Function AriseMovieRuntime.AriseMovieActor.MovieStop
struct AAriseMovieActor_MovieStop_Params
{
};

// Function AriseMovieRuntime.AriseMovieActor.MoviePlay
struct AAriseMovieActor_MoviePlay_Params
{
};

// Function AriseMovieRuntime.AriseMovieActor.MoviePause
struct AAriseMovieActor_MoviePause_Params
{
};

// Function AriseMovieRuntime.AriseMovieActor.MovieLoad
struct AAriseMovieActor_MovieLoad_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               Loop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieActor.IsReady
struct AAriseMovieActor_IsReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieActor.IsPreparing
struct AAriseMovieActor_IsPreparing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieActor.IsError
struct AAriseMovieActor_IsError_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieActor.IsEnd
struct AAriseMovieActor_IsEnd_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieActor.GetPlayTime
struct AAriseMovieActor_GetPlayTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieActor.GetMasterVolume
struct AAriseMovieActor_GetMasterVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieActor.GetManaStatus
struct AAriseMovieActor_GetManaStatus_Params
{
	EManaComponentStatus                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieActor.GetCurrentStatus
struct AAriseMovieActor_GetCurrentStatus_Params
{
	EAriseMovieStatus                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieVoiceTrack
struct UAriseMovieRuntimeBPLibrary_GetMovieVoiceTrack_Params
{
	class UManaMovie*                                  Movie;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieSubtitle
struct UAriseMovieRuntimeBPLibrary_GetMovieSubtitle_Params
{
	struct FString                                     Label;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieSoundEffectTrack
struct UAriseMovieRuntimeBPLibrary_GetMovieSoundEffectTrack_Params
{
	class UManaMovie*                                  Movie;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMoviePath
struct UAriseMovieRuntimeBPLibrary_GetMoviePath_Params
{
	struct FString                                     Label;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieOpenFlagName
struct UAriseMovieRuntimeBPLibrary_GetMovieOpenFlagName_Params
{
	struct FString                                     Label;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieMusicTrack
struct UAriseMovieRuntimeBPLibrary_GetMovieMusicTrack_Params
{
	class UManaMovie*                                  Movie;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieAudioInfo
struct UAriseMovieRuntimeBPLibrary_GetMovieAudioInfo_Params
{
	class UManaMovie*                                  Movie;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAriseMovieAudioInfo                        Music;                                                    // (Parm, OutParm)
	struct FAriseMovieAudioInfo                        Voice;                                                    // (Parm, OutParm)
	struct FAriseMovieAudioInfo                        SoundEffect;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.CreateManaTextureFromSource
struct UAriseMovieRuntimeBPLibrary_CreateManaTextureFromSource_Params
{
	class UManaMovie*                                  Movie;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UManaTexture*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
