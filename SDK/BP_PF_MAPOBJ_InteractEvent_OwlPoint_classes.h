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

// BlueprintGeneratedClass BP_PF_MAPOBJ_InteractEvent_OwlPoint.BP_PF_MAPOBJ_InteractEvent_OwlPoint_C
// 0x000C (0x0444 - 0x0438)
class ABP_PF_MAPOBJ_InteractEvent_OwlPoint_C : public ABP_PF_NPC_InteractEvent_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	float                                              TutorialDuration;                                         // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_InteractEvent_OwlPoint.BP_PF_MAPOBJ_InteractEvent_OwlPoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void MainInteract();
	void ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_OwlPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
