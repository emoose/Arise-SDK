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

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.IsCanDecide
struct UUMG_LocamapFocusIcon_C_IsCanDecide_Params
{
	bool                                               UnuseFocus;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.SetCanDecide
struct UUMG_LocamapFocusIcon_C_SetCanDecide_Params
{
	bool                                               bCanDecide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.SetUnuseFocus
struct UUMG_LocamapFocusIcon_C_SetUnuseFocus_Params
{
	bool                                               bUnuseFocus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.IsUnuseFocus
struct UUMG_LocamapFocusIcon_C_IsUnuseFocus_Params
{
	bool                                               UnuseFocus;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.GetAdsorbArea
struct UUMG_LocamapFocusIcon_C_GetAdsorbArea_Params
{
	class UBP_MenuFreeCursorAdsorbArea_C*              AdsorbArea;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.GetClickArea
struct UUMG_LocamapFocusIcon_C_GetClickArea_Params
{
	class UBP_MenuFreeCursorClickArea_C*               ClickArea;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.Initialize
struct UUMG_LocamapFocusIcon_C_Initialize_Params
{
	struct FLocatorInfo                                LocatorInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.Construct
struct UUMG_LocamapFocusIcon_C_Construct_Params
{
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.OnDecide
struct UUMG_LocamapFocusIcon_C_OnDecide_Params
{
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.OnDeselect
struct UUMG_LocamapFocusIcon_C_OnDeselect_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.SetIconIndex
struct UUMG_LocamapFocusIcon_C_SetIconIndex_Params
{
	unsigned char                                      Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.OnSelect
struct UUMG_LocamapFocusIcon_C_OnSelect_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_LocamapFocusIcon.UMG_LocamapFocusIcon_C.ExecuteUbergraph_UMG_LocamapFocusIcon
struct UUMG_LocamapFocusIcon_C_ExecuteUbergraph_UMG_LocamapFocusIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
