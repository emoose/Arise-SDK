
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

// Function BP_EventManager.BP_EventManager_C.GetEventLevelSequencePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULevelSequencePlayer*    Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::GetEventLevelSequencePlayer(class ULevelSequencePlayer** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetEventLevelSequencePlayer");

	ABP_EventManager_C_GetEventLevelSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function BP_EventManager.BP_EventManager_C.IsPostEventNpcRespawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNpcRespawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::IsPostEventNpcRespawn(bool* bNpcRespawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.IsPostEventNpcRespawn");

	ABP_EventManager_C_IsPostEventNpcRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNpcRespawn != nullptr)
		*bNpcRespawn = params.bNpcRespawn;
}


// Function BP_EventManager.BP_EventManager_C.DestroyObjects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::DestroyObjects(bool* bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.DestroyObjects");

	ABP_EventManager_C_DestroyObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
}


// Function BP_EventManager.BP_EventManager_C.IsRunPostScript
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRun                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::IsRunPostScript(bool* bRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.IsRunPostScript");

	ABP_EventManager_C_IsRunPostScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRun != nullptr)
		*bRun = params.bRun;
}


// Function BP_EventManager.BP_EventManager_C.GetCurrentFrameInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Info                           (Parm, OutParm, ZeroConstructor)

void ABP_EventManager_C::GetCurrentFrameInfo(struct FString* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetCurrentFrameInfo");

	ABP_EventManager_C_GetCurrentFrameInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function BP_EventManager.BP_EventManager_C.IsNeedDisplayFrameInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Need                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::IsNeedDisplayFrameInfo(bool* Need)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.IsNeedDisplayFrameInfo");

	ABP_EventManager_C_IsNeedDisplayFrameInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Need != nullptr)
		*Need = params.Need;
}


// Function BP_EventManager.BP_EventManager_C.SoundRecoveryOnEventPlayEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::SoundRecoveryOnEventPlayEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.SoundRecoveryOnEventPlayEnd");

	ABP_EventManager_C_SoundRecoveryOnEventPlayEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.SendKpiPopularity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::SendKpiPopularity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.SendKpiPopularity");

	ABP_EventManager_C_SendKpiPopularity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.GetMovieSceneEventType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMovieSceneEventType           EventType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::GetMovieSceneEventType(EMovieSceneEventType* EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetMovieSceneEventType");

	ABP_EventManager_C_GetMovieSceneEventType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventType != nullptr)
		*EventType = params.EventType;
}


// Function BP_EventManager.BP_EventManager_C.IsPreloadComplete?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bPreloaded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::IsPreloadComplete_(bool* bPreloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.IsPreloadComplete?");

	ABP_EventManager_C_IsPreloadComplete__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPreloaded != nullptr)
		*bPreloaded = params.bPreloaded;
}


// Function BP_EventManager.BP_EventManager_C.DestroyObjectsImpl
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::DestroyObjectsImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.DestroyObjectsImpl");

	ABP_EventManager_C_DestroyObjectsImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.IsRunPostScriptImpl
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bRun                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::IsRunPostScriptImpl(bool* bRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.IsRunPostScriptImpl");

	ABP_EventManager_C_IsRunPostScriptImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRun != nullptr)
		*bRun = params.bRun;
}


// Function BP_EventManager.BP_EventManager_C._PostEventNpcRespawn?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EventManager_C::_PostEventNpcRespawn_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._PostEventNpcRespawn?");

	ABP_EventManager_C__PostEventNpcRespawn__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EventManager.BP_EventManager_C.IsEnableSystemPause
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EventManager_C::IsEnableSystemPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.IsEnableSystemPause");

	ABP_EventManager_C_IsEnableSystemPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EventManager.BP_EventManager_C._EventKPIManagement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EventManager_C::_EventKPIManagement(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._EventKPIManagement");

	ABP_EventManager_C__EventKPIManagement_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C._OpenLocationFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::_OpenLocationFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._OpenLocationFlag");

	ABP_EventManager_C__OpenLocationFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C._CanEventSkipTiming?
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanSkip                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::_CanEventSkipTiming_(bool* bCanSkip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._CanEventSkipTiming?");

	ABP_EventManager_C__CanEventSkipTiming__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanSkip != nullptr)
		*bCanSkip = params.bCanSkip;
}


