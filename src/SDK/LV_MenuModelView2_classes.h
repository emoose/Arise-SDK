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

// BlueprintGeneratedClass LV_MenuModelView2.LV_MenuModelView2_C
// 0x00A0 (0x03D0 - 0x0330)
class ALV_MenuModelView2_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	float                                              Rate;                                                     // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WidgetSize;                                               // 0x033C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    Particle;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bActiveEmitter;                                           // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class UBP_ENV_MenuPostProcessSettings_Default_C*   DefaultPostProcessSettings;                               // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_ENV_MenuPostProcessSettings_Model_C*     ModelPostProcessSettings;                                 // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CurrentBgParticle;                                        // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BGBlackAnimTime;                                          // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowCapture;                                             // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	float                                              BGBlackAnimTimeMax;                                       // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBGBlackAnim;                                             // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBGBlackInAnim;                                           // 0x0385(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0386(0x0002) MISSED OFFSET
	class AStaticMeshActor*                            Cube_2_ExecuteUbergraph_LV_MenuModelView2_RefProperty;    // 0x0388(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor_1_ExecuteUbergraph_LV_MenuModelView2_RefProperty;   // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_MenuCamera_C*                            BP_MenuCamera_2_ExecuteUbergraph_LV_MenuModelView2_RefProperty;// 0x0398(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      MiddleUIActor_ExecuteUbergraph_LV_MenuModelView2_RefProperty;// 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AArisePostProcessVolume*                     PostProcessVolume_0_ExecuteUbergraph_LV_MenuModelView2_RefProperty;// 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            BG_ExecuteUbergraph_LV_MenuModelView2_RefProperty;        // 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_ExecuteUbergraph_LV_MenuModelView2_RefProperty;// 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_MenuCamera_C*                            BP_MenuCamera_2_EdGraph_1_RefProperty;                    // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AArisePostProcessVolume*                     PostProcessVolume_0_EdGraph_5_RefProperty;                // 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LV_MenuModelView2.LV_MenuModelView2_C");
		return ptr;
	}


	void ApplyPostProcessSettings();
	void GetModelPostProcessSettings(struct FPostProcessSettings* Settings);
	void GetDefaultPostProcessSettings(struct FPostProcessSettings* Settings);
	void GetPostProcessSettings(struct FPostProcessSettings* Settings);
	void SpawnEmitter(class UObject* Template);
	void ActivateEmitter(bool Active);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CheckActorEnabled();
	void ShowCaptureBG(bool bShow);
	void ShowHeader3D(bool bShow);
	void ShowTopBG(bool bShow, EMenuTopCharaType ShowCharaType, float BackDarkness);
	void ChangeTopBG(bool bNext, bool OldShow, EMenuTopCharaType OldCharaType, bool NewShow, EMenuTopCharaType NewCharaType, float BackDarkness);
	void ShowTopParticle(bool bShow);
	void OnLevelActivate(bool Active, bool bUsePostProcess);
	void OnMenuCloseStart();
	void ShowLight(bool bShow);
	void OnAnimCaptureBlack(float DeltaTime);
	void ExecuteUbergraph_LV_MenuModelView2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
