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

// BlueprintGeneratedClass BP_PF_InteractEvent_MapLink.BP_PF_InteractEvent_MapLink_C
// 0x0015 (0x0370 - 0x035B)
class ABP_PF_InteractEvent_MapLink_C : public ABP_PF_InteractEvent_DisableControlBase_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x035B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	class ABP_MapLinkInteraction_C*                    InteractActor;                                            // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_InteractEvent_MapLink.BP_PF_InteractEvent_MapLink_C");
		return ptr;
	}


	void UserConstructionScript();
	void Interact();
	void ExecuteUbergraph_BP_PF_InteractEvent_MapLink(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
