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

// BlueprintGeneratedClass BP_WorldWindManager.BP_WorldWindManager_C
// 0x004C (0x0374 - 0x0328)
class ABP_WorldWindManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_AriseGamemode_C*                         AriseGameMode;                                            // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WindControl_C*                           WindController;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            WindParticle;                                             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      WindRate;                                                 // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     CurrentWind;                                              // 0x0368(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorldWindManager.BP_WorldWindManager_C");
		return ptr;
	}


	void GetWindController(class AActor** WindController);
	void AddWindEmitter_Implemantal(class UParticleSystemComponent* Particle, float Rate);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnPreMapChange(const struct FString& NewMapName, const struct FString& OldMapName);
	void AddWindEmitter(class UParticleSystemComponent* Particle, float Rate);
	void SetWindController(class AActor* WindController);
	void ExecuteUbergraph_BP_WorldWindManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
