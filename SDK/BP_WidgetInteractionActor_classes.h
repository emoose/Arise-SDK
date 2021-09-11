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

// BlueprintGeneratedClass BP_WidgetInteractionActor.BP_WidgetInteractionActor_C
// 0x001A (0x0342 - 0x0328)
class ABP_WidgetInteractionActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UAriseWidgetInteractionComponent*            AriseWidgetInteraction;                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInteractionEnabled;                                      // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPressed;                                                 // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WidgetInteractionActor.BP_WidgetInteractionActor_C");
		return ptr;
	}


	void UpdateInteractionEnabled();
	void UserConstructionScript();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WidgetInteractionActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
