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

// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.Open
struct UTO14_BPI_GUI_ICN_MNU_HEADER_C_Open_Params
{
};

// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.OpenWithFrame
struct UTO14_BPI_GUI_ICN_MNU_HEADER_C_OpenWithFrame_Params
{
};

// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.CloseWithFrame
struct UTO14_BPI_GUI_ICN_MNU_HEADER_C_CloseWithFrame_Params
{
};

// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.Close
struct UTO14_BPI_GUI_ICN_MNU_HEADER_C_Close_Params
{
};

// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.CloseImmidiate
struct UTO14_BPI_GUI_ICN_MNU_HEADER_C_CloseImmidiate_Params
{
};

// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.SetIcon
struct UTO14_BPI_GUI_ICN_MNU_HEADER_C_SetIcon_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.SetIconWithAnimation
struct UTO14_BPI_GUI_ICN_MNU_HEADER_C_SetIconWithAnimation_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.SetHeaderNameTopMenu
struct UTO14_BPI_GUI_ICN_MNU_HEADER_C_SetHeaderNameTopMenu_Params
{
	struct FString                                     InMenuID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FDictionaryText                             InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU_HEADER
struct UTO14_BPI_GUI_ICN_MNU_HEADER_C_ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU_HEADER_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
