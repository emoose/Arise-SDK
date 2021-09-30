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

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.OnTSSErrorEvent_New
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_OnTSSErrorEvent_New_Params
{
	ENewsInfoPurpose                                   purpose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ErrorCode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.OnStringLoadComplete_New
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_OnStringLoadComplete_New_Params
{
	ENewsInfoPurpose                                   purpose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InStr;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.UpdateNewIcon
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_UpdateNewIcon_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.GetPlatformSlotID
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_GetPlatformSlotID_Params
{
	int                                                OutSlotID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.RequestNewIcon
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_RequestNewIcon_Params
{
	bool                                               OutIsRequest;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.OnStringLoadCompleteEvent
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_OnStringLoadCompleteEvent_Params
{
	int                                                InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InStr;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.SetBtnStopAnim
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_SetBtnStopAnim_Params
{
	bool                                               InIsStop;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.IsClosePlayAnime
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_IsClosePlayAnime_Params
{
	bool                                               OutIsPlay;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.IsOpenPlayAnime
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_IsOpenPlayAnime_Params
{
	bool                                               OutIsPlay;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.ClosePlayAnime
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_ClosePlayAnime_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.OpenPlayAnime
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_OpenPlayAnime_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.RefreshSelectBtn
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_RefreshSelectBtn_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.SetMouseSelectChange
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_SetMouseSelectChange_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.GetBtnIndex
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_GetBtnIndex_Params
{
	int                                                OutBtnIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.SetBtnAnim
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_SetBtnAnim_Params
{
	bool                                               InIsSelect;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_TTL_Btn_C*                 InBtn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.GetBtnWidget
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_GetBtnWidget_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_TTL_Btn_C*                 OutBtn;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.UpdatePadBtn
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_UpdatePadBtn_Params
{
	bool                                               InIsInputPad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.Initialize
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_Initialize_Params
{
	class AMenuPadProcess*                             InMenuPad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.Setup
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_Setup_Params
{
	TArray<TEnumAsByte<ETTL_ItemTypeEnum>>             InItemTypes;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.Construct
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.Tick
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.Destruct
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_Destruct_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_Btn_LIST.TO14_BPI_GUI_SYS_TTL_Btn_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_Btn_LIST
struct UTO14_BPI_GUI_SYS_TTL_Btn_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_Btn_LIST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
