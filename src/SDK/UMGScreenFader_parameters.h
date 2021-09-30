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

// Function UMGScreenFader.UMGScreenFader_C.MaskInstantly
struct UUMGScreenFader_C_MaskInstantly_Params
{
	bool                                               bMaskOn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWhite;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMGScreenFader.UMGScreenFader_C.SetVisible
struct UUMGScreenFader_C_SetVisible_Params
{
	bool                                               bNewShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMGScreenFader.UMGScreenFader_C.VisibleNowLoading
struct UUMGScreenFader_C_VisibleNowLoading_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
