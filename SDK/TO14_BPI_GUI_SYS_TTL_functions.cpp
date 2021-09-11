
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

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsTerminate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsTerminate                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::IsTerminate(bool* bIsTerminate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsTerminate");

	UTO14_BPI_GUI_SYS_TTL_C_IsTerminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTerminate != nullptr)
		*bIsTerminate = params.bIsTerminate;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsAcceptInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsInput                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::IsAcceptInput(bool* OutIsInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsAcceptInput");

	UTO14_BPI_GUI_SYS_TTL_C_IsAcceptInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsInput != nullptr)
		*OutIsInput = params.OutIsInput;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsMovieEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutEnd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsSkipe                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutOffPause                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::IsMovieEnd(bool* OutEnd, bool* OutIsSkipe, bool* OutOffPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsMovieEnd");

	UTO14_BPI_GUI_SYS_TTL_C_IsMovieEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEnd != nullptr)
		*OutEnd = params.OutEnd;
	if (OutIsSkipe != nullptr)
		*OutIsSkipe = params.OutIsSkipe;
	if (OutOffPause != nullptr)
		*OutOffPause = params.OutOffPause;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SetGSCTitleIsMoviePay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsMoviePlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::SetGSCTitleIsMoviePay(bool InIsMoviePlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SetGSCTitleIsMoviePay");

	UTO14_BPI_GUI_SYS_TTL_C_SetGSCTitleIsMoviePay_Params params;
	params.InIsMoviePlay = InIsMoviePlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_CEBankRequestTss
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_CEBankRequestTss()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_CEBankRequestTss");

	UTO14_BPI_GUI_SYS_TTL_C_Update_CEBankRequestTss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ScenarioMovieCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::ScenarioMovieCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ScenarioMovieCheck");

	UTO14_BPI_GUI_SYS_TTL_C_ScenarioMovieCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_LanguageDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_LanguageDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_LanguageDialog");

	UTO14_BPI_GUI_SYS_TTL_C_Update_LanguageDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.DestroyInputProcess
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::DestroyInputProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.DestroyInputProcess");

	UTO14_BPI_GUI_SYS_TTL_C_DestroyInputProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_SwapLogin
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_SwapLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_SwapLogin");

	UTO14_BPI_GUI_SYS_TTL_C_Update_SwapLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SwapLoginUICheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::SwapLoginUICheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SwapLoginUICheck");

	UTO14_BPI_GUI_SYS_TTL_C_SwapLoginUICheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ChengSwordUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::ChengSwordUI(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ChengSwordUI");

	UTO14_BPI_GUI_SYS_TTL_C_ChengSwordUI_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectClose
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::SelectClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectClose");

	UTO14_BPI_GUI_SYS_TTL_C_SelectClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::SelectOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectOpen");

	UTO14_BPI_GUI_SYS_TTL_C_SelectOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelectClose
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_TitleSelectClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelectClose");

	UTO14_BPI_GUI_SYS_TTL_C_Update_TitleSelectClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelectOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_TitleSelectOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelectOpen");

	UTO14_BPI_GUI_SYS_TTL_C_Update_TitleSelectOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitlePressBtnCloseWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_TitlePressBtnCloseWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitlePressBtnCloseWait");

	UTO14_BPI_GUI_SYS_TTL_C_Update_TitlePressBtnCloseWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PlayPressBtnCloseplayAnima
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::PlayPressBtnCloseplayAnima()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PlayPressBtnCloseplayAnima");

	UTO14_BPI_GUI_SYS_TTL_C_PlayPressBtnCloseplayAnima_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_AgreementCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_AgreementCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_AgreementCheck");

	UTO14_BPI_GUI_SYS_TTL_C_Update_AgreementCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CB_LicenseSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::CB_LicenseSelect(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CB_LicenseSelect");

	UTO14_BPI_GUI_SYS_TTL_C_CB_LicenseSelect_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CloseLicense
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::CloseLicense()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CloseLicense");

	UTO14_BPI_GUI_SYS_TTL_C_CloseLicense_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OpenLicense
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::OpenLicense()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OpenLicense");

	UTO14_BPI_GUI_SYS_TTL_C_OpenLicense_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_License
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_License()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_License");

	UTO14_BPI_GUI_SYS_TTL_C_Update_License_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsFadeAnime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsPlay                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::IsFadeAnime(bool* OutIsPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsFadeAnime");

	UTO14_BPI_GUI_SYS_TTL_C_IsFadeAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsPlay != nullptr)
		*OutIsPlay = params.OutIsPlay;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.StartFadeAnime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InFadeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::StartFadeAnime(bool InFadeIn, float InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.StartFadeAnime");

	UTO14_BPI_GUI_SYS_TTL_C_StartFadeAnime_Params params;
	params.InFadeIn = InFadeIn;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieSkipFadeInWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_OPMovieSkipFadeInWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieSkipFadeInWait");

	UTO14_BPI_GUI_SYS_TTL_C_Update_OPMovieSkipFadeInWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ChengeBackUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::ChengeBackUI(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ChengeBackUI");

	UTO14_BPI_GUI_SYS_TTL_C_ChengeBackUI_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.GetGSCTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBP_GSC_Title_C*         OutGSCTitle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::GetGSCTitle(bool* OutResult, class UBP_GSC_Title_C** OutGSCTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.GetGSCTitle");

	UTO14_BPI_GUI_SYS_TTL_C_GetGSCTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
	if (OutGSCTitle != nullptr)
		*OutGSCTitle = params.OutGSCTitle;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OpenQuitGameDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::OpenQuitGameDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OpenQuitGameDialog");

	UTO14_BPI_GUI_SYS_TTL_C_OpenQuitGameDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OpenLangSelectDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::OpenLangSelectDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OpenLangSelectDialog");

	UTO14_BPI_GUI_SYS_TTL_C_OpenLangSelectDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MoveCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::MoveCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MoveCheck");

	UTO14_BPI_GUI_SYS_TTL_C_MoveCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SaveDataCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::SaveDataCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SaveDataCheck");

	UTO14_BPI_GUI_SYS_TTL_C_SaveDataCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleStartState
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_TitleStartState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleStartState");

	UTO14_BPI_GUI_SYS_TTL_C_Update_TitleStartState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SetMouseHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsHold                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::SetMouseHold(bool InIsHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SetMouseHold");

	UTO14_BPI_GUI_SYS_TTL_C_SetMouseHold_Params params;
	params.InIsHold = InIsHold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ChangDemoMove
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::ChangDemoMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ChangDemoMove");

	UTO14_BPI_GUI_SYS_TTL_C_ChangDemoMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.StopBGM
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::StopBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.StopBGM");

	UTO14_BPI_GUI_SYS_TTL_C_StopBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PlayBGM
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::PlayBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PlayBGM");

	UTO14_BPI_GUI_SYS_TTL_C_PlayBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_PadParam
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Initialize_PadParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_PadParam");

	UTO14_BPI_GUI_SYS_TTL_C_Initialize_PadParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsAnyButtonPressedCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPrees                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::IsAnyButtonPressedCheck(bool* IsPrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsAnyButtonPressedCheck");

	UTO14_BPI_GUI_SYS_TTL_C_IsAnyButtonPressedCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPrees != nullptr)
		*IsPrees = params.IsPrees;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETTL_StateEnum>    InState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::SetState(TEnumAsByte<ETTL_StateEnum> InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SetState");

	UTO14_BPI_GUI_SYS_TTL_C_SetState_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MovieRefreshStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMovieWidget_C*          InMovieWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::MovieRefreshStop(class UMovieWidget_C* InMovieWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MovieRefreshStop");

	UTO14_BPI_GUI_SYS_TTL_C_MovieRefreshStop_Params params;
	params.InMovieWidget = InMovieWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MoviePlayCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMovieWidget_C*          InMovieWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::MoviePlayCheck(class UMovieWidget_C* InMovieWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MoviePlayCheck");

	UTO14_BPI_GUI_SYS_TTL_C_MoviePlayCheck_Params params;
	params.InMovieWidget = InMovieWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MovieRefreshPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMovieWidget_C*          InMovieWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::MovieRefreshPlay(class UMovieWidget_C* InMovieWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MovieRefreshPlay");

	UTO14_BPI_GUI_SYS_TTL_C_MovieRefreshPlay_Params params;
	params.InMovieWidget = InMovieWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PadInputTimeCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InTimelimit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsResult                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::PadInputTimeCheck(float InTimelimit, bool* IsResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PadInputTimeCheck");

	UTO14_BPI_GUI_SYS_TTL_C_PadInputTimeCheck_Params params;
	params.InTimelimit = InTimelimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsResult != nullptr)
		*IsResult = params.IsResult;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieSkip
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_OPMovieSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieSkip");

	UTO14_BPI_GUI_SYS_TTL_C_Update_OPMovieSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_OPMovieWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieWait");

	UTO14_BPI_GUI_SYS_TTL_C_Update_OPMovieWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieStart
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_OPMovieStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieStart");

	UTO14_BPI_GUI_SYS_TTL_C_Update_OPMovieStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.TitleSelectCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InBtnIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsResult                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::TitleSelectCheck(int InBtnIndex, bool* OutIsResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.TitleSelectCheck");

	UTO14_BPI_GUI_SYS_TTL_C_TitleSelectCheck_Params params;
	params.InBtnIndex = InBtnIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsResult != nullptr)
		*OutIsResult = params.OutIsResult;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_BtnEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Initialize_BtnEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_BtnEvent");

	UTO14_BPI_GUI_SYS_TTL_C_Initialize_BtnEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::CB_MouseEnter(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CB_MouseEnter");

	UTO14_BPI_GUI_SYS_TTL_C_CB_MouseEnter_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CB_MouseSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::CB_MouseSelect(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CB_MouseSelect");

	UTO14_BPI_GUI_SYS_TTL_C_CB_MouseSelect_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectBtnVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelectState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::SelectBtnVisibility(bool IsSelectState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectBtnVisibility");

	UTO14_BPI_GUI_SYS_TTL_C_SelectBtnVisibility_Params params;
	params.IsSelectState = IsSelectState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectRestart
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::SelectRestart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectRestart");

	UTO14_BPI_GUI_SYS_TTL_C_SelectRestart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.RefreshSelectMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::RefreshSelectMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.RefreshSelectMenu");

	UTO14_BPI_GUI_SYS_TTL_C_RefreshSelectMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.StartDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::StartDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.StartDisplay");

	UTO14_BPI_GUI_SYS_TTL_C_StartDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TimeMovieWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_TimeMovieWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TimeMovieWait");

	UTO14_BPI_GUI_SYS_TTL_C_Update_TimeMovieWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TimeMovieStart
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_TimeMovieStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TimeMovieStart");

	UTO14_BPI_GUI_SYS_TTL_C_Update_TimeMovieStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelectNextWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_TitleSelectNextWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelectNextWait");

	UTO14_BPI_GUI_SYS_TTL_C_Update_TitleSelectNextWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_TitleSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelect");

	UTO14_BPI_GUI_SYS_TTL_C_Update_TitleSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitlePressBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_TitlePressBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitlePressBtn");

	UTO14_BPI_GUI_SYS_TTL_C_Update_TitlePressBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_LoadWait
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_LoadWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_LoadWait");

	UTO14_BPI_GUI_SYS_TTL_C_Update_LoadWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.NextState
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::NextState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.NextState");

	UTO14_BPI_GUI_SYS_TTL_C_NextState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_LoadStart
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Update_LoadStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_LoadStart");

	UTO14_BPI_GUI_SYS_TTL_C_Update_LoadStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsInputPad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::Update_State(bool InIsInputPad)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_State");

	UTO14_BPI_GUI_SYS_TTL_C_Update_State_Params params;
	params.InIsInputPad = InIsInputPad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_Param
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Initialize_Param()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_Param");

	UTO14_BPI_GUI_SYS_TTL_C_Initialize_Param_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_Btn
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Initialize_Btn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_Btn");

	UTO14_BPI_GUI_SYS_TTL_C_Initialize_Btn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize");

	UTO14_BPI_GUI_SYS_TTL_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Tick");

	UTO14_BPI_GUI_SYS_TTL_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Destruct");

	UTO14_BPI_GUI_SYS_TTL_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Construct");

	UTO14_BPI_GUI_SYS_TTL_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.UpdateTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::UpdateTick(float TickData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.UpdateTick");

	UTO14_BPI_GUI_SYS_TTL_C_UpdateTick_Params params;
	params.TickData = TickData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PreConstruct");

	UTO14_BPI_GUI_SYS_TTL_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OnLicenseOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::OnLicenseOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OnLicenseOpen");

	UTO14_BPI_GUI_SYS_TTL_C_OnLicenseOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OnLicenseClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::OnLicenseClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OnLicenseClose");

	UTO14_BPI_GUI_SYS_TTL_C_OnLicenseClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.EventTerminate
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_TTL_C::EventTerminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.EventTerminate");

	UTO14_BPI_GUI_SYS_TTL_C_EventTerminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_TTL_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL");

	UTO14_BPI_GUI_SYS_TTL_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
