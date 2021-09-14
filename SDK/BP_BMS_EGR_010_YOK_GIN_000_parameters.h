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

// Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.AdventPlayback
struct UBP_BMS_EGR_010_YOK_GIN_000_C_AdventPlayback_Params
{
	class ULevelSequence*                              AdventCutName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MonsterID_First;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MonsterID_Second;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.OnPrevMain
struct UBP_BMS_EGR_010_YOK_GIN_000_C_OnPrevMain_Params
{
};

// Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.Received_OnFlexibleNotify
struct UBP_BMS_EGR_010_YOK_GIN_000_C_Received_OnFlexibleNotify_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     UserObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.OnPostCameraInitialize
struct UBP_BMS_EGR_010_YOK_GIN_000_C_OnPostCameraInitialize_Params
{
	class ABtl_Camera*                                 BtlCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_EGR_010_YOK_GIN_000.BP_BMS_EGR_010_YOK_GIN_000_C.ExecuteUbergraph_BP_BMS_EGR_010_YOK_GIN_000
struct UBP_BMS_EGR_010_YOK_GIN_000_C_ExecuteUbergraph_BP_BMS_EGR_010_YOK_GIN_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
