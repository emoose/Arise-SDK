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

// BlueprintGeneratedClass BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C
// 0x0029 (0x0459 - 0x0430)
class UBP_MenuFreeCursorAdsorbArea_C : public UAriseClickableArea
{
public:
	struct FScriptMulticastDelegate                    OnFreeCursorHoveredEvent;                                 // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFreeCursorUnhoveredEvent;                               // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bCanAdsrob;                                               // 0x0450(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	float                                              AdjustRadiusRatio;                                        // 0x0454(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C");
		return ptr;
	}


	void CanAdsorb(bool* Can);
	void IsOnFreeCursorReaction(bool* IsReaction);
	void OnFreeCursorDecided(bool* Success);
	void OnFreeCursorUnhovered(bool* Success);
	void OnFreeCusrorHovered(bool* Success);
	void SetActive(bool bActive);
	void BindFreeCursorUnhoveredEvent(const struct FScriptDelegate& OnFreeCursorUnhovered);
	void BindFreeCursorHoveredEvent(const struct FScriptDelegate& OnFreeCursorHovered);
	void CheckInsideAndLength(class UWidget* Widget, bool* IsInside, float* Length);
	void OnFreeCursorUnhoveredEvent__DelegateSignature();
	void OnFreeCursorHoveredEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
