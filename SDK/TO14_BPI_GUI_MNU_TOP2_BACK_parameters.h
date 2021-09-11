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

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.UnloadResidentImage
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_UnloadResidentImage_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.LoadResidentImage
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_LoadResidentImage_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.PreloadImage
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_PreloadImage_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.MoveToBack2D
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_MoveToBack2D_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.Refresh
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.Initialize2
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_Initialize2_Params
{
	bool                                               bDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.RestructByTopData
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_RestructByTopData_Params
{
	bool                                               bDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayPreOpen;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.SetBlackDarkness
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_SetBlackDarkness_Params
{
	float                                              Darkness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.PlayAnimOpenNoChara
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_PlayAnimOpenNoChara_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.PlayAnimNextStayChara
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_PlayAnimNextStayChara_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.PlayAnimNextDefault
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_PlayAnimNextDefault_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.PlayAnimNextHideChara
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_PlayAnimNextHideChara_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.PlayAnimBlackOut
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_PlayAnimBlackOut_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.GetBlackOutAnimation
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_GetBlackOutAnimation_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.GetBlackInAnimation
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_GetBlackInAnimation_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.PlayAnimBlackIn
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_PlayAnimBlackIn_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.BindAnimCloseFinishedEvent
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_BindAnimCloseFinishedEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.Initialize
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_Initialize_Params
{
	TArray<EArisePartyID>                              PartyIDs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.SetSelectCharaID
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_SetSelectCharaID_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.Terminate
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_Terminate_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.Restruct
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_Restruct_Params
{
	TArray<EArisePartyID>                              PartyIDs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.PlayAnimComeback
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_PlayAnimComeback_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.PlayAnimNext
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_PlayAnimNext_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.PlayAnimClose
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_PlayAnimClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.PlayAnimOpen
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_PlayAnimOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnScenarioCounterChanged
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnScenarioCounterChanged_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnAnimOpen
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnAnimOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnAnimClose
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnAnimClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnAnimNext
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnAnimNext_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnAnimComeback
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnAnimComeback_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnAnimBlackIn
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnAnimBlackIn_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnAnimBlackOut
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnAnimBlackOut_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnAnimNextHideChara
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnAnimNextHideChara_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnAnimComebackHideChara
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnAnimComebackHideChara_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnAnimNextStayChara
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnAnimNextStayChara_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnAnimComebackStayChara
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnAnimComebackStayChara_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_BACK
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_BACK_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_BACK.TO14_BPI_GUI_MNU_TOP2_BACK_C.OnAnimCloseFinished__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP2_BACK_C_OnAnimCloseFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
