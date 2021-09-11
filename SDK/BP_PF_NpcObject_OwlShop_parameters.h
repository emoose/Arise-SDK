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

// Function BP_PF_NpcObject_OwlShop.BP_PF_NpcObject_OwlShop_C.UserConstructionScript
struct ABP_PF_NpcObject_OwlShop_C_UserConstructionScript_Params
{
};

// Function BP_PF_NpcObject_OwlShop.BP_PF_NpcObject_OwlShop_C.ReceiveBeginPlay
struct ABP_PF_NpcObject_OwlShop_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_NpcObject_OwlShop.BP_PF_NpcObject_OwlShop_C.ReceiveEndPlay
struct ABP_PF_NpcObject_OwlShop_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcObject_OwlShop.BP_PF_NpcObject_OwlShop_C.ExecuteUbergraph_BP_PF_NpcObject_OwlShop
struct ABP_PF_NpcObject_OwlShop_C_ExecuteUbergraph_BP_PF_NpcObject_OwlShop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
