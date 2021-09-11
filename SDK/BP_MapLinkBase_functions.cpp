
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

// Function BP_MapLinkBase.BP_MapLinkBase_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_MapLinkBase_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.GetOutlinerFolderPath");

	ABP_MapLinkBase_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_MapLinkBase_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.GetOutlinerLabelName");

	ABP_MapLinkBase_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.SetNearMapLink
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::SetNearMapLink(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.SetNearMapLink");

	ABP_MapLinkBase_C_SetNearMapLink_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.MapUnload
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::MapUnload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.MapUnload");

	ABP_MapLinkBase_C_MapUnload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._GetAreaNameEX
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 AreaName                       (Parm, OutParm, ZeroConstructor)

void ABP_MapLinkBase_C::_GetAreaNameEX(struct FString* AreaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._GetAreaNameEX");

	ABP_MapLinkBase_C__GetAreaNameEX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AreaName != nullptr)
		*AreaName = params.AreaName;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._FinishPreMapJumpEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::_FinishPreMapJumpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._FinishPreMapJumpEvent");

	ABP_MapLinkBase_C__FinishPreMapJumpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._CancelPreMapJumpEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::_CancelPreMapJumpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._CancelPreMapJumpEvent");

	ABP_MapLinkBase_C__CancelPreMapJumpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._RunPreJumpEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::_RunPreJumpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._RunPreJumpEvent");

	ABP_MapLinkBase_C__RunPreJumpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._UpdateInteractionIcon
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::_UpdateInteractionIcon(bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._UpdateInteractionIcon");

	ABP_MapLinkBase_C__UpdateInteractionIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._UpdateInteractionActInfo
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::_UpdateInteractionActInfo(bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._UpdateInteractionActInfo");

	ABP_MapLinkBase_C__UpdateInteractionActInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._IsMapChangeCanceld
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCanceled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::_IsMapChangeCanceld(bool* bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._IsMapChangeCanceld");

	ABP_MapLinkBase_C__IsMapChangeCanceld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanceled != nullptr)
		*bCanceled = params.bCanceled;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._LoadScript
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::_LoadScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._LoadScript");

	ABP_MapLinkBase_C__LoadScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._RunPreJumpScript
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRunScript                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::_RunPreJumpScript(bool* bRunScript)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._RunPreJumpScript");

	ABP_MapLinkBase_C__RunPreJumpScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRunScript != nullptr)
		*bRunScript = params.bRunScript;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._CrossDirCheck
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedCheck                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vec1                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Vec2                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           CrossDirOrValid                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::_CrossDirCheck(bool bValid, bool bNeedCheck, const struct FVector& Vec1, const struct FVector& Vec2, bool* CrossDirOrValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._CrossDirCheck");

	ABP_MapLinkBase_C__CrossDirCheck_Params params;
	params.bValid = bValid;
	params.bNeedCheck = bNeedCheck;
	params.Vec1 = Vec1;
	params.Vec2 = Vec2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CrossDirOrValid != nullptr)
		*CrossDirOrValid = params.CrossDirOrValid;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._OpendMap?
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bOpen                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::_OpendMap_(const struct FString& MapName, bool* bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._OpendMap?");

	ABP_MapLinkBase_C__OpendMap__Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOpen != nullptr)
		*bOpen = params.bOpen;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._GetForwardLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_MapLinkBase_C::_GetForwardLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._GetForwardLocation");

	ABP_MapLinkBase_C__GetForwardLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._IsScriptEnd?
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEndOrNothing                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::_IsScriptEnd_(bool* bEndOrNothing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._IsScriptEnd?");

	ABP_MapLinkBase_C__IsScriptEnd__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEndOrNothing != nullptr)
		*bEndOrNothing = params.bEndOrNothing;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C._RunSubScript
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ScriptClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ScriptArgs                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapLinkBase_C::_RunSubScript(class UClass* ScriptClass, const struct FString& ScriptArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C._RunSubScript");

	ABP_MapLinkBase_C__RunSubScript_Params params;
	params.ScriptClass = ScriptClass;
	params.ScriptArgs = ScriptArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.GetIconAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MapLinkBase_C::GetIconAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.GetIconAngle");

	ABP_MapLinkBase_C_GetIconAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.GetIconImageDataName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_MapLinkBase_C::GetIconImageDataName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.GetIconImageDataName");

	ABP_MapLinkBase_C_GetIconImageDataName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.GetIconLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_MapLinkBase_C::GetIconLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.GetIconLocation");

	ABP_MapLinkBase_C_GetIconLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.ShowNextMapName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::ShowNextMapName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.ShowNextMapName");

	ABP_MapLinkBase_C_ShowNextMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.IsCollisionActive
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bActive                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::IsCollisionActive(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.IsCollisionActive");

	ABP_MapLinkBase_C_IsCollisionActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bActive != nullptr)
		*bActive = params.bActive;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.NextMapNameDispManagement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::NextMapNameDispManagement(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.NextMapNameDispManagement");

	ABP_MapLinkBase_C_NextMapNameDispManagement_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.SetMapLinkCollisionEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::SetMapLinkCollisionEnable(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.SetMapLinkCollisionEnable");

	ABP_MapLinkBase_C_SetMapLinkCollisionEnable_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.DispDestinationName
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::DispDestinationName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.DispDestinationName");

	ABP_MapLinkBase_C_DispDestinationName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.LoadDelayTimerManagement
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::LoadDelayTimerManagement(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.LoadDelayTimerManagement");

	ABP_MapLinkBase_C_LoadDelayTimerManagement_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.OnChangeScenarioCondition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::OnChangeScenarioCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.OnChangeScenarioCondition");

	ABP_MapLinkBase_C_OnChangeScenarioCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.CheckDoMapChange
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::CheckDoMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.CheckDoMapChange");

	ABP_MapLinkBase_C_CheckDoMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.DebugInfoManagement
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::DebugInfoManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.DebugInfoManagement");

	ABP_MapLinkBase_C_DebugInfoManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.GetLinkedLocatorName
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 LocatorName                    (Parm, OutParm, ZeroConstructor)

void ABP_MapLinkBase_C::GetLinkedLocatorName(struct FString* LocatorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.GetLinkedLocatorName");

	ABP_MapLinkBase_C_GetLinkedLocatorName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocatorName != nullptr)
		*LocatorName = params.LocatorName;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.GetMaplinkData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::GetMaplinkData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.GetMaplinkData");

	ABP_MapLinkBase_C_GetMaplinkData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.GetAreaName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 AreaName                       (Parm, OutParm, ZeroConstructor)

void ABP_MapLinkBase_C::GetAreaName(struct FString* AreaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.GetAreaName");

	ABP_MapLinkBase_C_GetAreaName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AreaName != nullptr)
		*AreaName = params.AreaName;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.GetLinkedMapName
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MapName                        (Parm, OutParm, ZeroConstructor)

void ABP_MapLinkBase_C::GetLinkedMapName(struct FString* MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.GetLinkedMapName");

	ABP_MapLinkBase_C_GetLinkedMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapName != nullptr)
		*MapName = params.MapName;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.RefreshText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_MapLinkBase_C::RefreshText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.RefreshText");

	ABP_MapLinkBase_C_RefreshText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.Finalizing
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::Finalizing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.Finalizing");

	ABP_MapLinkBase_C_Finalizing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.Finalize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.Finalize");

	ABP_MapLinkBase_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.InFanCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Charcter                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FanCenter                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          FanRadius                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FanAngle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FanVector                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bin                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::InFanCharacter(class ACharacter* Charcter, const struct FVector& FanCenter, float FanRadius, float FanAngle, const struct FVector& FanVector, bool* bin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.InFanCharacter");

	ABP_MapLinkBase_C_InFanCharacter_Params params;
	params.Charcter = Charcter;
	params.FanCenter = FanCenter;
	params.FanRadius = FanRadius;
	params.FanAngle = FanAngle;
	params.FanVector = FanVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bin != nullptr)
		*bin = params.bin;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.DebugDrawFanLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Center                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            Divs                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OuterPos                       (Parm, OutParm, IsPlainOldData)

void ABP_MapLinkBase_C::DebugDrawFanLine(const struct FVector& Center, float Radius, float Angle, const struct FLinearColor& Color, int Divs, struct FVector* OuterPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.DebugDrawFanLine");

	ABP_MapLinkBase_C_DebugDrawFanLine_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.Angle = Angle;
	params.Color = Color;
	params.Divs = Divs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OuterPos != nullptr)
		*OuterPos = params.OuterPos;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.DrawDebugInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::DrawDebugInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.DrawDebugInfo");

	ABP_MapLinkBase_C_DrawDebugInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.CollisionDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDrawDebugInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::CollisionDebug(bool bDrawDebugInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.CollisionDebug");

	ABP_MapLinkBase_C_CollisionDebug_Params params;
	params.bDrawDebugInfo = bDrawDebugInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.GetPlayerPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::GetPlayerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.GetPlayerPosition");

	ABP_MapLinkBase_C_GetPlayerPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.MapUnloadDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::MapUnloadDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.MapUnloadDistance");

	ABP_MapLinkBase_C_MapUnloadDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.MapPreload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::MapPreload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.MapPreload");

	ABP_MapLinkBase_C_MapPreload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.GetFieldSceneController
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::GetFieldSceneController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.GetFieldSceneController");

	ABP_MapLinkBase_C_GetFieldSceneController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.IsCollisionPlaneVsLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlaneNormal                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 PlanePoint                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 pointA                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 pointB                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bCollid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 IntersectionPoint              (Parm, OutParm, IsPlainOldData)
// bool                           bPlusDir                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::IsCollisionPlaneVsLine(const struct FVector& PlaneNormal, const struct FVector& PlanePoint, const struct FVector& pointA, const struct FVector& pointB, bool* bCollid, struct FVector* IntersectionPoint, bool* bPlusDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.IsCollisionPlaneVsLine");

	ABP_MapLinkBase_C_IsCollisionPlaneVsLine_Params params;
	params.PlaneNormal = PlaneNormal;
	params.PlanePoint = PlanePoint;
	params.pointA = pointA;
	params.pointB = pointB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCollid != nullptr)
		*bCollid = params.bCollid;
	if (IntersectionPoint != nullptr)
		*IntersectionPoint = params.IntersectionPoint;
	if (bPlusDir != nullptr)
		*bPlusDir = params.bPlusDir;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.UserConstructionScript");

	ABP_MapLinkBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.OnMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapLinkBase_C::OnMapChange(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.OnMapChange");

	ABP_MapLinkBase_C_OnMapChange_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapLinkBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.ReceiveBeginPlay");

	ABP_MapLinkBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MapLinkBase_C_BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.OnScenarioCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::OnScenarioCounter(int counter, int Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.OnScenarioCounter");

	ABP_MapLinkBase_C_OnScenarioCounter_Params params;
	params.counter = counter;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.ReceiveEndPlay");

	ABP_MapLinkBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.OnChangeScenarioFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::OnChangeScenarioFlag(int Flag, bool bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.OnChangeScenarioFlag");

	ABP_MapLinkBase_C_OnChangeScenarioFlag_Params params;
	params.Flag = Flag;
	params.bValid = bValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.OnDoMapJump
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PreMapJumpScript               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ScriptArgs                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapLinkBase_C::OnDoMapJump(class UClass* PreMapJumpScript, const struct FString& ScriptArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.OnDoMapJump");

	ABP_MapLinkBase_C_OnDoMapJump_Params params;
	params.PreMapJumpScript = PreMapJumpScript;
	params.ScriptArgs = ScriptArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.OnRunPreMapJumpScript
// (BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::OnRunPreMapJumpScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.OnRunPreMapJumpScript");

	ABP_MapLinkBase_C_OnRunPreMapJumpScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MapLinkBase_C::BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MapLinkBase_C_BndEvt__MapLinkCollison_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__PreOverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MapLinkBase_C::BndEvt__PreOverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__PreOverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MapLinkBase_C_BndEvt__PreOverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__PreOverlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::BndEvt__PreOverlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.BndEvt__PreOverlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MapLinkBase_C_BndEvt__PreOverlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.ReceiveTick");

	ABP_MapLinkBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.ExecuteUbergraph_BP_MapLinkBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkBase_C::ExecuteUbergraph_BP_MapLinkBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.ExecuteUbergraph_BP_MapLinkBase");

	ABP_MapLinkBase_C_ExecuteUbergraph_BP_MapLinkBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.RunPreMapJumpEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::RunPreMapJumpEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.RunPreMapJumpEvent__DelegateSignature");

	ABP_MapLinkBase_C_RunPreMapJumpEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.RunPreMapJumpScript__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkBase_C::RunPreMapJumpScript__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.RunPreMapJumpScript__DelegateSignature");

	ABP_MapLinkBase_C_RunPreMapJumpScript__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkBase.BP_MapLinkBase_C.DoMapJump__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PreMapJumpScript               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ScriptArgs                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MapLinkBase_C::DoMapJump__DelegateSignature(class UClass* PreMapJumpScript, const struct FString& ScriptArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkBase.BP_MapLinkBase_C.DoMapJump__DelegateSignature");

	ABP_MapLinkBase_C_DoMapJump__DelegateSignature_Params params;
	params.PreMapJumpScript = PreMapJumpScript;
	params.ScriptArgs = ScriptArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