// Function BP_EventManager.BP_EventManager_C.IsNeedDisplayPlayingFrame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bNeedDisplay                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::IsNeedDisplayPlayingFrame(bool* bNeedDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.IsNeedDisplayPlayingFrame");

	ABP_EventManager_C_IsNeedDisplayPlayingFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNeedDisplay != nullptr)
		*bNeedDisplay = params.bNeedDisplay;
}


// Function BP_EventManager.BP_EventManager_C.GetCurrentFrames
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_EventManager_C::GetCurrentFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetCurrentFrames");

	ABP_EventManager_C_GetCurrentFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EventManager.BP_EventManager_C.DoPostHpRecover
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::DoPostHpRecover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.DoPostHpRecover");

	ABP_EventManager_C_DoPostHpRecover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.DoPostFade
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::DoPostFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.DoPostFade");

	ABP_EventManager_C_DoPostFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.ApplyPostProcessSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings    PostProcessSettings            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          BloomIntensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MotionBlurAmount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::ApplyPostProcessSettings(float BloomIntensity, float MotionBlurAmount, struct FPostProcessSettings* PostProcessSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ApplyPostProcessSettings");

	ABP_EventManager_C_ApplyPostProcessSettings_Params params;
	params.BloomIntensity = BloomIntensity;
	params.MotionBlurAmount = MotionBlurAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = params.PostProcessSettings;
}


// Function BP_EventManager.BP_EventManager_C._EventSeekManagement
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::_EventSeekManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._EventSeekManagement");

	ABP_EventManager_C__EventSeekManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C._PostEventPostProcessOverride
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::_PostEventPostProcessOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._PostEventPostProcessOverride");

	ABP_EventManager_C__PostEventPostProcessOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C._PreEventPostProcessOverride
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::_PreEventPostProcessOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._PreEventPostProcessOverride");

	ABP_EventManager_C__PreEventPostProcessOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C._PostEventSoundControl
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::_PostEventSoundControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._PostEventSoundControl");

	ABP_EventManager_C__PostEventSoundControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C._IsChangeMapOrder?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            oldSceCounter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            newSceCounter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bChange                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::_IsChangeMapOrder_(const struct FString& MapName, int oldSceCounter, int newSceCounter, bool* bChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._IsChangeMapOrder?");

	ABP_EventManager_C__IsChangeMapOrder__Params params;
	params.MapName = MapName;
	params.oldSceCounter = oldSceCounter;
	params.newSceCounter = newSceCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChange != nullptr)
		*bChange = params.bChange;
}


