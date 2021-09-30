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

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.GetArtsMovieName
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_GetArtsMovieName_Params
{
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.IsArts
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_IsArts_Params
{
	bool                                               IsArts;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.GetData
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_GetData_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FST_TIT2_SKL_ICON_DATA                      Data;                                                     // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.PlayLearnAnim
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_PlayLearnAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.BindAnimation
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_BindAnimation_Params
{
	class UWidgetAnimation*                            ANIM_DEFAULT_NO_LEARN;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_DEFAULT_LEARNABLE;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_DEFAULT_LEARN;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_DEFAULT_COMPLETE;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_SELECT;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_LEARN;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_COMPLETE;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.Initailize
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_Initailize_Params
{
	EArisePartyID                                      CharaID;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPanelPreLean;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPanelLearn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPanelComplete;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLearnable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLearn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NeedOnSlotIcon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.PlayDeselectAnim
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_PlayDeselectAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.PlaySelectAnim
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_PlaySelectAnim_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.Activate
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_Activate_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.SetVisibilityPAS
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_SetVisibilityPAS_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultNoLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimDefaultNoLearn_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultLearnable
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimDefaultLearnable_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimDefaultLearn_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDefaultComplete
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimDefaultComplete_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimComplete
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimComplete_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimLearn_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimDeselect
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimDeselect_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.OnAnimSelect
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_OnAnimSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_ICON.TO14_BPI_GUI_MNU_TIT2_SKL_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_ICON
struct UTO14_BPI_GUI_MNU_TIT2_SKL_ICON_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_ICON_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
