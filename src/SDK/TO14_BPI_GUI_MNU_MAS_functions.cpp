
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

// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_MAS_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Exit");

	UTO14_BPI_GUI_MNU_MAS_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Init");

	UTO14_BPI_GUI_MNU_MAS_C_Init_Params params;
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


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ReadWait");

	UTO14_BPI_GUI_MNU_MAS_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Exec
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Exec");

	UTO14_BPI_GUI_MNU_MAS_C_Exec_Params params;
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


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.GetNextScene");

	UTO14_BPI_GUI_MNU_MAS_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Finish");

	UTO14_BPI_GUI_MNU_MAS_C_Finish_Params params;

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


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SelfArtsCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CheckOK                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::SelfArtsCheck(bool* CheckOK)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SelfArtsCheck");

	UTO14_BPI_GUI_MNU_MAS_C_SelfArtsCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckOK != nullptr)
		*CheckOK = params.CheckOK;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.CategoryTabWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         Pad                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChanged                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::CategoryTabWork(class AMenuPadProcess* Pad, bool* IsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.CategoryTabWork");

	UTO14_BPI_GUI_MNU_MAS_C_CategoryTabWork_Params params;
	params.Pad = Pad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChanged != nullptr)
		*IsChanged = params.IsChanged;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.CheckKPIData
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::CheckKPIData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.CheckKPIData");

	UTO14_BPI_GUI_MNU_MAS_C_CheckKPIData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.InitKPICheckData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::InitKPICheckData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.InitKPICheckData");

	UTO14_BPI_GUI_MNU_MAS_C_InitKPICheckData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.BattleArtsUseCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::BattleArtsUseCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.BattleArtsUseCheck");

	UTO14_BPI_GUI_MNU_MAS_C_BattleArtsUseCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.TargetSelectWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::TargetSelectWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.TargetSelectWork");

	UTO14_BPI_GUI_MNU_MAS_C_TargetSelectWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.InitBattleMemberList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::InitBattleMemberList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.InitBattleMemberList");

	UTO14_BPI_GUI_MNU_MAS_C_InitBattleMemberList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ExecuteHeal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Using                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AllTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::ExecuteHeal(int Index, bool* Using, bool* AllTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ExecuteHeal");

	UTO14_BPI_GUI_MNU_MAS_C_ExecuteHeal_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Using != nullptr)
		*Using = params.Using;
	if (AllTarget != nullptr)
		*AllTarget = params.AllTarget;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.HealArtsWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::HealArtsWork(class AMenuPadProcess* PadProcess, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.HealArtsWork");

	UTO14_BPI_GUI_MNU_MAS_C_HealArtsWork_Params params;
	params.PadProcess = PadProcess;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ArtsUseCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::ArtsUseCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ArtsUseCheck");

	UTO14_BPI_GUI_MNU_MAS_C_ArtsUseCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SaveCursorData
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::SaveCursorData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SaveCursorData");

	UTO14_BPI_GUI_MNU_MAS_C_SaveCursorData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.InitCursorData
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::InitCursorData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.InitCursorData");

	UTO14_BPI_GUI_MNU_MAS_C_InitCursorData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.CloseProcedure
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::CloseProcedure()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.CloseProcedure");

	UTO14_BPI_GUI_MNU_MAS_C_CloseProcedure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ChangeArtsListHelp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::ChangeArtsListHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ChangeArtsListHelp");

	UTO14_BPI_GUI_MNU_MAS_C_ChangeArtsListHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SlotChangeCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::SlotChangeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SlotChangeCheck");

	UTO14_BPI_GUI_MNU_MAS_C_SlotChangeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ChangeMovieMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::ChangeMovieMouse(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ChangeMovieMouse");

	UTO14_BPI_GUI_MNU_MAS_C_ChangeMovieMouse_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.AllArtsListWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::AllArtsListWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.AllArtsListWork");

	UTO14_BPI_GUI_MNU_MAS_C_AllArtsListWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ArtsListInit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseSaveIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::ArtsListInit(bool UseSaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ArtsListInit");

	UTO14_BPI_GUI_MNU_MAS_C_ArtsListInit_Params params;
	params.UseSaveIndex = UseSaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SlotResetWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::SlotResetWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SlotResetWork");

	UTO14_BPI_GUI_MNU_MAS_C_SlotResetWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ListSelectWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::ListSelectWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ListSelectWork");

	UTO14_BPI_GUI_MNU_MAS_C_ListSelectWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SlotSelectWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::SlotSelectWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SlotSelectWork");

	UTO14_BPI_GUI_MNU_MAS_C_SlotSelectWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SetVisibleState
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::SetVisibleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.SetVisibleState");

	UTO14_BPI_GUI_MNU_MAS_C_SetVisibleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewOpenEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::OnViewOpenEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewOpenEnd");

	UTO14_BPI_GUI_MNU_MAS_C_OnViewOpenEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewClose");

	UTO14_BPI_GUI_MNU_MAS_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewCloseEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::OnViewCloseEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewCloseEnd");

	UTO14_BPI_GUI_MNU_MAS_C_OnViewCloseEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_MAS_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowList1
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::OnShowList1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowList1");

	UTO14_BPI_GUI_MNU_MAS_C_OnShowList1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowList2
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::OnShowList2()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowList2");

	UTO14_BPI_GUI_MNU_MAS_C_OnShowList2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnHideList1
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::OnHideList1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnHideList1");

	UTO14_BPI_GUI_MNU_MAS_C_OnHideList1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnHideList2
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::OnHideList2()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnHideList2");

	UTO14_BPI_GUI_MNU_MAS_C_OnHideList2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowSlot
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::OnShowSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowSlot");

	UTO14_BPI_GUI_MNU_MAS_C_OnShowSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowAllList
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::OnShowAllList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnShowAllList");

	UTO14_BPI_GUI_MNU_MAS_C_OnShowAllList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Construct");

	UTO14_BPI_GUI_MNU_MAS_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.Tick");

	UTO14_BPI_GUI_MNU_MAS_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_MAS_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS.TO14_BPI_GUI_MNU_MAS_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS");

	UTO14_BPI_GUI_MNU_MAS_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
