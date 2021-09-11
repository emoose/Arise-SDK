
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

// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_TAG2_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exit");

	UTO14_BPI_GUI_MNU_TAG2_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Init");

	UTO14_BPI_GUI_MNU_TAG2_C_Init_Params params;
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


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ReadWait");

	UTO14_BPI_GUI_MNU_TAG2_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_Params params;
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


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.GetNextScene");

	UTO14_BPI_GUI_MNU_TAG2_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Finish");

	UTO14_BPI_GUI_MNU_TAG2_C_Finish_Params params;

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


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.MakeWorkTacktics
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::MakeWorkTacktics(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.MakeWorkTacktics");

	UTO14_BPI_GUI_MNU_TAG2_C_MakeWorkTacktics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.UpdateIsChangePresetWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_C::UpdateIsChangePresetWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.UpdateIsChangePresetWork");

	UTO14_BPI_GUI_MNU_TAG2_C_UpdateIsChangePresetWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_InsertTargetSelectCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_InsertTargetSelectCancel(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_InsertTargetSelectCancel");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_InsertTargetSelectCancel_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.GetActCondLayoutDataTable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_TAG2_ACT_COND_LAYOUT Layout                         (Parm, OutParm)

void UTO14_BPI_GUI_MNU_TAG2_C::GetActCondLayoutDataTable(const struct FName& RowName, struct FST_TAG2_ACT_COND_LAYOUT* Layout)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.GetActCondLayoutDataTable");

	UTO14_BPI_GUI_MNU_TAG2_C_GetActCondLayoutDataTable_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Layout != nullptr)
		*Layout = params.Layout;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.IsExistImpossibleAct
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::IsExistImpossibleAct(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.IsExistImpossibleAct");

	UTO14_BPI_GUI_MNU_TAG2_C_IsExistImpossibleAct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.InitPresetCommand
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_C::InitPresetCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.InitPresetCommand");

	UTO14_BPI_GUI_MNU_TAG2_C_InitPresetCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.DebugTacticsDataPrint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuTacticsData        TacticsData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_TAG2_C::DebugTacticsDataPrint(const struct FMenuTacticsData& TacticsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.DebugTacticsDataPrint");

	UTO14_BPI_GUI_MNU_TAG2_C_DebugTacticsDataPrint_Params params;
	params.TacticsData = TacticsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.UpdateIsChangePreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_C::UpdateIsChangePreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.UpdateIsChangePreset");

	UTO14_BPI_GUI_MNU_TAG2_C_UpdateIsChangePreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.SetTacticsName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TargetTacticsIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TacticsName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_C::SetTacticsName(int TargetTacticsIndex, const struct FString& TacticsName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.SetTacticsName");

	UTO14_BPI_GUI_MNU_TAG2_C_SetTacticsName_Params params;
	params.TargetTacticsIndex = TargetTacticsIndex;
	params.TacticsName = TacticsName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_WarningCollisionWindowWait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_WarningCollisionWindowWait(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_WarningCollisionWindowWait");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_WarningCollisionWindowWait_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_SaveImpossibleWindowWait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_SaveImpossibleWindowWait(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_SaveImpossibleWindowWait");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_SaveImpossibleWindowWait_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_NameChangeWindowWait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_NameChangeWindowWait(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_NameChangeWindowWait");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_NameChangeWindowWait_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exce_CommandDetailSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exce_CommandDetailSelect(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exce_CommandDetailSelect");

	UTO14_BPI_GUI_MNU_TAG2_C_Exce_CommandDetailSelect_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_EditCommandWindowWait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_EditCommandWindowWait(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_EditCommandWindowWait");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_EditCommandWindowWait_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_InsertTargetSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_InsertTargetSelect(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_InsertTargetSelect");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_InsertTargetSelect_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ChangeVisilityCommandList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visility                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::ChangeVisilityCommandList(bool Visility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ChangeVisilityCommandList");

	UTO14_BPI_GUI_MNU_TAG2_C_ChangeVisilityCommandList_Params params;
	params.Visility = Visility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.CopyPresetTactics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TargetTacticsIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PresetTacticsLabel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_C::CopyPresetTactics(int TargetTacticsIndex, const struct FString& PresetTacticsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.CopyPresetTactics");

	UTO14_BPI_GUI_MNU_TAG2_C_CopyPresetTactics_Params params;
	params.TargetTacticsIndex = TargetTacticsIndex;
	params.PresetTacticsLabel = PresetTacticsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.SetDefaultTactics
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::SetDefaultTactics(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.SetDefaultTactics");

	UTO14_BPI_GUI_MNU_TAG2_C_SetDefaultTactics_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CommandNameSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_CommandNameSelect(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CommandNameSelect");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_CommandNameSelect_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_SaveCommandWindowWait
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_SaveCommandWindowWait(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_SaveCommandWindowWait");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_SaveCommandWindowWait_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CancelChangeWndowWait
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_CancelChangeWndowWait(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CancelChangeWndowWait");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_CancelChangeWndowWait_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CommandDetailCustomSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_CommandDetailCustomSelect(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CommandDetailCustomSelect");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_CommandDetailCustomSelect_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_ActSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_ActSelect(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_ActSelect");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_ActSelect_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CopyPresetWindowWait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_CopyPresetWindowWait(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CopyPresetWindowWait");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_CopyPresetWindowWait_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_PresetCommandSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_PresetCommandSelect(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_PresetCommandSelect");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_PresetCommandSelect_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CommandSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::Exec_CommandSelect(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Exec_CommandSelect");

	UTO14_BPI_GUI_MNU_TAG2_C_Exec_CommandSelect_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.InitTacticsData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_C::InitTacticsData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.InitTacticsData");

	UTO14_BPI_GUI_MNU_TAG2_C_InitTacticsData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.OnToggleCheckEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ListIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::OnToggleCheckEvent(int ListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.OnToggleCheckEvent");

	UTO14_BPI_GUI_MNU_TAG2_C_OnToggleCheckEvent_Params params;
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_TAG2_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.OnViewClose");

	UTO14_BPI_GUI_MNU_TAG2_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.Construct");

	UTO14_BPI_GUI_MNU_TAG2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2.TO14_BPI_GUI_MNU_TAG2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2");

	UTO14_BPI_GUI_MNU_TAG2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
