
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

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ChangeResolutionList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScreenMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::ChangeResolutionList(int ScreenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ChangeResolutionList");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_ChangeResolutionList_Params params;
	params.ScreenMode = ScreenMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ChangeScreenModeWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::ChangeScreenModeWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ChangeScreenModeWindow");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_ChangeScreenModeWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ChangeNativeResolution
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::ChangeNativeResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ChangeNativeResolution");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_ChangeNativeResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GageValueChenge
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::GageValueChenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GageValueChenge");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_GageValueChenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.DifficultyLevelChange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InSave                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InSaveDateValue                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::DifficultyLevelChange(bool InSave, int InSaveDateValue, int* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.DifficultyLevelChange");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_DifficultyLevelChange_Params params;
	params.InSave = InSave;
	params.InSaveDateValue = InSaveDateValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.PlayVoice
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::PlayVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.PlayVoice");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_PlayVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateScreenMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BeforeIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ChangeScreenMode               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::UpdateScreenMode(int BeforeIndex, bool* ChangeScreenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateScreenMode");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdateScreenMode_Params params;
	params.BeforeIndex = BeforeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChangeScreenMode != nullptr)
		*ChangeScreenMode = params.ChangeScreenMode;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateResolution
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BeforIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ChangeResolution               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::UpdateResolution(int BeforIndex, bool* ChangeResolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateResolution");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdateResolution_Params params;
	params.BeforIndex = BeforIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChangeResolution != nullptr)
		*ChangeResolution = params.ChangeResolution;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSaveIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutSaveIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::GetSaveIndex(int* OutSaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSaveIndex");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetSaveIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSaveIndex != nullptr)
		*OutSaveIndex = params.OutSaveIndex;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateChangeCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::UpdateChangeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateChangeCheck");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdateChangeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsBefore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::SetVolume(bool InIsBefore)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetVolume");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetVolume_Params params;
	params.InIsBefore = InIsBefore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetDefaultValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::GetDefaultValue(int* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetDefaultValue");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetDefaultValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.StopTextChangeAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::StopTextChangeAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.StopTextChangeAnime");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_StopTextChangeAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetChoiceList_Resolution
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::GetChoiceList_Resolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetChoiceList_Resolution");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetChoiceList_Resolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetText_ConfigKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsAnim                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::SetText_ConfigKey(int InIndex, bool InIsAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetText_ConfigKey");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetText_ConfigKey_Params params;
	params.InIndex = InIndex;
	params.InIsAnim = InIsAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetIsGrayOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsGrayOut                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::SetIsGrayOut(bool InIsGrayOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetIsGrayOut");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetIsGrayOut_Params params;
	params.InIsGrayOut = InIsGrayOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.CreateParts
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::CreateParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.CreateParts");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_CreateParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSaveDataValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::GetSaveDataValue(int* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSaveDataValue");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetSaveDataValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetComListText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InSelectIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::SetComListText(int InSelectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetComListText");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetComListText_Params params;
	params.InSelectIndex = InSelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetDefaultValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InListShown                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::SetDefaultValue(bool InListShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetDefaultValue");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetDefaultValue_Params params;
	params.InListShown = InListShown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateHiddenCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsHidden                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::UpdateHiddenCheck(bool* OutIsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateHiddenCheck");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdateHiddenCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsHidden != nullptr)
		*OutIsHidden = params.OutIsHidden;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSetting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESetting                       OutSetting                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::GetSetting(ESetting* OutSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSetting");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSetting != nullptr)
		*OutSetting = params.OutSetting;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GageMouseCaptureEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::GageMouseCaptureEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GageMouseCaptureEnd");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_GageMouseCaptureEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GageMouseCaptureBegin
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::GageMouseCaptureBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GageMouseCaptureBegin");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_GageMouseCaptureBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.CursorAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InCursorLAnim                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::CursorAnim(bool InCursorLAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.CursorAnim");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_CursorAnim_Params params;
	params.InCursorLAnim = InCursorLAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetConfigInformation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfigData             OutConfigData                  (Parm, OutParm)
// int                            OutCursorIndex                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::GetConfigInformation(struct FConfigData* OutConfigData, int* OutCursorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetConfigInformation");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetConfigInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConfigData != nullptr)
		*OutConfigData = params.OutConfigData;
	if (OutCursorIndex != nullptr)
		*OutCursorIndex = params.OutCursorIndex;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.MouseStarClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InStarIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::MouseStarClicked(int InStarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.MouseStarClicked");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_MouseStarClicked_Params params;
	params.InStarIndex = InStarIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.MouseCursorClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsCursorL                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::MouseCursorClicked(bool InIsCursorL)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.MouseCursorClicked");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_MouseCursorClicked_Params params;
	params.InIsCursorL = InIsCursorL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdatePad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InPadProsess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::UpdatePad(class AMenuPadProcess* InPadProsess, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdatePad");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdatePad_Params params;
	params.InPadProsess = InPadProsess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateCursorUI
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::UpdateCursorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateCursorUI");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdateCursorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetChoiceList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::GetChoiceList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetChoiceList");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetChoiceList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSaveData
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::GetSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSaveData");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.DeselectedAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::DeselectedAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.DeselectedAnim");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_DeselectedAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SelectAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::SelectAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SelectAnim");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_SelectAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfigData             InConfigData                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InSaveDateValue                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::SetData(const struct FConfigData& InConfigData, int InUniqueID, int InSaveDateValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetData");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetData_Params params;
	params.InConfigData = InConfigData;
	params.InUniqueID = InUniqueID;
	params.InSaveDateValue = InSaveDateValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsSelect                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::SetSelect(bool InIsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetSelect");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetSelect_Params params;
	params.InIsSelect = InIsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_5_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_5_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_5_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_5_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouseHovered
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::OnMouseHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouseHovered");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_OnMouseHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Hovered_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::BndEvt__Hovered_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Hovered_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Hovered_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Com_ClickableArea_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::BndEvt__Com_ClickableArea_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Com_ClickableArea_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Com_ClickableArea_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GROUP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GROUP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GROUP");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GROUP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnChangeCheck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::OnChangeCheck__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnChangeCheck__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_OnChangeCheck__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouse_Change_Cliked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESetting                       InSetting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::OnMouse_Change_Cliked__DelegateSignature(ESetting InSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouse_Change_Cliked__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_OnMouse_Change_Cliked__DelegateSignature_Params params;
	params.InSetting = InSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouse_CursorR_Cliked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESetting                       InSetting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::OnMouse_CursorR_Cliked__DelegateSignature(ESetting InSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouse_CursorR_Cliked__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_OnMouse_CursorR_Cliked__DelegateSignature_Params params;
	params.InSetting = InSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouse_CursorL_Cliked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESetting                       InSetting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_C::OnMouse_CursorL_Cliked__DelegateSignature(ESetting InSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouse_CursorL_Cliked__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_C_OnMouse_CursorL_Cliked__DelegateSignature_Params params;
	params.InSetting = InSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
