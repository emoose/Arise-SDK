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

// BlueprintGeneratedClass BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C
// 0x0048 (0x0370 - 0x0328)
class ABP_MNU_3DPARTICLE_Actor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DistAdjust;                                               // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WidthAdjust;                                              // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleAdjust;                                              // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class ABP_MenuCamera_C*                            MenuCamera;                                               // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ScreenPos;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0360(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Scale;                                                    // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C");
		return ptr;
	}


	void SetScale(float Scale);
	void SetRotation(const struct FRotator& Rotation);
	void Initialize(float DistAdjust, float WidthAdjust, float ScaleAdjust);
	void SetScreenPos(const struct FVector2D& ScreenPos);
	void UserConstructionScript();
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MNU_3DPARTICLE_Actor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
