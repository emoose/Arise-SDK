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

// BlueprintGeneratedClass BP_LongChatMask.BP_LongChatMask_C
// 0x0044 (0x0394 - 0x0350)
class ABP_LongChatMask_C : public ABP_ScreenMaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	class UUMGLChatBG_C*                               UIFader;                                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventScreenFade;                                          // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     NextState;                                                // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DelayTime;                                                // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                DelayCounter;                                             // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LongChatMask.BP_LongChatMask_C");
		return ptr;
	}


	void CreateUI();
	void DoMasked();
	void ChangeVisibleDebug(bool bVisible);
	void IsUnMasked(bool* bUnMasked);
	void IsMasked(bool* bMasked);
	void DoScreenFade(bool FadeWhite, bool FadeOut);
	void UserConstructionScript();
	void DoScreenMask(bool MaskOn, bool bInstantly);
	void ReceiveBeginPlay();
	void OnScreenFade(bool FadeOut);
	void ReceiveTick(float DeltaSeconds);
	void DoCaptureScene(const struct FTransform& CameraTransform, class UCameraComponent* BaseCamera);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_LongChatMask(int EntryPoint);
	void EventScreenFade__DelegateSignature(bool FadeOut);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
