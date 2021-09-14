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

// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.Refresh
struct UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.GetAnimationStartAtTime
struct UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_GetAnimationStartAtTime_Params
{
	class UWidgetAnimation*                            Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               SkipAnim;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.SetPercent
struct UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_SetPercent_Params
{
	float                                              InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.BindEvent
struct UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_BindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.UnBindEvent
struct UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_UnBindEvent_Params
{
};

// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.OnBeginSpellCast
struct UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_OnBeginSpellCast_Params
{
};

// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.OnChangeSpellCast
struct UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_OnChangeSpellCast_Params
{
	float                                              GaugeRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.OnEndSpellCast
struct UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_OnEndSpellCast_Params
{
};

// Function TO14_BPI_GUI_BTL_PARTY_SPELLCAST.TO14_BPI_GUI_BTL_PARTY_SPELLCAST_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_PARTY_SPELLCAST
struct UTO14_BPI_GUI_BTL_PARTY_SPELLCAST_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_PARTY_SPELLCAST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
