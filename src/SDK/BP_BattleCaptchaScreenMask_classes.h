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

// BlueprintGeneratedClass BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C
// 0x0008 (0x0390 - 0x0388)
class ABP_BattleCaptchaScreenMask_C : public ABP_ScreenEncountEffectWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnReleaseCurrent();
	void DoMaskOn();
	void DoCaptureSceneComplete();
	void ExecuteUbergraph_BP_BattleCaptchaScreenMask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
