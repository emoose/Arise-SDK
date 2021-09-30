
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

// Function BP_GSC_Field.BP_GSC_Field_C.GetFieldSceneLocalState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENM_FieldSceneLocalState> LocalState                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::GetFieldSceneLocalState(TEnumAsByte<ENM_FieldSceneLocalState>* LocalState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetFieldSceneLocalState");

	UBP_GSC_Field_C_GetFieldSceneLocalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalState != nullptr)
		*LocalState = params.LocalState;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetMapShowState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENM_MapShowState>  MapShowState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::GetMapShowState(TEnumAsByte<ENM_MapShowState>* MapShowState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetMapShowState");

	UBP_GSC_Field_C_GetMapShowState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapShowState != nullptr)
		*MapShowState = params.MapShowState;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsMapUnloadedWithAllMapNoAction?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEntry                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsMapUnloadedWithAllMapNoAction_(const struct FString& MapName, bool* bEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsMapUnloadedWithAllMapNoAction?");

	UBP_GSC_Field_C_IsMapUnloadedWithAllMapNoAction__Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEntry != nullptr)
		*bEntry = params.bEntry;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsPFHoldMousePosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsPFHoldMousePosition(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsPFHoldMousePosition");

	UBP_GSC_Field_C_IsPFHoldMousePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsPreShowMap?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPreShow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsPreShowMap_(bool* bPreShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsPreShowMap?");

	UBP_GSC_Field_C_IsPreShowMap__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPreShow != nullptr)
		*bPreShow = params.bPreShow;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetMenuID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 MenuID                         (Parm, OutParm, ZeroConstructor)

void UBP_GSC_Field_C::GetMenuID(struct FString* MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetMenuID");

	UBP_GSC_Field_C_GetMenuID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuID != nullptr)
		*MenuID = params.MenuID;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetMapLocatorName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapLocatorName                 (Parm, OutParm, ZeroConstructor)

void UBP_GSC_Field_C::GetMapLocatorName(struct FString* MapLocatorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetMapLocatorName");

	UBP_GSC_Field_C_GetMapLocatorName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapLocatorName != nullptr)
		*MapLocatorName = params.MapLocatorName;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetNextMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextMapName                    (Parm, OutParm, ZeroConstructor)

void UBP_GSC_Field_C::GetNextMapName(struct FString* NextMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetNextMapName");

	UBP_GSC_Field_C_GetNextMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextMapName != nullptr)
		*NextMapName = params.NextMapName;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetMapLocatorDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapLocatorDatabase*     MapLocatorDatabase             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::GetMapLocatorDatabase(class UMapLocatorDatabase** MapLocatorDatabase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetMapLocatorDatabase");

	UBP_GSC_Field_C_GetMapLocatorDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapLocatorDatabase != nullptr)
		*MapLocatorDatabase = params.MapLocatorDatabase;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsPlayerFree?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsPlayerFree_(bool* Is)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsPlayerFree?");

	UBP_GSC_Field_C_IsPlayerFree__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is != nullptr)
		*Is = params.Is;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetMapChangeReason
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapChangeReason               MapChangeReason                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::GetMapChangeReason(EMapChangeReason* MapChangeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetMapChangeReason");

	UBP_GSC_Field_C_GetMapChangeReason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapChangeReason != nullptr)
		*MapChangeReason = params.MapChangeReason;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetOldMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OldMapName                     (Parm, OutParm, ZeroConstructor)

