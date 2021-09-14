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

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.CanVisibleTargetCusor
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_CanVisibleTargetCusor_Params
{
	class UBtlStatusViewModelBase*                     NewViewModel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.SafeHp
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_SafeHp_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.GetController
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_GetController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.GetMoveSlot
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_GetMoveSlot_Params
{
	class UCanvasPanelSlot*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.GetWorldPosition
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_GetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.Event OnOpen
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_Event_OnOpen_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.ChangeTarget
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_ChangeTarget_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.Construct
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_Construct_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.Destruct
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_Destruct_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.EventOnClose
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_EventOnClose_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.OnBeginChangeTarget
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_OnBeginChangeTarget_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.OnEndChangeTarget
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_OnEndChangeTarget_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.UnBindEvent
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_UnBindEvent_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.OnChangePlayer
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_OnChangePlayer_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.BindEvent
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_BindEvent_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.UpdateVisiableTargetWidget
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_UpdateVisiableTargetWidget_Params
{
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.OnChangeVisiblePreset
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_OnChangeVisiblePreset_Params
{
	struct FName                                       Preset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q.BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C.ExecuteUbergraph_BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q
struct UBPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_C_ExecuteUbergraph_BPI_BTL_LAYOUT_ENEMY_ROOT_INTEGRATED_Q_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
