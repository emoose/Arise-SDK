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

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnTSSErrorEvent_New
struct UTO14_BPI_GUI_SYS_TTL_News_C_OnTSSErrorEvent_New_Params
{
	ENewsInfoPurpose                                   purpose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ErrorCode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnStringLoadCompleteEvent_New
struct UTO14_BPI_GUI_SYS_TTL_News_C_OnStringLoadCompleteEvent_New_Params
{
	ENewsInfoPurpose                                   purpose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InStr;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.HideNews
struct UTO14_BPI_GUI_SYS_TTL_News_C_HideNews_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnTSSErrorEvent
struct UTO14_BPI_GUI_SYS_TTL_News_C_OnTSSErrorEvent_Params
{
	int                                                slotno;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ErrorCode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.GetPlatformSlotID
struct UTO14_BPI_GUI_SYS_TTL_News_C_GetPlatformSlotID_Params
{
	int                                                OutSlotID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OnStringLoadCompleteEvent
struct UTO14_BPI_GUI_SYS_TTL_News_C_OnStringLoadCompleteEvent_Params
{
	int                                                InSlotID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InStr;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.RequestNews
struct UTO14_BPI_GUI_SYS_TTL_News_C_RequestNews_Params
{
	bool                                               OutIsRequest;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.SetText
struct UTO14_BPI_GUI_SYS_TTL_News_C_SetText_Params
{
	struct FString                                     InStr;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.IsClosePlayAnime
struct UTO14_BPI_GUI_SYS_TTL_News_C_IsClosePlayAnime_Params
{
	bool                                               OutIsPlay;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.IsOpenPlayAnime
struct UTO14_BPI_GUI_SYS_TTL_News_C_IsOpenPlayAnime_Params
{
	bool                                               OutIsPlay;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.ClosePlayAnime
struct UTO14_BPI_GUI_SYS_TTL_News_C_ClosePlayAnime_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.OpenPlayAnime
struct UTO14_BPI_GUI_SYS_TTL_News_C_OpenPlayAnime_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.Construct
struct UTO14_BPI_GUI_SYS_TTL_News_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.Destruct
struct UTO14_BPI_GUI_SYS_TTL_News_C_Destruct_Params
{
};

// Function TO14_BPI_GUI_SYS_TTL_News.TO14_BPI_GUI_SYS_TTL_News_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_News
struct UTO14_BPI_GUI_SYS_TTL_News_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_TTL_News_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