void UBP_GSC_Field_C::GetOldMapName(struct FString* OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetOldMapName");

	UBP_GSC_Field_C_GetOldMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OldMapName != nullptr)
		*OldMapName = params.OldMapName;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetPFHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APF_HUD_Manager*         PFHUD                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::GetPFHUD(class APF_HUD_Manager** PFHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetPFHUD");

	UBP_GSC_Field_C_GetPFHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PFHUD != nullptr)
		*PFHUD = params.PFHUD;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ChangeMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChangeMap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EMapChangeReason               MapChangeReason                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bChangeScenarioFlag            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceMapChangePostEvent       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNpcRespawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResetPlayerPose               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::ChangeMap(const struct FString& ChangeMap, const struct FString& MapLocatorName, EMapChangeReason MapChangeReason, bool bChangeScenarioFlag, bool bForceMapChangePostEvent, bool bNpcRespawn, bool bResetPlayerPose, bool* bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ChangeMap");

	UBP_GSC_Field_C_ChangeMap_Params params;
	params.ChangeMap = ChangeMap;
	params.MapLocatorName = MapLocatorName;
	params.MapChangeReason = MapChangeReason;
	params.bChangeScenarioFlag = bChangeScenarioFlag;
	params.bForceMapChangePostEvent = bForceMapChangePostEvent;
	params.bNpcRespawn = bNpcRespawn;
	params.bResetPlayerPose = bResetPlayerPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
}


// Function BP_GSC_Field.BP_GSC_Field_C.PreloadMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bPreloaded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::PreloadMap(const struct FString& MapName, bool* bAccept, bool* bPreloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.PreloadMap");

	UBP_GSC_Field_C_PreloadMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
	if (bPreloaded != nullptr)
		*bPreloaded = params.bPreloaded;
}


// Function BP_GSC_Field.BP_GSC_Field_C.UnloadMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bAtActorFinalize               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UnloadAccept                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::UnloadMap(const struct FString& MapName, bool bAtActorFinalize, bool* UnloadAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.UnloadMap");

	UBP_GSC_Field_C_UnloadMap_Params params;
	params.MapName = MapName;
	params.bAtActorFinalize = bAtActorFinalize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnloadAccept != nullptr)
		*UnloadAccept = params.UnloadAccept;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsMapUnloaded?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEntry                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsMapUnloaded_(const struct FString& MapName, bool* bEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsMapUnloaded?");

	UBP_GSC_Field_C_IsMapUnloaded__Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEntry != nullptr)
		*bEntry = params.bEntry;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetCurrentMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CurrentMapName                 (Parm, OutParm, ZeroConstructor)

void UBP_GSC_Field_C::GetCurrentMapName(struct FString* CurrentMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetCurrentMapName");

	UBP_GSC_Field_C_GetCurrentMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentMapName != nullptr)
		*CurrentMapName = params.CurrentMapName;
}


// Function BP_GSC_Field.BP_GSC_Field_C.WatchingTextureStreamingTick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::WatchingTextureStreamingTick(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.WatchingTextureStreamingTick");

	UBP_GSC_Field_C_WatchingTextureStreamingTick_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.StartWatchingTextureStreaming
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::StartWatchingTextureStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.StartWatchingTextureStreaming");

	UBP_GSC_Field_C_StartWatchingTextureStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsTextureStreaming?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bStreaming                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsTextureStreaming_(bool* bStreaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsTextureStreaming?");

	UBP_GSC_Field_C_IsTextureStreaming__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStreaming != nullptr)
		*bStreaming = params.bStreaming;
}


// Function BP_GSC_Field.BP_GSC_Field_C.DestoryPFWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::DestoryPFWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.DestoryPFWidget");

	UBP_GSC_Field_C_DestoryPFWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnChangeMapChnagingState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bChangingState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::OnChangeMapChnagingState(bool bChangingState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnChangeMapChnagingState");

	UBP_GSC_Field_C_OnChangeMapChnagingState_Params params;
	params.bChangingState = bChangingState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnNotifyPFStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::OnNotifyPFStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnNotifyPFStart");

	UBP_GSC_Field_C_OnNotifyPFStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ScreenFadeClear
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::ScreenFadeClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ScreenFadeClear");

	UBP_GSC_Field_C_ScreenFadeClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C._IsFadeOrMaskOn
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bFadeOrMask                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::_IsFadeOrMaskOn(bool* bFadeOrMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C._IsFadeOrMaskOn");

	UBP_GSC_Field_C__IsFadeOrMaskOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFadeOrMask != nullptr)
		*bFadeOrMask = params.bFadeOrMask;
}


