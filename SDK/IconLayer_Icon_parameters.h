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

// Function IconLayer_Icon.IconLayer_Icon_C.CreateIcon
struct UIconLayer_Icon_C_CreateIcon_Params
{
};

// Function IconLayer_Icon.IconLayer_Icon_C.UpdateLadderIcon
struct UIconLayer_Icon_C_UpdateLadderIcon_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon.IconLayer_Icon_C.Refresh
struct UIconLayer_Icon_C_Refresh_Params
{
};

// Function IconLayer_Icon.IconLayer_Icon_C.Update
struct UIconLayer_Icon_C_Update_Params
{
};

// Function IconLayer_Icon.IconLayer_Icon_C.Construct
struct UIconLayer_Icon_C_Construct_Params
{
};

// Function IconLayer_Icon.IconLayer_Icon_C.EventUpdate
struct UIconLayer_Icon_C_EventUpdate_Params
{
};

// Function IconLayer_Icon.IconLayer_Icon_C.EventInitialize
struct UIconLayer_Icon_C_EventInitialize_Params
{
	class UIconLayerData_C*                            LayerData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverOwl
struct UIconLayer_Icon_C_OnDiscoverOwl_Params
{
	struct FString                                     InActorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverBreak
struct UIconLayer_Icon_C_OnDiscoverBreak_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverSearchPoint
struct UIconLayer_Icon_C_OnDiscoverSearchPoint_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverTreasure
struct UIconLayer_Icon_C_OnDiscoverTreasure_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon.IconLayer_Icon_C.OnDiscoverGimmick
struct UIconLayer_Icon_C_OnDiscoverGimmick_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function IconLayer_Icon.IconLayer_Icon_C.CustomEvent_1
struct UIconLayer_Icon_C_CustomEvent_1_Params
{
	struct FString                                     actorId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IconLayer_Icon.IconLayer_Icon_C.ExecuteUbergraph_IconLayer_Icon
struct UIconLayer_Icon_C_ExecuteUbergraph_IconLayer_Icon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
