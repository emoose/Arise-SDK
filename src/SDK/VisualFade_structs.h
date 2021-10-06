#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum VisualFade.EVisualFadeCompleteBehavior
enum class EVisualFadeCompleteBehavior : uint8_t
{
	Stay                           = 0,
	Deactivate                     = 1,
	EVisualFadeCompleteBehavior_MAX = 2
};


// Enum VisualFade.EVisualFadeLayer
enum class EVisualFadeLayer : uint8_t
{
	Bottom                         = 0,
	Middle                         = 1,
	Top                            = 2,
	EVisualFadeLayer_MAX           = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
