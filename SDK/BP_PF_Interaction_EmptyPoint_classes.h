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

// BlueprintGeneratedClass BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C
// 0x0038 (0x0410 - 0x03D8)
class ABP_PF_Interaction_EmptyPoint_C : public APFPlacementInteraction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (Transient, DuplicateTransient)
	class UBillboardComponent*                         Icon;                                                     // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      InteractInfo;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      InteractEvent;                                            // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InteractSymbol;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScenarioChange;                                          // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseScenarioCondition;                                    // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0402(0x0002) MISSED OFFSET
	struct FVector                                     InteractIconOffset;                                       // 0x0404(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_Interaction_EmptyPoint.BP_PF_Interaction_EmptyPoint_C");
		return ptr;
	}


	void SetIconOffset(const struct FVector& NewOffset);
	void UpdateActive();
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Event_OnChangeScenarioCounter(int counter, int Prev);
	void Event_OnChageScenarioFlag(int Flag, bool bValid);
	void ExecuteUbergraph_BP_PF_Interaction_EmptyPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
