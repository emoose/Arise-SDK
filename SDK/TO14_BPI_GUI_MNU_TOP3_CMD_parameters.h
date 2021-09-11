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

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.ResizeOverlay
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_ResizeOverlay_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.Activate
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_Activate_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.GetSelectMenuID
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_GetSelectMenuID_Params
{
	struct FString                                     MenuID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.BindClosedEvent
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_BindClosedEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PlayAnimClose
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_PlayAnimClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.BindDecideEvent
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_BindDecideEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PlayAnimOpen
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_PlayAnimOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PadWork
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_PadWork_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.Initialize
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimOpen
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_OnAnimOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimOpenFinished
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_OnAnimOpenFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimClose
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_OnAnimClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimCloseFinished
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_OnAnimCloseFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PreConstruct
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.Construct
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_CMD
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_CMD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnClosedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP3_CMD_C_OnClosedEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
