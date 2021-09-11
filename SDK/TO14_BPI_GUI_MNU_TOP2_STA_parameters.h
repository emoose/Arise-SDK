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

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.Activate
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_Activate_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.BindOnRequestMovePFFlag
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_BindOnRequestMovePFFlag_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.RequestMovePFFlag
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_RequestMovePFFlag_Params
{
	int                                                PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.Refresh
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.HealPreview
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_HealPreview_Params
{
	TMap<EArisePartyID, int>                           HealHP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.IsSetuped
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_IsSetuped_Params
{
	bool                                               bSetuped;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.MovePFFlag
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_MovePFFlag_Params
{
	int                                                Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChanged;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CharacterID;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.UpdateHP
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_UpdateHP_Params
{
	TMap<EArisePartyID, int>                           HealHPMap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.PlayAnimClose
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_PlayAnimClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.PlayAnimOpen
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_PlayAnimOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.SetPartyTopFlag
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_SetPartyTopFlag_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.Setup
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_Setup_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnSetup
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_OnSetup_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnViewClose
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_OnViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_STA
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_STA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP2_STA.TO14_BPI_GUI_MNU_TOP2_STA_C.OnRequestMovePFFlag__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP2_STA_C_OnRequestMovePFFlag__DelegateSignature_Params
{
	int                                                Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
