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

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.SetAnim
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_SetAnim_Params
{
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.Refresh
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.UpdateDisappearState
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_UpdateDisappearState_Params
{
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.DisplayChange
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_DisplayChange_Params
{
	unsigned char                                      InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.SetMistDissolve
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_SetMistDissolve_Params
{
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.SetColor
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_SetColor_Params
{
	struct FLinearColor                                InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               InIsBig;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.SetAlpha
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_SetAlpha_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.Construct
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.Tick
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.SetDistance
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_SetDistance_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.SetOut
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_SetOut_Params
{
	bool                                               IsOutLeft;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutTop;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutRight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutBottom;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.SetMistColor
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_SetMistColor_Params
{
	struct FLinearColor                                InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               InIsBig;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.Initialize
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.SetIsShow
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_SetIsShow_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.DisappearState
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_DisappearState_Params
{
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.RefreshEvent
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_RefreshEvent_Params
{
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.OnAnimationFinished
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.ShowAnimeEnd
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_ShowAnimeEnd_Params
{
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.VanishAnimeEnd
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_VanishAnimeEnd_Params
{
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.OnDisappear
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_OnDisappear_Params
{
};

// Function TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN.TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN
struct UTO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_SYMBOL_ENEMY_ICN_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
