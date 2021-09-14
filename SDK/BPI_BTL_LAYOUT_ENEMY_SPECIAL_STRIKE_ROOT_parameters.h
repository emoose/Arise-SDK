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

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.CheckReceiveStrikeSmash
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_CheckReceiveStrikeSmash_Params
{
	bool                                               IsReceuveStrikeSmash;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.GetController
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_GetController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.GetMoveSlot
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_GetMoveSlot_Params
{
	class UCanvasPanelSlot*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.GetWorldPosition
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_GetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.Event OnOpen
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_Event_OnOpen_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.Construct
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_Construct_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.Destruct
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_Destruct_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.EventOnClose
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_EventOnClose_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnUsedSpecialStrike
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_OnUsedSpecialStrike_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.UnBindEvent
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_UnBindEvent_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnBeginSpecialStrike
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_OnBeginSpecialStrike_Params
{
	class UBtlStatusViewModelBase*                     NewTargetUnit;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      FilterPartyId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.BindEvent
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_BindEvent_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnChangePlayerTargetSmashCondition
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_OnChangePlayerTargetSmashCondition_Params
{
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnChangeVisiblePreset
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_OnChangeVisiblePreset_Params
{
	struct FName                                       Preset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.OnChangeTarget
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_OnChangeTarget_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.CancelStrike
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_CancelStrike_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C.ExecuteUbergraph_BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT
struct UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C_ExecuteUbergraph_BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
