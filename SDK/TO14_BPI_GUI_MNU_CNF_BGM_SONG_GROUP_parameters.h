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

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.RefreshCheck
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_RefreshCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ShowClickableArea
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_ShowClickableArea_Params
{
	bool                                               InIsSelect;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.GetIsPlayback
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_GetIsPlayback_Params
{
	bool                                               OutIsPlayback;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.GetBGMSortID
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_GetBGMSortID_Params
{
	int                                                OutBGMID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ShowPlayback
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_ShowPlayback_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SwitcPlayback
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_SwitcPlayback_Params
{
	bool                                               InIsSE;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsPlay;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ShowCheck
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_ShowCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SwitcCheck
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_SwitcCheck_Params
{
	bool                                               InIsSE;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.DeselectedAnim
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_DeselectedAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SelectAnim
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_SelectAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.GetGameTitleSort
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_GetGameTitleSort_Params
{
	int                                                OutGameTitleSort;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.SetData
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_SetData_Params
{
	struct FConfigBgmData                              InBgmData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__BGM_NAME_ClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__Playback_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_4_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_BndEvt__Check_ClickableArea_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.OnChangeCheck__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_OnChangeCheck__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.MouseClickedBGMName__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_MouseClickedBGMName__DelegateSignature_Params
{
	int                                                InUniqueID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.MouseClickedPlayback__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_MouseClickedPlayback__DelegateSignature_Params
{
	int                                                InUniqueID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP.TO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C.MouseClickedCheck__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_BGM_SONG_GROUP_C_MouseClickedCheck__DelegateSignature_Params
{
	int                                                InUniqueID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
