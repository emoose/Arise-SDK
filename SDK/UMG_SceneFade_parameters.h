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

// Function UMG_SceneFade.UMG_SceneFade_C.SetAlpha
struct UUMG_SceneFade_C_SetAlpha_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_SceneFade.UMG_SceneFade_C.SetColor
struct UUMG_SceneFade_C_SetColor_Params
{
	struct FString                                     ColorName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
