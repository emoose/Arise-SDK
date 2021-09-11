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

// BlueprintGeneratedClass BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C
// 0x0080 (0x0178 - 0x00F8)
class UBP_PF_ScriptCameraComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	float                                              Distance;                                                 // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0104(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Height;                                                   // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Horizontal;                                               // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Vertical;                                                 // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAtPoint;                                              // 0x011C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      BaseActor;                                                // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FOV;                                                      // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReverse;                                                 // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              ReverseYaw;                                               // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CameraPresetName;                                         // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptCameraDepthOfField                   DepthOfField;                                             // 0x0150(0x0010) (Edit, BlueprintVisible)
	struct FScriptCameraVignette                       Vignette;                                                 // 0x0160(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FString                                     CameraPresetNameOverride;                                 // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C");
		return ptr;
	}


	void UpdatePostProcess();
	void GetCameraPresetName(struct FString* PresteName);
	void ApplyPostProcess();
	void FindCameraPreset(const struct FString& PresetName, bool* bFound, struct FScriptCameraData* CameraData);
	void ApplyTransform();
	void GetCameraTransform(struct FTransform* NewTransform);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PF_ScriptCameraComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
