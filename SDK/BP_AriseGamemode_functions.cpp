
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

// Function BP_AriseGamemode.BP_AriseGamemode_C.IsMouseCursorVisibleScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameScene                GameScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::IsMouseCursorVisibleScene(EAriseGameScene GameScene, bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.IsMouseCursorVisibleScene");

	ABP_AriseGamemode_C_IsMouseCursorVisibleScene_Params params;
	params.GameScene = GameScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C._IsNeedAutoSaveLocation?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bNeedAutoSave                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::_IsNeedAutoSaveLocation_(const struct FString& LocationName, bool* bNeedAutoSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C._IsNeedAutoSaveLocation?");

	ABP_AriseGamemode_C__IsNeedAutoSaveLocation__Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNeedAutoSave != nullptr)
		*bNeedAutoSave = params.bNeedAutoSave;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ManageTextureCache
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::ManageTextureCache(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ManageTextureCache");

	ABP_AriseGamemode_C_ManageTextureCache_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.UnloadMenuClasses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::UnloadMenuClasses()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.UnloadMenuClasses");

	ABP_AriseGamemode_C_UnloadMenuClasses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.PreloadMenuClasses
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::PreloadMenuClasses(int Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.PreloadMenuClasses");

	ABP_AriseGamemode_C_PreloadMenuClasses_Params params;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.SetDefaultScreenColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::SetDefaultScreenColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.SetDefaultScreenColor");

	ABP_AriseGamemode_C_SetDefaultScreenColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.SetPFUILongChatManager
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::SetPFUILongChatManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.SetPFUILongChatManager");

	ABP_AriseGamemode_C_SetPFUILongChatManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.IsCurrentFadeWhite?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bWhite                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::IsCurrentFadeWhite_(bool* bWhite)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.IsCurrentFadeWhite?");

	ABP_AriseGamemode_C_IsCurrentFadeWhite__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWhite != nullptr)
		*bWhite = params.bWhite;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GoBackToLogin
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::GoBackToLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GoBackToLogin");

	ABP_AriseGamemode_C_GoBackToLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GoBackToScene
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  NewSceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::GoBackToScene(unsigned char NewSceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GoBackToScene");

	ABP_AriseGamemode_C_GoBackToScene_Params params;
	params.NewSceneId = NewSceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.SetDebugInputEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNew                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::SetDebugInputEnable(bool bNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.SetDebugInputEnable");

	ABP_AriseGamemode_C_SetDebugInputEnable_Params params;
	params.bNew = bNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.IsDebugInputEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bOut                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::IsDebugInputEnable(bool* bOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.IsDebugInputEnable");

	ABP_AriseGamemode_C_IsDebugInputEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOut != nullptr)
		*bOut = params.bOut;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OpenLocationFlagImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::OpenLocationFlagImpl(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OpenLocationFlagImpl");

	ABP_AriseGamemode_C_OpenLocationFlagImpl_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BattleFinalizeToTitle
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::BattleFinalizeToTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BattleFinalizeToTitle");

	ABP_AriseGamemode_C_BattleFinalizeToTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GetChangeMapReason
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EMapChangeReason               MapChangeReason                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::GetChangeMapReason(EMapChangeReason* MapChangeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GetChangeMapReason");

	ABP_AriseGamemode_C_GetChangeMapReason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapChangeReason != nullptr)
		*MapChangeReason = params.MapChangeReason;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ReloadCurrentMap
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ChangeMap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::ReloadCurrentMap(bool ChangeMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ReloadCurrentMap");

	ABP_AriseGamemode_C_ReloadCurrentMap_Params params;
	params.ChangeMap = ChangeMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GetPFHUDManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APF_HUD_Manager*         PFHUDManager                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::GetPFHUDManager(class APF_HUD_Manager** PFHUDManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GetPFHUDManager");

	ABP_AriseGamemode_C_GetPFHUDManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PFHUDManager != nullptr)
		*PFHUDManager = params.PFHUDManager;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GetHelpManagerInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBP_HelpManagerInterface_C> HelpManager                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::GetHelpManagerInterface(TScriptInterface<class UBP_HelpManagerInterface_C>* HelpManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GetHelpManagerInterface");

	ABP_AriseGamemode_C_GetHelpManagerInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HelpManager != nullptr)
		*HelpManager = params.HelpManager;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.FixCameraForCapture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        BaseCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCameraComponent*        OutCamera                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AriseGamemode_C::FixCameraForCapture(class UCameraComponent* BaseCamera, class UCameraComponent** OutCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.FixCameraForCapture");

	ABP_AriseGamemode_C_FixCameraForCapture_Params params;
	params.BaseCamera = BaseCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCamera != nullptr)
		*OutCamera = params.OutCamera;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ResetPostProcessSettingsForCapture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        BaseCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          OldBloomIntensity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OldMotionBlurAmount            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::ResetPostProcessSettingsForCapture(class UCameraComponent* BaseCamera, float OldBloomIntensity, float OldMotionBlurAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ResetPostProcessSettingsForCapture");

	ABP_AriseGamemode_C_ResetPostProcessSettingsForCapture_Params params;
	params.BaseCamera = BaseCamera;
	params.OldBloomIntensity = OldBloomIntensity;
	params.OldMotionBlurAmount = OldMotionBlurAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.SetPostProcessSettingsForCapture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        BaseCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          OldBloomIntensity              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OldMotionBlurAmount            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::SetPostProcessSettingsForCapture(class UCameraComponent* BaseCamera, float* OldBloomIntensity, float* OldMotionBlurAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.SetPostProcessSettingsForCapture");

	ABP_AriseGamemode_C_SetPostProcessSettingsForCapture_Params params;
	params.BaseCamera = BaseCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OldBloomIntensity != nullptr)
		*OldBloomIntensity = params.OldBloomIntensity;
	if (OldMotionBlurAmount != nullptr)
		*OldMotionBlurAmount = params.OldMotionBlurAmount;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.IsAutoSaveNow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bAutoSaving                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::IsAutoSaveNow(bool* bAutoSaving)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.IsAutoSaveNow");

	ABP_AriseGamemode_C_IsAutoSaveNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAutoSaving != nullptr)
		*bAutoSaving = params.bAutoSaving;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GetMenuManagerInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class UTO14_BP_MenuManagerInterface_C> OutMenuManager                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::GetMenuManagerInterface(TScriptInterface<class UTO14_BP_MenuManagerInterface_C>* OutMenuManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GetMenuManagerInterface");

	ABP_AriseGamemode_C_GetMenuManagerInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMenuManager != nullptr)
		*OutMenuManager = params.OutMenuManager;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BPGeneralFunctionBool
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   OpertionName                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TMap<struct FName, struct FString> Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_AriseGamemode_C::BPGeneralFunctionBool(const struct FName& OpertionName, TMap<struct FName, struct FString> Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BPGeneralFunctionBool");

	ABP_AriseGamemode_C_BPGeneralFunctionBool_Params params;
	params.OpertionName = OpertionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.SpawnActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::SpawnActor(class UClass* Class, class AActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.SpawnActor");

	ABP_AriseGamemode_C_SpawnActor_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateGUIInstances
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::CreateGUIInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.CreateGUIInstances");

	ABP_AriseGamemode_C_CreateGUIInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.SceneStreamLevelManagement
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::SceneStreamLevelManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.SceneStreamLevelManagement");

	ABP_AriseGamemode_C_SceneStreamLevelManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C._PLayLongChatWithArgs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLongChatPlayArgs       Args                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_AriseGamemode_C::_PLayLongChatWithArgs(const struct FLongChatPlayArgs& Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C._PLayLongChatWithArgs");

	ABP_AriseGamemode_C__PLayLongChatWithArgs_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OpenFastTravelPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocatorName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ShowUI                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::OpenFastTravelPoint(const struct FString& LocatorName, bool ShowUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OpenFastTravelPoint");

	ABP_AriseGamemode_C_OpenFastTravelPoint_Params params;
	params.LocatorName = LocatorName;
	params.ShowUI = ShowUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.UpdateLongChatPlayQue
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPostMapChange                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::UpdateLongChatPlayQue(bool bPostMapChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.UpdateLongChatPlayQue");

	ABP_AriseGamemode_C_UpdateLongChatPlayQue_Params params;
	params.bPostMapChange = bPostMapChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OpenLocationFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::OpenLocationFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OpenLocationFlag");

	ABP_AriseGamemode_C_OpenLocationFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.SetTipsScreenMask
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::SetTipsScreenMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.SetTipsScreenMask");

	ABP_AriseGamemode_C_SetTipsScreenMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GetCurrentScreenMask
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AScreenMaskBase*         CurrentScreenMask              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::GetCurrentScreenMask(class AScreenMaskBase** CurrentScreenMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GetCurrentScreenMask");

	ABP_AriseGamemode_C_GetCurrentScreenMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentScreenMask != nullptr)
		*CurrentScreenMask = params.CurrentScreenMask;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.IsScreenUnMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bUnMasked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::IsScreenUnMasked(bool* bUnMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.IsScreenUnMasked");

	ABP_AriseGamemode_C_IsScreenUnMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnMasked != nullptr)
		*bUnMasked = params.bUnMasked;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.IsScreenMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bMasked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::IsScreenMasked(bool* bMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.IsScreenMasked");

	ABP_AriseGamemode_C_IsScreenMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMasked != nullptr)
		*bMasked = params.bMasked;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EncountLockByUser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bLock                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::EncountLockByUser(const struct FString& UserName, bool bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EncountLockByUser");

	ABP_AriseGamemode_C_EncountLockByUser_Params params;
	params.UserName = UserName;
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.AutoSaveManagement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::AutoSaveManagement(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.AutoSaveManagement");

	ABP_AriseGamemode_C_AutoSaveManagement_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.AutoSaveCancel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::AutoSaveCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.AutoSaveCancel");

	ABP_AriseGamemode_C_AutoSaveCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.RequestAutoSave
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::RequestAutoSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.RequestAutoSave");

	ABP_AriseGamemode_C_RequestAutoSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GoBackToTitle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::GoBackToTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GoBackToTitle");

	ABP_AriseGamemode_C_GoBackToTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.PlayMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayMovieName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::PlayMovie(const struct FString& PlayMovieName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.PlayMovie");

	ABP_AriseGamemode_C_PlayMovie_Params params;
	params.PlayMovieName = PlayMovieName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeMapLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bNeedAutoSave                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::ChangeMapLocation(const struct FString& NewLocation, bool bNeedAutoSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeMapLocation");

	ABP_AriseGamemode_C_ChangeMapLocation_Params params;
	params.NewLocation = NewLocation;
	params.bNeedAutoSave = bNeedAutoSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateLocationMapManager
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::CreateLocationMapManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.CreateLocationMapManager");

	ABP_AriseGamemode_C_CreateLocationMapManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.DefaultPlayerReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIndoorMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::DefaultPlayerReset(bool InIndoorMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.DefaultPlayerReset");

	ABP_AriseGamemode_C_DefaultPlayerReset_Params params;
	params.InIndoorMode = InIndoorMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnPreMapChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::OnPreMapChange(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnPreMapChange");

	ABP_AriseGamemode_C_OnPreMapChange_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.UpdatePlayerInfoForMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::UpdatePlayerInfoForMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.UpdatePlayerInfoForMaterial");

	ABP_AriseGamemode_C_UpdatePlayerInfoForMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GetScreenMaskAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::GetScreenMaskAlpha(const struct FString& UserData, float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GetScreenMaskAlpha");

	ABP_AriseGamemode_C_GetScreenMaskAlpha_Params params;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alpha != nullptr)
		*Alpha = params.Alpha;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_GetCurrentMapname
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_AriseGamemode_C::BPE_GetCurrentMapname()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_GetCurrentMapname");

	ABP_AriseGamemode_C_BPE_GetCurrentMapname_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.PossessDefaultPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::PossessDefaultPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.PossessDefaultPlayer");

	ABP_AriseGamemode_C_PossessDefaultPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnPostMapChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSkipAutoSave                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::OnPostMapChange(const struct FString& NewMapName, const struct FString& OldMapName, bool bSkipAutoSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnPostMapChange");

	ABP_AriseGamemode_C_OnPostMapChange_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;
	params.bSkipAutoSave = bSkipAutoSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GetEditLevelList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         LevelNames                     (Parm, OutParm, ZeroConstructor)

void ABP_AriseGamemode_C::GetEditLevelList(TArray<struct FString>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GetEditLevelList");

	ABP_AriseGamemode_C_GetEditLevelList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.AddLevelDebugMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         LevelNames                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_AriseGamemode_C::AddLevelDebugMenu(TArray<struct FString>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.AddLevelDebugMenu");

	ABP_AriseGamemode_C_AddLevelDebugMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ResetWorldTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::ResetWorldTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ResetWorldTime");

	ABP_AriseGamemode_C_ResetWorldTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.SetWorldTimeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Pause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Immediately                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::SetWorldTimeSettings(float CurrentHour, bool Pause, bool Immediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.SetWorldTimeSettings");

	ABP_AriseGamemode_C_SetWorldTimeSettings_Params params;
	params.CurrentHour = CurrentHour;
	params.Pause = Pause;
	params.Immediately = Immediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeMapEnvironment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EnvName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::ChangeMapEnvironment(const struct FString& EnvName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeMapEnvironment");

	ABP_AriseGamemode_C_ChangeMapEnvironment_Params params;
	params.EnvName = EnvName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.CameraReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCameraPreset                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InCameraPitch                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::CameraReset(int InCameraPreset, float InCameraPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.CameraReset");

	ABP_AriseGamemode_C_CameraReset_Params params;
	params.InCameraPreset = InCameraPreset;
	params.InCameraPitch = InCameraPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.CanOpenPFMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::CanOpenPFMenu(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.CanOpenPFMenu");

	ABP_AriseGamemode_C_CanOpenPFMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GamePause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPause                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::GamePause(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GamePause");

	ABP_AriseGamemode_C_GamePause_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.LockPlayerFree
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLock                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::LockPlayerFree(bool bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.LockPlayerFree");

	ABP_AriseGamemode_C_LockPlayerFree_Params params;
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.PlaySequenceEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    SequencePlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::PlaySequenceEvent(class ULevelSequencePlayer* SequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.PlaySequenceEvent");

	ABP_AriseGamemode_C_PlaySequenceEvent_Params params;
	params.SequencePlayer = SequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ShowNowLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceWhite                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::ShowNowLoading(bool bShow, bool bForceWhite)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ShowNowLoading");

	ABP_AriseGamemode_C_ShowNowLoading_Params params;
	params.bShow = bShow;
	params.bForceWhite = bForceWhite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.SetDefalutScreenMask
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::SetDefalutScreenMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.SetDefalutScreenMask");

	ABP_AriseGamemode_C_SetDefalutScreenMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeAriseGameScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameScene                AriseGameScene                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESceneRunType                  NewRunType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bChangeNow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::ChangeAriseGameScene(EAriseGameScene AriseGameScene, ESceneRunType NewRunType, bool bChangeNow, bool* bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeAriseGameScene");

	ABP_AriseGamemode_C_ChangeAriseGameScene_Params params;
	params.AriseGameScene = AriseGameScene;
	params.NewRunType = NewRunType;
	params.bChangeNow = bChangeNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.RequestRemoveStreamLevels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           LevelNames                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_AriseGamemode_C::RequestRemoveStreamLevels(TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.RequestRemoveStreamLevels");

	ABP_AriseGamemode_C_RequestRemoveStreamLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.RequestAddStreamLevels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           LevelNames                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         LevelPaths                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_AriseGamemode_C::RequestAddStreamLevels(TArray<struct FName>* LevelNames, TArray<struct FString>* LevelPaths)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.RequestAddStreamLevels");

	ABP_AriseGamemode_C_RequestAddStreamLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
	if (LevelPaths != nullptr)
		*LevelPaths = params.LevelPaths;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ShowStreamLevels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Levels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_AriseGamemode_C::ShowStreamLevels(bool bShow, TArray<struct FName>* Levels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ShowStreamLevels");

	ABP_AriseGamemode_C_ShowStreamLevels_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ReservedAriseGameScene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameScene                GameScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::ReservedAriseGameScene(EAriseGameScene GameScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ReservedAriseGameScene");

	ABP_AriseGamemode_C_ReservedAriseGameScene_Params params;
	params.GameScene = GameScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.IsPrevSceneEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnd                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::IsPrevSceneEnd(bool* bEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.IsPrevSceneEnd");

	ABP_AriseGamemode_C_IsPrevSceneEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnd != nullptr)
		*bEnd = params.bEnd;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateDefaultPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Loaction                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_AriseGamemode_C::CreateDefaultPlayer(const struct FVector& Loaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.CreateDefaultPlayer");

	ABP_AriseGamemode_C_CreateDefaultPlayer_Params params;
	params.Loaction = Loaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.SetupSceneStreamLevel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SceneName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           oLevelNames                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         oLevelPaths                    (Parm, OutParm, ZeroConstructor)

void ABP_AriseGamemode_C::SetupSceneStreamLevel(const struct FString& SceneName, TArray<struct FName>* oLevelNames, TArray<struct FString>* oLevelPaths)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.SetupSceneStreamLevel");

	ABP_AriseGamemode_C_SetupSceneStreamLevel_Params params;
	params.SceneName = SceneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oLevelNames != nullptr)
		*oLevelNames = params.oLevelNames;
	if (oLevelPaths != nullptr)
		*oLevelPaths = params.oLevelPaths;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.GetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerController*       PlayerController               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::GetPlayerController(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.GetPlayerController");

	ABP_AriseGamemode_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateUMG
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             UserWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AriseGamemode_C::CreateUMG(class UClass* WidgetClass, class UUserWidget** UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.CreateUMG");

	ABP_AriseGamemode_C_CreateUMG_Params params;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserWidget != nullptr)
		*UserWidget = params.UserWidget;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_CreateSceneController
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  aSceneId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGameSceneController*    newCtrl                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::BPE_CreateSceneController(unsigned char aSceneId, class UGameSceneController** newCtrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_CreateSceneController");

	ABP_AriseGamemode_C_BPE_CreateSceneController_Params params;
	params.aSceneId = aSceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newCtrl != nullptr)
		*newCtrl = params.newCtrl;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.UserConstructionScript");

	ABP_AriseGamemode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateGUIInstanceManager
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::CreateGUIInstanceManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.CreateGUIInstanceManager");

	ABP_AriseGamemode_C_CreateGUIInstanceManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.CreateDefaultMaskInst
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::CreateDefaultMaskInst()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.CreateDefaultMaskInst");

	ABP_AriseGamemode_C_CreateDefaultMaskInst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventPreloadMenuClasses
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::EventPreloadMenuClasses()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventPreloadMenuClasses");

	ABP_AriseGamemode_C_EventPreloadMenuClasses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventPostGobackTitle
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::EventPostGobackTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventPostGobackTitle");

	ABP_AriseGamemode_C_EventPostGobackTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnBeginGameTitle
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::OnBeginGameTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnBeginGameTitle");

	ABP_AriseGamemode_C_OnBeginGameTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.DoScreenMask
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaskOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::DoScreenMask(bool MaskOn, bool AutoDestroy, bool bInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.DoScreenMask");

	ABP_AriseGamemode_C_DoScreenMask_Params params;
	params.MaskOn = MaskOn;
	params.AutoDestroy = AutoDestroy;
	params.bInstantly = bInstantly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnStartGameSectionProc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  StartedSection                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::OnStartGameSectionProc(unsigned char StartedSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnStartGameSectionProc");

	ABP_AriseGamemode_C_OnStartGameSectionProc_Params params;
	params.StartedSection = StartedSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.CaptureScene
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              CameraTransform                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bUsePlayerTransform            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraComponent*        BaseCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AriseGamemode_C::CaptureScene(const struct FTransform& CameraTransform, bool bUsePlayerTransform, class UCameraComponent* BaseCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.CaptureScene");

	ABP_AriseGamemode_C_CaptureScene_Params params;
	params.CameraTransform = CameraTransform;
	params.bUsePlayerTransform = bUsePlayerTransform;
	params.BaseCamera = BaseCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeScreenMask
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScreenMaskBase*         NewScreenMask                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::ChangeScreenMask(class AScreenMaskBase* NewScreenMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ChangeScreenMask");

	ABP_AriseGamemode_C_ChangeScreenMask_Params params;
	params.NewScreenMask = NewScreenMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.Event Go Back Scene Screen Mask
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::Event_Go_Back_Scene_Screen_Mask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.Event Go Back Scene Screen Mask");

	ABP_AriseGamemode_C_Event_Go_Back_Scene_Screen_Mask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AriseGamemode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ReceiveBeginPlay");

	ABP_AriseGamemode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_DoLoadSceneStreamLevel
// (Event, Public, BlueprintEvent)

void ABP_AriseGamemode_C::BPE_DoLoadSceneStreamLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_DoLoadSceneStreamLevel");

	ABP_AriseGamemode_C_BPE_DoLoadSceneStreamLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_DoUnloadSceneStreamLevel
// (Event, Public, BlueprintEvent)

void ABP_AriseGamemode_C::BPE_DoUnloadSceneStreamLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_DoUnloadSceneStreamLevel");

	ABP_AriseGamemode_C_BPE_DoUnloadSceneStreamLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ReceiveTick");

	ABP_AriseGamemode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ReceiveEndPlay");

	ABP_AriseGamemode_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnDoSceneCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              CaptureTransform               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UCameraComponent*        BaseCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AriseGamemode_C::OnDoSceneCapture(const struct FTransform& CaptureTransform, class UCameraComponent* BaseCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnDoSceneCapture");

	ABP_AriseGamemode_C_OnDoSceneCapture_Params params;
	params.CaptureTransform = CaptureTransform;
	params.BaseCamera = BaseCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_PlayLongChat
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LongchatName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bInstantly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::BPE_PlayLongChat(const struct FString& LongchatName, bool bInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_PlayLongChat");

	ABP_AriseGamemode_C_BPE_PlayLongChat_Params params;
	params.LongchatName = LongchatName;
	params.bInstantly = bInstantly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_MapChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 MapLocator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EMapChangeReason               reason                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::BPE_MapChange(const struct FString& MapName, const struct FString& MapLocator, EMapChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_MapChange");

	ABP_AriseGamemode_C_BPE_MapChange_Params params;
	params.MapName = MapName;
	params.MapLocator = MapLocator;
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnRestartFieldScene
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::OnRestartFieldScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnRestartFieldScene");

	ABP_AriseGamemode_C_OnRestartFieldScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeDisplayScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::OnChangeDisplayScene(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeDisplayScene");

	ABP_AriseGamemode_C_OnChangeDisplayScene_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_PlayLongChatWithArgs
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LongchatName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLongChatPlayArgs       InArgs                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_AriseGamemode_C::BPE_PlayLongChatWithArgs(const struct FString& LongchatName, const struct FLongChatPlayArgs& InArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_PlayLongChatWithArgs");

	ABP_AriseGamemode_C_BPE_PlayLongChatWithArgs_Params params;
	params.LongchatName = LongchatName;
	params.InArgs = InArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_PlayMovie
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 movieName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::BPE_PlayMovie(const struct FString& movieName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_PlayMovie");

	ABP_AriseGamemode_C_BPE_PlayMovie_Params params;
	params.movieName = movieName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnEndMovie
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ActiveScene                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::OnEndMovie(unsigned char ActiveScene, unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnEndMovie");

	ABP_AriseGamemode_C_OnEndMovie_Params params;
	params.ActiveScene = ActiveScene;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnExecAutoSave
// (BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::OnExecAutoSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnExecAutoSave");

	ABP_AriseGamemode_C_OnExecAutoSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.DelayedUpdateLongchatPlayQue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPostMapChange                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::DelayedUpdateLongchatPlayQue(bool bPostMapChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.DelayedUpdateLongchatPlayQue");

	ABP_AriseGamemode_C_DelayedUpdateLongchatPlayQue_Params params;
	params.bPostMapChange = bPostMapChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnTextureCacheFlash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bGarbageCollection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DropMips                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::OnTextureCacheFlash(bool bGarbageCollection, bool DropMips)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnTextureCacheFlash");

	ABP_AriseGamemode_C_OnTextureCacheFlash_Params params;
	params.bGarbageCollection = bGarbageCollection;
	params.DropMips = DropMips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_MemoryRefresh
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bGarbageCollection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DropMips                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::BPE_MemoryRefresh(bool bGarbageCollection, bool DropMips)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_MemoryRefresh");

	ABP_AriseGamemode_C_BPE_MemoryRefresh_Params params;
	params.bGarbageCollection = bGarbageCollection;
	params.DropMips = DropMips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_TextureRefresh
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bGarbageCollection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DropMips                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::BPE_TextureRefresh(bool bGarbageCollection, bool DropMips)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.BPE_TextureRefresh");

	ABP_AriseGamemode_C_BPE_TextureRefresh_Params params;
	params.bGarbageCollection = bGarbageCollection;
	params.DropMips = DropMips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeScenarioCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::OnChangeScenarioCounter(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeScenarioCounter");

	ABP_AriseGamemode_C_OnChangeScenarioCounter_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventOnChanageDisplayScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::EventOnChanageDisplayScene(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventOnChanageDisplayScene");

	ABP_AriseGamemode_C_EventOnChanageDisplayScene_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.Event On Reset Player Free Lock Until Map Jump
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::Event_On_Reset_Player_Free_Lock_Until_Map_Jump(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.Event On Reset Player Free Lock Until Map Jump");

	ABP_AriseGamemode_C_Event_On_Reset_Player_Free_Lock_Until_Map_Jump_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeGameScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::OnChangeGameScene(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeGameScene");

	ABP_AriseGamemode_C_OnChangeGameScene_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.񣌘򠳾񍯐�0�0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::񣌘򠳾񍯐�0�0_1(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.񣌘򠳾񍯐�0�0_1");

	ABP_AriseGamemode_C_񣌘򠳾񍯐�0�0_1_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.ExecuteUbergraph_BP_AriseGamemode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::ExecuteUbergraph_BP_AriseGamemode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.ExecuteUbergraph_BP_AriseGamemode");

	ABP_AriseGamemode_C_ExecuteUbergraph_BP_AriseGamemode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventAutoSaveCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::EventAutoSaveCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventAutoSaveCancel__DelegateSignature");

	ABP_AriseGamemode_C_EventAutoSaveCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventChangeLocation_PFUI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewLocationName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::EventChangeLocation_PFUI__DelegateSignature(const struct FString& NewLocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventChangeLocation_PFUI__DelegateSignature");

	ABP_AriseGamemode_C_EventChangeLocation_PFUI__DelegateSignature_Params params;
	params.NewLocationName = NewLocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventAutoSaveComplite__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::EventAutoSaveComplite__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventAutoSaveComplite__DelegateSignature");

	ABP_AriseGamemode_C_EventAutoSaveComplite__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventRequestAutoSave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::EventRequestAutoSave__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventRequestAutoSave__DelegateSignature");

	ABP_AriseGamemode_C_EventRequestAutoSave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventExecAutoSave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::EventExecAutoSave__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventExecAutoSave__DelegateSignature");

	ABP_AriseGamemode_C_EventExecAutoSave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventOpenFastTravelPoint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::EventOpenFastTravelPoint__DelegateSignature(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventOpenFastTravelPoint__DelegateSignature");

	ABP_AriseGamemode_C_EventOpenFastTravelPoint__DelegateSignature_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventRestartFieldScene__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::EventRestartFieldScene__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventRestartFieldScene__DelegateSignature");

	ABP_AriseGamemode_C_EventRestartFieldScene__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventChangeLocation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewLocationName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::EventChangeLocation__DelegateSignature(const struct FString& NewLocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventChangeLocation__DelegateSignature");

	ABP_AriseGamemode_C_EventChangeLocation__DelegateSignature_Params params;
	params.NewLocationName = NewLocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventBattleStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_AriseGamemode_C::EventBattleStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventBattleStart__DelegateSignature");

	ABP_AriseGamemode_C_EventBattleStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventPreMapChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::EventPreMapChange__DelegateSignature(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventPreMapChange__DelegateSignature");

	ABP_AriseGamemode_C_EventPreMapChange__DelegateSignature_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventFieldWakeup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::EventFieldWakeup__DelegateSignature(unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventFieldWakeup__DelegateSignature");

	ABP_AriseGamemode_C_EventFieldWakeup__DelegateSignature_Params params;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.EventPostMapChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::EventPostMapChange__DelegateSignature(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.EventPostMapChange__DelegateSignature");

	ABP_AriseGamemode_C_EventPostMapChange__DelegateSignature_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeWorldTime__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewWorldTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AriseGamemode_C::OnChangeWorldTime__DelegateSignature(float NewWorldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.OnChangeWorldTime__DelegateSignature");

	ABP_AriseGamemode_C_OnChangeWorldTime__DelegateSignature_Params params;
	params.NewWorldTime = NewWorldTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.DoChangeMapEnvironment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EnvName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_AriseGamemode_C::DoChangeMapEnvironment__DelegateSignature(const struct FString& EnvName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.DoChangeMapEnvironment__DelegateSignature");

	ABP_AriseGamemode_C_DoChangeMapEnvironment__DelegateSignature_Params params;
	params.EnvName = EnvName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AriseGamemode.BP_AriseGamemode_C.DoCaptureScene__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              CaptureTransform               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UCameraComponent*        BaseCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AriseGamemode_C::DoCaptureScene__DelegateSignature(const struct FTransform& CaptureTransform, class UCameraComponent* BaseCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AriseGamemode.BP_AriseGamemode_C.DoCaptureScene__DelegateSignature");

	ABP_AriseGamemode_C_DoCaptureScene__DelegateSignature_Params params;
	params.CaptureTransform = CaptureTransform;
	params.BaseCamera = BaseCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
