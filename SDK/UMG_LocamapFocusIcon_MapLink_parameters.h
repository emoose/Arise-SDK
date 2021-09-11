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

// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.BindOnMapLinkEvent
struct UUMG_LocamapFocusIcon_MapLink_C_BindOnMapLinkEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.GetMapLinkInfo
struct UUMG_LocamapFocusIcon_MapLink_C_GetMapLinkInfo_Params
{
	struct FMapLinkInfo                                MapLinkInfo;                                              // (Parm, OutParm)
};

// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.SetMapLinkInfo
struct UUMG_LocamapFocusIcon_MapLink_C_SetMapLinkInfo_Params
{
	struct FMapLinkInfo                                InMapLinkInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.OnDecide
struct UUMG_LocamapFocusIcon_MapLink_C_OnDecide_Params
{
};

// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.ExecuteUbergraph_UMG_LocamapFocusIcon_MapLink
struct UUMG_LocamapFocusIcon_MapLink_C_ExecuteUbergraph_UMG_LocamapFocusIcon_MapLink_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C.OnMapLinkEvent__DelegateSignature
struct UUMG_LocamapFocusIcon_MapLink_C_OnMapLinkEvent__DelegateSignature_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
