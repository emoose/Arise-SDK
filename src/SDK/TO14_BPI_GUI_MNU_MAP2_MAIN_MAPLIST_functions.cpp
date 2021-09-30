
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

// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Exit");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Init");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Init_Params params;
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


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ReadWait");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Exec");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Exec_Params params;
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


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.GetNextScene");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Finish");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Finish_Params params;

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


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Term
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::Term()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Term");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Term_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindRefreshRegionEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::BindRefreshRegionEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindRefreshRegionEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_BindRefreshRegionEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.FogAttach
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 FOG1                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::FogAttach(class UWidget* FOG1)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.FogAttach");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_FogAttach_Params params;
	params.FOG1 = FOG1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RefreshQuest
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::RefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RefreshQuest");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_RefreshQuest_Params params;
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


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindChnageAreaEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnChangeArea                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::BindChnageAreaEvent(const struct FScriptDelegate& OnChangeArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindChnageAreaEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_BindChnageAreaEvent_Params params;
	params.OnChangeArea = OnChangeArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ChangeArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::ChangeArea(const struct FMapLocationData& Location, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ChangeArea");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ChangeArea_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitLocaList
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::InitLocaList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitLocaList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_InitLocaList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitAreaList
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::InitAreaList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitAreaList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_InitAreaList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecLocaList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::ExecLocaList(class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecLocaList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ExecLocaList_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecAreaList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::ExecAreaList(class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecAreaList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ExecAreaList_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RefreshLocation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::RefreshLocation(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RefreshLocation");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_RefreshLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RefreshRegion
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::RefreshRegion(const struct FString& RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RefreshRegion");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_RefreshRegion_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitRegionTab
// (Private, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::InitRegionTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitRegionTab");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_InitRegionTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecRegionTab
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::ExecRegionTab(class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecRegionTab");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ExecRegionTab_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindBackEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnBack                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::BindBackEvent(const struct FScriptDelegate& OnBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindBackEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_BindBackEvent_Params params;
	params.OnBack = OnBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RunBack
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Exit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::RunBack(bool Exit, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.RunBack");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_RunBack_Params params;
	params.Exit = Exit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CheckBack
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsExit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CheckBack(class AMenuPadProcess* PadData, bool* Input, bool* IsExit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CheckBack");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CheckBack_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
	if (IsExit != nullptr)
		*IsExit = params.IsExit;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecPad
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::ExecPad(class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecPad");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ExecPad_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Close");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Open");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::InitEvent(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.InitEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_InitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindInitializedEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         OnInitialized                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::BindInitializedEvent(const struct FScriptDelegate& OnInitialized)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.BindInitializedEvent");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_BindInitializedEvent_Params params;
	params.OnInitialized = OnInitialized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.IsInitialized
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Initialized                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::IsInitialized(bool* Initialized)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.IsInitialized");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Initialized != nullptr)
		*Initialized = params.Initialized;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnDecide_LocaList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHasHierarchy                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CustomEvent_OnDecide_LocaList(const struct FMapLocationData& Location, bool bHasHierarchy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnDecide_LocaList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnDecide_LocaList_Params params;
	params.Location = Location;
	params.bHasHierarchy = bHasHierarchy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnDecide_AreaList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHasHierarchy                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CustomEvent_OnDecide_AreaList(const struct FMapLocationData& Location, bool bHasHierarchy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnDecide_AreaList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnDecide_AreaList_Params params;
	params.Location = Location;
	params.bHasHierarchy = bHasHierarchy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnSelect_AreaList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHasHierarchy                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CustomEvent_OnSelect_AreaList(const struct FMapLocationData& Location, bool bHasHierarchy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnSelect_AreaList");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnSelect_AreaList_Params params;
	params.Location = Location;
	params.bHasHierarchy = bHasHierarchy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnRefreshRegion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CustomEvent_OnRefreshRegion(const struct FString& RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnRefreshRegion");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnRefreshRegion_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnRefreshLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CustomEvent_OnRefreshLocation(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnRefreshLocation");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnRefreshLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnRefreshQuest
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CustomEvent_OnRefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnRefreshQuest");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnRefreshQuest_Params params;
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


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Exit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CustomEvent_OnBack(bool Exit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnBack");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnBack_Params params;
	params.Exit = Exit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnChangedSelect_RegionTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CustomEvent_OnChangedSelect_RegionTab(const struct FString& RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnChangedSelect_RegionTab");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnChangedSelect_RegionTab_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_Exec
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CustomEvent_Exec(float Time, class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_Exec");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_Exec_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_Init
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CustomEvent_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_Init");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnInitialized
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::CustomEvent_OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.CustomEvent_OnInitialized");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_CustomEvent_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewClose");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpenFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnViewOpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpenFinished");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewOpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewCloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnViewCloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewCloseFinished");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewCloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.Destruct");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnRefreshQuestEvent__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            MainStepIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SubQuestIDs                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SubStepIndices                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnRefreshQuestEvent__DelegateSignature(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnRefreshQuestEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnRefreshQuestEvent__DelegateSignature_Params params;
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


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnChangeAreaEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnChangeAreaEvent__DelegateSignature(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnChangeAreaEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnChangeAreaEvent__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnRefreshLocationEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapLocationData        Location                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnRefreshLocationEvent__DelegateSignature(const struct FMapLocationData& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnRefreshLocationEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnRefreshLocationEvent__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnRefreshRegionEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnRefreshRegionEvent__DelegateSignature(const struct FString& RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnRefreshRegionEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnRefreshRegionEvent__DelegateSignature_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnBackEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Exit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnBackEvent__DelegateSignature(bool Exit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnBackEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnBackEvent__DelegateSignature_Params params;
	params.Exit = Exit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewCloseFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnViewCloseFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewCloseFinishedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewCloseFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpenFinishedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnViewOpenFinishedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpenFinishedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewOpenFinishedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnInitializedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnInitializedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnInitializedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnInitializedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewCloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnViewCloseEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewCloseEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewCloseEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpenEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C::OnViewOpenEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST.TO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C.OnViewOpenEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_MAP2_MAIN_MAPLIST_C_OnViewOpenEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
