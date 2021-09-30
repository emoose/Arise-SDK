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

// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.EventOnClose
struct UBPI_BTL_LAYOUT_STRIKE_ROOT_C_EventOnClose_Params
{
};

// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.UnBindEvent
struct UBPI_BTL_LAYOUT_STRIKE_ROOT_C_UnBindEvent_Params
{
};

// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.BindEvent
struct UBPI_BTL_LAYOUT_STRIKE_ROOT_C_BindEvent_Params
{
};

// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.OnPreOpen
struct UBPI_BTL_LAYOUT_STRIKE_ROOT_C_OnPreOpen_Params
{
};

// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.OnChangePreset
struct UBPI_BTL_LAYOUT_STRIKE_ROOT_C_OnChangePreset_Params
{
	struct FName                                       Preset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.ExecuteUbergraph_BPI_BTL_LAYOUT_STRIKE_ROOT
struct UBPI_BTL_LAYOUT_STRIKE_ROOT_C_ExecuteUbergraph_BPI_BTL_LAYOUT_STRIKE_ROOT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
