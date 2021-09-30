
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

// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_SAV_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Exit");

	UTO14_BPI_GUI_MNU_SAV_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Init");

	UTO14_BPI_GUI_MNU_SAV_C_Init_Params params;
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


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ReadWait");

	UTO14_BPI_GUI_MNU_SAV_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Exec");

	UTO14_BPI_GUI_MNU_SAV_C_Exec_Params params;
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


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetNextScene");

	UTO14_BPI_GUI_MNU_SAV_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Finish");

	UTO14_BPI_GUI_MNU_SAV_C_Finish_Params params;

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


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.IsWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_SAV_C::IsWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.IsWait");

	UTO14_BPI_GUI_MNU_SAV_C_IsWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetPackageNames
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FModifiedText           Out                            (Parm, OutParm)

void UTO14_BPI_GUI_MNU_SAV_C::GetPackageNames(TArray<struct FString>* Array, struct FModifiedText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetPackageNames");

	UTO14_BPI_GUI_MNU_SAV_C_GetPackageNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.CombineWithCRLF
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FModifiedText           Text2                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FModifiedText           Out                            (Parm, OutParm)

void UTO14_BPI_GUI_MNU_SAV_C::CombineWithCRLF(const struct FModifiedText& Text1, const struct FModifiedText& Text2, struct FModifiedText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.CombineWithCRLF");

	UTO14_BPI_GUI_MNU_SAV_C_CombineWithCRLF_Params params;
	params.Text1 = Text1;
	params.Text2 = Text2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDLCErrorProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ExecDLCErrorProcess(float Time, class AMenuPadProcess* PadData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDLCErrorProcess");

	UTO14_BPI_GUI_MNU_SAV_C_ExecDLCErrorProcess_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.MouseControlForWaiting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInteractable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::MouseControlForWaiting(bool bInteractable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.MouseControlForWaiting");

	UTO14_BPI_GUI_MNU_SAV_C_MouseControlForWaiting_Params params;
	params.bInteractable = bInteractable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetDLC_CategoryError
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FDictionaryText         DicText                        (Parm, OutParm)

void UTO14_BPI_GUI_MNU_SAV_C::GetDLC_CategoryError(const struct FString& Category, struct FDictionaryText* DicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetDLC_CategoryError");

	UTO14_BPI_GUI_MNU_SAV_C_GetDLC_CategoryError_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DicText != nullptr)
		*DicText = params.DicText;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDLCWarningProcess
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ExecDLCWarningProcess(float Time, class AMenuPadProcess* PadData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDLCWarningProcess");

	UTO14_BPI_GUI_MNU_SAV_C_ExecDLCWarningProcess_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDefaultProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::ExecDefaultProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDefaultProcess");

	UTO14_BPI_GUI_MNU_SAV_C_ExecDefaultProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartExNewFirst
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::StartExNewFirst()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartExNewFirst");

	UTO14_BPI_GUI_MNU_SAV_C_StartExNewFirst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecExNewFirstProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ExecExNewFirstProcess(float Time, class AMenuPadProcess* PadData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecExNewFirstProcess");

	UTO14_BPI_GUI_MNU_SAV_C_ExecExNewFirstProcess_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecErrorProcess
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ExecErrorProcess(float Time, class AMenuPadProcess* PadData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecErrorProcess");

	UTO14_BPI_GUI_MNU_SAV_C_ExecErrorProcess_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.IsExcludeAutoSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_SAV_C::IsExcludeAutoSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.IsExcludeAutoSave");

	UTO14_BPI_GUI_MNU_SAV_C_IsExcludeAutoSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartExit
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::StartExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartExit");

	UTO14_BPI_GUI_MNU_SAV_C_StartExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecInitializeProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ExecInitializeProcess(float Time, class AMenuPadProcess* PadData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecInitializeProcess");

	UTO14_BPI_GUI_MNU_SAV_C_ExecInitializeProcess_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.SlotToIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::SlotToIndex(int Slot, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.SlotToIndex");

	UTO14_BPI_GUI_MNU_SAV_C_SlotToIndex_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.nativeInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::nativeInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.nativeInitialize");

	UTO14_BPI_GUI_MNU_SAV_C_nativeInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::GetSelectedSlot(int* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.GetSelectedSlot");

	UTO14_BPI_GUI_MNU_SAV_C_GetSelectedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::StartLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartLoad");

	UTO14_BPI_GUI_MNU_SAV_C_StartLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::StartSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartSave");

	UTO14_BPI_GUI_MNU_SAV_C_StartSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartDelete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::StartDelete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.StartDelete");

	UTO14_BPI_GUI_MNU_SAV_C_StartDelete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecLoadProcess
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ExecLoadProcess(float Time, class AMenuPadProcess* PadData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecLoadProcess");

	UTO14_BPI_GUI_MNU_SAV_C_ExecLoadProcess_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecSaveProcess
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ExecSaveProcess(float Time, class AMenuPadProcess* PadData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecSaveProcess");

	UTO14_BPI_GUI_MNU_SAV_C_ExecSaveProcess_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDeleteProcess
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ExecDeleteProcess(float Time, class AMenuPadProcess* PadData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecDeleteProcess");

	UTO14_BPI_GUI_MNU_SAV_C_ExecDeleteProcess_Params params;
	params.Time = Time;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.DecideSub
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            iNewIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::DecideSub(int iNewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.DecideSub");

	UTO14_BPI_GUI_MNU_SAV_C_DecideSub_Params params;
	params.iNewIndex = iNewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.SelectSub
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            iNewIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            iOldIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::SelectSub(int iNewIndex, int iOldIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.SelectSub");

	UTO14_BPI_GUI_MNU_SAV_C_SelectSub_Params params;
	params.iNewIndex = iNewIndex;
	params.iOldIndex = iOldIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ListDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            iNewIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ListDecide(int iNewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ListDecide");

	UTO14_BPI_GUI_MNU_SAV_C_ListDecide_Params params;
	params.iNewIndex = iNewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.RestructList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeepCursor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::RestructList(bool KeepCursor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.RestructList");

	UTO14_BPI_GUI_MNU_SAV_C_RestructList_Params params;
	params.KeepCursor = KeepCursor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.DoDLCError
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ErrorDLCItemID                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_SAV_C::DoDLCError(TArray<int> ErrorDLCItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.DoDLCError");

	UTO14_BPI_GUI_MNU_SAV_C_DoDLCError_Params params;
	params.ErrorDLCItemID = ErrorDLCItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_SAV_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnViewClose");

	UTO14_BPI_GUI_MNU_SAV_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Construct");

	UTO14_BPI_GUI_MNU_SAV_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.Tick");

	UTO14_BPI_GUI_MNU_SAV_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnClose");

	UTO14_BPI_GUI_MNU_SAV_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnClosed
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.OnClosed");

	UTO14_BPI_GUI_MNU_SAV_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.WaitingEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SAV_C::WaitingEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.WaitingEnd");

	UTO14_BPI_GUI_MNU_SAV_C_WaitingEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SAV_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SAV.TO14_BPI_GUI_MNU_SAV_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV");

	UTO14_BPI_GUI_MNU_SAV_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SAV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
