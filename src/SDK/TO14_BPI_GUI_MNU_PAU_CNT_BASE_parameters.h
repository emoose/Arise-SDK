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

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.GetPlatformType
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_GetPlatformType_Params
{
	EGamePlatform                                      PlatformType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.IsFinish
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_IsFinish_Params
{
	int                                                IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.Initialize
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_Initialize_Params
{
	bool                                               Dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.PadWork
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.GetInitialCategory
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_GetInitialCategory_Params
{
	EInputCategory                                     Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.Init
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_Init_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.PadWorkCore
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_PadWorkCore_Params
{
	class AMenuPadProcess*                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Processed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.ViewClose
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_ViewClose_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.ViewOpen
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_ViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.SetKeyboardConfigText
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_SetKeyboardConfigText_Params
{
	EInputCategory                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*>     TargetList;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.GetSelectedCategory
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_GetSelectedCategory_Params
{
	EInputCategory                                     Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.SetPadConfigText
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_SetPadConfigText_Params
{
	EInputCategory                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<EPadKeyId, class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> TargetMap;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.InitializeWidgetMap
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_InitializeWidgetMap_Params
{
	TArray<class UWidget*>                             WidgetList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<EPadKeyId, class UTO14_BPI_GUI_MNU_PAU_CNT_STR_C*> TargetMap1;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EButtonIconSet                                     IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CNT_BASE.TO14_BPI_GUI_MNU_PAU_CNT_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_BASE
struct UTO14_BPI_GUI_MNU_PAU_CNT_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CNT_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
