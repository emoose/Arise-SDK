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

// BlueprintGeneratedClass BP_CaptureScreenMask.BP_CaptureScreenMask_C
// 0x004C (0x039C - 0x0350)
class ABP_CaptureScreenMask_C : public ABP_ScreenMaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	class UUMGCaptrueScreenFader_C*                    UIFader;                                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FString                                     FadeState_1;                                              // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bWhiteFade_1;                                             // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventScreenFade;                                          // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     NextState;                                                // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DelayTime;                                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CaptureScreenMask.BP_CaptureScreenMask_C");
		return ptr;
	}


	void IsUnMasked(bool* bUnMasked);
	void IsMasked(bool* bMasked);
	void DoScreenFade(bool FadeWhite, bool FadeOut);
	void UserConstructionScript();
	void DoScreenMask(bool MaskOn, bool bInstantly);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnScreenFade(bool FadeOut, bool ZeroTime);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_CaptureScreenMask(int EntryPoint);
	void EventScreenFade__DelegateSignature(bool FadeOut, bool ZeroTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
