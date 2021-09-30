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

// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.SetInfo
struct UTO14_BPI_GUI_SYS_PF_INFO_C_SetInfo_Params
{
	struct FPopupInfoData                              InInfoData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<EArisePartyID>                              InPartyIDs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.Tick
struct UTO14_BPI_GUI_SYS_PF_INFO_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.EventShow
struct UTO14_BPI_GUI_SYS_PF_INFO_C_EventShow_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.Construct
struct UTO14_BPI_GUI_SYS_PF_INFO_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.EventHido
struct UTO14_BPI_GUI_SYS_PF_INFO_C_EventHido_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_INFO.TO14_BPI_GUI_SYS_PF_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO
struct UTO14_BPI_GUI_SYS_PF_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
