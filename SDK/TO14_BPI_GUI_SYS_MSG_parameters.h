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

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetSelectionWithFlags
struct UTO14_BPI_GUI_SYS_MSG_C_SetSelectionWithFlags_Params
{
	TArray<struct FModifiedText>                       SelectList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusLastByCancel;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       IsRead;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.MouseRelease
struct UTO14_BPI_GUI_SYS_MSG_C_MouseRelease_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.MouseGet
struct UTO14_BPI_GUI_SYS_MSG_C_MouseGet_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OnMouseClicked
struct UTO14_BPI_GUI_SYS_MSG_C_OnMouseClicked_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.GetLastResult
struct UTO14_BPI_GUI_SYS_MSG_C_GetLastResult_Params
{
	int                                                ResultIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OnSelectionClose
struct UTO14_BPI_GUI_SYS_MSG_C_OnSelectionClose_Params
{
	int                                                Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Close
struct UTO14_BPI_GUI_SYS_MSG_C_Close_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Open_3
struct UTO14_BPI_GUI_SYS_MSG_C_Open_3_Params
{
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.IsMessageEnd
struct UTO14_BPI_GUI_SYS_MSG_C_IsMessageEnd_Params
{
	bool                                               IsEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetMessage
struct UTO14_BPI_GUI_SYS_MSG_C_SetMessage_Params
{
	struct FModifiedText                               SpeakerName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetSelection
struct UTO14_BPI_GUI_SYS_MSG_C_SetSelection_Params
{
	TArray<struct FModifiedText>                       SelectList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusLastByCancel;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.AddMessageList
struct UTO14_BPI_GUI_SYS_MSG_C_AddMessageList_Params
{
	TArray<struct FDictionaryText>                     SpeakerName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FDictionaryText>                     Messages;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.PadFinish
struct UTO14_BPI_GUI_SYS_MSG_C_PadFinish_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.PadInitFunc
struct UTO14_BPI_GUI_SYS_MSG_C_PadInitFunc_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.MouseWork
struct UTO14_BPI_GUI_SYS_MSG_C_MouseWork_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMouseInput;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.NextPage
struct UTO14_BPI_GUI_SYS_MSG_C_NextPage_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.PageCheck
struct UTO14_BPI_GUI_SYS_MSG_C_PageCheck_Params
{
	struct FText                                       BaseTextData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.IsClose
struct UTO14_BPI_GUI_SYS_MSG_C_IsClose_Params
{
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Open
struct UTO14_BPI_GUI_SYS_MSG_C_Open_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Tick
struct UTO14_BPI_GUI_SYS_MSG_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OnAnimationFinished
struct UTO14_BPI_GUI_SYS_MSG_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.UpdateTick
struct UTO14_BPI_GUI_SYS_MSG_C_UpdateTick_Params
{
	float                                              TickData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.SetupDelegate
struct UTO14_BPI_GUI_SYS_MSG_C_SetupDelegate_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.OpenStarte
struct UTO14_BPI_GUI_SYS_MSG_C_OpenStarte_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.CloseEnd
struct UTO14_BPI_GUI_SYS_MSG_C_CloseEnd_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.Construct
struct UTO14_BPI_GUI_SYS_MSG_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_MSG.TO14_BPI_GUI_SYS_MSG_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG
struct UTO14_BPI_GUI_SYS_MSG_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_MSG_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
