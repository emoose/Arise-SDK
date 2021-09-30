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

// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.SetStrikeMode
struct UTO14_BPI_GUI_ICN_DPAD_C_SetStrikeMode_Params
{
	bool                                               bNewIsStrikeMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.SetFilterStrikeButtonIcon
struct UTO14_BPI_GUI_ICN_DPAD_C_SetFilterStrikeButtonIcon_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.OnChangeInputDevice
struct UTO14_BPI_GUI_ICN_DPAD_C_OnChangeInputDevice_Params
{
	int                                                DeviceType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.BindRestructEvent
struct UTO14_BPI_GUI_ICN_DPAD_C_BindRestructEvent_Params
{
};

// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.UnbindRestructEvent
struct UTO14_BPI_GUI_ICN_DPAD_C_UnbindRestructEvent_Params
{
};

// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.Initialize
struct UTO14_BPI_GUI_ICN_DPAD_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.Construct
struct UTO14_BPI_GUI_ICN_DPAD_C_Construct_Params
{
};

// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.PreConstruct
struct UTO14_BPI_GUI_ICN_DPAD_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.ApplyVisualStrike
struct UTO14_BPI_GUI_ICN_DPAD_C_ApplyVisualStrike_Params
{
};

// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_DPAD
struct UTO14_BPI_GUI_ICN_DPAD_C_ExecuteUbergraph_TO14_BPI_GUI_ICN_DPAD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
