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

// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.NextPage
struct UTO14_BPI_GUI_SYS_MSG_BASE_C_NextPage_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.SetMessage
struct UTO14_BPI_GUI_SYS_MSG_BASE_C_SetMessage_Params
{
	struct FString                                     StringData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.NextMessage
struct UTO14_BPI_GUI_SYS_MSG_BASE_C_NextMessage_Params
{
	struct FString                                     StringData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.OnAnimationFinished
struct UTO14_BPI_GUI_SYS_MSG_BASE_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.BndEvt__AriseClickableArea_42_K2Node_ComponentBoundEvent_36_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_MSG_BASE_C_BndEvt__AriseClickableArea_42_K2Node_ComponentBoundEvent_36_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG_BASE.TO14_BPI_GUI_SYS_MSG_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG_BASE
struct UTO14_BPI_GUI_SYS_MSG_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
