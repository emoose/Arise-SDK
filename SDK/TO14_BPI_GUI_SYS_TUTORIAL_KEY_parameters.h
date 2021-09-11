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

// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.getIsShow
struct UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_getIsShow_Params
{
	bool                                               OutIsShow;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Refresh
struct UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Construct
struct UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Tick
struct UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Show
struct UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_Show_Params
{
	TEnumAsByte<EKeyHelpMode>                          Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.Hide
struct UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_Hide_Params
{
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.SetMode
struct UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_SetMode_Params
{
	TEnumAsByte<EKeyHelpMode>                          Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.OnAnimationEnd
struct UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_OnAnimationEnd_Params
{
};

// Function TO14_BPI_GUI_SYS_TUTORIAL_KEY.TO14_BPI_GUI_SYS_TUTORIAL_KEY_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_KEY
struct UTO14_BPI_GUI_SYS_TUTORIAL_KEY_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TUTORIAL_KEY_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
