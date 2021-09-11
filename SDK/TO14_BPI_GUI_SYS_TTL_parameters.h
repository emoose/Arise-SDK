#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsTerminate
struct UTO14_BPI_GUI_SYS_TTL_C_IsTerminate_Params
{
	bool                                               bIsTerminate;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsAcceptInput
struct UTO14_BPI_GUI_SYS_TTL_C_IsAcceptInput_Params
{
	bool                                               OutIsInput;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsMovieEnd
struct UTO14_BPI_GUI_SYS_TTL_C_IsMovieEnd_Params
{
	bool                                               OutEnd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsSkipe;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutOffPause;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SetGSCTitleIsMoviePay
struct UTO14_BPI_GUI_SYS_TTL_C_SetGSCTitleIsMoviePay_Params
{
	bool                                               InIsMoviePlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_CEBankRequestTss
struct UTO14_BPI_GUI_SYS_TTL_C_Update_CEBankRequestTss_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ScenarioMovieCheck
struct UTO14_BPI_GUI_SYS_TTL_C_ScenarioMovieCheck_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_LanguageDialog
struct UTO14_BPI_GUI_SYS_TTL_C_Update_LanguageDialog_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.DestroyInputProcess
struct UTO14_BPI_GUI_SYS_TTL_C_DestroyInputProcess_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_SwapLogin
struct UTO14_BPI_GUI_SYS_TTL_C_Update_SwapLogin_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SwapLoginUICheck
struct UTO14_BPI_GUI_SYS_TTL_C_SwapLoginUICheck_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ChengSwordUI
struct UTO14_BPI_GUI_SYS_TTL_C_ChengSwordUI_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectClose
struct UTO14_BPI_GUI_SYS_TTL_C_SelectClose_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectOpen
struct UTO14_BPI_GUI_SYS_TTL_C_SelectOpen_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelectClose
struct UTO14_BPI_GUI_SYS_TTL_C_Update_TitleSelectClose_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelectOpen
struct UTO14_BPI_GUI_SYS_TTL_C_Update_TitleSelectOpen_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitlePressBtnCloseWait
struct UTO14_BPI_GUI_SYS_TTL_C_Update_TitlePressBtnCloseWait_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PlayPressBtnCloseplayAnima
struct UTO14_BPI_GUI_SYS_TTL_C_PlayPressBtnCloseplayAnima_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_AgreementCheck
struct UTO14_BPI_GUI_SYS_TTL_C_Update_AgreementCheck_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CB_LicenseSelect
struct UTO14_BPI_GUI_SYS_TTL_C_CB_LicenseSelect_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CloseLicense
struct UTO14_BPI_GUI_SYS_TTL_C_CloseLicense_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OpenLicense
struct UTO14_BPI_GUI_SYS_TTL_C_OpenLicense_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_License
struct UTO14_BPI_GUI_SYS_TTL_C_Update_License_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsFadeAnime
struct UTO14_BPI_GUI_SYS_TTL_C_IsFadeAnime_Params
{
	bool                                               OutIsPlay;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.StartFadeAnime
struct UTO14_BPI_GUI_SYS_TTL_C_StartFadeAnime_Params
{
	bool                                               InFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieSkipFadeInWait
struct UTO14_BPI_GUI_SYS_TTL_C_Update_OPMovieSkipFadeInWait_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ChengeBackUI
struct UTO14_BPI_GUI_SYS_TTL_C_ChengeBackUI_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.GetGSCTitle
struct UTO14_BPI_GUI_SYS_TTL_C_GetGSCTitle_Params
{
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBP_GSC_Title_C*                             OutGSCTitle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OpenQuitGameDialog
struct UTO14_BPI_GUI_SYS_TTL_C_OpenQuitGameDialog_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OpenLangSelectDialog
struct UTO14_BPI_GUI_SYS_TTL_C_OpenLangSelectDialog_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MoveCheck
struct UTO14_BPI_GUI_SYS_TTL_C_MoveCheck_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SaveDataCheck
struct UTO14_BPI_GUI_SYS_TTL_C_SaveDataCheck_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleStartState
struct UTO14_BPI_GUI_SYS_TTL_C_Update_TitleStartState_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SetMouseHold
struct UTO14_BPI_GUI_SYS_TTL_C_SetMouseHold_Params
{
	bool                                               InIsHold;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ChangDemoMove
struct UTO14_BPI_GUI_SYS_TTL_C_ChangDemoMove_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.StopBGM
struct UTO14_BPI_GUI_SYS_TTL_C_StopBGM_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PlayBGM
struct UTO14_BPI_GUI_SYS_TTL_C_PlayBGM_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_PadParam
struct UTO14_BPI_GUI_SYS_TTL_C_Initialize_PadParam_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.IsAnyButtonPressedCheck
struct UTO14_BPI_GUI_SYS_TTL_C_IsAnyButtonPressedCheck_Params
{
	bool                                               IsPrees;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SetState
struct UTO14_BPI_GUI_SYS_TTL_C_SetState_Params
{
	TEnumAsByte<ETTL_StateEnum>                        InState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MovieRefreshStop
struct UTO14_BPI_GUI_SYS_TTL_C_MovieRefreshStop_Params
{
	class UMovieWidget_C*                              InMovieWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MoviePlayCheck
struct UTO14_BPI_GUI_SYS_TTL_C_MoviePlayCheck_Params
{
	class UMovieWidget_C*                              InMovieWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.MovieRefreshPlay
struct UTO14_BPI_GUI_SYS_TTL_C_MovieRefreshPlay_Params
{
	class UMovieWidget_C*                              InMovieWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PadInputTimeCheck
struct UTO14_BPI_GUI_SYS_TTL_C_PadInputTimeCheck_Params
{
	float                                              InTimelimit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsResult;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieSkip
struct UTO14_BPI_GUI_SYS_TTL_C_Update_OPMovieSkip_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieWait
struct UTO14_BPI_GUI_SYS_TTL_C_Update_OPMovieWait_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_OPMovieStart
struct UTO14_BPI_GUI_SYS_TTL_C_Update_OPMovieStart_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.TitleSelectCheck
struct UTO14_BPI_GUI_SYS_TTL_C_TitleSelectCheck_Params
{
	int                                                InBtnIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_BtnEvent
struct UTO14_BPI_GUI_SYS_TTL_C_Initialize_BtnEvent_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CB_MouseEnter
struct UTO14_BPI_GUI_SYS_TTL_C_CB_MouseEnter_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.CB_MouseSelect
struct UTO14_BPI_GUI_SYS_TTL_C_CB_MouseSelect_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectBtnVisibility
struct UTO14_BPI_GUI_SYS_TTL_C_SelectBtnVisibility_Params
{
	bool                                               IsSelectState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.SelectRestart
struct UTO14_BPI_GUI_SYS_TTL_C_SelectRestart_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.RefreshSelectMenu
struct UTO14_BPI_GUI_SYS_TTL_C_RefreshSelectMenu_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.StartDisplay
struct UTO14_BPI_GUI_SYS_TTL_C_StartDisplay_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TimeMovieWait
struct UTO14_BPI_GUI_SYS_TTL_C_Update_TimeMovieWait_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TimeMovieStart
struct UTO14_BPI_GUI_SYS_TTL_C_Update_TimeMovieStart_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelectNextWait
struct UTO14_BPI_GUI_SYS_TTL_C_Update_TitleSelectNextWait_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitleSelect
struct UTO14_BPI_GUI_SYS_TTL_C_Update_TitleSelect_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_TitlePressBtn
struct UTO14_BPI_GUI_SYS_TTL_C_Update_TitlePressBtn_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_LoadWait
struct UTO14_BPI_GUI_SYS_TTL_C_Update_LoadWait_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.NextState
struct UTO14_BPI_GUI_SYS_TTL_C_NextState_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_LoadStart
struct UTO14_BPI_GUI_SYS_TTL_C_Update_LoadStart_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Update_State
struct UTO14_BPI_GUI_SYS_TTL_C_Update_State_Params
{
	bool                                               InIsInputPad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_Param
struct UTO14_BPI_GUI_SYS_TTL_C_Initialize_Param_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize_Btn
struct UTO14_BPI_GUI_SYS_TTL_C_Initialize_Btn_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Initialize
struct UTO14_BPI_GUI_SYS_TTL_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Tick
struct UTO14_BPI_GUI_SYS_TTL_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Destruct
struct UTO14_BPI_GUI_SYS_TTL_C_Destruct_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.Construct
struct UTO14_BPI_GUI_SYS_TTL_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.UpdateTick
struct UTO14_BPI_GUI_SYS_TTL_C_UpdateTick_Params
{
	float                                              TickData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.PreConstruct
struct UTO14_BPI_GUI_SYS_TTL_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OnLicenseOpen
struct UTO14_BPI_GUI_SYS_TTL_C_OnLicenseOpen_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.OnLicenseClose
struct UTO14_BPI_GUI_SYS_TTL_C_OnLicenseClose_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.EventTerminate
struct UTO14_BPI_GUI_SYS_TTL_C_EventTerminate_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL.TO14_BPI_GUI_SYS_TTL_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL
struct UTO14_BPI_GUI_SYS_TTL_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
