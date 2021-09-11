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

// BlueprintGeneratedClass BP_FastTravelLocator.BP_FastTravelLocator_C
// 0x0059 (0x0411 - 0x03B8)
class ABP_FastTravelLocator_C : public ABP_MapLocatorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class UProceduralMeshComponent*                    ProceduralMesh;                                           // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               InteractionArea;                                          // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     AreaSize;                                                 // 0x03D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	TArray<struct FVector>                             BoxVers;                                                  // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        BoxIndexs;                                                // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    PrimitiveMaterial;                                        // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_AriseGamemode_C*                         GameMode;                                                 // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableArea;                                              // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FastTravelLocator.BP_FastTravelLocator_C");
		return ptr;
	}


	void DrawDebugArea();
	void IsPlayerCollision_(class AActor* Actor, class UPrimitiveComponent* Component, bool* bPlayer);
	void UpdateMeshSize();
	void ResizeArea();
	void UserConstructionScript();
	void BndEvt__InteractionArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FastTravelLocator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
