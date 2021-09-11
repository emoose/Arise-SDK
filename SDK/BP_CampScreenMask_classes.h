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

// BlueprintGeneratedClass BP_CampScreenMask.BP_CampScreenMask_C
// 0x0060 (0x03B0 - 0x0350)
class ABP_CampScreenMask_C : public ABP_ScreenMaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	struct FString                                     FadeState_1;                                              // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bWhiteFade_1;                                             // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventScreenFade;                                          // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bDoingFadeout;                                            // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	struct FName                                       FadeType;                                                 // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUMGCampScreenFader_C*                       Fader;                                                    // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FString                                     FadeSpeedType;                                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CampScreenMask.BP_CampScreenMask_C");
		return ptr;
	}


	void SetFadeSpeedType(const struct FString& Type);
	void BlackOut();
	void IsUnMasked(bool* bUnMasked);
	void IsMasked(bool* bMasked);
	void ChangeVisibleNowLoading(bool bNewVisible);
	void DoScreenFade(bool FadeWhite, bool FadeOut);
	void UserConstructionScript();
	void DoScreenMask(bool MaskOn, bool bInstantly);
	void ReceiveBeginPlay();
	void OnScreenFade(bool FadeWhite, bool FadeOut);
	void ReceiveTick(float DeltaSeconds);
	void OnReleaseCurrent();
	void ExecuteUbergraph_BP_CampScreenMask(int EntryPoint);
	void EventScreenFade__DelegateSignature(bool FadeWhite, bool FadeOut);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
