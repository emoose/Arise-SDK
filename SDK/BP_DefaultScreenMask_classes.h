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

// BlueprintGeneratedClass BP_DefaultScreenMask.BP_DefaultScreenMask_C
// 0x0021 (0x0371 - 0x0350)
class ABP_DefaultScreenMask_C : public ABP_ScreenMaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	class UUMGScreenFader_C*                           UIFader;                                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventScreenFade;                                          // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bDoingFadeout;                                            // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DefaultScreenMask.BP_DefaultScreenMask_C");
		return ptr;
	}


	void LogDelayFadeStateCheck(const struct FString& InFadeState);
	void LogAnimationRequestCheck(const struct FString& InFadeState);
	void IsUnMasked(bool* bUnMasked);
	void IsMasked(bool* bMasked);
	void ChangeVisibleNowLoading(bool bNewVisible);
	void DoScreenFade(bool FadeWhite, bool FadeOut, bool bInstantry);
	void UserConstructionScript();
	void DoScreenMask(bool MaskOn, bool bInstantly);
	void ReceiveBeginPlay();
	void OnScreenFade(bool FadeWhite, bool FadeOut, bool bInstantry);
	void OnReleaseCurrent();
	void OnAssignCurrent();
	void ExecuteUbergraph_BP_DefaultScreenMask(int EntryPoint);
	void EventScreenFade__DelegateSignature(bool FadeWhite, bool FadeOut, bool bInstantry);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
