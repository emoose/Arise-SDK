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

// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.@SafeStopAnim
struct UTO14_BPI_GUI_SYS_SCHT2_C_@SafeStopAnim_Params
{
	class UWidgetAnimation*                            Anim;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.@PlayAnim
struct UTO14_BPI_GUI_SYS_SCHT2_C_@PlayAnim_Params
{
	class UWidgetAnimation*                            InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayOpenAnim_
struct UTO14_BPI_GUI_SYS_SCHT2_C_PlayOpenAnim__Params
{
};

// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayCloseAnim
struct UTO14_BPI_GUI_SYS_SCHT2_C_PlayCloseAnim_Params
{
};

// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.Abort
struct UTO14_BPI_GUI_SYS_SCHT2_C_Abort_Params
{
};

// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayMoveAnim
struct UTO14_BPI_GUI_SYS_SCHT2_C_PlayMoveAnim_Params
{
};

// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.PlayMoveCloseAnim
struct UTO14_BPI_GUI_SYS_SCHT2_C_PlayMoveCloseAnim_Params
{
};

// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.Initialize
struct UTO14_BPI_GUI_SYS_SCHT2_C_Initialize_Params
{
	EAriseCharaIconID                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideIconLabel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_SCHT2.TO14_BPI_GUI_SYS_SCHT2_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT2
struct UTO14_BPI_GUI_SYS_SCHT2_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
