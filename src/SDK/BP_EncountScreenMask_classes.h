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

// BlueprintGeneratedClass BP_EncountScreenMask.BP_EncountScreenMask_C
// 0x0028 (0x0378 - 0x0350)
class ABP_EncountScreenMask_C : public ABP_ScreenMaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	class UBtl_EncountEffectWidget*                    EffectWidget;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsUseOutsideCaptcha;                                      // 0x0360(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartAnimFinished;                                      // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EncountScreenMask.BP_EncountScreenMask_C");
		return ptr;
	}


	void GetScreenMaskAnimState(EUBtlEncountEffectWidgetState* NewParam);
	class UMaterialInstanceDynamic* GetDynamicMaterialInstance();
	void GetEncountEffectWidget(class UBtl_EncountEffectWidget** Widget);
	void IsUnMasked(bool* bUnMasked);
	void IsMasked(bool* bMasked);
	void UserConstructionScript();
	void DoCaptureSceneComplete();
	void DoScreenMask(bool MaskOn, bool bInstantly);
	void OnEndAnimFinished_Event();
	void OnAssignCurrent();
	void OnReleaseCurrent();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void SetVisible(bool Visible);
	void BindingStartAnimFinish(const struct FAriseSimpleEventData& Delegate);
	void @OnStartAnimFinished();
	void ExecuteUbergraph_BP_EncountScreenMask(int EntryPoint);
	void OnStartAnimFinished__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
