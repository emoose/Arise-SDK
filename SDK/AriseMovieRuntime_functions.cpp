
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

// Function AriseMovieRuntime.AriseMovieActor.UpdateSubtitle
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GroupID                        (Parm, ZeroConstructor)
// struct FString                 StringID                       (Parm, ZeroConstructor)

void AAriseMovieActor::UpdateSubtitle(bool Visibility, const struct FString& GroupID, const struct FString& StringID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.UpdateSubtitle");

	AAriseMovieActor_UpdateSubtitle_Params params;
	params.Visibility = Visibility;
	params.GroupID = GroupID;
	params.StringID = StringID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMovieRuntime.AriseMovieActor.UpdateManaStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// EManaComponentStatus           Status                         (Parm, ZeroConstructor, IsPlainOldData)

void AAriseMovieActor::UpdateManaStatus(EManaComponentStatus Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.UpdateManaStatus");

	AAriseMovieActor_UpdateManaStatus_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMovieRuntime.AriseMovieActor.SetupMaterial
// (Event, Public, BlueprintEvent)
// Parameters:
// EAriseMovieMaterialType        MaterialType                   (Parm, ZeroConstructor, IsPlainOldData)

void AAriseMovieActor::SetupMaterial(EAriseMovieMaterialType MaterialType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.SetupMaterial");

	AAriseMovieActor_SetupMaterial_Params params;
	params.MaterialType = MaterialType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMovieRuntime.AriseMovieActor.SetMasterVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void AAriseMovieActor::SetMasterVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.SetMasterVolume");

	AAriseMovieActor_SetMasterVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMovieRuntime.AriseMovieActor.ResetMaterial
// (Event, Public, BlueprintEvent)

void AAriseMovieActor::ResetMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.ResetMaterial");

	AAriseMovieActor_ResetMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMovieRuntime.AriseMovieActor.NotifyEventPoint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FManaEventPointInfo     Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void AAriseMovieActor::NotifyEventPoint(const struct FManaEventPointInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.NotifyEventPoint");

	AAriseMovieActor_NotifyEventPoint_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMovieRuntime.AriseMovieActor.MovieUnload
// (Final, Native, Public, BlueprintCallable)

void AAriseMovieActor::MovieUnload()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.MovieUnload");

	AAriseMovieActor_MovieUnload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMovieRuntime.AriseMovieActor.MovieStop
// (Final, Native, Public, BlueprintCallable)

void AAriseMovieActor::MovieStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.MovieStop");

	AAriseMovieActor_MovieStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMovieRuntime.AriseMovieActor.MoviePlay
// (Final, Native, Public, BlueprintCallable)

void AAriseMovieActor::MoviePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.MoviePlay");

	AAriseMovieActor_MoviePlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMovieRuntime.AriseMovieActor.MoviePause
// (Final, Native, Public, BlueprintCallable)

void AAriseMovieActor::MoviePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.MoviePause");

	AAriseMovieActor_MoviePause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMovieRuntime.AriseMovieActor.MovieLoad
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData)

void AAriseMovieActor::MovieLoad(const struct FString& Name, bool Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.MovieLoad");

	AAriseMovieActor_MovieLoad_Params params;
	params.Name = Name;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseMovieRuntime.AriseMovieActor.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseMovieActor::IsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.IsReady");

	AAriseMovieActor_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieActor.IsPreparing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseMovieActor::IsPreparing()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.IsPreparing");

	AAriseMovieActor_IsPreparing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieActor.IsError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseMovieActor::IsError()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.IsError");

	AAriseMovieActor_IsError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieActor.IsEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseMovieActor::IsEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.IsEnd");

	AAriseMovieActor_IsEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieActor.GetPlayTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAriseMovieActor::GetPlayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.GetPlayTime");

	AAriseMovieActor_GetPlayTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieActor.GetMasterVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAriseMovieActor::GetMasterVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.GetMasterVolume");

	AAriseMovieActor_GetMasterVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieActor.GetManaStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EManaComponentStatus           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EManaComponentStatus AAriseMovieActor::GetManaStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.GetManaStatus");

	AAriseMovieActor_GetManaStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieActor.GetCurrentStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAriseMovieStatus              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAriseMovieStatus AAriseMovieActor::GetCurrentStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieActor.GetCurrentStatus");

	AAriseMovieActor_GetCurrentStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieVoiceTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*              Movie                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAriseMovieRuntimeBPLibrary::STATIC_GetMovieVoiceTrack(class UManaMovie* Movie)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieVoiceTrack");

	UAriseMovieRuntimeBPLibrary_GetMovieVoiceTrack_Params params;
	params.Movie = Movie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieSubtitle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Label                          (Parm, ZeroConstructor)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseMovieRuntimeBPLibrary::STATIC_GetMovieSubtitle(const struct FString& Label, struct FString* Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieSubtitle");

	UAriseMovieRuntimeBPLibrary_GetMovieSubtitle_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieSoundEffectTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*              Movie                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAriseMovieRuntimeBPLibrary::STATIC_GetMovieSoundEffectTrack(class UManaMovie* Movie)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieSoundEffectTrack");

	UAriseMovieRuntimeBPLibrary_GetMovieSoundEffectTrack_Params params;
	params.Movie = Movie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMoviePath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Label                          (Parm, ZeroConstructor)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseMovieRuntimeBPLibrary::STATIC_GetMoviePath(const struct FString& Label, struct FString* Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMoviePath");

	UAriseMovieRuntimeBPLibrary_GetMoviePath_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieOpenFlagName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Label                          (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAriseMovieRuntimeBPLibrary::STATIC_GetMovieOpenFlagName(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieOpenFlagName");

	UAriseMovieRuntimeBPLibrary_GetMovieOpenFlagName_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieMusicTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*              Movie                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAriseMovieRuntimeBPLibrary::STATIC_GetMovieMusicTrack(class UManaMovie* Movie)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieMusicTrack");

	UAriseMovieRuntimeBPLibrary_GetMovieMusicTrack_Params params;
	params.Movie = Movie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieAudioInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UManaMovie*              Movie                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FAriseMovieAudioInfo    Music                          (Parm, OutParm)
// struct FAriseMovieAudioInfo    Voice                          (Parm, OutParm)
// struct FAriseMovieAudioInfo    SoundEffect                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseMovieRuntimeBPLibrary::STATIC_GetMovieAudioInfo(class UManaMovie* Movie, struct FAriseMovieAudioInfo* Music, struct FAriseMovieAudioInfo* Voice, struct FAriseMovieAudioInfo* SoundEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.GetMovieAudioInfo");

	UAriseMovieRuntimeBPLibrary_GetMovieAudioInfo_Params params;
	params.Movie = Movie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Music != nullptr)
		*Music = params.Music;
	if (Voice != nullptr)
		*Voice = params.Voice;
	if (SoundEffect != nullptr)
		*SoundEffect = params.SoundEffect;

	return params.ReturnValue;
}


// Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.CreateManaTextureFromSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*              Movie                          (Parm, ZeroConstructor, IsPlainOldData)
// class UManaTexture*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UManaTexture* UAriseMovieRuntimeBPLibrary::STATIC_CreateManaTextureFromSource(class UManaMovie* Movie)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseMovieRuntime.AriseMovieRuntimeBPLibrary.CreateManaTextureFromSource");

	UAriseMovieRuntimeBPLibrary_CreateManaTextureFromSource_Params params;
	params.Movie = Movie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
