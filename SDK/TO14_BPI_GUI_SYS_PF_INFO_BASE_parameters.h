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

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsNotInfoParts
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_IsNotInfoParts_Params
{
	bool                                               OutIsNotInfoParts;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.AddPopupCheck
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_AddPopupCheck_Params
{
	bool                                               OutIsAdd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsRPCataInfo
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_IsRPCataInfo_Params
{
	bool                                               OutIsRPCata;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsShowOptionCheck
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_IsShowOptionCheck_Params
{
	EOption                                            InOption;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsShow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.GetGameState
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_GetGameState_Params
{
	bool                                               OutRislt;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAriseGameStateController*                   OutGameState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.GetSkillPoint
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_GetSkillPoint_Params
{
	struct FBtlAliasData                               InAliasData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                InSkillID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutPoint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.RPCharaCheck
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_RPCharaCheck_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.SetRPCharaData
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_SetRPCharaData_Params
{
	struct FPopupInfoData                              InPopupInfoData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<EArisePartyID>                              InPartyIDs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsInfoShowMax
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_IsInfoShowMax_Params
{
	bool                                               IsShowMax;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.getIsShow
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_getIsShow_Params
{
	bool                                               OutIsShow;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.GetWaitTime
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_GetWaitTime_Params
{
	float                                              OutWaitTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Refresh
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.MovePos
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_MovePos_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.IsWateTime
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_IsWateTime_Params
{
	float                                              InWaitTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutNewWaitTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsWait;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.NextState
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_NextState_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.SetState
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_SetState_Params
{
	int                                                InState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.AddInfo
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_AddInfo_Params
{
	struct FPopupInfoData                              InInfoData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               OutIsAdd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Update
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_Update_Params
{
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Construct
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.Tick
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.AddRisePoint
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_AddRisePoint_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_INFO_BASE.TO14_BPI_GUI_SYS_PF_INFO_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO_BASE
struct UTO14_BPI_GUI_SYS_PF_INFO_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_INFO_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
