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

// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ChangeObjectVisibilityBtWorldTime
struct ATO14_BP_DRT_DayNight_C_ChangeObjectVisibilityBtWorldTime_Params
{
};

// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.NewFunction_1
struct ATO14_BP_DRT_DayNight_C_NewFunction_1_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.OnRep_NewVar_1
struct ATO14_BP_DRT_DayNight_C_OnRep_NewVar_1_Params
{
};

// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.UserConstructionScript
struct ATO14_BP_DRT_DayNight_C_UserConstructionScript_Params
{
};

// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ReceiveBeginPlay
struct ATO14_BP_DRT_DayNight_C_ReceiveBeginPlay_Params
{
};

// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.OnChangeWorldTime
struct ATO14_BP_DRT_DayNight_C_OnChangeWorldTime_Params
{
	float                                              newHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ReceiveEndPlay
struct ATO14_BP_DRT_DayNight_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_DRT_DayNight.TO14_BP_DRT_DayNight_C.ExecuteUbergraph_TO14_BP_DRT_DayNight
struct ATO14_BP_DRT_DayNight_C_ExecuteUbergraph_TO14_BP_DRT_DayNight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
