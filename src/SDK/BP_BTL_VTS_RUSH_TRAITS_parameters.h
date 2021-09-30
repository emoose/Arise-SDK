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

// Function BP_BTL_VTS_RUSH_TRAITS.BP_BTL_VTS_RUSH_TRAITS_C.Received_Begin
struct UBP_BTL_VTS_RUSH_TRAITS_C_Received_Begin_Params
{
};

// Function BP_BTL_VTS_RUSH_TRAITS.BP_BTL_VTS_RUSH_TRAITS_C.OnEndArts
struct UBP_BTL_VTS_RUSH_TRAITS_C_OnEndArts_Params
{
	struct FBtlArtsHandle                              ArtsHandle;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BTL_VTS_RUSH_TRAITS.BP_BTL_VTS_RUSH_TRAITS_C.ExecuteUbergraph_BP_BTL_VTS_RUSH_TRAITS
struct UBP_BTL_VTS_RUSH_TRAITS_C_ExecuteUbergraph_BP_BTL_VTS_RUSH_TRAITS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
