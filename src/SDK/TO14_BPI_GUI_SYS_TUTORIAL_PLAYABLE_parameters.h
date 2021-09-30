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

// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.ShowButton
struct UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_ShowButton_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CachedLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.getIsShow
struct UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_getIsShow_Params
{
	bool                                               OutIsShow;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Refresh
struct UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.SetHelpString
struct UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_SetHelpString_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Explanation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.OnAnimationEnd
struct UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_OnAnimationEnd_Params
{
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.OnAnimationStart
struct UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_OnAnimationStart_Params
{
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Hide
struct UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_Hide_Params
{
	bool                                               IsCloseAnima;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Show
struct UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_Show_Params
{
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.Construct
struct UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE.TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE
struct UTO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_PLAYABLE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
