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

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ChangeResolutionList
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_ChangeResolutionList_Params
{
	int                                                ScreenMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ChangeScreenModeWindow
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_ChangeScreenModeWindow_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ChangeNativeResolution
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_ChangeNativeResolution_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GageValueChenge
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_GageValueChenge_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.DifficultyLevelChange
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_DifficultyLevelChange_Params
{
	bool                                               InSave;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSaveDateValue;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.PlayVoice
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_PlayVoice_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateScreenMode
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdateScreenMode_Params
{
	int                                                BeforeIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChangeScreenMode;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateResolution
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdateResolution_Params
{
	int                                                BeforIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChangeResolution;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSaveIndex
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetSaveIndex_Params
{
	int                                                OutSaveIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateChangeCheck
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdateChangeCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetVolume
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetVolume_Params
{
	bool                                               InIsBefore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetDefaultValue
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetDefaultValue_Params
{
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.StopTextChangeAnime
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_StopTextChangeAnime_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetChoiceList_Resolution
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetChoiceList_Resolution_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetText_ConfigKey
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetText_ConfigKey_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsAnim;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetIsGrayOut
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetIsGrayOut_Params
{
	bool                                               InIsGrayOut;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.CreateParts
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_CreateParts_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSaveDataValue
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetSaveDataValue_Params
{
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetComListText
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetComListText_Params
{
	int                                                InSelectIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetDefaultValue
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetDefaultValue_Params
{
	bool                                               InListShown;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateHiddenCheck
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdateHiddenCheck_Params
{
	bool                                               OutIsHidden;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSetting
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetSetting_Params
{
	ESetting                                           OutSetting;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GageMouseCaptureEnd
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_GageMouseCaptureEnd_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GageMouseCaptureBegin
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_GageMouseCaptureBegin_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.CursorAnim
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_CursorAnim_Params
{
	bool                                               InCursorLAnim;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetConfigInformation
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetConfigInformation_Params
{
	struct FConfigData                                 OutConfigData;                                            // (Parm, OutParm)
	int                                                OutCursorIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.MouseStarClicked
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_MouseStarClicked_Params
{
	int                                                InStarIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.MouseCursorClicked
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_MouseCursorClicked_Params
{
	bool                                               InIsCursorL;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdatePad
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdatePad_Params
{
	class AMenuPadProcess*                             InPadProsess;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.UpdateCursorUI
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_UpdateCursorUI_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetChoiceList
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetChoiceList_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.GetSaveData
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_GetSaveData_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.DeselectedAnim
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_DeselectedAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SelectAnim
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_SelectAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetData
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetData_Params
{
	struct FConfigData                                 InConfigData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                InUniqueID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSaveDateValue;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.SetSelect
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_SetSelect_Params
{
	bool                                               InIsSelect;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Title_Name_ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Cursor_L_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_5_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Cursor_R_ClickableArea_K2Node_ComponentBoundEvent_5_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouseHovered
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_OnMouseHovered_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Hovered_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Hovered_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.BndEvt__Com_ClickableArea_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_BndEvt__Com_ClickableArea_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GROUP
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_GROUP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnChangeCheck__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_OnChangeCheck__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouse_Change_Cliked__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_OnMouse_Change_Cliked__DelegateSignature_Params
{
	ESetting                                           InSetting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouse_CursorR_Cliked__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_OnMouse_CursorR_Cliked__DelegateSignature_Params
{
	ESetting                                           InSetting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_GROUP.TO14_BPI_GUI_MNU_CNF_GROUP_C.OnMouse_CursorL_Cliked__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_GROUP_C_OnMouse_CursorL_Cliked__DelegateSignature_Params
{
	ESetting                                           InSetting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
