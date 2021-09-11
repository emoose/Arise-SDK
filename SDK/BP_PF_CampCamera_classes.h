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

// BlueprintGeneratedClass BP_PF_CampCamera.BP_PF_CampCamera_C
// 0x00D0 (0x1100 - 0x1030)
class ABP_PF_CampCamera_C : public ACameraActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1030(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x1038(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      BaseActor;                                                // 0x1040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CameraPresetName;                                         // 0x1048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptCameraDepthOfField                   DepthOfField;                                             // 0x1058(0x0010) (Edit, BlueprintVisible)
	float                                              DepthOfField_FocalDistance;                               // 0x1068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DepthOfField_FocalRegion;                                 // 0x106C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DepthOfField_NearTransitionRange;                         // 0x1070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DepthOfField_FarTransitionRange;                          // 0x1074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptCameraDepthOfField                   EditDepthOfField;                                         // 0x1078(0x0010) (Edit, BlueprintVisible)
	struct FScriptCameraVignette                       Vignette;                                                 // 0x1088(0x0004) (Edit, BlueprintVisible)
	float                                              Vignette_Intensity;                                       // 0x108C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptCameraVignette                       EditVignette;                                             // 0x1090(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1094(0x0004) MISSED OFFSET
	TArray<struct FString>                             CameraPresetTable;                                        // 0x1098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              CameraChangeTime;                                         // 0x10A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraChangeDeltaTime;                                    // 0x10AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CameraPresetIndex;                                        // 0x10B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoCameraChange;                                        // 0x10B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x10B5(0x0003) MISSED OFFSET
	float                                              DistanceFog_StartDistance;                                // 0x10B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFog_FadeInterval;                                 // 0x10BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DistanceFog_Color;                                        // 0x10C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFog_Opacity;                                      // 0x10CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptCameraDistanceFog                    EditDistanceFog;                                          // 0x10D0(0x0018) (Edit, BlueprintVisible)
	struct FScriptCameraDistanceFog                    DistanceFog;                                              // 0x10E8(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_CampCamera.BP_PF_CampCamera_C");
		return ptr;
	}


	void ApplyPostProcessOverride();
	void SetCameraPresetNo(int CameraPresetIndex);
	void StepCameraPreset(int Step);
	void ActivateCamera(bool bActive);
	void UpdateCamera(float DeltaSeconds);
	void SetLayout(class AActor* InBaseActor, const struct FPFCampLayoutData& Layout);
	void ApplyPostProcess();
	void ¯0ê0Ã0×0Ü0ü0É0³0Ô0ü0();
	void «0á0é0RŠ0ÿfH0();
	void ×0ê0»0Ã0È0iÜ_();
	void ¯0ê0Ã0×0Ü0ü0É0k0³0Ô0ü0();
	void ApplyPreset();
	void FindCameraPreset(const struct FString& PresetName, bool* bFound, struct FScriptCameraData* CameraData);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PF_CampCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
