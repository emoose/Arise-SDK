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

// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnPostCameraInitialize
struct UBP_BMS_EGR_010_YOK_GOL_000_C_OnPostCameraInitialize_Params
{
	class ABtl_Camera*                                 BtlCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnFinalize
struct UBP_BMS_EGR_010_YOK_GOL_000_C_OnFinalize_Params
{
};

// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnPrevMainProduction
struct UBP_BMS_EGR_010_YOK_GOL_000_C_OnPrevMainProduction_Params
{
};

// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnCoreBreak
struct UBP_BMS_EGR_010_YOK_GOL_000_C_OnCoreBreak_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.OnDecideWin
struct UBP_BMS_EGR_010_YOK_GOL_000_C_OnDecideWin_Params
{
};

// Function BP_BMS_EGR_010_YOK_GOL_000.BP_BMS_EGR_010_YOK_GOL_000_C.ExecuteUbergraph_BP_BMS_EGR_010_YOK_GOL_000
struct UBP_BMS_EGR_010_YOK_GOL_000_C_ExecuteUbergraph_BP_BMS_EGR_010_YOK_GOL_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
