
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

// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetFieldSceneLocalState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENM_FieldSceneLocalState> LocalState                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::GetFieldSceneLocalState(TEnumAsByte<ENM_FieldSceneLocalState>* LocalState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetFieldSceneLocalState");

	UBP_GSC_Field_Interface_C_GetFieldSceneLocalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalState != nullptr)
		*LocalState = params.LocalState;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapShowState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENM_MapShowState>  MapShowState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::GetMapShowState(TEnumAsByte<ENM_MapShowState>* MapShowState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapShowState");

	UBP_GSC_Field_Interface_C_GetMapShowState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapShowState != nullptr)
		*MapShowState = params.MapShowState;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsMapUnloadedWithAllMapNoAction?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEntry                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::IsMapUnloadedWithAllMapNoAction_(const struct FString& MapName, bool* bEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsMapUnloadedWithAllMapNoAction?");

	UBP_GSC_Field_Interface_C_IsMapUnloadedWithAllMapNoAction__Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEntry != nullptr)
		*bEntry = params.bEntry;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.SkipNpcSpawnShowMapOnce
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_Interface_C::SkipNpcSpawnShowMapOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.SkipNpcSpawnShowMapOnce");

	UBP_GSC_Field_Interface_C_SkipNpcSpawnShowMapOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsPFHoldMousePosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::IsPFHoldMousePosition(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsPFHoldMousePosition");

	UBP_GSC_Field_Interface_C_IsPFHoldMousePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.UnpauseField
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_Interface_C::UnpauseField()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.UnpauseField");

	UBP_GSC_Field_Interface_C_UnpauseField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.PauseField
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_Interface_C::PauseField()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.PauseField");

	UBP_GSC_Field_Interface_C_PauseField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsPreShowMap?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPreShow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::IsPreShowMap_(bool* bPreShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsPreShowMap?");

	UBP_GSC_Field_Interface_C_IsPreShowMap__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPreShow != nullptr)
		*bPreShow = params.bPreShow;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ReloadCurrentMap
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_Interface_C::ReloadCurrentMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ReloadCurrentMap");

	UBP_GSC_Field_Interface_C_ReloadCurrentMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.MakeHotLink
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LinkName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Field_Interface_C::MakeHotLink(const struct FString& LinkName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.MakeHotLink");

	UBP_GSC_Field_Interface_C_MakeHotLink_Params params;
	params.LinkName = LinkName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMenuID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 MenuID                         (Parm, OutParm, ZeroConstructor)

void UBP_GSC_Field_Interface_C::GetMenuID(struct FString* MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMenuID");

	UBP_GSC_Field_Interface_C_GetMenuID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuID != nullptr)
		*MenuID = params.MenuID;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ShowPlayerFreeHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PFEnableNOCheck                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::ShowPlayerFreeHUD(bool Show, bool PFEnableNOCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ShowPlayerFreeHUD");

	UBP_GSC_Field_Interface_C_ShowPlayerFreeHUD_Params params;
	params.Show = Show;
	params.PFEnableNOCheck = PFEnableNOCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.OpenPlayerFreeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bChangeNow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::OpenPlayerFreeMenu(const struct FString& MenuID, bool bChangeNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.OpenPlayerFreeMenu");

	UBP_GSC_Field_Interface_C_OpenPlayerFreeMenu_Params params;
	params.MenuID = MenuID;
	params.bChangeNow = bChangeNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.RegisterEvent_OnPostWakeupShowPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GSC_Field_Interface_C::RegisterEvent_OnPostWakeupShowPlayer(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.RegisterEvent_OnPostWakeupShowPlayer");

	UBP_GSC_Field_Interface_C_RegisterEvent_OnPostWakeupShowPlayer_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapLocatorName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapLocatorName                 (Parm, OutParm, ZeroConstructor)

void UBP_GSC_Field_Interface_C::GetMapLocatorName(struct FString* MapLocatorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapLocatorName");

	UBP_GSC_Field_Interface_C_GetMapLocatorName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapLocatorName != nullptr)
		*MapLocatorName = params.MapLocatorName;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetNextMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextMapName                    (Parm, OutParm, ZeroConstructor)

void UBP_GSC_Field_Interface_C::GetNextMapName(struct FString* NextMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetNextMapName");

	UBP_GSC_Field_Interface_C_GetNextMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextMapName != nullptr)
		*NextMapName = params.NextMapName;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapLocatorDatabase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapLocatorDatabase*     MapLocatorDatabase             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::GetMapLocatorDatabase(class UMapLocatorDatabase** MapLocatorDatabase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapLocatorDatabase");

	UBP_GSC_Field_Interface_C_GetMapLocatorDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapLocatorDatabase != nullptr)
		*MapLocatorDatabase = params.MapLocatorDatabase;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.AddPrePFOperation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_PrePFStartOperation Operation                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GSC_Field_Interface_C::AddPrePFOperation(const struct FSTR_PrePFStartOperation& Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.AddPrePFOperation");

	UBP_GSC_Field_Interface_C_AddPrePFOperation_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsPlayerFree?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::IsPlayerFree_(bool* Is)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsPlayerFree?");

	UBP_GSC_Field_Interface_C_IsPlayerFree__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is != nullptr)
		*Is = params.Is;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapChangeReason
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapChangeReason               MapChangeReason                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::GetMapChangeReason(EMapChangeReason* MapChangeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetMapChangeReason");

	UBP_GSC_Field_Interface_C_GetMapChangeReason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapChangeReason != nullptr)
		*MapChangeReason = params.MapChangeReason;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetOldMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OldMapName                     (Parm, OutParm, ZeroConstructor)

void UBP_GSC_Field_Interface_C::GetOldMapName(struct FString* OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetOldMapName");

	UBP_GSC_Field_Interface_C_GetOldMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OldMapName != nullptr)
		*OldMapName = params.OldMapName;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ShowFieldMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::ShowFieldMap(bool NewShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ShowFieldMap");

	UBP_GSC_Field_Interface_C_ShowFieldMap_Params params;
	params.NewShow = NewShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.CameraReset
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_Interface_C::CameraReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.CameraReset");

	UBP_GSC_Field_Interface_C_CameraReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ChangeLocator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GSC_Field_Interface_C::ChangeLocator(const struct FString& MapLocatorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ChangeLocator");

	UBP_GSC_Field_Interface_C_ChangeLocator_Params params;
	params.MapLocatorName = MapLocatorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetPFHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APF_HUD_Manager*         PFHUD                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::GetPFHUD(class APF_HUD_Manager** PFHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetPFHUD");

	UBP_GSC_Field_Interface_C_GetPFHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PFHUD != nullptr)
		*PFHUD = params.PFHUD;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.SetPostDataLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PostDataLoad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::SetPostDataLoad(bool PostDataLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.SetPostDataLoad");

	UBP_GSC_Field_Interface_C_SetPostDataLoad_Params params;
	params.PostDataLoad = PostDataLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.SetHideFieldMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideFieldMap                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::SetHideFieldMap(bool HideFieldMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.SetHideFieldMap");

	UBP_GSC_Field_Interface_C_SetHideFieldMap_Params params;
	params.HideFieldMap = HideFieldMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetCurrentMapName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CurrentMapName                 (Parm, OutParm, ZeroConstructor)

void UBP_GSC_Field_Interface_C::GetCurrentMapName(struct FString* CurrentMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.GetCurrentMapName");

	UBP_GSC_Field_Interface_C_GetCurrentMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentMapName != nullptr)
		*CurrentMapName = params.CurrentMapName;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.CreanupPreloadMap
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GSC_Field_Interface_C::CreanupPreloadMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.CreanupPreloadMap");

	UBP_GSC_Field_Interface_C_CreanupPreloadMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsMapUnloaded?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bEntry                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::IsMapUnloaded_(const struct FString& MapName, bool* bEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.IsMapUnloaded?");

	UBP_GSC_Field_Interface_C_IsMapUnloaded__Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEntry != nullptr)
		*bEntry = params.bEntry;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.UnloadMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bAtActorFinalize               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UnloadAccept                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::UnloadMap(const struct FString& MapName, bool bAtActorFinalize, bool* UnloadAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.UnloadMap");

	UBP_GSC_Field_Interface_C_UnloadMap_Params params;
	params.MapName = MapName;
	params.bAtActorFinalize = bAtActorFinalize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnloadAccept != nullptr)
		*UnloadAccept = params.UnloadAccept;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.PreloadMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bAccept                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bPreloaded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_Field_Interface_C::PreloadMap(const struct FString& MapName, bool* bAccept, bool* bPreloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.PreloadMap");

	UBP_GSC_Field_Interface_C_PreloadMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAccept != nullptr)
		*bAccept = params.bAccept;
	if (bPreloaded != nullptr)
		*bPreloaded = params.bPreloaded;
}


// Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ChangeMap
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

void UBP_GSC_Field_Interface_C::ChangeMap(const struct FString& ChangeMap, const struct FString& MapLocatorName, EMapChangeReason MapChangeReason, bool bChangeScenarioFlag, bool bForceMapChangePostEvent, bool bNpcRespawn, bool bResetPlayerPose, bool* bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_Field_Interface.BP_GSC_Field_Interface_C.ChangeMap");

	UBP_GSC_Field_Interface_C_ChangeMap_Params params;
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
