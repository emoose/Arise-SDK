
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

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Exit");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Init");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Init_Params params;
	params.Value = Value;
	params.PrevSceneID = PrevSceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ReadWait");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Exec");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Exec_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.GetNextScene");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Finish");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ResultValue != nullptr)
		*ResultValue = params.ResultValue;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.IsLocaMapClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsClosing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::IsLocaMapClose(bool* IsClosing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.IsLocaMapClose");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_IsLocaMapClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosing != nullptr)
		*IsClosing = params.IsClosing;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunFastTravel
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::RunFastTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunFastTravel");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RunFastTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindOnBackToBaseEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::BindOnBackToBaseEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindOnBackToBaseEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindOnBackToBaseEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitLocaToList
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::InitLocaToList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitLocaToList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_InitLocaToList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.FromMapList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::FromMapList(bool bEnter, const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.FromMapList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_FromMapList_Params params;
	params.bEnter = bEnter;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindLocaToListBackEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnLocaToListBack               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::BindLocaToListBackEvent(const struct FScriptDelegate& OnLocaToListBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindLocaToListBackEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindLocaToListBackEvent_Params params;
	params.OnLocaToListBack = OnLocaToListBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.SetBaseLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        BaseLocation                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::SetBaseLocation(const struct FMapLocationData& BaseLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.SetBaseLocation");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_SetBaseLocation_Params params;
	params.BaseLocation = BaseLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::SetActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.SetActive");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_SetActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.SetInputEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInputEnable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::SetInputEnable(bool bInputEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.SetInputEnable");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_SetInputEnable_Params params;
	params.bInputEnable = bInputEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecOnCursorInfo
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::ExecOnCursorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecOnCursorInfo");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecOnCursorInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Terminate
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::Terminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Terminate");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.FogAttach
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 FOG1                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::FogAttach(class UWidget* FOG1)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.FogAttach");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_FogAttach_Params params;
	params.FOG1 = FOG1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RefreshFocusIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::RefreshFocusIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RefreshFocusIcon");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RefreshFocusIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindDecideMapLinkEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnDecideMapLink                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::BindDecideMapLinkEvent(const struct FScriptDelegate& OnDecideMapLink)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindDecideMapLinkEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindDecideMapLinkEvent_Params params;
	params.OnDecideMapLink = OnDecideMapLink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindBackEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnBack                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::BindBackEvent(const struct FScriptDelegate& OnBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindBackEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindBackEvent_Params params;
	params.OnBack = OnBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindGotoQuestEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnGotoQuest                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::BindGotoQuestEvent(const struct FScriptDelegate& OnGotoQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindGotoQuestEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindGotoQuestEvent_Params params;
	params.OnGotoQuest = OnGotoQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.GotoQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::GotoQuest(const struct FString& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.GotoQuest");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_GotoQuest_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitTabLoca
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::InitTabLoca()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitTabLoca");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_InitTabLoca_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunReset
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::RunReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunReset");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RunReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CheckReset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CheckReset(class AMenuPadProcess* PadData, bool* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CheckReset");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CheckReset_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecMapLoca
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::ExecMapLoca(float Time, class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecMapLoca");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecMapLoca_Params params;
	params.Time = Time;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitFreeCursor
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::InitFreeCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitFreeCursor");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_InitFreeCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecFreeCursor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::ExecFreeCursor(float Time, class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecFreeCursor");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecFreeCursor_Params params;
	params.Time = Time;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitLocaMap
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::InitLocaMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitLocaMap");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_InitLocaMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindRefreshQuestEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnRefreshQuest                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::BindRefreshQuestEvent(const struct FScriptDelegate& OnRefreshQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindRefreshQuestEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindRefreshQuestEvent_Params params;
	params.OnRefreshQuest = OnRefreshQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunToggleIcnList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::RunToggleIcnList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunToggleIcnList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RunToggleIcnList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CheckToggleIcnList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CheckToggleIcnList(class AMenuPadProcess* PadData, bool* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CheckToggleIcnList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CheckToggleIcnList_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecLocaTab
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::ExecLocaTab(class AMenuPadProcess* PadProcess, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecLocaTab");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecLocaTab_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunBack
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::RunBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RunBack");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RunBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecLocaToList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::ExecLocaToList(class AMenuPadProcess* PadProcess, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecLocaToList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecLocaToList_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindLocaToListEnterEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnLocaToListEnter              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::BindLocaToListEnterEvent(const struct FScriptDelegate& OnLocaToListEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindLocaToListEnterEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindLocaToListEnterEvent_Params params;
	params.OnLocaToListEnter = OnLocaToListEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CheckBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CheckBack(class AMenuPadProcess* PadData, bool* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CheckBack");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CheckBack_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RefreshQuest
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::RefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RefreshQuest");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RefreshQuest_Params params;
	params.MainQuestID = MainQuestID;
	params.MainStepIndex = MainStepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubQuestIDs != nullptr)
		*SubQuestIDs = params.SubQuestIDs;
	if (SubStepIndices != nullptr)
		*SubStepIndices = params.SubStepIndices;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindInitializedEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnInitialized                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::BindInitializedEvent(const struct FScriptDelegate& OnInitialized)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BindInitializedEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BindInitializedEvent_Params params;
	params.OnInitialized = OnInitialized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.IsInitialized
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Initialized                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::IsInitialized(bool* Initialized)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.IsInitialized");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Initialized != nullptr)
		*Initialized = params.Initialized;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RefreshLocation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::RefreshLocation(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.RefreshLocation");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_RefreshLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Close
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::Close(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Close");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitEvent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::InitEvent(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.InitEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_InitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Open
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::Open(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.Open");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecPad
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::ExecPad(float Time, class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecPad");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecPad_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnReset
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnReset");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnChangedMapFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnChangedMapFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnChangedMapFinished");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnChangedMapFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnGotoQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnGotoQuest(const struct FString& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnGotoQuest");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnGotoQuest_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnMapLink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnMapLink(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnMapLink");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnMapLink_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnFastTravel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnFastTravel(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnFastTravel");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnFastTravel_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnHovered_FreeCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnHovered_FreeCursor(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnHovered_FreeCursor");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnHovered_FreeCursor_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnUnhovered_FreeCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnUnhovered_FreeCursor(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnUnhovered_FreeCursor");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnUnhovered_FreeCursor_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnHovered_FocusIconImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnHovered_FocusIconImage(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnHovered_FocusIconImage");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnHovered_FocusIconImage_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnUnhovered_FocusIconImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnUnhovered_FocusIconImage(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnUnhovered_FocusIconImage");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnUnhovered_FocusIconImage_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnMoveCanvas_FreeCursor
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnMoveCanvas_FreeCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnMoveCanvas_FreeCursor");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnMoveCanvas_FreeCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshRegion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnRefreshRegion(const struct FString& RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshRegion");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnRefreshRegion_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnRefreshLocation(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshLocation");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnRefreshLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshArea
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnRefreshArea(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshArea");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnRefreshArea_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshQuest
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnRefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshQuest");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnRefreshQuest_Params params;
	params.MainQuestID = MainQuestID;
	params.MainStepIndex = MainStepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubQuestIDs != nullptr)
		*SubQuestIDs = params.SubQuestIDs;
	if (SubStepIndices != nullptr)
		*SubStepIndices = params.SubStepIndices;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshLocationName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnRefreshLocationName(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnRefreshLocationName");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnRefreshLocationName_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnEnter_LocaToList
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnEnter_LocaToList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnEnter_LocaToList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnEnter_LocaToList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnBack_LocaToList
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnBack_LocaToList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnBack_LocaToList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnBack_LocaToList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_Init
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_Init");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnInitialized
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_OnInitialized");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BndEvt__3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::BndEvt__3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature(bool Success, class UUserWidget* UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.BndEvt__3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_BndEvt__3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature_Params params;
	params.Success = Success;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_Exec
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::CustomEvent_Exec(float Time, class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.CustomEvent_Exec");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_CustomEvent_Exec_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewClose");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpenFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnViewOpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpenFinished");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewOpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnvViewCloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnvViewCloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnvViewCloseFinished");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnvViewCloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnBackToBaseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnBackToBaseEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnBackToBaseEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnBackToBaseEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnDecideMapLinkEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnDecideMapLinkEvent__DelegateSignature(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnDecideMapLinkEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnDecideMapLinkEvent__DelegateSignature_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnBackEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnBackEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnBackEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnBackEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnGotoQuestEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnGotoQuestEvent__DelegateSignature(const struct FString& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnGotoQuestEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnGotoQuestEvent__DelegateSignature_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnResetEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnResetEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnResetEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnResetEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewCloseFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnViewCloseFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewCloseFinishedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewCloseFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpenFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnViewOpenFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpenFinishedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewOpenFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnRefreshQuestEvent__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnRefreshQuestEvent__DelegateSignature(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnRefreshQuestEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnRefreshQuestEvent__DelegateSignature_Params params;
	params.MainQuestID = MainQuestID;
	params.MainStepIndex = MainStepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubQuestIDs != nullptr)
		*SubQuestIDs = params.SubQuestIDs;
	if (SubStepIndices != nullptr)
		*SubStepIndices = params.SubStepIndices;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnRefreshLocationEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnRefreshLocationEvent__DelegateSignature(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnRefreshLocationEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnRefreshLocationEvent__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnInitializedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnInitializedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnInitializedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnInitializedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnViewCloseEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewCloseEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewCloseEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpenEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C::OnViewOpenEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP.TO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C.OnViewOpenEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_LOCAMAP_C_OnViewOpenEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
