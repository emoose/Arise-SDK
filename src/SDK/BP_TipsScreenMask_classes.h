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

// BlueprintGeneratedClass BP_TipsScreenMask.BP_TipsScreenMask_C
// 0x0023 (0x0373 - 0x0350)
class ABP_TipsScreenMask_C : public ABP_ScreenMaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	class UTO14_BPI_GUI_SYS_LOADING_001_C*             UIFader;                                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventScreenFade;                                          // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bDoingFadeout;                                            // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbortFadeout;                                            // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbortFadein;                                             // 0x0372(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TipsScreenMask.BP_TipsScreenMask_C");
		return ptr;
	}


	void IsShowTips(bool* bShow);
	void CreateUI();
	void IsUnMasked(bool* bUnMasked);
	void IsMasked(bool* bMasked);
	void ChangeVisibleNowLoading(bool bNewVisible);
	void DoScreenFade(bool FadeWhite, bool FadeOut, bool Instantry);
	void UserConstructionScript();
	void DoScreenMask(bool MaskOn, bool bInstantly);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnScreenFade(bool FadeWhite, bool FadeOut, bool Instantry);
	void TakeOverFadeState(class AScreenMaskBase* OldMask);
	void OnReleaseCurrent();
	void OnAssignCurrent();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_TipsScreenMask(int EntryPoint);
	void EventScreenFade__DelegateSignature(bool FadeWhite, bool FadeOut, bool Instantry);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
