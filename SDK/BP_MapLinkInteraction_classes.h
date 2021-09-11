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

// BlueprintGeneratedClass BP_MapLinkInteraction.BP_MapLinkInteraction_C
// 0x0012 (0x0422 - 0x0410)
class ABP_MapLinkInteraction_C : public ABP_PF_Interaction_EmptyPoint_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	class ABP_MapLinkBase_C*                           MapLinkObject;                                            // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishMapJump;                                           // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishInteract;                                          // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapLinkInteraction.BP_MapLinkInteraction_C");
		return ptr;
	}


	void FinishMapJump();
	void UserConstructionScript();
	void Do_Interact();
	void ExecuteUbergraph_BP_MapLinkInteraction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
