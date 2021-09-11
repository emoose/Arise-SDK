
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

// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.DisableInteractionFocusIcons
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::DisableInteractionFocusIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.DisableInteractionFocusIcons");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_DisableInteractionFocusIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.EnableInteractionFocusIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LocamapFocusIcon_C* FocusIcon                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::EnableInteractionFocusIcon(class UUMG_LocamapFocusIcon_C** FocusIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.EnableInteractionFocusIcon");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_EnableInteractionFocusIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusIcon != nullptr)
		*FocusIcon = params.FocusIcon;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.IsFreeCursorAdsorbEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::IsFreeCursorAdsorbEnable(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.IsFreeCursorAdsorbEnable");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_IsFreeCursorAdsorbEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.SetFreeCursorAdsorbEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::SetFreeCursorAdsorbEnable(bool bEnable, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.SetFreeCursorAdsorbEnable");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_SetFreeCursorAdsorbEnable_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ResetFreeCursor
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::ResetFreeCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ResetFreeCursor");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_ResetFreeCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToFastTravelPoint
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::FreeCusorSetToFastTravelPoint(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToFastTravelPoint");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_FreeCusorSetToFastTravelPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::FreeCusorSetToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToPlayer");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_FreeCusorSetToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FindQuestWidgetByID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 Icons                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::FindQuestWidgetByID(const struct FString& QuestID, class UWidget** Icons)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FindQuestWidgetByID");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_FindQuestWidgetByID_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icons != nullptr)
		*Icons = params.Icons;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.GetQuestAreaIcons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUMG_LayerIconBase_C*> Icons                          (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::GetQuestAreaIcons(TArray<class UUMG_LayerIconBase_C*>* Icons)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.GetQuestAreaIcons");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_GetQuestAreaIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icons != nullptr)
		*Icons = params.Icons;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToMaplink
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::FreeCusorSetToMaplink(const struct FString& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToMaplink");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_FreeCusorSetToMaplink_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToQuest
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::FreeCusorSetToQuest(const struct FString& QuestID, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.FreeCusorSetToQuest");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_FreeCusorSetToQuest_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnChangedMapFinishedEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::BindOnChangedMapFinishedEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnChangedMapFinishedEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_BindOnChangedMapFinishedEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Terminate
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::Terminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Terminate");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindFreeCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MNU_FREE_CURSOR_Base_C* FreeCursor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::BindFreeCursor(class UBP_MNU_FREE_CURSOR_Base_C* FreeCursor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindFreeCursor");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_BindFreeCursor_Params params;
	params.FreeCursor = FreeCursor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnGotoQuestEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnQuest                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::BindOnGotoQuestEvent(const struct FScriptDelegate& OnQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnGotoQuestEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_BindOnGotoQuestEvent_Params params;
	params.OnQuest = OnQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Initialize");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnFastTravelEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnFastTravel                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::BindOnFastTravelEvent(const struct FScriptDelegate& OnFastTravel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnFastTravelEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_BindOnFastTravelEvent_Params params;
	params.OnFastTravel = OnFastTravel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnMapLinkEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnMapLink                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::BindOnMapLinkEvent(const struct FScriptDelegate& OnMapLink)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.BindOnMapLinkEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_BindOnMapLinkEvent_Params params;
	params.OnMapLink = OnMapLink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.GetFocusIcons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUMG_LocamapFocusIcon_C*> FocusIcons                     (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::GetFocusIcons(TArray<class UUMG_LocamapFocusIcon_C*>* FocusIcons)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.GetFocusIcons");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_GetFocusIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusIcons != nullptr)
		*FocusIcons = params.FocusIcons;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ResetZoom
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::ResetZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ResetZoom");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_ResetZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.RunZoom
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::RunZoom(float Axis, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.RunZoom");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_RunZoom_Params params;
	params.Axis = Axis;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.CheckZoom
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Axis                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::CheckZoom(class AMenuPadProcess* PadProcess, bool* Input, float* Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.CheckZoom");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_CheckZoom_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
	if (Axis != nullptr)
		*Axis = params.Axis;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ExecPad
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::ExecPad(float Time, class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ExecPad");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_ExecPad_Params params;
	params.Time = Time;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Exec
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::Exec(float Time, class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Exec");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_Exec_Params params;
	params.Time = Time;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Refresh
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::Refresh(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Refresh");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_Refresh_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnGotoQuest_QuestIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnGotoQuest_QuestIcon(const struct FString& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnGotoQuest_QuestIcon");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnGotoQuest_QuestIcon_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnFastTravel_FastTravelIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnFastTravel_FastTravelIcon(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnFastTravel_FastTravelIcon");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnFastTravel_FastTravelIcon_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnMapLink_MapLinkIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnMapLink_MapLinkIcon(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnMapLink_MapLinkIcon");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnMapLink_MapLinkIcon_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnRefreshed_FucusIconLayer
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnRefreshed_FucusIconLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnRefreshed_FucusIconLayer");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnRefreshed_FucusIconLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.CustomEvent_Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::CustomEvent_Refresh(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.CustomEvent_Refresh");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_CustomEvent_Refresh_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnResetZoom
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnResetZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnResetZoom");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnResetZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnChangedMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnChangedMap(const struct FString& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnChangedMap");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnChangedMap_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnChangedDefaultScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnChangedDefaultScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnChangedDefaultScale");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnChangedDefaultScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpenFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnViewOpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpenFinished");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewOpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewClose");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewCloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnViewCloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewCloseFinished");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewCloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.Construct");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAP_LOCA
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAP_LOCA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAP_LOCA");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnChangedMapFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnChangedMapFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnChangedMapFinishedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnChangedMapFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnGotoQuestEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnGotoQuestEvent__DelegateSignature(const struct FString& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnGotoQuestEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnGotoQuestEvent__DelegateSignature_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnFastTravelEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnFastTravelEvent__DelegateSignature(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnFastTravelEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnFastTravelEvent__DelegateSignature_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnMapLinkEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnMapLinkEvent__DelegateSignature(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnMapLinkEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnMapLinkEvent__DelegateSignature_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewCloseFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnViewCloseFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewCloseFinishedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewCloseFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnViewCloseEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewCloseEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewCloseEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpenFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnViewOpenFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpenFinishedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewOpenFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpenEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C::OnViewOpenEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAP_LOCA.TO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C.OnViewOpenEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAP_LOCA_C_OnViewOpenEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
