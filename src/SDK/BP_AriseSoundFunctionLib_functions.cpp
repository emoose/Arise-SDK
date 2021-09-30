
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

// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseEventVoice
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InVoiceName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_PauseEventVoice(const struct FString& InVoiceName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseEventVoice");

	UBP_AriseSoundFunctionLib_C_ASND_PauseEventVoice_Params params;
	params.InVoiceName = InVoiceName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayEventVoice
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InVoiceName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_PlayEventVoice(const struct FString& InVoiceName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayEventVoice");

	UBP_AriseSoundFunctionLib_C_ASND_PlayEventVoice_Params params;
	params.InVoiceName = InVoiceName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_GetListenerPosition
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Out_Location                   (Parm, OutParm, IsPlainOldData)
// struct FRotator                Out_Rotation                   (Parm, OutParm, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_GetListenerPosition(const struct FVector& Location, const struct FRotator& Rotation, class UObject* __WorldContext, struct FVector* Out_Location, struct FRotator* Out_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_GetListenerPosition");

	UBP_AriseSoundFunctionLib_C_ASND_GetListenerPosition_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Location != nullptr)
		*Out_Location = params.Out_Location;
	if (Out_Rotation != nullptr)
		*Out_Rotation = params.Out_Rotation;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_SetListenerPosition
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_SetListenerPosition(const struct FVector& Location, const struct FRotator& Rotation, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_SetListenerPosition");

	UBP_AriseSoundFunctionLib_C_ASND_SetListenerPosition_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_UnlockSoundListener
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_UnlockSoundListener(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_UnlockSoundListener");

	UBP_AriseSoundFunctionLib_C_ASND_UnlockSoundListener_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_LockSoundListener
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_LockSoundListener(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_LockSoundListener");

	UBP_AriseSoundFunctionLib_C_ASND_LockSoundListener_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsSameCurrentPfAndBattleMusic
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_IsSameCurrentPfAndBattleMusic(class UObject* __WorldContext, bool* IsSame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsSameCurrentPfAndBattleMusic");

	UBP_AriseSoundFunctionLib_C_ASND_IsSameCurrentPfAndBattleMusic_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSame != nullptr)
		*IsSame = params.IsSame;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResetSoundSystem
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_ResetSoundSystem(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResetSoundSystem");

	UBP_AriseSoundFunctionLib_C_ASND_ResetSoundSystem_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_SetSpatialCondition
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_SetSpatialCondition(bool Flag, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_SetSpatialCondition");

	UBP_AriseSoundFunctionLib_C_ASND_SetSpatialCondition_Params params;
	params.Flag = Flag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResumeAllSound
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_ResumeAllSound(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResumeAllSound");

	UBP_AriseSoundFunctionLib_C_ASND_ResumeAllSound_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseAllSound
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_PauseAllSound(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseAllSound");

	UBP_AriseSoundFunctionLib_C_ASND_PauseAllSound_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_SetDuckingVolume
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BGM_Volume                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Ambient_Volume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Gaya_Volume                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_SetDuckingVolume(int BGM_Volume, int Ambient_Volume, int Gaya_Volume, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_SetDuckingVolume");

	UBP_AriseSoundFunctionLib_C_ASND_SetDuckingVolume_Params params;
	params.BGM_Volume = BGM_Volume;
	params.Ambient_Volume = Ambient_Volume;
	params.Gaya_Volume = Gaya_Volume;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_CheckAreaMapSatisfyCondition
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_CheckAreaMapSatisfyCondition(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_CheckAreaMapSatisfyCondition");

	UBP_AriseSoundFunctionLib_C_ASND_CheckAreaMapSatisfyCondition_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsBtlEncountGroupBtlMusicNameNull
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNull                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_IsBtlEncountGroupBtlMusicNameNull(const struct FName& Label, class UObject* __WorldContext, bool* IsNull)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsBtlEncountGroupBtlMusicNameNull");

	UBP_AriseSoundFunctionLib_C_ASND_IsBtlEncountGroupBtlMusicNameNull_Params params;
	params.Label = Label;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNull != nullptr)
		*IsNull = params.IsNull;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayBossBtlBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_PlayBossBtlBGM(const struct FName& Label, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayBossBtlBGM");

	UBP_AriseSoundFunctionLib_C_ASND_PlayBossBtlBGM_Params params;
	params.Label = Label;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsCurrentPfMusicNameNull
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNull                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_IsCurrentPfMusicNameNull(class UObject* __WorldContext, bool* IsNull)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsCurrentPfMusicNameNull");

	UBP_AriseSoundFunctionLib_C_ASND_IsCurrentPfMusicNameNull_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNull != nullptr)
		*IsNull = params.IsNull;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_DuckingEnd
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBGM                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAmbientSE                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_DuckingEnd(bool IsBGM, bool IsAmbientSE, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_DuckingEnd");

	UBP_AriseSoundFunctionLib_C_ASND_DuckingEnd_Params params;
	params.IsBGM = IsBGM;
	params.IsAmbientSE = IsAmbientSE;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_DuckingStart
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBGM                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAmbientSE                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_DuckingStart(bool IsBGM, bool IsAmbientSE, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_DuckingStart");

	UBP_AriseSoundFunctionLib_C_ASND_DuckingStart_Params params;
	params.IsBGM = IsBGM;
	params.IsAmbientSE = IsAmbientSE;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_RequestEventBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_EventBGMParam      Param                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_RequestEventBGM(const struct FSTR_EventBGMParam& Param, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_RequestEventBGM");

	UBP_AriseSoundFunctionLib_C_ASND_RequestEventBGM_Params params;
	params.Param = Param;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopEventBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_StopEventBGM(EBGMFadeType FadeType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopEventBGM");

	UBP_AriseSoundFunctionLib_C_ASND_StopEventBGM_Params params;
	params.FadeType = FadeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResumeEventBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_ResumeEventBGM(EBGMFadeType FadeType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResumeEventBGM");

	UBP_AriseSoundFunctionLib_C_ASND_ResumeEventBGM_Params params;
	params.FadeType = FadeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseEventBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_PauseEventBGM(EBGMFadeType FadeType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseEventBGM");

	UBP_AriseSoundFunctionLib_C_ASND_PauseEventBGM_Params params;
	params.FadeType = FadeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayEventBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MusicName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_PlayEventBGM(const struct FString& MusicName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayEventBGM");

	UBP_AriseSoundFunctionLib_C_ASND_PlayEventBGM_Params params;
	params.MusicName = MusicName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsCrossFadeMapBGM
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCrossFade                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_IsCrossFadeMapBGM(class UObject* __WorldContext, bool* IsCrossFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsCrossFadeMapBGM");

	UBP_AriseSoundFunctionLib_C_ASND_IsCrossFadeMapBGM_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCrossFade != nullptr)
		*IsCrossFade = params.IsCrossFade;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsSkipPlayMapBtlBGM
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSkipPlay                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_IsSkipPlayMapBtlBGM(class UObject* __WorldContext, bool* IsSkipPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsSkipPlayMapBtlBGM");

	UBP_AriseSoundFunctionLib_C_ASND_IsSkipPlayMapBtlBGM_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSkipPlay != nullptr)
		*IsSkipPlay = params.IsSkipPlay;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopMapBtlBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeOutType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_StopMapBtlBGM(EBGMFadeType FadeOutType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopMapBtlBGM");

	UBP_AriseSoundFunctionLib_C_ASND_StopMapBtlBGM_Params params;
	params.FadeOutType = FadeOutType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopMapPfBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeOutType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_StopMapPfBGM(EBGMFadeType FadeOutType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopMapPfBGM");

	UBP_AriseSoundFunctionLib_C_ASND_StopMapPfBGM_Params params;
	params.FadeOutType = FadeOutType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResumeMapPfBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeResumeType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_ResumeMapPfBGM(EBGMFadeType FadeResumeType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_ResumeMapPfBGM");

	UBP_AriseSoundFunctionLib_C_ASND_ResumeMapPfBGM_Params params;
	params.FadeResumeType = FadeResumeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseMapPfBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadePauseType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_PauseMapPfBGM(EBGMFadeType FadePauseType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PauseMapPfBGM");

	UBP_AriseSoundFunctionLib_C_ASND_PauseMapPfBGM_Params params;
	params.FadePauseType = FadePauseType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayCurrentMapBtlBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_PlayCurrentMapBtlBGM(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayCurrentMapBtlBGM");

	UBP_AriseSoundFunctionLib_C_ASND_PlayCurrentMapBtlBGM_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsPlayingMapPfBGM
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_IsPlayingMapPfBGM(class UObject* __WorldContext, bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsPlayingMapPfBGM");

	UBP_AriseSoundFunctionLib_C_ASND_IsPlayingMapPfBGM_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsSameMapPfBGM
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_IsSameMapPfBGM(class UObject* __WorldContext, bool* IsSame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_IsSameMapPfBGM");

	UBP_AriseSoundFunctionLib_C_ASND_IsSameMapPfBGM_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSame != nullptr)
		*IsSame = params.IsSame;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PrepareNextLevel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextLevelName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsStopBGM                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_PrepareNextLevel(const struct FString& NextLevelName, class UObject* __WorldContext, bool* IsStopBGM)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PrepareNextLevel");

	UBP_AriseSoundFunctionLib_C_ASND_PrepareNextLevel_Params params;
	params.NextLevelName = NextLevelName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsStopBGM != nullptr)
		*IsStopBGM = params.IsStopBGM;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayCurrentMapPfBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapPfBGMPlayType              MapPfBGMPlayType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_PlayCurrentMapPfBGM(EMapPfBGMPlayType MapPfBGMPlayType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_PlayCurrentMapPfBGM");

	UBP_AriseSoundFunctionLib_C_ASND_PlayCurrentMapPfBGM_Params params;
	params.MapPfBGMPlayType = MapPfBGMPlayType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopBGM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBGMFadeType                   FadeOutType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AriseSoundFunctionLib_C::STATIC_ASND_StopBGM(EBGMFadeType FadeOutType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseSoundFunctionLib.BP_AriseSoundFunctionLib_C.ASND_StopBGM");

	UBP_AriseSoundFunctionLib_C_ASND_StopBGM_Params params;
	params.FadeOutType = FadeOutType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