// Function BP_EventManager.BP_EventManager_C.PauseManagement_Release
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::PauseManagement_Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.PauseManagement_Release");

	ABP_EventManager_C_PauseManagement_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C._SetSkipEnable
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMovieSceneSequencePlayer* Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::_SetSkipEnable(class UMovieSceneSequencePlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._SetSkipEnable");

	ABP_EventManager_C__SetSkipEnable_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C._RenderDebugInfo
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::_RenderDebugInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._RenderDebugInfo");

	ABP_EventManager_C__RenderDebugInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.EventSkipManagement
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::EventSkipManagement(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.EventSkipManagement");

	ABP_EventManager_C_EventSkipManagement_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.PrintPlayEventInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPrint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::PrintPlayEventInfo(bool bPrint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.PrintPlayEventInfo");

	ABP_EventManager_C_PrintPlayEventInfo_Params params;
	params.bPrint = bPrint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.EventAllSkip
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::EventAllSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.EventAllSkip");

	ABP_EventManager_C_EventAllSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.GetInputPause
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bPressed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::GetInputPause(bool* bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetInputPause");

	ABP_EventManager_C_GetInputPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPressed != nullptr)
		*bPressed = params.bPressed;
}


// Function BP_EventManager.BP_EventManager_C.PauseManagement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::PauseManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.PauseManagement");

	ABP_EventManager_C_PauseManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.GetPlayerAndFieldController
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::GetPlayerAndFieldController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetPlayerAndFieldController");

	ABP_EventManager_C_GetPlayerAndFieldController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.AutoSaveManagement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::AutoSaveManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.AutoSaveManagement");

	ABP_EventManager_C_AutoSaveManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.SetPlayTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::SetPlayTransform(class ULevelSequencePlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.SetPlayTransform");

	ABP_EventManager_C_SetPlayTransform_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.MapHideInEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::MapHideInEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.MapHideInEvent");

	ABP_EventManager_C_MapHideInEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.ConvertLongchatName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_EventManager_C::ConvertLongchatName(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ConvertLongchatName");

	ABP_EventManager_C_ConvertLongchatName_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EventManager.BP_EventManager_C.BattlePreload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::BattlePreload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.BattlePreload");

	ABP_EventManager_C_BattlePreload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.ShowNowLoading
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::ShowNowLoading(bool NewShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ShowNowLoading");

	ABP_EventManager_C_ShowNowLoading_Params params;
	params.NewShow = NewShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.PostEventProc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPostLongchat                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::PostEventProc(bool bPostLongchat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.PostEventProc");

	ABP_EventManager_C_PostEventProc_Params params;
	params.bPostLongchat = bPostLongchat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.CanEncount?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCanEncount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::CanEncount_(bool* bCanEncount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.CanEncount?");

	ABP_EventManager_C_CanEncount__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanEncount != nullptr)
		*bCanEncount = params.bCanEncount;
}


// Function BP_EventManager.BP_EventManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.UserConstructionScript");

	ABP_EventManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.EventManagerFinalize
// (BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::EventManagerFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.EventManagerFinalize");

	ABP_EventManager_C_EventManagerFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.Event_ShowLevels_HiddenInPlayEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDelayShowObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPostLongchat                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::Event_ShowLevels_HiddenInPlayEvent(bool bDelayShowObject, bool bPostLongchat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.Event_ShowLevels_HiddenInPlayEvent");

	ABP_EventManager_C_Event_ShowLevels_HiddenInPlayEvent_Params params;
	params.bDelayShowObject = bDelayShowObject;
	params.bPostLongchat = bPostLongchat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnPlayLevelSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*          Sq                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALevelSequenceActor*     SqActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::OnPlayLevelSequence(class ULevelSequence* Sq, class ALevelSequenceActor* SqActor, bool bLoop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnPlayLevelSequence");

	ABP_EventManager_C_OnPlayLevelSequence_Params params;
	params.Sq = Sq;
	params.SqActor = SqActor;
	params.bLoop = bLoop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnSkippedToEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFrameNumber            SkipFrame                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::OnSkippedToEnd(const struct FFrameNumber& SkipFrame, const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnSkippedToEnd");

	ABP_EventManager_C_OnSkippedToEnd_Params params;
	params.SkipFrame = SkipFrame;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnPlayEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::OnPlayEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnPlayEnd");

	ABP_EventManager_C_OnPlayEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnSkipEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    SequencePlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DelaySec                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::OnSkipEnable(class ULevelSequencePlayer* SequencePlayer, float DelaySec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnSkipEnable");

	ABP_EventManager_C_OnSkipEnable_Params params;
	params.SequencePlayer = SequencePlayer;
	params.DelaySec = DelaySec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnEventEndDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelaySec                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::OnEventEndDelay(float DelaySec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnEventEndDelay");

	ABP_EventManager_C_OnEventEndDelay_Params params;
	params.DelaySec = DelaySec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.BPE_MapChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocatorName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            oldSceCounter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            newSceCounter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::BPE_MapChange(const struct FString& MapName, const struct FString& LocatorName, int oldSceCounter, int newSceCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.BPE_MapChange");

	ABP_EventManager_C_BPE_MapChange_Params params;
	params.MapName = MapName;
	params.LocatorName = LocatorName;
	params.oldSceCounter = oldSceCounter;
	params.newSceCounter = newSceCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.EventAtPFRuning
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::EventAtPFRuning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.EventAtPFRuning");

	ABP_EventManager_C_EventAtPFRuning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.BPE_PlayLongChat
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 EventNo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EventManager_C::BPE_PlayLongChat(const struct FString& EventNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.BPE_PlayLongChat");

	ABP_EventManager_C_BPE_PlayLongChat_Params params;
	params.EventNo = EventNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnChangeScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ActiveScene                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::OnChangeScene(unsigned char ActiveScene, unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnChangeScene");

	ABP_EventManager_C_OnChangeScene_Params params;
	params.ActiveScene = ActiveScene;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EventManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ReceiveBeginPlay");

	ABP_EventManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.BPE_PlayEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UEventComponent*         EventComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_EventManager_C::BPE_PlayEvent(class UEventComponent* EventComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.BPE_PlayEvent");

	ABP_EventManager_C_BPE_PlayEvent_Params params;
	params.EventComponent = EventComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ReceiveTick");

	ABP_EventManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnLevelUnload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEventComponent*         nowComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bAbort                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::OnLevelUnload(class UEventComponent* nowComponent, bool bAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnLevelUnload");

	ABP_EventManager_C_OnLevelUnload_Params params;
	params.nowComponent = nowComponent;
	params.bAbort = bAbort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnEventFinalize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OptionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EventManager_C::OnEventFinalize(const struct FString& EventName, const struct FString& OptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnEventFinalize");

	ABP_EventManager_C_OnEventFinalize_Params params;
	params.EventName = EventName;
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnPostMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EventManager_C::OnPostMapChange(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnPostMapChange");

	ABP_EventManager_C_OnPostMapChange_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.BPE_PreEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEventPlayState                playState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::BPE_PreEvent(EEventPlayState playState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.BPE_PreEvent");

	ABP_EventManager_C_BPE_PreEvent_Params params;
	params.playState = playState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.BPE_RunScript
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UClass*                  ScriptClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ScriptUserString               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AActor*                  scriptOwnerActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::BPE_RunScript(class UClass* ScriptClass, const struct FString& ScriptUserString, class AActor* scriptOwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.BPE_RunScript");

	ABP_EventManager_C_BPE_RunScript_Params params;
	params.ScriptClass = ScriptClass;
	params.ScriptUserString = ScriptUserString;
	params.scriptOwnerActor = scriptOwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnWatchEventScript
// (BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::OnWatchEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnWatchEventScript");

	ABP_EventManager_C_OnWatchEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.BPE_EndEvent
// (Event, Protected, BlueprintEvent)

void ABP_EventManager_C::BPE_EndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.BPE_EndEvent");

	ABP_EventManager_C_BPE_EndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnEventBattleStart
// (BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::OnEventBattleStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnEventBattleStart");

	ABP_EventManager_C_OnEventBattleStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnPostEventBattle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::OnPostEventBattle(unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnPostEventBattle");

	ABP_EventManager_C_OnPostEventBattle_Params params;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.BPE_PlayMovie
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 EventNo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_EventManager_C::BPE_PlayMovie(const struct FString& EventNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.BPE_PlayMovie");

	ABP_EventManager_C_BPE_PlayMovie_Params params;
	params.EventNo = EventNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnEndMovie
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ActiveScene                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::OnEndMovie(unsigned char ActiveScene, unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnEndMovie");

	ABP_EventManager_C_OnEndMovie_Params params;
	params.ActiveScene = ActiveScene;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.BPE_OnPreFade
// (Event, Protected, BlueprintEvent)

void ABP_EventManager_C::BPE_OnPreFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.BPE_OnPreFade");

	ABP_EventManager_C_BPE_OnPreFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnPreEventBattle
// (BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::OnPreEventBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnPreEventBattle");

	ABP_EventManager_C_OnPreEventBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnEventSkipAll
// (BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::OnEventSkipAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnEventSkipAll");

	ABP_EventManager_C_OnEventSkipAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.BPE_BattleStartRequest
// (Event, Protected, BlueprintEvent)

void ABP_EventManager_C::BPE_BattleStartRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.BPE_BattleStartRequest");

	ABP_EventManager_C_BPE_BattleStartRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ReceiveEndPlay");

	ABP_EventManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.BPE_ShowNowLoading
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::BPE_ShowNowLoading(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.BPE_ShowNowLoading");

	ABP_EventManager_C_BPE_ShowNowLoading_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnLoadClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InLoadedAssetClass             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::OnLoadClass(class UClass* InLoadedAssetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnLoadClass");

	ABP_EventManager_C_OnLoadClass_Params params;
	params.InLoadedAssetClass = InLoadedAssetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.RequestMapShowOutEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::RequestMapShowOutEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RequestMapShowOutEvent");

	ABP_EventManager_C_RequestMapShowOutEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnGoBackTitle
// (BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::OnGoBackTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnGoBackTitle");

	ABP_EventManager_C_OnGoBackTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.ExecuteUbergraph_BP_EventManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::ExecuteUbergraph_BP_EventManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ExecuteUbergraph_BP_EventManager");

	ABP_EventManager_C_ExecuteUbergraph_BP_EventManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C._OnPlayLevelSequence__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PlayEventLevelName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StartFrame                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::_OnPlayLevelSequence__DelegateSignature(const struct FName& PlayEventLevelName, int StartFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C._OnPlayLevelSequence__DelegateSignature");

	ABP_EventManager_C__OnPlayLevelSequence__DelegateSignature_Params params;
	params.PlayEventLevelName = PlayEventLevelName;
	params.StartFrame = StartFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.EvPlayLevelSequence__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*          LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALevelSequenceActor*     LevelSequenceActor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventManager_C::EvPlayLevelSequence__DelegateSignature(class ULevelSequence* LevelSequence, class ALevelSequenceActor* LevelSequenceActor, bool Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.EvPlayLevelSequence__DelegateSignature");

	ABP_EventManager_C_EvPlayLevelSequence__DelegateSignature_Params params;
	params.LevelSequence = LevelSequence;
	params.LevelSequenceActor = LevelSequenceActor;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnEndEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::OnEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnEndEvent__DelegateSignature");

	ABP_EventManager_C_OnEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.OnPreEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::OnPreEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnPreEvent__DelegateSignature");

	ABP_EventManager_C_OnPreEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.EvEventSkipAll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::EvEventSkipAll__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.EvEventSkipAll__DelegateSignature");

	ABP_EventManager_C_EvEventSkipAll__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.EvPreEventBattle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::EvPreEventBattle__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.EvPreEventBattle__DelegateSignature");

	ABP_EventManager_C_EvPreEventBattle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.WatchScriptProcess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EventManager_C::WatchScriptProcess__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.WatchScriptProcess__DelegateSignature");

	ABP_EventManager_C_WatchScriptProcess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventManager.BP_EventManager_C.EvLevelUnload__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEventComponent*         nowCoponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_EventManager_C::EvLevelUnload__DelegateSignature(class UEventComponent* nowCoponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.EvLevelUnload__DelegateSignature");

	ABP_EventManager_C_EvLevelUnload__DelegateSignature_Params params;
	params.nowCoponent = nowCoponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
