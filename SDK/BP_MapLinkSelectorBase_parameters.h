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

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.GetLinkedLocatorName
struct ABP_MapLinkSelectorBase_C_GetLinkedLocatorName_Params
{
	struct FString                                     LocatorName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.GetLinkedMapName
struct ABP_MapLinkSelectorBase_C_GetLinkedMapName_Params
{
	struct FString                                     MapName;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C._UpdateInteractionActInfo
struct ABP_MapLinkSelectorBase_C__UpdateInteractionActInfo_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.CollectionSelectList
struct ABP_MapLinkSelectorBase_C_CollectionSelectList_Params
{
};

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.OnMapJump
struct ABP_MapLinkSelectorBase_C_OnMapJump_Params
{
};

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.UserConstructionScript
struct ABP_MapLinkSelectorBase_C_UserConstructionScript_Params
{
};

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.Finish DoMapLink (Dialog)
struct ABP_MapLinkSelectorBase_C_Finish_DoMapLink__Dialog__Params
{
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.On Error Msg
struct ABP_MapLinkSelectorBase_C_On_Error_Msg_Params
{
};

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.On Elevator Event
struct ABP_MapLinkSelectorBase_C_On_Elevator_Event_Params
{
};

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.ReceiveBeginPlay
struct ABP_MapLinkSelectorBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_MapLinkSelectorBase.BP_MapLinkSelectorBase_C.ExecuteUbergraph_BP_MapLinkSelectorBase
struct ABP_MapLinkSelectorBase_C_ExecuteUbergraph_BP_MapLinkSelectorBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
