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

// BlueprintGeneratedClass BP_IdleFreeHighPlaceTrap.BP_IdleFreeHighPlaceTrap_C
// 0x004C (0x0374 - 0x0328)
class ABP_IdleFreeHighPlaceTrap_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TrapSize;                                                 // 0x0340(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	struct FScenarioConditionNamed                     ScenarioCondition;                                        // 0x0350(0x0020) (Edit, BlueprintVisible)
	float                                              AngleTolerance;                                           // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IdleFreeHighPlaceTrap.BP_IdleFreeHighPlaceTrap_C");
		return ptr;
	}


	void IsPlayIdleFreeHighPlace(class AActor* InCharacter, bool* Out);
	void UserConstructionScript();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_IdleFreeHighPlaceTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
