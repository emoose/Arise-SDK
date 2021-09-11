
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

// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_MAP2_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Exit");

	UTO14_BPI_GUI_MNU_MAP2_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Init");

	UTO14_BPI_GUI_MNU_MAP2_C_Init_Params params;
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


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ReadWait");

	UTO14_BPI_GUI_MNU_MAP2_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Exec");

	UTO14_BPI_GUI_MNU_MAP2_C_Exec_Params params;
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


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.GetNextScene");

	UTO14_BPI_GUI_MNU_MAP2_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Finish");

	UTO14_BPI_GUI_MNU_MAP2_C_Finish_Params params;

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


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.UnbindToMapListEvent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::UnbindToMapListEvent(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.UnbindToMapListEvent");

	UTO14_BPI_GUI_MNU_MAP2_C_UnbindToMapListEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.BindToMapListEvent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::BindToMapListEvent(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.BindToMapListEvent");

	UTO14_BPI_GUI_MNU_MAP2_C_BindToMapListEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.UnbindToLocaMapEvent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::UnbindToLocaMapEvent(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.UnbindToLocaMapEvent");

	UTO14_BPI_GUI_MNU_MAP2_C_UnbindToLocaMapEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.BindToLocaMapEvent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::BindToLocaMapEvent(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.BindToLocaMapEvent");

	UTO14_BPI_GUI_MNU_MAP2_C_BindToLocaMapEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CheckPrimary
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::CheckPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CheckPrimary");

	UTO14_BPI_GUI_MNU_MAP2_C_CheckPrimary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.RefreshQuest
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::RefreshQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.RefreshQuest");

	UTO14_BPI_GUI_MNU_MAP2_C_RefreshQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.RefreshLocation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_C::RefreshLocation(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.RefreshLocation");

	UTO14_BPI_GUI_MNU_MAP2_C_RefreshLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.RefreshRegion
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_C::RefreshRegion(const struct FString& RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.RefreshRegion");

	UTO14_BPI_GUI_MNU_MAP2_C_RefreshRegion_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitLocationData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::InitLocationData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitLocationData");

	UTO14_BPI_GUI_MNU_MAP2_C_InitLocationData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitMapList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::InitMapList(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitMapList");

	UTO14_BPI_GUI_MNU_MAP2_C_InitMapList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitLocaMap
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::InitLocaMap(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitLocaMap");

	UTO14_BPI_GUI_MNU_MAP2_C_InitLocaMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ChangeSubMenu
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UTO14_BPI_MenuFunction_C> NextSubMenu                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::ChangeSubMenu(TScriptInterface<class UTO14_BPI_MenuFunction_C>* NextSubMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ChangeSubMenu");

	UTO14_BPI_GUI_MNU_MAP2_C_ChangeSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSubMenu != nullptr)
		*NextSubMenu = params.NextSubMenu;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitSequence
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::InitSequence(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.InitSequence");

	UTO14_BPI_GUI_MNU_MAP2_C_InitSequence_Params params;
	params.Value = Value;
	params.PrevSceneID = PrevSceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Close
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::Close(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Close");

	UTO14_BPI_GUI_MNU_MAP2_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Open
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::Open(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.Open");

	UTO14_BPI_GUI_MNU_MAP2_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBackChangeArea
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_OnBackChangeArea(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBackChangeArea");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnBackChangeArea_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnChangeToMapList
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_OnChangeToMapList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnChangeToMapList");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnChangeToMapList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnInitializedLocaMap
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_OnInitializedLocaMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnInitializedLocaMap");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnInitializedLocaMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnGotoQuest_Locamap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_OnGotoQuest_Locamap(const struct FString& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnGotoQuest_Locamap");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnGotoQuest_Locamap_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBack_Locamap
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_OnBack_Locamap()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBack_Locamap");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnBack_Locamap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBackToMapList
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_OnBackToMapList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBackToMapList");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnBackToMapList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBackToBase_Locamap
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_OnBackToBase_Locamap()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBackToBase_Locamap");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnBackToBase_Locamap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBack_MapList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bExit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_OnBack_MapList(bool bExit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnBack_MapList");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnBack_MapList_Params params;
	params.bExit = bExit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnDecideMapLink_Locamap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_OnDecideMapLink_Locamap(const struct FString& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnDecideMapLink_Locamap");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnDecideMapLink_Locamap_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnChangeArea_MapList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_OnChangeArea_MapList(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnChangeArea_MapList");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnChangeArea_MapList_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_Exec
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_Exec");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_Exec_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnInitializedMapList
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_OnInitializedMapList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_OnInitializedMapList");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_OnInitializedMapList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_Init
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_Init");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_Init_Params params;
	params.Value = Value;
	params.PrevSceneID = PrevSceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_Initialized
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::CustomEvent_Initialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.CustomEvent_Initialized");

	UTO14_BPI_GUI_MNU_MAP2_C_CustomEvent_Initialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAP2_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewClose");

	UTO14_BPI_GUI_MNU_MAP2_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewOpenFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::OnViewOpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewOpenFinished");

	UTO14_BPI_GUI_MNU_MAP2_C_OnViewOpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewCloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_C::OnViewCloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnViewCloseFinished");

	UTO14_BPI_GUI_MNU_MAP2_C_OnViewCloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_MAP2_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2");

	UTO14_BPI_GUI_MNU_MAP2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnRefreshQuestEvent__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_C::OnRefreshQuestEvent__DelegateSignature(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnRefreshQuestEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_C_OnRefreshQuestEvent__DelegateSignature_Params params;
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


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnRefreshLocationEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_C::OnRefreshLocationEvent__DelegateSignature(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnRefreshLocationEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_C_OnRefreshLocationEvent__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnRefreshRegionEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_C::OnRefreshRegionEvent__DelegateSignature(const struct FString& RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2.TO14_BPI_GUI_MNU_MAP2_C.OnRefreshRegionEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_C_OnRefreshRegionEvent__DelegateSignature_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
