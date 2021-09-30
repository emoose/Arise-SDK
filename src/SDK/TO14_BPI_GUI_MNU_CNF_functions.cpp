
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

// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::ForceFinalize(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ForceFinalize");

	UTO14_BPI_GUI_MNU_CNF_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Exit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Exit");

	UTO14_BPI_GUI_MNU_CNF_C_Exit_Params params;
	params.GlobalData = GlobalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PrevSceneID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Init");

	UTO14_BPI_GUI_MNU_CNF_C_Init_Params params;
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


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ReadWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ReadWait");

	UTO14_BPI_GUI_MNU_CNF_C_ReadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalData != nullptr)
		*GlobalData = params.GlobalData;
	if (IsFinish != nullptr)
		*IsFinish = params.IsFinish;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Exec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsFinish                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Exec");

	UTO14_BPI_GUI_MNU_CNF_C_Exec_Params params;
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


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GetNextScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)
// bool                           SelfRemain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::GetNextScene(struct FString* NextSceneID, bool* SelfRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GetNextScene");

	UTO14_BPI_GUI_MNU_CNF_C_GetNextScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
	if (SelfRemain != nullptr)
		*SelfRemain = params.SelfRemain;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Finish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MenuGlobalData      GlobalData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResultValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Finish");

	UTO14_BPI_GUI_MNU_CNF_C_Finish_Params params;

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


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.BtlBgmListLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::BtlBgmListLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.BtlBgmListLoad");

	UTO14_BPI_GUI_MNU_CNF_C_BtlBgmListLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetNewGameResult
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::SetNewGameResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetNewGameResult");

	UTO14_BPI_GUI_MNU_CNF_C_SetNewGameResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.AddGameListCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfigData             InConfigData                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           OutIsAdd                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::AddGameListCheck(const struct FConfigData& InConfigData, bool* OutIsAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.AddGameListCheck");

	UTO14_BPI_GUI_MNU_CNF_C_AddGameListCheck_Params params;
	params.InConfigData = InConfigData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsAdd != nullptr)
		*OutIsAdd = params.OutIsAdd;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetLightHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsChanged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::SetLightHelp(bool InIsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetLightHelp");

	UTO14_BPI_GUI_MNU_CNF_C_SetLightHelp_Params params;
	params.InIsChanged = InIsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.EventGroupChangeCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::EventGroupChangeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.EventGroupChangeCheck");

	UTO14_BPI_GUI_MNU_CNF_C_EventGroupChangeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetListHelpLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESetting                       InSetting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsGraphic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsChanged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::SetListHelpLabel(ESetting InSetting, bool InIsGraphic, bool InIsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetListHelpLabel");

	UTO14_BPI_GUI_MNU_CNF_C_SetListHelpLabel_Params params;
	params.InSetting = InSetting;
	params.InIsGraphic = InIsGraphic;
	params.InIsChanged = InIsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetGraphicHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsChanged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::SetGraphicHelp(bool InIsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetGraphicHelp");

	UTO14_BPI_GUI_MNU_CNF_C_SetGraphicHelp_Params params;
	params.InIsChanged = InIsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetGameHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsChanged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::SetGameHelp(bool InIsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetGameHelp");

	UTO14_BPI_GUI_MNU_CNF_C_SetGameHelp_Params params;
	params.InIsChanged = InIsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicCloseWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::GraphicCloseWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicCloseWait");

	UTO14_BPI_GUI_MNU_CNF_C_GraphicCloseWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::GraphicSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicSelect");

	UTO14_BPI_GUI_MNU_CNF_C_GraphicSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicOpenWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::GraphicOpenWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicOpenWait");

	UTO14_BPI_GUI_MNU_CNF_C_GraphicOpenWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::GraphicOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GraphicOpen");

	UTO14_BPI_GUI_MNU_CNF_C_GraphicOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.CheckConfigData_GRAPHICS
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::CheckConfigData_GRAPHICS()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.CheckConfigData_GRAPHICS");

	UTO14_BPI_GUI_MNU_CNF_C_CheckConfigData_GRAPHICS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 InStringID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FModifiedText           OutText                        (Parm, OutParm)

void UTO14_BPI_GUI_MNU_CNF_C::GetText(const struct FString& InStringID, struct FModifiedText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GetText");

	UTO14_BPI_GUI_MNU_CNF_C_GetText_Params params;
	params.InStringID = InStringID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.NewGameDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::NewGameDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.NewGameDialog");

	UTO14_BPI_GUI_MNU_CNF_C_NewGameDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigCloseWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::KeyConfigCloseWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigCloseWait");

	UTO14_BPI_GUI_MNU_CNF_C_KeyConfigCloseWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::KeyConfigSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigSelect");

	UTO14_BPI_GUI_MNU_CNF_C_KeyConfigSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigOpenWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::KeyConfigOpenWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigOpenWait");

	UTO14_BPI_GUI_MNU_CNF_C_KeyConfigOpenWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::KeyConfigOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.KeyConfigOpen");

	UTO14_BPI_GUI_MNU_CNF_C_KeyConfigOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GetConfigData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   InTitleLabel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FConfigData             OutConfigData                  (Parm, OutParm)

void UTO14_BPI_GUI_MNU_CNF_C::GetConfigData(const struct FName& InTitleLabel, struct FConfigData* OutConfigData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.GetConfigData");

	UTO14_BPI_GUI_MNU_CNF_C_GetConfigData_Params params;
	params.InTitleLabel = InTitleLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConfigData != nullptr)
		*OutConfigData = params.OutConfigData;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustCloseWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::LightAdjustCloseWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustCloseWait");

	UTO14_BPI_GUI_MNU_CNF_C_LightAdjustCloseWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::LightAdjustSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustSelect");

	UTO14_BPI_GUI_MNU_CNF_C_LightAdjustSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustOpenWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::LightAdjustOpenWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustOpenWait");

	UTO14_BPI_GUI_MNU_CNF_C_LightAdjustOpenWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustOpen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::LightAdjustOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.LightAdjustOpen");

	UTO14_BPI_GUI_MNU_CNF_C_LightAdjustOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.UpdateGameSaveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsOverwrite                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::UpdateGameSaveData(bool InIsOverwrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.UpdateGameSaveData");

	UTO14_BPI_GUI_MNU_CNF_C_UpdateGameSaveData_Params params;
	params.InIsOverwrite = InIsOverwrite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetHelpLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InHelpLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_CNF_C::SetHelpLabel(const struct FString& InHelpLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.SetHelpLabel");

	UTO14_BPI_GUI_MNU_CNF_C_SetHelpLabel_Params params;
	params.InHelpLabel = InHelpLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpenCloseWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::DlcBgmOpenCloseWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpenCloseWait");

	UTO14_BPI_GUI_MNU_CNF_C_DlcBgmOpenCloseWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpenSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::DlcBgmOpenSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpenSelect");

	UTO14_BPI_GUI_MNU_CNF_C_DlcBgmOpenSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpenWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::DlcBgmOpenWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpenWait");

	UTO14_BPI_GUI_MNU_CNF_C_DlcBgmOpenWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::DlcBgmOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.DlcBgmOpen");

	UTO14_BPI_GUI_MNU_CNF_C_DlcBgmOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.AnalysisDialogCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::AnalysisDialogCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.AnalysisDialogCheck");

	UTO14_BPI_GUI_MNU_CNF_C_AnalysisDialogCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.InitialSettingDialogCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::InitialSettingDialogCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.InitialSettingDialogCheck");

	UTO14_BPI_GUI_MNU_CNF_C_InitialSettingDialogCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ConfigEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::ConfigEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ConfigEnd");

	UTO14_BPI_GUI_MNU_CNF_C_ConfigEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ConfigEndDialogCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::ConfigEndDialogCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ConfigEndDialogCheck");

	UTO14_BPI_GUI_MNU_CNF_C_ConfigEndDialogCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.UpdateInfomationText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfigData             InConfigDatat                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            InCursorIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::UpdateInfomationText(const struct FConfigData& InConfigDatat, int InCursorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.UpdateInfomationText");

	UTO14_BPI_GUI_MNU_CNF_C_UpdateInfomationText_Params params;
	params.InConfigDatat = InConfigDatat;
	params.InCursorIndex = InCursorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.CheckConfigData_GAME
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::CheckConfigData_GAME()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.CheckConfigData_GAME");

	UTO14_BPI_GUI_MNU_CNF_C_CheckConfigData_GAME_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ListLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::ListLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ListLoad");

	UTO14_BPI_GUI_MNU_CNF_C_ListLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.TopCommandSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::TopCommandSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.TopCommandSelect");

	UTO14_BPI_GUI_MNU_CNF_C_TopCommandSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OpenMenuWait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsFinish                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::OpenMenuWait(bool* OutIsFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OpenMenuWait");

	UTO14_BPI_GUI_MNU_CNF_C_OpenMenuWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsFinish != nullptr)
		*OutIsFinish = params.OutIsFinish;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OpenAnimationWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::OpenAnimationWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OpenAnimationWait");

	UTO14_BPI_GUI_MNU_CNF_C_OpenAnimationWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.CloseAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::CloseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.CloseAnimation");

	UTO14_BPI_GUI_MNU_CNF_C_CloseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Construct");

	UTO14_BPI_GUI_MNU_CNF_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.Tick");

	UTO14_BPI_GUI_MNU_CNF_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_CNF_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OnViewClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::OnViewClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OnViewClose");

	UTO14_BPI_GUI_MNU_CNF_C_OnViewClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OnDialigOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_C::OnDialigOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.OnDialigOpen");

	UTO14_BPI_GUI_MNU_CNF_C_OnDialigOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF.TO14_BPI_GUI_MNU_CNF_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF");

	UTO14_BPI_GUI_MNU_CNF_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
