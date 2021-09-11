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

// BlueprintGeneratedClass BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C
// 0x0033 (0x035B - 0x0328)
class ABP_PF_InteractEvent_DisableControlBase_C : public APFEventProcessInteraction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNext;                                                    // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunInteract;                                             // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x033A(0x0006) MISSED OFFSET
	class AActor*                                      SendActor;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ReceiveActor;                                             // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      InputCameraRotationProcess;                               // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReceiveInputCameraRotation;                              // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayerFreeLockKeep;                                      // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayInteractKeep;                                        // 0x035A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractEvent_DisableControlBase.BP_PF_InteractEvent_DisableControlBase_C");
		return ptr;
	}


	void EndEvent();
	void BeginEvent();
	void FinishInteract();
	void FinishPostInteract();
	void FinishPreInteract(bool bRunInteraction);
	void UserConstructionScript();
	void Post_Interact();
	void Interact();
	void Pre_Interact();
	void K2_Execute(class AActor* Sender, class AActor* Receiver);
	void ExecuteUbergraph_BP_PF_InteractEvent_DisableControlBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
