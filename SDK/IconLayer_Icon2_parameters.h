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

// Function IconLayer_Icon2.IconLayer_Icon2_C.UpdateLadderIcon
struct UIconLayer_Icon2_C_UpdateLadderIcon_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.Refresh
struct UIconLayer_Icon2_C_Refresh_Params
{
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.Update
struct UIconLayer_Icon2_C_Update_Params
{
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.EventInitialize
struct UIconLayer_Icon2_C_EventInitialize_Params
{
	class UIconLayerData_C*                            LayerData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverOwl
struct UIconLayer_Icon2_C_OnDiscoverOwl_Params
{
	struct FString                                     InActorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverBreak
struct UIconLayer_Icon2_C_OnDiscoverBreak_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverSearchPoint
struct UIconLayer_Icon2_C_OnDiscoverSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverTreasure
struct UIconLayer_Icon2_C_OnDiscoverTreasure_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.OnDiscoverGimmick
struct UIconLayer_Icon2_C_OnDiscoverGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.EventUpdate
struct UIconLayer_Icon2_C_EventUpdate_Params
{
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.Construct
struct UIconLayer_Icon2_C_Construct_Params
{
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.CustomEvent_1
struct UIconLayer_Icon2_C_CustomEvent_1_Params
{
	struct FString                                     actorId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IconLayer_Icon2.IconLayer_Icon2_C.ExecuteUbergraph_IconLayer_Icon2
struct UIconLayer_Icon2_C_ExecuteUbergraph_IconLayer_Icon2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
