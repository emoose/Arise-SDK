#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class VisualFade.VisualFadeStatics
// 0x0000 (0x0028 - 0x0028)
class UVisualFadeStatics : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VisualFade.VisualFadeStatics");
		return ptr;
	}


	void STATIC_SetFadeOpacity(float Opacity, TEnumAsByte<EVisualFadeLayer> Layer);
	void STATIC_SetFadeDebugMode(bool bDebug);
	void STATIC_SetFadeColor(const struct FLinearColor& Color, TEnumAsByte<EVisualFadeLayer> Layer);
	void STATIC_ResetFade(TEnumAsByte<EVisualFadeLayer> Layer);
	bool STATIC_IsFade(TEnumAsByte<EVisualFadeLayer> Layer);
	bool STATIC_IsActive(TEnumAsByte<EVisualFadeLayer> Layer);
	float STATIC_GetFadeOpacity(TEnumAsByte<EVisualFadeLayer> Layer);
	void STATIC_GetFadeColor(TEnumAsByte<EVisualFadeLayer> Layer, struct FLinearColor* oColor);
	void STATIC_FadeOut(float Duration, TEnumAsByte<EVisualFadeLayer> Layer, TEnumAsByte<EVisualFadeCompleteBehavior> CompleteBehavior);
	void STATIC_FadeIn(float Duration, TEnumAsByte<EVisualFadeLayer> Layer, TEnumAsByte<EVisualFadeCompleteBehavior> CompleteBehavior);
	void STATIC_DeactivateFadeLayer(TEnumAsByte<EVisualFadeLayer> Layer);
	void STATIC_ActivateFadeLayer(TEnumAsByte<EVisualFadeLayer> Layer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
