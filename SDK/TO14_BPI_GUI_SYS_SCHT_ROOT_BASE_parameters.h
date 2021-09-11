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

// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Abort
struct UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Abort_Params
{
};

// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Swap
struct UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Swap_Params
{
	int                                                TextIndexA;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TextIndexB;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Init
struct UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Init_Params
{
};

// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Clear
struct UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Clear_Params
{
};

// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Close
struct UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Close_Params
{
};

// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.PlayShortChat
struct UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_PlayShortChat_Params
{
	EAriseCharaIconID                                  CharaIconID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideIconLabel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.PlayShortChat_MessageData
struct UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_PlayShortChat_MessageData_Params
{
	class UMessageData*                                MessageData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideIconLabel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.Construct
struct UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT_ROOT_BASE
struct UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