// Function BP_GSC_Field.BP_GSC_Field_C._IsPlayQuest?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::_IsPlayQuest_(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C._IsPlayQuest?");

	UBP_GSC_Field_C__IsPlayQuest__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnChangeScenarioCounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::OnChangeScenarioCounter(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnChangeScenarioCounter");

	UBP_GSC_Field_C_OnChangeScenarioCounter_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C._PopHotlinkLoad
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::_PopHotlinkLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C._PopHotlinkLoad");

	UBP_GSC_Field_C__PopHotlinkLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsPausePossibleState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Field_C::IsPausePossibleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsPausePossibleState");

	UBP_GSC_Field_C_IsPausePossibleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsEnableSystemPause
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GSC_Field_C::IsEnableSystemPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsEnableSystemPause");

	UBP_GSC_Field_C_IsEnableSystemPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GSC_Field.BP_GSC_Field_C._PrintLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LogText                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Field_C::_PrintLog(const struct FString& LogText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C._PrintLog");

	UBP_GSC_Field_C__PrintLog_Params params;
	params.LogText = LogText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnLoadGameData
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::OnLoadGameData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnLoadGameData");

	UBP_GSC_Field_C_OnLoadGameData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.UpdateCameraMouseControlEnable
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::UpdateCameraMouseControlEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.UpdateCameraMouseControlEnable");

	UBP_GSC_Field_C_UpdateCameraMouseControlEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsCameraMouseControlEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsCameraMouseControlEnable(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsCameraMouseControlEnable");

	UBP_GSC_Field_C_IsCameraMouseControlEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_GSC_Field.BP_GSC_Field_C.NormalizeLocationId
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::NormalizeLocationId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.NormalizeLocationId");

	UBP_GSC_Field_C_NormalizeLocationId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ManagementFastTravelPointOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::ManagementFastTravelPointOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ManagementFastTravelPointOpen");

	UBP_GSC_Field_C_ManagementFastTravelPointOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C._PreloadmapListed?
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEntry                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            idx                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::_PreloadmapListed_(const struct FString& MapName, bool* bEntry, int* idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C._PreloadmapListed?");

	UBP_GSC_Field_C__PreloadmapListed__Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEntry != nullptr)
		*bEntry = params.bEntry;
	if (idx != nullptr)
		*idx = params.idx;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ScreenMaskManagement
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::ScreenMaskManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ScreenMaskManagement");

	UBP_GSC_Field_C_ScreenMaskManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetPFStartFirstScript
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_PrePFStartOperation ScriptInfo                     (Parm, OutParm)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::GetPFStartFirstScript(struct FSTR_PrePFStartOperation* ScriptInfo, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetPFStartFirstScript");

	UBP_GSC_Field_C_GetPFStartFirstScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScriptInfo != nullptr)
		*ScriptInfo = params.ScriptInfo;
	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_GSC_Field.BP_GSC_Field_C.RunPFStartScript
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GameProcessClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Field_C::RunPFStartScript(class UClass* GameProcessClass, const struct FString& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.RunPFStartScript");

	UBP_GSC_Field_C_RunPFStartScript_Params params;
	params.GameProcessClass = GameProcessClass;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.AddPrePFOperation_Implementation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_PrePFStartOperation Operation                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GSC_Field_C::AddPrePFOperation_Implementation(const struct FSTR_PrePFStartOperation& Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.AddPrePFOperation_Implementation");

	UBP_GSC_Field_C_AddPrePFOperation_Implementation_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.SaveCurrentPlayerLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::SaveCurrentPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.SaveCurrentPlayerLocation");

	UBP_GSC_Field_C_SaveCurrentPlayerLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.PFStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisplaySceneIsPF               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SavedLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedResetCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::PFStart(bool DisplaySceneIsPF, bool SavedLocation, bool bNeedResetCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.PFStart");

	UBP_GSC_Field_C_PFStart_Params params;
	params.DisplaySceneIsPF = DisplaySceneIsPF;
	params.SavedLocation = SavedLocation;
	params.bNeedResetCharacter = bNeedResetCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.CanOpenMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::CanOpenMenu(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.CanOpenMenu");

	UBP_GSC_Field_C_CanOpenMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_GSC_Field.BP_GSC_Field_C.CameraReset_Implementation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::CameraReset_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.CameraReset_Implementation");

	UBP_GSC_Field_C_CameraReset_Implementation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetRefLocatorData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMapLocatorData         OutLocatorData                 (Parm, OutParm)

void UBP_GSC_Field_C::GetRefLocatorData(bool* bValid, struct FMapLocatorData* OutLocatorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetRefLocatorData");

	UBP_GSC_Field_C_GetRefLocatorData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (OutLocatorData != nullptr)
		*OutLocatorData = params.OutLocatorData;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetRefLocatorResetCameraParams
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            OutCameraType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutCamera_Pitch                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::GetRefLocatorResetCameraParams(int* OutCameraType, float* OutCamera_Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetRefLocatorResetCameraParams");

	UBP_GSC_Field_C_GetRefLocatorResetCameraParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCameraType != nullptr)
		*OutCameraType = params.OutCameraType;
	if (OutCamera_Pitch != nullptr)
		*OutCamera_Pitch = params.OutCamera_Pitch;
}


// Function BP_GSC_Field.BP_GSC_Field_C.RefLocatorInDoor?
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIndoor                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::RefLocatorInDoor_(bool* bIndoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.RefLocatorInDoor?");

	UBP_GSC_Field_C_RefLocatorInDoor__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIndoor != nullptr)
		*bIndoor = params.bIndoor;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsPlayerFree_Implementation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Is                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsPlayerFree_Implementation(bool* Is)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsPlayerFree_Implementation");

	UBP_GSC_Field_C_IsPlayerFree_Implementation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is != nullptr)
		*Is = params.Is;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ChangeLocator_Implementation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Field_C::ChangeLocator_Implementation(const struct FString& MapLocatorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ChangeLocator_Implementation");

	UBP_GSC_Field_C_ChangeLocator_Implementation_Params params;
	params.MapLocatorName = MapLocatorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ShowFieldMap_Implementation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::ShowFieldMap_Implementation(bool NewShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ShowFieldMap_Implementation");

	UBP_GSC_Field_C_ShowFieldMap_Implementation_Params params;
	params.NewShow = NewShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ShowPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AssignLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bNeedResetCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::ShowPlayer(bool bShow, const struct FVector& AssignLocation, bool bNeedResetCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ShowPlayer");

	UBP_GSC_Field_C_ShowPlayer_Params params;
	params.bShow = bShow;
	params.AssignLocation = AssignLocation;
	params.bNeedResetCharacter = bNeedResetCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ReloadMap
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::ReloadMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ReloadMap");

	UBP_GSC_Field_C_ReloadMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnChangeEventSatate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEventOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::OnChangeEventSatate(bool bEventOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnChangeEventSatate");

	UBP_GSC_Field_C_OnChangeEventSatate_Params params;
	params.bEventOn = bEventOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.PFCharacterActive
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedResetCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PlayerActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::PFCharacterActive(bool NewActive, bool bNeedResetCharacter, class AActor** PlayerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.PFCharacterActive");

	UBP_GSC_Field_C_PFCharacterActive_Params params;
	params.NewActive = NewActive;
	params.bNeedResetCharacter = bNeedResetCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerActor != nullptr)
		*PlayerActor = params.PlayerActor;
}


// Function BP_GSC_Field.BP_GSC_Field_C.PFCharacterLockUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::PFCharacterLockUpdate(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.PFCharacterLockUpdate");

	UBP_GSC_Field_C_PFCharacterLockUpdate_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.AddPFCharacterLock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bLock                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UnlockDelaySec                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::AddPFCharacterLock(const struct FString& User, bool bLock, float UnlockDelaySec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.AddPFCharacterLock");

	UBP_GSC_Field_C_AddPFCharacterLock_Params params;
	params.User = User;
	params.bLock = bLock;
	params.UnlockDelaySec = UnlockDelaySec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsEntryUnloadmap?
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEntry                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            idx                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsEntryUnloadmap_(const struct FString& MapName, bool* bEntry, int* idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsEntryUnloadmap?");

	UBP_GSC_Field_C_IsEntryUnloadmap__Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEntry != nullptr)
		*bEntry = params.bEntry;
	if (idx != nullptr)
		*idx = params.idx;
}


// Function BP_GSC_Field.BP_GSC_Field_C.CanPlayable?
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bPlayAble                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::CanPlayable_(bool* bPlayAble)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.CanPlayable?");

	UBP_GSC_Field_C_CanPlayable__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPlayAble != nullptr)
		*bPlayAble = params.bPlayAble;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ShowPFHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PFEnableNOCheck                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::ShowPFHUD(bool Show, bool PFEnableNOCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ShowPFHUD");

	UBP_GSC_Field_C_ShowPFHUD_Params params;
	params.Show = Show;
	params.PFEnableNOCheck = PFEnableNOCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.CreanupPreloadMap_Implementation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::CreanupPreloadMap_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.CreanupPreloadMap_Implementation");

	UBP_GSC_Field_C_CreanupPreloadMap_Implementation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ForceWakeup
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::ForceWakeup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ForceWakeup");

	UBP_GSC_Field_C_ForceWakeup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.CurrentSceneIsSubScene?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSubScene                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::CurrentSceneIsSubScene_(bool* bSubScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.CurrentSceneIsSubScene?");

	UBP_GSC_Field_C_CurrentSceneIsSubScene__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSubScene != nullptr)
		*bSubScene = params.bSubScene;
}


// Function BP_GSC_Field.BP_GSC_Field_C.PrevSceneIsSubScene?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSubScene                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::PrevSceneIsSubScene_(bool* bSubScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.PrevSceneIsSubScene?");

	UBP_GSC_Field_C_PrevSceneIsSubScene__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSubScene != nullptr)
		*bSubScene = params.bSubScene;
}


// Function BP_GSC_Field.BP_GSC_Field_C.CreatePFWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::CreatePFWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.CreatePFWidget");

	UBP_GSC_Field_C_CreatePFWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.DebugPrint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PrintScreen                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::DebugPrint(bool PrintScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.DebugPrint");

	UBP_GSC_Field_C_DebugPrint_Params params;
	params.PrintScreen = PrintScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsAllMapNoAction?
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bAnyAction                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsAllMapNoAction_(bool* bAnyAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsAllMapNoAction?");

	UBP_GSC_Field_C_IsAllMapNoAction__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAnyAction != nullptr)
		*bAnyAction = params.bAnyAction;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsMapLoaded?
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEntry                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsMapLoaded_(const struct FString& MapName, bool* bEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsMapLoaded?");

	UBP_GSC_Field_C_IsMapLoaded__Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEntry != nullptr)
		*bEntry = params.bEntry;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsMapUnloaded?_Implementation
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEntry                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsMapUnloaded__Implementation(const struct FString& MapName, bool* bEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsMapUnloaded?_Implementation");

	UBP_GSC_Field_C_IsMapUnloaded__Implementation_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEntry != nullptr)
		*bEntry = params.bEntry;
}


// Function BP_GSC_Field.BP_GSC_Field_C.TickLoadUnloadManagement
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::TickLoadUnloadManagement(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.TickLoadUnloadManagement");

	UBP_GSC_Field_C_TickLoadUnloadManagement_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.IsEntryPreloadmap?
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEntry                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            idx                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bNextUnload                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::IsEntryPreloadmap_(const struct FString& MapName, bool* bEntry, int* idx, bool* bNextUnload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.IsEntryPreloadmap?");

	UBP_GSC_Field_C_IsEntryPreloadmap__Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEntry != nullptr)
		*bEntry = params.bEntry;
	if (idx != nullptr)
		*idx = params.idx;
	if (bNextUnload != nullptr)
		*bNextUnload = params.bNextUnload;
}


// Function BP_GSC_Field.BP_GSC_Field_C.AddPreloadmap
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Field_C::AddPreloadmap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.AddPreloadmap");

	UBP_GSC_Field_C_AddPreloadmap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnPostMapChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::OnPostMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnPostMapChange");

	UBP_GSC_Field_C_OnPostMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.UnloadMap_Implementation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bAtActorFinalize               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UnloadAccept                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::UnloadMap_Implementation(const struct FString& MapName, bool bAtActorFinalize, bool* UnloadAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.UnloadMap_Implementation");

	UBP_GSC_Field_C_UnloadMap_Implementation_Params params;
	params.MapName = MapName;
	params.bAtActorFinalize = bAtActorFinalize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnloadAccept != nullptr)
		*UnloadAccept = params.UnloadAccept;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ScreenMaskOff
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseDefaultMask                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::ScreenMaskOff(bool bUseDefaultMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ScreenMaskOff");

	UBP_GSC_Field_C_ScreenMaskOff_Params params;
	params.bUseDefaultMask = bUseDefaultMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OpenPFMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AriseGamemode_C*     AriseGameMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bChangeNow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::OpenPFMenu(class ABP_AriseGamemode_C* AriseGameMode, const struct FString& MenuID, bool bChangeNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OpenPFMenu");

	UBP_GSC_Field_C_OpenPFMenu_Params params;
	params.AriseGameMode = AriseGameMode;
	params.MenuID = MenuID;
	params.bChangeNow = bChangeNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetPrevScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EAriseGameScene                PrevScene                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::GetPrevScene(EAriseGameScene* PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetPrevScene");

	UBP_GSC_Field_C_GetPrevScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrevScene != nullptr)
		*PrevScene = params.PrevScene;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ScreenMaskOn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseDefaultMask                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::ScreenMaskOn(bool bUseDefaultMask, bool bInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ScreenMaskOn");

	UBP_GSC_Field_C_ScreenMaskOn_Params params;
	params.bUseDefaultMask = bUseDefaultMask;
	params.bInstantly = bInstantly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.GetMapOrderManager
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MapOrderManager_C*   MapOrderManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::GetMapOrderManager(class ABP_MapOrderManager_C** MapOrderManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.GetMapOrderManager");

	UBP_GSC_Field_C_GetMapOrderManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapOrderManager != nullptr)
		*MapOrderManager = params.MapOrderManager;
}


// Function BP_GSC_Field.BP_GSC_Field_C.PreloadMap_Implementation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bPreloaded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::PreloadMap_Implementation(const struct FString& MapName, bool* bAccept, bool* bPreloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.PreloadMap_Implementation");

	UBP_GSC_Field_C_PreloadMap_Implementation_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
	if (bPreloaded != nullptr)
		*bPreloaded = params.bPreloaded;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ChangeMap_Implementation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ChangeMap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EMapChangeReason               MapChangeReason                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bChangeScenarioFlag            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceMapChangePostEvent       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNpcRespawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResetPlayerPose               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::ChangeMap_Implementation(const struct FString& ChangeMap, const struct FString& MapLocatorName, EMapChangeReason MapChangeReason, bool bChangeScenarioFlag, bool bForceMapChangePostEvent, bool bNpcRespawn, bool bResetPlayerPose, bool* bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ChangeMap_Implementation");

	UBP_GSC_Field_C_ChangeMap_Implementation_Params params;
	params.ChangeMap = ChangeMap;
	params.MapLocatorName = MapLocatorName;
	params.MapChangeReason = MapChangeReason;
	params.bChangeScenarioFlag = bChangeScenarioFlag;
	params.bForceMapChangePostEvent = bForceMapChangePostEvent;
	params.bNpcRespawn = bNpcRespawn;
	params.bResetPlayerPose = bResetPlayerPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
}


// Function BP_GSC_Field.BP_GSC_Field_C.BPE_Initialize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneInitializeMode           initMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::BPE_Initialize(ESceneInitializeMode initMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.BPE_Initialize");

	UBP_GSC_Field_C_BPE_Initialize_Params params;
	params.initMode = initMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.BPE_Finalize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneFinalizeReason           finalizeReason                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::BPE_Finalize(ESceneFinalizeReason finalizeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.BPE_Finalize");

	UBP_GSC_Field_C_BPE_Finalize_Params params;
	params.finalizeReason = finalizeReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.BPE_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::BPE_Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.BPE_Tick");

	UBP_GSC_Field_C_BPE_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.BPE_Wakeup
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  PrevScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::BPE_Wakeup(unsigned char PrevScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.BPE_Wakeup");

	UBP_GSC_Field_C_BPE_Wakeup_Params params;
	params.PrevScene = PrevScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.BPE_Sleep
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char                  nextScene                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::BPE_Sleep(unsigned char nextScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.BPE_Sleep");

	UBP_GSC_Field_C_BPE_Sleep_Params params;
	params.nextScene = nextScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnLoadFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Field_C::OnLoadFinished(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnLoadFinished");

	UBP_GSC_Field_C_OnLoadFinished_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnUnloadFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Field_C::OnUnloadFinished(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnUnloadFinished");

	UBP_GSC_Field_C_OnUnloadFinished_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.PlayDelayedLongChat
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::PlayDelayedLongChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.PlayDelayedLongChat");

	UBP_GSC_Field_C_PlayDelayedLongChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnChageGameState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::OnChageGameState(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnChageGameState");

	UBP_GSC_Field_C_OnChageGameState_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnChangeDisplayScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  ChangedScene                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldScene                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::OnChangeDisplayScene(unsigned char ChangedScene, unsigned char OldScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnChangeDisplayScene");

	UBP_GSC_Field_C_OnChangeDisplayScene_Params params;
	params.ChangedScene = ChangedScene;
	params.OldScene = OldScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnPreStartManagement
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::OnPreStartManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnPreStartManagement");

	UBP_GSC_Field_C_OnPreStartManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.EventShowPlayer
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::EventShowPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.EventShowPlayer");

	UBP_GSC_Field_C_EventShowPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.CreanupPreloadMap
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::CreanupPreloadMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.CreanupPreloadMap");

	UBP_GSC_Field_C_CreanupPreloadMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.SetPostDataLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PostDataLoad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::SetPostDataLoad(bool PostDataLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.SetPostDataLoad");

	UBP_GSC_Field_C_SetPostDataLoad_Params params;
	params.PostDataLoad = PostDataLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.SetHideFieldMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideFieldMap                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::SetHideFieldMap(bool HideFieldMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.SetHideFieldMap");

	UBP_GSC_Field_C_SetHideFieldMap_Params params;
	params.HideFieldMap = HideFieldMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ChangeLocator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Field_C::ChangeLocator(const struct FString& MapLocatorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ChangeLocator");

	UBP_GSC_Field_C_ChangeLocator_Params params;
	params.MapLocatorName = MapLocatorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.CameraReset
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::CameraReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.CameraReset");

	UBP_GSC_Field_C_CameraReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ShowFieldMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::ShowFieldMap(bool NewShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ShowFieldMap");

	UBP_GSC_Field_C_ShowFieldMap_Params params;
	params.NewShow = NewShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ReloadCurrentMap
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::ReloadCurrentMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ReloadCurrentMap");

	UBP_GSC_Field_C_ReloadCurrentMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.AddPrePFOperation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_PrePFStartOperation Operation                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GSC_Field_C::AddPrePFOperation(const struct FSTR_PrePFStartOperation& Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.AddPrePFOperation");

	UBP_GSC_Field_C_AddPrePFOperation_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.RegisterEvent_OnPostWakeupShowPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GSC_Field_C::RegisterEvent_OnPostWakeupShowPlayer(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.RegisterEvent_OnPostWakeupShowPlayer");

	UBP_GSC_Field_C_RegisterEvent_OnPostWakeupShowPlayer_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OpenPlayerFreeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bChangeNow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::OpenPlayerFreeMenu(const struct FString& MenuID, bool bChangeNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OpenPlayerFreeMenu");

	UBP_GSC_Field_C_OpenPlayerFreeMenu_Params params;
	params.MenuID = MenuID;
	params.bChangeNow = bChangeNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ShowPlayerFreeHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PFEnableNOCheck                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::ShowPlayerFreeHUD(bool Show, bool PFEnableNOCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ShowPlayerFreeHUD");

	UBP_GSC_Field_C_ShowPlayerFreeHUD_Params params;
	params.Show = Show;
	params.PFEnableNOCheck = PFEnableNOCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.PauseField
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::PauseField()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.PauseField");

	UBP_GSC_Field_C_PauseField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.UnpauseField
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::UnpauseField()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.UnpauseField");

	UBP_GSC_Field_C_UnpauseField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.SkipNpcSpawnShowMapOnce
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::SkipNpcSpawnShowMapOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.SkipNpcSpawnShowMapOnce");

	UBP_GSC_Field_C_SkipNpcSpawnShowMapOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.MakeHotLink
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LinkName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Field_C::MakeHotLink(const struct FString& LinkName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.MakeHotLink");

	UBP_GSC_Field_C_MakeHotLink_Params params;
	params.LinkName = LinkName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.EventShowMap
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::EventShowMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.EventShowMap");

	UBP_GSC_Field_C_EventShowMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ScreenFadeMaskClearDelayed
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::ScreenFadeMaskClearDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ScreenFadeMaskClearDelayed");

	UBP_GSC_Field_C_ScreenFadeMaskClearDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.DelayedOpenMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Field_C::DelayedOpenMenu(const struct FString& MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.DelayedOpenMenu");

	UBP_GSC_Field_C_DelayedOpenMenu_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.ExecuteUbergraph_BP_GSC_Field
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_C::ExecuteUbergraph_BP_GSC_Field(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.ExecuteUbergraph_BP_GSC_Field");

	UBP_GSC_Field_C_ExecuteUbergraph_BP_GSC_Field_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnLoadGameFromMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::OnLoadGameFromMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnLoadGameFromMenu__DelegateSignature");

	UBP_GSC_Field_C_OnLoadGameFromMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.EventPostUnloadMap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::EventPostUnloadMap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.EventPostUnloadMap__DelegateSignature");

	UBP_GSC_Field_C_EventPostUnloadMap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.EventPreUnloadMap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::EventPreUnloadMap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.EventPreUnloadMap__DelegateSignature");

	UBP_GSC_Field_C_EventPreUnloadMap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.OnPostWakeupShowPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::OnPostWakeupShowPlayer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.OnPostWakeupShowPlayer__DelegateSignature");

	UBP_GSC_Field_C_OnPostWakeupShowPlayer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.EventPreStartScriptManagement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::EventPreStartScriptManagement__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.EventPreStartScriptManagement__DelegateSignature");

	UBP_GSC_Field_C_EventPreStartScriptManagement__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field.BP_GSC_Field_C.EventPostFieldWakeup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_C::EventPostFieldWakeup__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field.BP_GSC_Field_C.EventPostFieldWakeup__DelegateSignature");

	UBP_GSC_Field_C_EventPostFieldWakeup__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
