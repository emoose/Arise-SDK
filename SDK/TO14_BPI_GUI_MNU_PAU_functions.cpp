
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

// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_PAU_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Exit");

	UTO14_BPI_GUI_MNU_PAU_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Init");

	UTO14_BPI_GUI_MNU_PAU_C_Init_Params params;
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


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ReadWait");

	UTO14_BPI_GUI_MNU_PAU_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Exec
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Exec");

	UTO14_BPI_GUI_MNU_PAU_C_Exec_Params params;
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


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.GetNextScene");

	UTO14_BPI_GUI_MNU_PAU_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Finish");

	UTO14_BPI_GUI_MNU_PAU_C_Finish_Params params;

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


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.CreatePadImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::CreatePadImage(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.CreatePadImage");

	UTO14_BPI_GUI_MNU_PAU_C_CreatePadImage_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.CloseRequest
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_C::CloseRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.CloseRequest");

	UTO14_BPI_GUI_MNU_PAU_C_CloseRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.GetPauseOpenType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPauseMenuOpenType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPauseMenuOpenType> UTO14_BPI_GUI_MNU_PAU_C::GetPauseOpenType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.GetPauseOpenType");

	UTO14_BPI_GUI_MNU_PAU_C_GetPauseOpenType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.PadImageLoadCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::PadImageLoadCallback(class UObject* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.PadImageLoadCallback");

	UTO14_BPI_GUI_MNU_PAU_C_PadImageLoadCallback_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.PadCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::PadCheck(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.PadCheck");

	UTO14_BPI_GUI_MNU_PAU_C_PadCheck_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ShowPadImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_C::ShowPadImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ShowPadImage");

	UTO14_BPI_GUI_MNU_PAU_C_ShowPadImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ExitCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RetValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::ExitCheck(bool* RetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ExitCheck");

	UTO14_BPI_GUI_MNU_PAU_C_ExitCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetValue != nullptr)
		*RetValue = params.RetValue;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.WindowWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::WindowWait(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.WindowWait");

	UTO14_BPI_GUI_MNU_PAU_C_WindowWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_PAU_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.OnViewClose");

	UTO14_BPI_GUI_MNU_PAU_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.Construct");

	UTO14_BPI_GUI_MNU_PAU_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.TermPadCheck
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_C::TermPadCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.TermPadCheck");

	UTO14_BPI_GUI_MNU_PAU_C_TermPadCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU");

	UTO14_BPI_GUI_MNU_PAU_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.SceneUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_C::SceneUpdate__DelegateSignature(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU.TO14_BPI_GUI_MNU_PAU_C.SceneUpdate__DelegateSignature");

	UTO14_BPI_GUI_MNU_PAU_C_SceneUpdate__DelegateSignature_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
