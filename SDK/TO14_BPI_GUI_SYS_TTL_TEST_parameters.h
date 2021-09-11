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

// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.Restart
struct UTO14_BPI_GUI_SYS_TTL_TEST_C_Restart_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.MenuInput
struct UTO14_BPI_GUI_SYS_TTL_TEST_C_MenuInput_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.ChangeSelectedMenu
struct UTO14_BPI_GUI_SYS_TTL_TEST_C_ChangeSelectedMenu_Params
{
	int                                                NewMenuID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.CheckKeyDown
struct UTO14_BPI_GUI_SYS_TTL_TEST_C_CheckKeyDown_Params
{
	bool                                               IsPush;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.CheckAnyKeyDown
struct UTO14_BPI_GUI_SYS_TTL_TEST_C_CheckAnyKeyDown_Params
{
	struct FKey                                        InputKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsPressed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.OnKeyDown
struct UTO14_BPI_GUI_SYS_TTL_TEST_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.Tick
struct UTO14_BPI_GUI_SYS_TTL_TEST_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.Construct
struct UTO14_BPI_GUI_SYS_TTL_TEST_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.OnAnimationFinished
struct UTO14_BPI_GUI_SYS_TTL_TEST_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_TEST.TO14_BPI_GUI_SYS_TTL_TEST_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_TEST
struct UTO14_BPI_GUI_SYS_TTL_TEST_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_TEST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
