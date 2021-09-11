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

// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.BuildRequestByLayout
struct ABP_PF_NPC_CampWeapon_C_BuildRequestByLayout_Params
{
	struct FPFCampWeaponData                           Layout;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.SetLayout
struct ABP_PF_NPC_CampWeapon_C_SetLayout_Params
{
};

// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.BuildRequestByWeaponID
struct ABP_PF_NPC_CampWeapon_C_BuildRequestByWeaponID_Params
{
	struct FString                                     WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.UserConstructionScript
struct ABP_PF_NPC_CampWeapon_C_UserConstructionScript_Params
{
};

// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.ReceiveBeginPlay
struct ABP_PF_NPC_CampWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.ReceiveEndPlay
struct ABP_PF_NPC_CampWeapon_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_CampWeapon.BP_PF_NPC_CampWeapon_C.ExecuteUbergraph_BP_PF_NPC_CampWeapon
struct ABP_PF_NPC_CampWeapon_C_ExecuteUbergraph_BP_PF_NPC_CampWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
