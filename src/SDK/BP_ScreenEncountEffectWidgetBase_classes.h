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

// BlueprintGeneratedClass BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C
// 0x0038 (0x0388 - 0x0350)
class ABP_ScreenEncountEffectWidgetBase_C : public ABP_ScreenMaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	class UBtl_EncountEffectWidget*                    EffectWidget;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      CrateWidget;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAriseUIOrder                                      EffectWidgetZOrder;                                       // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	int                                                EffectWidgetZOrderOffset;                                 // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReleaseAutoDestory;                                       // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartAnimFinished;                                      // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C");
		return ptr;
	}


	void GetScreenMaskAnimState(EUBtlEncountEffectWidgetState* NewParam);
	void SetCreateWidget(class UClass* CrateWidget);
	void PlayStartAnim();
	void SafeReleaseWidget();
	void DoMaskOn();
	void GetEncountEffectAnimState(EUBtlEncountEffectWidgetState* AnimState);
	void GetEncountEffectWidget(class UBtl_EncountEffectWidget** Widget);
	void IsUnMasked(bool* bUnMasked);
	void IsMasked(bool* bMasked);
	void UserConstructionScript();
	void DoScreenMask(bool MaskOn, bool bInstantly);
	void OnReleaseCurrent();
	void OnAssignCurrent();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnEndAnimFinished_Event();
	void OnStartAnimFinish_Event();
	void BindingStartAnimFinish(const struct FAriseSimpleEventData& Delegate);
	void ExecuteUbergraph_BP_ScreenEncountEffectWidgetBase(int EntryPoint);
	void OnStartAnimFinished__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
