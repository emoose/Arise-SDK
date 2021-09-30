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

// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnPreOpen
struct UBPI_BTL_LAYOUT_ROOT_2_C_OnPreOpen_Params
{
};

// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.EventOnClose
struct UBPI_BTL_LAYOUT_ROOT_2_C_EventOnClose_Params
{
};

// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.UnBindEvent
struct UBPI_BTL_LAYOUT_ROOT_2_C_UnBindEvent_Params
{
};

// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.BindEvent
struct UBPI_BTL_LAYOUT_ROOT_2_C_BindEvent_Params
{
};

// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnBattleShortChat
struct UBPI_BTL_LAYOUT_ROOT_2_C_OnBattleShortChat_Params
{
	class UMessageData*                                MessageData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideIconName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnCloseBattleShortChat
struct UBPI_BTL_LAYOUT_ROOT_2_C_OnCloseBattleShortChat_Params
{
};

// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnAbortShortChat
struct UBPI_BTL_LAYOUT_ROOT_2_C_OnAbortShortChat_Params
{
};

// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnChangePreset
struct UBPI_BTL_LAYOUT_ROOT_2_C_OnChangePreset_Params
{
	struct FName                                       Preset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.ExecuteUbergraph_BPI_BTL_LAYOUT_ROOT_3
struct UBPI_BTL_LAYOUT_ROOT_2_C_ExecuteUbergraph_BPI_BTL_LAYOUT_ROOT_3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
