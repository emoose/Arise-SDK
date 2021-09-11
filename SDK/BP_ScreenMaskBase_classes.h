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

// BlueprintGeneratedClass BP_ScreenMaskBase.BP_ScreenMaskBase_C
// 0x0028 (0x0350 - 0x0328)
class ABP_ScreenMaskBase_C : public AScreenMaskBase
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASceneCapture2D*                             SceneCaptureCamera;                                       // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWhiteFade;                                               // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FString                                     FadeState;                                                // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScreenMaskBase.BP_ScreenMaskBase_C");
		return ptr;
	}


	void TakeOverFadeState(class AScreenMaskBase* OldMask);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
