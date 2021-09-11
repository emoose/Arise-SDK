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

// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.IsAnimationFinish
struct UTO14_BPI_GUI_SYS_INFO_ICON_C_IsAnimationFinish_Params
{
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.End
struct UTO14_BPI_GUI_SYS_INFO_ICON_C_End_Params
{
};

// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.StopTalkAnimation
struct UTO14_BPI_GUI_SYS_INFO_ICON_C_StopTalkAnimation_Params
{
};

// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.Play
struct UTO14_BPI_GUI_SYS_INFO_ICON_C_Play_Params
{
	bool                                               IsOpen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.SetIconType
struct UTO14_BPI_GUI_SYS_INFO_ICON_C_SetIconType_Params
{
	TEnumAsByte<ETO14_InfoIconType>                    IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.OnAnimationFinished
struct UTO14_BPI_GUI_SYS_INFO_ICON_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_INFO_ICON.TO14_BPI_GUI_SYS_INFO_ICON_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_INFO_ICON
struct UTO14_BPI_GUI_SYS_INFO_ICON_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_INFO_ICON_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
