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

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.Refresh
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.SetBlackDarkness
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_SetBlackDarkness_Params
{
	float                                              Darkness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.PlayAnimNextStayChara
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_PlayAnimNextStayChara_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.PlayAnimNextHideChara
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_PlayAnimNextHideChara_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.PlayAnimNextDefault
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_PlayAnimNextDefault_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.PlayAnimCloseNoChara
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_PlayAnimCloseNoChara_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.PlayAnimOpenNoChara
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_PlayAnimOpenNoChara_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.PlayAnimBlackOut
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_PlayAnimBlackOut_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.PlayAnimBlackIn
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_PlayAnimBlackIn_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.PlayAnimComeback
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_PlayAnimComeback_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.PlayAnimNext
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_PlayAnimNext_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.IsNext
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_IsNext_Params
{
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.IsClose
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_IsClose_Params
{
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.Terminate
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_Terminate_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.UserConstructionScript
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_UserConstructionScript_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.OnChangeTopBG
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_OnChangeTopBG_Params
{
	bool                                               bNext;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OldShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMenuTopCharaType                                  OldCharaType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMenuTopCharaType                                  NewCharaType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BackDarkness;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.OnShowTopBG
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_OnShowTopBG_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMenuTopCharaType                                  ShowCharaType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BackDarkness;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.OnAnimClose
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_OnAnimClose_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.OnAnimOpen
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_OnAnimOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.ReceiveBeginPlay
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_ReceiveBeginPlay_Params
{
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.ReceiveEndPlay
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.ReceiveTick
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor.TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor
struct ATO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_3D_TOP2_BACK_Actor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
