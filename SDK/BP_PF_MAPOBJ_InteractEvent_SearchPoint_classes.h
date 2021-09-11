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

// BlueprintGeneratedClass BP_PF_MAPOBJ_InteractEvent_SearchPoint.BP_PF_MAPOBJ_InteractEvent_SearchPoint_C
// 0x0018 (0x0373 - 0x035B)
class ABP_PF_MAPOBJ_InteractEvent_SearchPoint_C : public ABP_PF_MAPOBJ_InteractEvent_Base_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x035B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	class ABP_PF_MAPOBJ_SearchPoint_C*                 SearchPointActor;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishAction;                                            // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishGetItem;                                           // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGetItemShowDialog;                                       // 0x0372(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_InteractEvent_SearchPoint.BP_PF_MAPOBJ_InteractEvent_SearchPoint_C");
		return ptr;
	}


	void PlayGatheringSound();
	void FinishPostAction();
	void FinishPreAction();
	void UserConstructionScript();
	void Interact();
	void Pre_Action();
	void Post_Action();
	void K2_Execute(class AActor* Sender, class AActor* Receiver);
	void ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_SearchPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
