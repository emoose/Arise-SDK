
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

// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ForceFinalize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_TIT2_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exit");

	UTO14_BPI_GUI_MNU_TIT2_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Init");

	UTO14_BPI_GUI_MNU_TIT2_C_Init_Params params;
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


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ReadWait");

	UTO14_BPI_GUI_MNU_TIT2_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exec");

	UTO14_BPI_GUI_MNU_TIT2_C_Exec_Params params;
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


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.GetNextScene");

	UTO14_BPI_GUI_MNU_TIT2_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Finish");

	UTO14_BPI_GUI_MNU_TIT2_C_Finish_Params params;

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


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.StoreCursorIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  CharaID                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Start                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Top                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::StoreCursorIndex(EArisePartyID* CharaID, int* Start, int* Top)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.StoreCursorIndex");

	UTO14_BPI_GUI_MNU_TIT2_C_StoreCursorIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharaID != nullptr)
		*CharaID = params.CharaID;
	if (Start != nullptr)
		*Start = params.Start;
	if (Top != nullptr)
		*Top = params.Top;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.GetSklListTopIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EArisePartyID                  CharaID                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::GetSklListTopIndex(EArisePartyID* CharaID, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.GetSklListTopIndex");

	UTO14_BPI_GUI_MNU_TIT2_C_GetSklListTopIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharaID != nullptr)
		*CharaID = params.CharaID;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.GetSklListStartIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EArisePartyID                  CharaID                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::GetSklListStartIndex(EArisePartyID* CharaID, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.GetSklListStartIndex");

	UTO14_BPI_GUI_MNU_TIT2_C_GetSklListStartIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharaID != nullptr)
		*CharaID = params.CharaID;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ExecSklList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::ExecSklList(class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ExecSklList");

	UTO14_BPI_GUI_MNU_TIT2_C_ExecSklList_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CheckInputCloseSklList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::CheckInputCloseSklList(class AMenuPadProcess* PadData, bool* IsInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CheckInputCloseSklList");

	UTO14_BPI_GUI_MNU_TIT2_C_CheckInputCloseSklList_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.HideSklList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::HideSklList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.HideSklList");

	UTO14_BPI_GUI_MNU_TIT2_C_HideSklList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ShowSklList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::ShowSklList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ShowSklList");

	UTO14_BPI_GUI_MNU_TIT2_C_ShowSklList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CheckInputViewSklList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::CheckInputViewSklList(class AMenuPadProcess* PadData, bool* IsInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CheckInputViewSklList");

	UTO14_BPI_GUI_MNU_TIT2_C_CheckInputViewSklList_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInput != nullptr)
		*IsInput = params.IsInput;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ExecPad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::ExecPad(class AMenuPadProcess* PadData, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ExecPad");

	UTO14_BPI_GUI_MNU_TIT2_C_ExecPad_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.LoadCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::LoadCursorPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.LoadCursorPosition");

	UTO14_BPI_GUI_MNU_TIT2_C_LoadCursorPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.SaveCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::SaveCursorPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.SaveCursorPosition");

	UTO14_BPI_GUI_MNU_TIT2_C_SaveCursorPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.FinishMain
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_C::FinishMain(struct FST_MenuGlobalData* GlobalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.FinishMain");

	UTO14_BPI_GUI_MNU_TIT2_C_FinishMain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.InitMain
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_MAIN_C* Main                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_C::InitMain(class UTO14_BPI_GUI_MNU_TIT2_MAIN_C* Main, int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.InitMain");

	UTO14_BPI_GUI_MNU_TIT2_C_InitMain_Params params;
	params.Main = Main;
	params.Value = Value;
	params.PrevSceneID = PrevSceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Finish2D
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::Finish2D(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Finish2D");

	UTO14_BPI_GUI_MNU_TIT2_C_Finish2D_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ResultValue != nullptr)
		*ResultValue = params.ResultValue;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Finish3D
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::Finish3D(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Finish3D");

	UTO14_BPI_GUI_MNU_TIT2_C_Finish3D_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ResultValue != nullptr)
		*ResultValue = params.ResultValue;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exec2D
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::Exec2D(float Time, class AMenuPadProcess* PadData, const struct FST_MenuGlobalData& GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exec2D");

	UTO14_BPI_GUI_MNU_TIT2_C_Exec2D_Params params;
	params.Time = Time;
	params.PadData = PadData;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exec3D
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::Exec3D(float Time, class AMenuPadProcess* PadData, const struct FST_MenuGlobalData& GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.Exec3D");

	UTO14_BPI_GUI_MNU_TIT2_C_Exec3D_Params params;
	params.Time = Time;
	params.PadData = PadData;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnSkipableStart_FromMain
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::OnAutoSkillLearnSkipableStart_FromMain()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnSkipableStart_FromMain");

	UTO14_BPI_GUI_MNU_TIT2_C_OnAutoSkillLearnSkipableStart_FromMain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnSkipableEnd_FromMain
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::OnAutoSkillLearnSkipableEnd_FromMain()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnSkipableEnd_FromMain");

	UTO14_BPI_GUI_MNU_TIT2_C_OnAutoSkillLearnSkipableEnd_FromMain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnExpConfirmStart_FromMain
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::OnAutoSkillLearnExpConfirmStart_FromMain()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnExpConfirmStart_FromMain");

	UTO14_BPI_GUI_MNU_TIT2_C_OnAutoSkillLearnExpConfirmStart_FromMain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnExpConfirmEnd_FromMain
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::OnAutoSkillLearnExpConfirmEnd_FromMain()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAutoSkillLearnExpConfirmEnd_FromMain");

	UTO14_BPI_GUI_MNU_TIT2_C_OnAutoSkillLearnExpConfirmEnd_FromMain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnShowSklList
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::OnShowSklList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnShowSklList");

	UTO14_BPI_GUI_MNU_TIT2_C_OnShowSklList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnHideSklList
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::OnHideSklList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnHideSklList");

	UTO14_BPI_GUI_MNU_TIT2_C_OnHideSklList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_TIT2_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnViewClose");

	UTO14_BPI_GUI_MNU_TIT2_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CustomEvent_OnInit3D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_C::CustomEvent_OnInit3D(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CustomEvent_OnInit3D");

	UTO14_BPI_GUI_MNU_TIT2_C_CustomEvent_OnInit3D_Params params;
	params.Value = Value;
	params.PrevSceneID = PrevSceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CustomEvent_OnInit2D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_TIT2_C::CustomEvent_OnInit2D(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.CustomEvent_OnInit2D");

	UTO14_BPI_GUI_MNU_TIT2_C_CustomEvent_OnInit2D_Params params;
	params.Value = Value;
	params.PrevSceneID = PrevSceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.BndEvt__BP_MNU_3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::BndEvt__BP_MNU_3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature(bool Success, class UUserWidget* UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.BndEvt__BP_MNU_3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_C_BndEvt__BP_MNU_3DWIDGET_K2Node_ComponentBoundEvent_0_OnCreatedWidget__DelegateSignature_Params params;
	params.Success = Success;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.OnAnimationFinished");

	UTO14_BPI_GUI_MNU_TIT2_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2.TO14_BPI_GUI_MNU_TIT2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2");

	UTO14_BPI_GUI_MNU_TIT2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
