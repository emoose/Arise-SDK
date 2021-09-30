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

// Function BP_MessageWindow.BP_MessageWindow_C.AddSelectionWithFlags
struct UBP_MessageWindow_C_AddSelectionWithFlags_Params
{
	TArray<struct FModifiedText>                       SelectList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusLastByCancel;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       IsRead;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MessageWindow.BP_MessageWindow_C.IsCloseMessageWindow
struct UBP_MessageWindow_C_IsCloseMessageWindow_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MessageWindow.BP_MessageWindow_C.IsMessageEnd
struct UBP_MessageWindow_C_IsMessageEnd_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MessageWindow.BP_MessageWindow_C.CloseMessageWindow
struct UBP_MessageWindow_C_CloseMessageWindow_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MessageWindow.BP_MessageWindow_C.AddSelection
struct UBP_MessageWindow_C_AddSelection_Params
{
	TArray<struct FModifiedText>                       SelectList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusLastByCancel;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MessageWindow.BP_MessageWindow_C.AddMessage
struct UBP_MessageWindow_C_AddMessage_Params
{
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               SpeakerName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MessageWindow.BP_MessageWindow_C.GetWidget
struct UBP_MessageWindow_C_GetWidget_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_MSG_C*                     NewParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MessageWindow.BP_MessageWindow_C.OpenMessageWindow
struct UBP_MessageWindow_C_OpenMessageWindow_Params
{
	struct FModifiedText                               FirstMessage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               FirstSpeakerName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
