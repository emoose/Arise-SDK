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
	EVisualFadeCompleteBehavior__Stay = 0,
	EVisualFadeCompleteBehavior__Deactivate = 1,
	EVisualFadeCompleteBehavior__EVisualFadeCompleteBehavior_MAX = 2
};


// Enum VisualFade.EVisualFadeLayer
enum class EVisualFadeLayer : uint8_t
{
	EVisualFadeLayer__Bottom       = 0,
	EVisualFadeLayer__Middle       = 1,
	EVisualFadeLayer__Top          = 2,
	EVisualFadeLayer__EVisualFadeLayer_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
