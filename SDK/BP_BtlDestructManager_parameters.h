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

// Function BP_BtlDestructManager.BP_BtlDestructManager_C.UserConstructionScript
struct ABP_BtlDestructManager_C_UserConstructionScript_Params
{
};

// Function BP_BtlDestructManager.BP_BtlDestructManager_C.OnDispersionDestruct
struct ABP_BtlDestructManager_C_OnDispersionDestruct_Params
{
	struct FBtlDestructCache                           Cache;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BtlDestructManager.BP_BtlDestructManager_C.ExecuteUbergraph_BP_BtlDestructManager
struct ABP_BtlDestructManager_C_ExecuteUbergraph_BP_BtlDestructManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
